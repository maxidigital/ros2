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
        uint8_t* _tmp_1 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_1;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->print() << "|\033[38;5;94m000000\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
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
            logger->print() << "|\033[38;5;94m000001\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
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
            logger->print() << "|\033[38;5;94m000002\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
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
            mad_e2v_madurban_msgs::msg::EPULowFrequencyContainer _tmp_4;
            ros->epu_to_vehicle.epu_low_frequency_container.push_back(_tmp_4);
        
            if(debug)
                logger->print() << "|\033[38;5;94m000003\033[0m| ros->epu_to_vehicle.epu_low_frequency_container " << tools::green("present");
        }
        
        // Field name: management_container
            // ManagementContainer  SEQUENCE
                //  referenceTime     GenerationDeltaTime     
                //  referencePosition ReferencePosition       
                //  ...
            uint8_t* _ext_flag_1 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.management_container.
            
            if(debug) {
                logger->print() << "|\033[38;5;94m000004\033[0m| Reading ext flag from ros->epu_to_vehicle.management_container.: " << int(*_ext_flag_1);
            }
            
            
            // Field name: reference_time
            // Integer
            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
            uint16_t* _tmp_5 = (uint16_t*) buffer; buffer += 2;
            __aux64__ = *_tmp_5;
            ros->epu_to_vehicle.management_container.reference_time.value = __aux64__;
            
            if(debug) {
                logger->print() << "|\033[38;5;94m000005\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_time.value) << 
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
                uint32_t* _tmp_6 = (uint32_t*) buffer; buffer += 4;
                ros->epu_to_vehicle.management_container.reference_position.latitude.value = *_tmp_6;
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
                    logger->print() << "|\033[38;5;94m000006\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.latitude.value) << " epu_to_vehicle.management_container.reference_position.latitude: " <<
                                 ros->epu_to_vehicle.management_container.reference_position.latitude.value << " (" << __aux64__ << ")";
                }
                
                // Field name: longitude
                // Real
                // Double
                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                uint32_t* _tmp_7 = (uint32_t*) buffer; buffer += 4;
                ros->epu_to_vehicle.management_container.reference_position.longitude.value = *_tmp_7;
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
                    logger->print() << "|\033[38;5;94m000007\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.longitude.value) << " epu_to_vehicle.management_container.reference_position.longitude: " <<
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
                    uint16_t* _tmp_8 = (uint16_t*) buffer; buffer += 2;
                    ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value = *_tmp_8;
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
                        logger->print() << "|\033[38;5;94m000008\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence: " <<
                                     ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: semi_minor_confidence
                    // Real
                    // Float
                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                    uint16_t* _tmp_9 = (uint16_t*) buffer; buffer += 2;
                    ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value = *_tmp_9;
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
                        logger->print() << "|\033[38;5;94m000009\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence: " <<
                                     ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: semi_major_orientation
                    // Real
                    // Float
                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                    uint16_t* _tmp_10 = (uint16_t*) buffer; buffer += 2;
                    ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value = *_tmp_10;
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
                        logger->print() << "|\033[38;5;94m000010\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation: " <<
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
                    uint32_t* _tmp_11 = (uint32_t*) buffer; buffer += 4;
                    ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value = *_tmp_11;
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
                        logger->print() << "|\033[38;5;94m000011\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value) << " epu_to_vehicle.management_container.reference_position.altitude.altitude_value: " <<
                                     ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: altitude_confidence
                    // Enumerated
                    // INT32  min(0) max(15) span(16) datatype(Int32)
                    uint8_t* _tmp_12 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_12;
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
                        logger->print() << "|\033[38;5;94m000012\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value);
                    }
            if(*_ext_flag_1) { // from ros->epu_to_vehicle.management_container. 
                uint8_t* _tmp_13 = (uint8_t*) buffer++;  // number of extensions
                bool _array_1[*_tmp_13];
                
                if(debug)
                    logger->print() << "|\033[38;5;94m000013\033[0m| Reading number of exts from ros->epu_to_vehicle.management_container.: " << static_cast<unsigned int>(*_tmp_13);
                
                // Extensions bytemap
                for(int i = 0; i < *_tmp_13; i++)
                    _array_1[i] = (*buffer++) != 0;
                
                // Discarding unknown OpenType containers
                for(int i = 0; i < *_tmp_13; i++) {
                    uint16_t* _tmp_14 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                    if(debug) {
                    }
                
                    for(int i = 0; i < *_tmp_14; i++)
                        buffer++;
                }
                
            }
        
        // Field name: epu_high_frequency_container
            // EPUHighFrequencyContainer  SEQUENCE
                //  behaviours Behaviours      OPTIONAL  
                //  safety     SafetyAdvices   OPTIONAL  
            if(*(buffer++)) { 
                mad_e2v_madurban_msgs::msg::Behaviours _tmp_15;
                ros->epu_to_vehicle.epu_high_frequency_container.behaviours.push_back(_tmp_15);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000014\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours " << tools::green("present");
            }
            if(*(buffer++)) { 
                mad_e2v_madurban_msgs::msg::SafetyAdvices _tmp_16;
                ros->epu_to_vehicle.epu_high_frequency_container.safety.push_back(_tmp_16);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000015\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety " << tools::green("present");
            }
            
            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours.size() != 0) {
                // Field name: behaviours
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(10) span(10)
                uint8_t* _ext_flag_9 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000016\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].: " << int(*_ext_flag_9);
                }
                
                int16_t* _tmp_17 = (int16_t*)buffer;
                buffer += 2;
                __aux64__ = *_tmp_17;
                __aux64__ += 1;     // +min
                
                int _if__tmp_17 = __aux64__;
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000017\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0]. size: " << int(__aux64__);
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
                
                
                for(int a = 0; a < _if__tmp_17; a++) {
                    mad_e2v_madurban_msgs::msg::BehaviourContainer seqof_a;  // SEQUENCE
                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements.push_back(seqof_a);
                
                        // BehaviourContainer  SEQUENCE
                            //  subjectStationID     StationId          
                            //  movementAdvice       MovementAdvice     
                            //  exteriorLightsAdvice ExteriorLights   OPTIONAL  
                            //  hornAdvice           HornAdvice       OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_10 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000018\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].: " << int(*_ext_flag_10);
                        }
                        
                        if(*(buffer++)) { 
                            its_container_v4_etsi_its_cdd_msgs::msg::ExteriorLights _tmp_18;
                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice.push_back(_tmp_18);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000019\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            mad_e2v_madurban_msgs::msg::HornAdvice _tmp_19;
                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice.push_back(_tmp_19);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000020\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice " << tools::green("present");
                        }
                        
                        // Field name: subject_station_id
                        // Integer
                        // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
                        uint32_t* _tmp_20 = (uint32_t*) buffer; buffer += 4;
                        __aux64__ = *_tmp_20;
                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000021\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
                            return false;
                        }
                        
                        // Field name: movement_advice
                            // MovementAdvice  SEQUENCE
                                //  maneuverAdvice   ManeuverAdvice     OPTIONAL  
                                //  trajectoryAdvice TrajectoryAdvice   OPTIONAL  
                                //  controlAdvice    ControlAdvice      OPTIONAL  
                            if(*(buffer++)) { 
                                mad_e2v_madurban_msgs::msg::ManeuverAdvice _tmp_21;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice.push_back(_tmp_21);
                            
                                if(debug)
                                    logger->print() << "|\033[38;5;94m000022\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                mad_e2v_madurban_msgs::msg::TrajectoryAdvice _tmp_22;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice.push_back(_tmp_22);
                            
                                if(debug)
                                    logger->print() << "|\033[38;5;94m000023\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                mad_e2v_madurban_msgs::msg::ControlAdvice _tmp_23;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice.push_back(_tmp_23);
                            
                                if(debug)
                                    logger->print() << "|\033[38;5;94m000024\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice " << tools::green("present");
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice.size() != 0) {
                                // Field name: maneuver_advice
                                    // ManeuverAdvice  SEQUENCE
                                        //  nominalManeuver ManeuverAdviceNominal     
                                        //  mrmManeuver     ManeuverAdviceMRM         
                                    
                                    // Field name: nominal_maneuver
                                    // Enumerated
                                    // INT32  min(0) max(12) span(13) datatype(Int32)
                                    uint8_t* _ext_flag_11 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000025\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.: " << int(*_ext_flag_11);
                                    }
                                    
                                    uint8_t* _tmp_24 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_24;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 12) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value' " << (__aux64__) << " exceeds max allowable (12); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000026\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value);
                                    }
                                    
                                    // Field name: mrm_maneuver
                                    // Enumerated
                                    // INT32  min(0) max(6) span(7) datatype(Int32)
                                    uint8_t* _ext_flag_12 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000027\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.: " << int(*_ext_flag_12);
                                    }
                                    
                                    uint8_t* _tmp_25 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_25;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 6) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value' " << (__aux64__) << " exceeds max allowable (6); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000028\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value);
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice.size() != 0) {
                                // Field name: trajectory_advice
                                    // TrajectoryAdvice  SEQUENCE
                                        //  nominalTrajectory PathPredicted     
                                        //  mrmTrajectory     PathPredicted     
                                    
                                    // Field name: nominal_trajectory
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16)
                                    uint8_t* _ext_flag_13 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000029\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.: " << int(*_ext_flag_13);
                                    }
                                    
                                    int16_t* _tmp_26 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_26;
                                    __aux64__ += 1;     // +min
                                    
                                    int _if__tmp_26 = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000030\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory. size: " << int(__aux64__);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int b = 0; b < _if__tmp_26; b++) {
                                        mad_e2v_madurban_msgs::msg::PathPointPredicted seqof_b;  // SEQUENCE
                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements.push_back(seqof_b);
                                    
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
                                            uint8_t* _ext_flag_14 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000031\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].: " << int(*_ext_flag_14);
                                            }
                                            
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::PosConfidenceEllipse _tmp_27;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence.push_back(_tmp_27);
                                            
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000032\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::PathDeltaTimeChoice _tmp_28;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time.push_back(_tmp_28);
                                            
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000033\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::StandardLength9b _tmp_29;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset.push_back(_tmp_29);
                                            
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000034\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::StandardLength9b _tmp_30;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset.push_back(_tmp_30);
                                            
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000035\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset " << tools::green("present");
                                            }
                                            
                                            // Field name: delta_latitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_31 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value = *_tmp_31;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000036\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: delta_longitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_32 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value = *_tmp_32;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000037\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence.size() != 0) {
                                                // Field name: horizontal_position_confidence
                                                    // PosConfidenceEllipse  SEQUENCE
                                                        //  semiMajorConfidence  SemiAxisLength     
                                                        //  semiMinorConfidence  SemiAxisLength     
                                                        //  semiMajorOrientation HeadingValue       
                                                    
                                                    // Field name: semi_major_confidence
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_33 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value = *_tmp_33;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000038\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value << " (" << __aux64__ << ")";
                                                    }
                                                    
                                                    // Field name: semi_minor_confidence
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_34 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value = *_tmp_34;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000039\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value << " (" << __aux64__ << ")";
                                                    }
                                                    
                                                    // Field name: semi_major_orientation
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    uint16_t* _tmp_35 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value = *_tmp_35;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value /= 10.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000040\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value << " (" << __aux64__ << ")";
                                                    }
                                            }
                                            
                                            // Field name: delta_altitude
                                            // Real
                                            // Float
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_36 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value = *_tmp_36;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value += -12700;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000041\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: altitude_confidence
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _tmp_37 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_37;
                                            __aux64__ += 0;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000042\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value);
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time.size() != 0) {
                                                // Field name: path_delta_time
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond   
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds   
                                                uint8_t _choice_1 = *(buffer++);
                                                
                                                if(_choice_1 == 0) {
                                                    its_container_v4_etsi_its_cdd_msgs::msg::DeltaTimeTenthOfSecond _tmp_38;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision.push_back(_tmp_38);
                                                
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    uint8_t* _tmp_39 = (uint8_t*) buffer++;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value = *_tmp_39;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value /= 10.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000043\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0]: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                else if(_choice_1 == 1)  // CHOICE PathDeltaTimeChoice  fieldName(delta_time_big_range)
                                                {
                                                    its_container_v4_etsi_its_cdd_msgs::msg::DeltaTimeTenSeconds _tmp_40;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range.push_back(_tmp_40);
                                                
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    uint8_t* _tmp_41 = (uint8_t*) buffer++;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value = *_tmp_41;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value /= 0.1;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000044\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0]: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(_choice_1) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0]'; message dropped.";
                                                    return false;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset.size() != 0) {
                                                // Field name: symmetric_area_offset
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_42 = (uint16_t*) buffer; buffer += 2;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value = *_tmp_42;
                                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->print() << "|\033[38;5;94m000045\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0]: " <<
                                                                 ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset.size() != 0) {
                                                // Field name: asymmetric_area_offset
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_43 = (uint16_t*) buffer; buffer += 2;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value = *_tmp_43;
                                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->print() << "|\033[38;5;94m000046\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0]: " <<
                                                                 ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            if(*_ext_flag_14) { // from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b]. 
                                                uint8_t* _tmp_44 = (uint8_t*) buffer++;  // number of extensions
                                                bool _array_2[*_tmp_44];
                                                
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000047\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].: " << static_cast<unsigned int>(*_tmp_44);
                                                
                                                // Extensions bytemap
                                                for(int i = 0; i < *_tmp_44; i++)
                                                    _array_2[i] = (*buffer++) != 0;
                                                
                                                if(_array_2[0]) {  // Extension group 1
                                                    uint16_t* _tmp_45 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) 
                                                        logger->print() << "|\033[38;5;94m000048\033[0m| Reading open type len from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].: " << _tmp_45;
                                                
                                                    // Optional fields bytemap
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::HeadingValue _tmp_46;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value.push_back(_tmp_46);
                                                    
                                                        if(debug)
                                                            logger->print() << "|\033[38;5;94m000049\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value " << tools::green("present");
                                                    }
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::SpeedValue _tmp_47;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed.push_back(_tmp_47);
                                                    
                                                        if(debug)
                                                            logger->print() << "|\033[38;5;94m000050\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed " << tools::green("present");
                                                    }
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::AccelerationValue _tmp_48;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration.push_back(_tmp_48);
                                                    
                                                        if(debug)
                                                            logger->print() << "|\033[38;5;94m000051\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration " << tools::green("present");
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value.size() != 0) {
                                                        // Field name: heading_value
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                        uint16_t* _tmp_49 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value = *_tmp_49;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value /= 10.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->print() << "|\033[38;5;94m000052\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed.size() != 0) {
                                                        // Field name: abs_speed
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                        uint16_t* _tmp_50 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value = *_tmp_50;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value /= 100.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->print() << "|\033[38;5;94m000053\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration.size() != 0) {
                                                        // Field name: longitudinal_acceleration
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                        uint16_t* _tmp_51 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value = *_tmp_51;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value += -160;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value /= 10.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->print() << "|\033[38;5;94m000054\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                
                                                }
                                                
                                                // Discarding unknown OpenType containers
                                                for(int i = 1; i < *_tmp_44; i++) {
                                                    uint16_t* _tmp_52 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) {
                                                    }
                                                
                                                    for(int i = 0; i < *_tmp_52; i++)
                                                        buffer++;
                                                }
                                                
                                            }
                                    }
                                    
                                    // Field name: mrm_trajectory
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16)
                                    uint8_t* _ext_flag_30 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000055\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.: " << int(*_ext_flag_30);
                                    }
                                    
                                    int16_t* _tmp_53 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_53;
                                    __aux64__ += 1;     // +min
                                    
                                    int _if__tmp_53 = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000056\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory. size: " << int(__aux64__);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int c = 0; c < _if__tmp_53; c++) {
                                        mad_e2v_madurban_msgs::msg::PathPointPredicted seqof_c;  // SEQUENCE
                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements.push_back(seqof_c);
                                    
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
                                            uint8_t* _ext_flag_31 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000057\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].: " << int(*_ext_flag_31);
                                            }
                                            
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::PosConfidenceEllipse _tmp_54;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence.push_back(_tmp_54);
                                            
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000058\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::PathDeltaTimeChoice _tmp_55;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time.push_back(_tmp_55);
                                            
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000059\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::StandardLength9b _tmp_56;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset.push_back(_tmp_56);
                                            
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000060\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset " << tools::green("present");
                                            }
                                            if(*(buffer++)) { 
                                                its_container_v4_etsi_its_cdd_msgs::msg::StandardLength9b _tmp_57;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset.push_back(_tmp_57);
                                            
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000061\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset " << tools::green("present");
                                            }
                                            
                                            // Field name: delta_latitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_58 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value = *_tmp_58;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000062\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: delta_longitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_59 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value = *_tmp_59;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000063\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence.size() != 0) {
                                                // Field name: horizontal_position_confidence
                                                    // PosConfidenceEllipse  SEQUENCE
                                                        //  semiMajorConfidence  SemiAxisLength     
                                                        //  semiMinorConfidence  SemiAxisLength     
                                                        //  semiMajorOrientation HeadingValue       
                                                    
                                                    // Field name: semi_major_confidence
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_60 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value = *_tmp_60;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000064\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value << " (" << __aux64__ << ")";
                                                    }
                                                    
                                                    // Field name: semi_minor_confidence
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    uint16_t* _tmp_61 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value = *_tmp_61;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value /= 100.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000065\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value << " (" << __aux64__ << ")";
                                                    }
                                                    
                                                    // Field name: semi_major_orientation
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    uint16_t* _tmp_62 = (uint16_t*) buffer; buffer += 2;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value = *_tmp_62;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value /= 10.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000066\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value << " (" << __aux64__ << ")";
                                                    }
                                            }
                                            
                                            // Field name: delta_altitude
                                            // Real
                                            // Float
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_63 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value = *_tmp_63;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value += -12700;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000067\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: altitude_confidence
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _tmp_64 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_64;
                                            __aux64__ += 0;
                                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000068\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value);
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time.size() != 0) {
                                                // Field name: path_delta_time
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond   
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds   
                                                uint8_t _choice_2 = *(buffer++);
                                                
                                                if(_choice_2 == 0) {
                                                    its_container_v4_etsi_its_cdd_msgs::msg::DeltaTimeTenthOfSecond _tmp_65;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision.push_back(_tmp_65);
                                                
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    uint8_t* _tmp_66 = (uint8_t*) buffer++;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value = *_tmp_66;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value /= 10.0;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000069\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0]: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                else if(_choice_2 == 1)  // CHOICE PathDeltaTimeChoice  fieldName(delta_time_big_range)
                                                {
                                                    its_container_v4_etsi_its_cdd_msgs::msg::DeltaTimeTenSeconds _tmp_67;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range.push_back(_tmp_67);
                                                
                                                    // Real
                                                    // Float
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    uint8_t* _tmp_68 = (uint8_t*) buffer++;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value = *_tmp_68;
                                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value;
                                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value /= 0.1;
                                                    
                                                    // ******************* MIN validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                        return false;
                                                    }
                                                    // ******************* MAX validator *******************
                                                    if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                                        return false;
                                                    }
                                                    
                                                    if(debug) {
                                                        logger->print() << "|\033[38;5;94m000070\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0]: " <<
                                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value << " (" << __aux64__ << ")";
                                                    }
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(_choice_2) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0]'; message dropped.";
                                                    return false;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset.size() != 0) {
                                                // Field name: symmetric_area_offset
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_69 = (uint16_t*) buffer; buffer += 2;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value = *_tmp_69;
                                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->print() << "|\033[38;5;94m000071\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0]: " <<
                                                                 ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset.size() != 0) {
                                                // Field name: asymmetric_area_offset
                                                // Real
                                                // Float
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                uint16_t* _tmp_70 = (uint16_t*) buffer; buffer += 2;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value = *_tmp_70;
                                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value;
                                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value /= 10.0;
                                                
                                                // ******************* MIN validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                    return false;
                                                }
                                                // ******************* MAX validator *******************
                                                if(VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value' " << (__aux64__) << " exceeds max allowable (511); message dropped.";
                                                    return false;
                                                }
                                                
                                                if(debug) {
                                                    logger->print() << "|\033[38;5;94m000072\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0]: " <<
                                                                 ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value << " (" << __aux64__ << ")";
                                                }
                                            }
                                            if(*_ext_flag_31) { // from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c]. 
                                                uint8_t* _tmp_71 = (uint8_t*) buffer++;  // number of extensions
                                                bool _array_3[*_tmp_71];
                                                
                                                if(debug)
                                                    logger->print() << "|\033[38;5;94m000073\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].: " << static_cast<unsigned int>(*_tmp_71);
                                                
                                                // Extensions bytemap
                                                for(int i = 0; i < *_tmp_71; i++)
                                                    _array_3[i] = (*buffer++) != 0;
                                                
                                                if(_array_3[0]) {  // Extension group 1
                                                    uint16_t* _tmp_72 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) 
                                                        logger->print() << "|\033[38;5;94m000074\033[0m| Reading open type len from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].: " << _tmp_72;
                                                
                                                    // Optional fields bytemap
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::HeadingValue _tmp_73;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value.push_back(_tmp_73);
                                                    
                                                        if(debug)
                                                            logger->print() << "|\033[38;5;94m000075\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value " << tools::green("present");
                                                    }
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::SpeedValue _tmp_74;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed.push_back(_tmp_74);
                                                    
                                                        if(debug)
                                                            logger->print() << "|\033[38;5;94m000076\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed " << tools::green("present");
                                                    }
                                                    if(*(buffer++)) { 
                                                        its_container_v4_etsi_its_cdd_msgs::msg::AccelerationValue _tmp_75;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration.push_back(_tmp_75);
                                                    
                                                        if(debug)
                                                            logger->print() << "|\033[38;5;94m000077\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration " << tools::green("present");
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value.size() != 0) {
                                                        // Field name: heading_value
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                        uint16_t* _tmp_76 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value = *_tmp_76;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value /= 10.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->print() << "|\033[38;5;94m000078\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed.size() != 0) {
                                                        // Field name: abs_speed
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                        uint16_t* _tmp_77 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value = *_tmp_77;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value /= 100.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->print() << "|\033[38;5;94m000079\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                    
                                                    if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration.size() != 0) {
                                                        // Field name: longitudinal_acceleration
                                                        // Real
                                                        // Float
                                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                        uint16_t* _tmp_78 = (uint16_t*) buffer; buffer += 2;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value = *_tmp_78;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value += -160;
                                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value;
                                                        ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value /= 10.0;
                                                        
                                                        // ******************* MIN validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                                            return false;
                                                        }
                                                        // ******************* MAX validator *******************
                                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                                            return false;
                                                        }
                                                        
                                                        if(debug) {
                                                            logger->print() << "|\033[38;5;94m000080\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0]: " <<
                                                                         ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value << " (" << __aux64__ << ")";
                                                        }
                                                    }
                                                
                                                }
                                                
                                                // Discarding unknown OpenType containers
                                                for(int i = 1; i < *_tmp_71; i++) {
                                                    uint16_t* _tmp_79 = (uint16_t*)buffer;  // OpenType length
                                                    buffer += 2;
                                                
                                                    if(debug) {
                                                    }
                                                
                                                    for(int i = 0; i < *_tmp_79; i++)
                                                        buffer++;
                                                }
                                                
                                            }
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice.size() != 0) {
                                // Field name: control_advice
                                    // ControlAdvice  SEQUENCE
                                        //  driveDirection DriveDirection         
                                        //  acceleration   AccelerationValue      
                                        //  steeringAngle  SteeringAngleValue     
                                    
                                    // Field name: drive_direction
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_80 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_80;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000081\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value);
                                    }
                                    
                                    // Field name: acceleration
                                    // Real
                                    // Float
                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_81 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value = *_tmp_81;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value += -160;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000082\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value) << " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: steering_angle
                                    // Integer
                                    // INT16  min(-160) max(160) span(321) datatype(Int16)
                                    uint16_t* _tmp_82 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = *_tmp_82;
                                    __aux64__ += -160;
                                    ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000083\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value' " << (__aux64__) << " exceeds max allowable (160); message dropped.";
                                        return false;
                                    }
                            }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice.size() != 0) {
                            // Field name: exterior_lights_advice
                            // BitString
                            // BIT_STRING  min(8) max(8) span(1)
                            uint8_t* _tmp_83 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_83 + 8;
                            buffer += 1;
                            
                            if(debug)
                                logger->print() << "|\033[38;5;94m000084\033[0m| epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].value: " << __aux64__;
                            
                            int _if__tmp_83 = __aux64__;
                            for(int d = 0; d < _if__tmp_83; d++) {
                                uint8_t __c__;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].values[d] = (*__b__ == 1);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 8) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice.size() != 0) {
                            // Field name: horn_advice
                            // Enumerated
                            // INT32  min(0) max(3) span(4) datatype(Int32)
                            uint8_t* _tmp_84 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_84;
                            __aux64__ += 0;
                            ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000085\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value) << 
                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value);
                            }
                        }
                        if(*_ext_flag_10) { // from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a]. 
                            uint8_t* _tmp_85 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_4[*_tmp_85];
                            
                            if(debug)
                                logger->print() << "|\033[38;5;94m000086\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].: " << static_cast<unsigned int>(*_tmp_85);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_85; i++)
                                _array_4[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_85; i++) {
                                uint16_t* _tmp_86 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_86; i++)
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
                uint8_t* _ext_flag_50 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000087\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].: " << int(*_ext_flag_50);
                }
                
                int16_t* _tmp_87 = (int16_t*)buffer;
                buffer += 2;
                __aux64__ = *_tmp_87;
                __aux64__ += 1;     // +min
                
                int _if__tmp_87 = __aux64__;
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000088\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0]. size: " << int(__aux64__);
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
                
                
                for(int e = 0; e < _if__tmp_87; e++) {
                    mad_e2v_madurban_msgs::msg::SafetyContainer seqof_e;  // SEQUENCE
                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements.push_back(seqof_e);
                
                        // SafetyContainer  SEQUENCE
                            //  subjectStationID StationId           
                            //  objectData       RssObjectData     OPTIONAL  
                            //  rssDynamics      RssDynamics       OPTIONAL  
                            //  rssResults       RssCheckResults     
                        if(*(buffer++)) { 
                            mad_e2v_madurban_msgs::msg::RssObjectData _tmp_88;
                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data.push_back(_tmp_88);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000089\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            mad_e2v_madurban_msgs::msg::RssDynamics _tmp_89;
                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics.push_back(_tmp_89);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000090\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics " << tools::green("present");
                        }
                        
                        // Field name: subject_station_id
                        // Integer
                        // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
                        uint32_t* _tmp_90 = (uint32_t*) buffer; buffer += 4;
                        __aux64__ = *_tmp_90;
                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000091\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
                            return false;
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data.size() != 0) {
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
                                    mad_e2v_madurban_msgs::msg::SteeringAngleValue _tmp_91;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle.push_back(_tmp_91);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000092\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle " << tools::green("present");
                                }
                                
                                // Field name: id
                                // Integer
                                // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                uint16_t* _tmp_92 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_92;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000093\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                    return false;
                                }
                                
                                // Field name: type
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_93 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_93;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000094\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
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
                                    uint32_t* _tmp_94 = (uint32_t*) buffer; buffer += 4;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value = *_tmp_94;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value += -131071;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000095\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_longitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_95 = (uint32_t*) buffer; buffer += 4;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value = *_tmp_95;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value += -131071;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000096\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_altitude
                                    // Real
                                    // Float
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_96 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value = *_tmp_96;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value += -12700;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000097\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value << " (" << __aux64__ << ")";
                                    }
                                
                                // Field name: heading
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_97 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value = *_tmp_97;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000098\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_major_position_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_98 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value = *_tmp_98;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000099\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_minor_position_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_99 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value = *_tmp_99;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000100\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: dimension_length
                                // Real
                                // Float
                                // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_100 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value = *_tmp_100;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value += 1;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000101\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: dimension_width
                                // Real
                                // Float
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_101 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value = *_tmp_101;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value += 1;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value' " << (__aux64__) << " exceeds max allowable (62); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000102\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: dimension_height
                                // Real
                                // Float
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_102 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value = *_tmp_102;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value += 1;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value' " << (__aux64__) << " exceeds max allowable (62); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000103\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: speed_range
                                    // VelocityComponentRange  SEQUENCE
                                        //  minimum    VelocityComponentValue     
                                        //  maximum    VelocityComponentValue     
                                    
                                    // Field name: minimum
                                    // Real
                                    // Float
                                    // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_103 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value = *_tmp_103;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value += -16383;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value' " << (__aux64__) << " is less than allowable (-16383); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000104\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: maximum
                                    // Real
                                    // Float
                                    // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_104 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value = *_tmp_104;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value += -16383;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value' " << (__aux64__) << " is less than allowable (-16383); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000105\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum: " <<
                                                     ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value << " (" << __aux64__ << ")";
                                    }
                                
                                // Field name: yaw_rate
                                // Real
                                // Float
                                // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_105 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value = *_tmp_105;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value += -32766;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -32766) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value' " << (__aux64__) << " is less than allowable (-32766); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000106\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle.size() != 0) {
                                    // Field name: steering_angle
                                    // Integer
                                    // INT16  min(-160) max(160) span(321) datatype(Int16)
                                    uint16_t* _tmp_106 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = *_tmp_106;
                                    __aux64__ += -160;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000107\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value' " << (__aux64__) << " exceeds max allowable (160); message dropped.";
                                        return false;
                                    }
                                }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics.size() != 0) {
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
                                uint16_t* _tmp_107 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value = *_tmp_107;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000108\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lon_brake_max
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_108 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value = *_tmp_108;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000109\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lon_brake_min
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_109 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value = *_tmp_109;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000110\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lon_brake_min_correct
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_110 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value = *_tmp_110;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000111\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lat_accel_max
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_111 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value = *_tmp_111;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000112\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lat_brake_min
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_112 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value = *_tmp_112;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value += -160;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000113\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lateral_fluctuation_margin
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_113 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_113;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000114\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                                
                                // Field name: response_time
                                // Real
                                // Float
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_114 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value = *_tmp_114;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000115\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: max_speed_on_acceleration
                                // Real
                                // Float
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_115 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value = *_tmp_115;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000116\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: min_longitudinal_safety_distance
                                // Real
                                // Float
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_116 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value = *_tmp_116;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000117\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: unstructured_pedestrian_turning_radius
                                // Real
                                // Float
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_117 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value = *_tmp_117;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000118\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: unstructured_vehicle_min_radius
                                // Real
                                // Float
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_118 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value = *_tmp_118;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000119\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: unstructured_vehicle_yaw_rate_change
                                // Integer
                                // INT16  min(-2040) max(2041) span(4082) datatype(Int16)
                                uint16_t* _tmp_119 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_119;
                                __aux64__ += -2040;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000120\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -2040) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' " << (__aux64__) << " is less than allowable (-2040); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 2041) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' " << (__aux64__) << " exceeds max allowable (2041); message dropped.";
                                    return false;
                                }
                                
                                // Field name: unstructured_drive_away_max_angle
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_120 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value = *_tmp_120;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000121\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value << " (" << __aux64__ << ")";
                                }
                        }
                        
                        // Field name: rss_results
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(4) span(5)
                        int16_t* _tmp_121 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_121;
                        
                        int _if__tmp_121 = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000122\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results. size: " << int(__aux64__);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                            return false;
                        }
                        
                        
                        for(int f = 0; f < _if__tmp_121; f++) {
                            mad_e2v_madurban_msgs::msg::RssCheckResult seqof_f;  // SEQUENCE
                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements.push_back(seqof_f);
                        
                                // RssCheckResult  SEQUENCE
                                    //  v2xLatency        DeltaTimeTenthOfSecond     
                                    //  properResponse    RssProperResponse          
                                    //  rssRoute          RssRoute                 OPTIONAL  
                                    //  vehicleRouteState RssVehicleRouteState     OPTIONAL  
                                if(*(buffer++)) { 
                                    mad_e2v_madurban_msgs::msg::RssRoute _tmp_122;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route.push_back(_tmp_122);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000123\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    mad_e2v_madurban_msgs::msg::RssVehicleRouteState _tmp_123;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state.push_back(_tmp_123);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000124\033[0m| ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state " << tools::green("present");
                                }
                                
                                // Field name: v2x_latency
                                // Real
                                // Float
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_124 = (uint8_t*) buffer++;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value = *_tmp_124;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value;
                                ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000125\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency: " <<
                                                 ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value << " (" << __aux64__ << ")";
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
                                    uint8_t* _ext_flag_76 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000126\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.: " << int(*_ext_flag_76);
                                    }
                                    
                                    uint8_t* _tmp_125 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_125 + 8;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000127\033[0m| epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.value: " << __aux64__;
                                    
                                    int _if__tmp_125 = __aux64__;
                                    for(int g = 0; g < _if__tmp_125; g++) {
                                        uint8_t __c__;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.values[g] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 8) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                        return false;
                                    }
                                    
                                    // Field name: longitudinal_response
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_126 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_126;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000128\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value);
                                    }
                                    
                                    // Field name: lateral_response_right
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) datatype(Int32)
                                    uint8_t* _tmp_127 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_127;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value' " << (__aux64__) << " exceeds max allowable (1); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000129\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value);
                                    }
                                    
                                    // Field name: lateral_response_left
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) datatype(Int32)
                                    uint8_t* _tmp_128 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_128;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value' " << (__aux64__) << " exceeds max allowable (1); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000130\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value);
                                    }
                                    
                                    // Field name: unstructured_constellation_response
                                    // Enumerated
                                    // INT32  min(0) max(3) span(4) datatype(Int32)
                                    uint8_t* _tmp_129 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_129;
                                    __aux64__ += 0;
                                    ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000131\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value);
                                    }
                                    
                                    // Field name: heading_ranges
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5)
                                    int16_t* _tmp_130 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_130;
                                    
                                    int _if__tmp_130 = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000132\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges. size: " << int(__aux64__);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int h = 0; h < _if__tmp_130; h++) {
                                        mad_e2v_madurban_msgs::msg::CartesianAngleRange seqof_h;  // SEQUENCE
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements.push_back(seqof_h);
                                    
                                            // CartesianAngleRange  SEQUENCE
                                                //  begin      CartesianAngleValue     
                                                //  end        CartesianAngleValue     
                                            
                                            // Field name: begin
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_131 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value = *_tmp_131;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000133\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: end
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_132 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value = *_tmp_132;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000134\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value << " (" << __aux64__ << ")";
                                            }
                                    }
                                    
                                    // Field name: dangerous_objects
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5)
                                    uint8_t* _ext_flag_83 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000135\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.: " << int(*_ext_flag_83);
                                    }
                                    
                                    int16_t* _tmp_133 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_133;
                                    
                                    int _if__tmp_133 = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000136\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects. size: " << int(__aux64__);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int i = 0; i < _if__tmp_133; i++) {
                                        its_container_v4_etsi_its_cdd_msgs::msg::Identifier2B seqof_i;  // INTEGER
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements.push_back(seqof_i);
                                    
                                        // Integer
                                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                        uint16_t* _tmp_134 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_134;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value = __aux64__;
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000137\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
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
                                        uint16_t* _tmp_135 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value = *_tmp_135;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000138\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: maximum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_136 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value = *_tmp_136;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000139\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value << " (" << __aux64__ << ")";
                                        }
                                    
                                    // Field name: lateral_right_range
                                        // LateralAccelerationRange  SEQUENCE
                                            //  minimum    LateralAccelerationValue     
                                            //  maximum    LateralAccelerationValue     
                                        
                                        // Field name: minimum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_137 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value = *_tmp_137;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000140\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: maximum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_138 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value = *_tmp_138;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000141\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value << " (" << __aux64__ << ")";
                                        }
                                    
                                    // Field name: lateral_left_range
                                        // LateralAccelerationRange  SEQUENCE
                                            //  minimum    LateralAccelerationValue     
                                            //  maximum    LateralAccelerationValue     
                                        
                                        // Field name: minimum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_139 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value = *_tmp_139;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000142\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: maximum
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_140 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value = *_tmp_140;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000143\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value << " (" << __aux64__ << ")";
                                        }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route.size() != 0) {
                                    // Field name: rss_route
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(4) span(4)
                                    int16_t* _tmp_141 = (int16_t*)buffer;
                                    buffer += 2;
                                    __aux64__ = *_tmp_141;
                                    __aux64__ += 1;     // +min
                                    
                                    int _if__tmp_141 = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000144\033[0m| SequenceOf ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0]. size: " << int(__aux64__);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    for(int j = 0; j < _if__tmp_141; j++) {
                                        its_container_v4_etsi_its_cdd_msgs::msg::DeltaReferencePosition seqof_j;  // SEQUENCE
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements.push_back(seqof_j);
                                    
                                            // DeltaReferencePosition  SEQUENCE
                                                //  deltaLatitude  DeltaLatitude      
                                                //  deltaLongitude DeltaLongitude     
                                                //  deltaAltitude  DeltaAltitude      
                                            
                                            // Field name: delta_latitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_142 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value = *_tmp_142;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000145\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: delta_longitude
                                            // Real
                                            // Double
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            uint32_t* _tmp_143 = (uint32_t*) buffer; buffer += 4;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value = *_tmp_143;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value += -131071;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value /= 1.0E7;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000146\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value << " (" << __aux64__ << ")";
                                            }
                                            
                                            // Field name: delta_altitude
                                            // Real
                                            // Float
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_144 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value = *_tmp_144;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value += -12700;
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value;
                                            ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000147\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude: " <<
                                                             ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value << " (" << __aux64__ << ")";
                                            }
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state.size() != 0) {
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
                                        uint16_t* _tmp_145 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value = *_tmp_145;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000148\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_radius
                                        // Integer
                                        // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                                        uint16_t* _tmp_146 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = *_tmp_146;
                                        __aux64__ += -1023;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value = __aux64__;
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000149\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value;
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                            return false;
                                        }
                                        
                                        // Field name: route_heading_delta
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_147 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value = *_tmp_147;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000150\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_speed_lon
                                        // Real
                                        // Float
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_148 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value = *_tmp_148;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value += -16383;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value' " << (__aux64__) << " is less than allowable (-16383); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000151\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_speed_lat
                                        // Real
                                        // Float
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_149 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value = *_tmp_149;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value += -16383;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value' " << (__aux64__) << " is less than allowable (-16383); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000152\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_accel_lon
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_150 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value = *_tmp_150;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000153\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: route_accel_lat
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_151 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value = *_tmp_151;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000154\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: avg_route_accel_lon
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_152 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value = *_tmp_152;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000155\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: avg_route_accel_lat
                                        // Real
                                        // Float
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_153 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value = *_tmp_153;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value += -160;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value;
                                        ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000156\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value) << " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat: " <<
                                                         ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value << " (" << __aux64__ << ")";
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
                uint8_t* _ext_flag_101 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000157\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].: " << int(*_ext_flag_101);
                }
                
                if(*(buffer++)) { 
                    mad_e2v_madurban_msgs::msg::EPUSectionCapabilities _tmp_154;
                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.push_back(_tmp_154);
                
                    if(debug)
                        logger->print() << "|\033[38;5;94m000158\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities " << tools::green("present");
                }
                
                // Field name: epu_section_dimensions
                    // EPUSectionDimensions  SEQUENCE
                        //  includedShapes IncludedShapes     
                        //  excludedShapes ExcludedShapes     
                    
                    // Field name: included_shapes
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(4) span(4)
                    uint8_t* _ext_flag_102 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000159\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.: " << int(*_ext_flag_102);
                    }
                    
                    int16_t* _tmp_155 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_155;
                    __aux64__ += 1;     // +min
                    
                    int _if__tmp_155 = __aux64__;
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000160\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes. size: " << int(__aux64__);
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
                    
                    
                    for(int k = 0; k < _if__tmp_155; k++) {
                        its_container_v4_etsi_its_cdd_msgs::msg::Shape seqof_k;  // CHOICE
                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements.push_back(seqof_k);
                    
                        // Choice
                        uint8_t* _ext_flag_103 = (uint8_t*)buffer++; // ext flag
                        
                           // #0  rectangular   RectangularShape   
                           // #1  circular   CircularShape   
                           // #2  polygonal   PolygonalShape   
                           // #3  elliptical   EllipticalShape   
                           // #4  radial   RadialShape   
                           // #5  radialShapes   RadialShapes   
                        uint8_t _choice_3 = *(buffer++);
                        
                        if(*_ext_flag_103)
                            _choice_3 += 5 + 1; // Ext addition
                        
                        if(_choice_3 == 0) {
                            its_container_v4_etsi_its_cdd_msgs::msg::RectangularShape _tmp_156;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular.push_back(_tmp_156);
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_157;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point.push_back(_tmp_157);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000161\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_158;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation.push_back(_tmp_158);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000162\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_159;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height.push_back(_tmp_159);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000163\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_160;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate.push_back(_tmp_160);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000164\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_161 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value = *_tmp_161;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000165\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_162 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value = *_tmp_162;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000166\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_163 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_163;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000167\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: semi_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_164 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value = *_tmp_164;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000168\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_breadth
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_165 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value = *_tmp_165;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000169\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation.size() != 0) {
                                    // Field name: orientation
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_166 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value = *_tmp_166;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000170\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_167 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value = *_tmp_167;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000171\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_3 == 1)  // CHOICE Shape  fieldName(circular)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::CircularShape _tmp_168;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular.push_back(_tmp_168);
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_169;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point.push_back(_tmp_169);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000172\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_170;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height.push_back(_tmp_170);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000173\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_171;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate.push_back(_tmp_171);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000174\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_172 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value = *_tmp_172;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000175\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_173 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value = *_tmp_173;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000176\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_174 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_174;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000177\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: radius
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_175 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value = *_tmp_175;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000178\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_176 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value = *_tmp_176;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000179\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_3 == 2)  // CHOICE Shape  fieldName(polygonal)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::PolygonalShape _tmp_177;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal.push_back(_tmp_177);
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_178;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point.push_back(_tmp_178);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000180\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_179;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height.push_back(_tmp_179);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000181\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_180;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate.push_back(_tmp_180);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000182\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_181 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value = *_tmp_181;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000183\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_182 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value = *_tmp_182;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000184\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_183 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_183;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000185\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: polygon
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                uint8_t* _ext_flag_119 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000186\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.: " << int(*_ext_flag_119);
                                }
                                
                                int16_t* _tmp_184 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_184;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_184 = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000187\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon. size: " << int(__aux64__);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int l = 0; l < _if__tmp_184; l++) {
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d seqof_l;  // SEQUENCE
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements.push_back(seqof_l);
                                
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_185;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate.push_back(_tmp_185);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000188\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_186 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value = *_tmp_186;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000189\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_187 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value = *_tmp_187;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000190\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_188 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value = *_tmp_188;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000191\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_189 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value = *_tmp_189;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000192\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_3 == 3)  // CHOICE Shape  fieldName(elliptical)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::EllipticalShape _tmp_190;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical.push_back(_tmp_190);
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_191;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point.push_back(_tmp_191);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000193\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_192;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation.push_back(_tmp_192);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000194\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_193;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height.push_back(_tmp_193);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000195\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_194;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate.push_back(_tmp_194);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000196\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_195 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value = *_tmp_195;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000197\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_196 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value = *_tmp_196;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000198\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_197 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_197;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000199\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: semi_major_axis_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_198 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value = *_tmp_198;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000200\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_minor_axis_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_199 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value = *_tmp_199;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000201\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation.size() != 0) {
                                    // Field name: orientation
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_200 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value = *_tmp_200;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000202\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_201 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value = *_tmp_201;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000203\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_3 == 4)  // CHOICE Shape  fieldName(radial)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::RadialShape _tmp_202;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial.push_back(_tmp_202);
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_203;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point.push_back(_tmp_203);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000204\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_204;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start.push_back(_tmp_204);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000205\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_205;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end.push_back(_tmp_205);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000206\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_206;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate.push_back(_tmp_206);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000207\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_207 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value = *_tmp_207;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000208\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_208 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value = *_tmp_208;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000209\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_209 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_209;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000210\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: range
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_210 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value = *_tmp_210;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000211\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: horizontal_opening_angle_start
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_211 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value = *_tmp_211;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000212\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: horizontal_opening_angle_end
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_212 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value = *_tmp_212;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000213\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field name: vertical_opening_angle_start
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_213 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value = *_tmp_213;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000214\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field name: vertical_opening_angle_end
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_214 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value = *_tmp_214;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000215\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_3 == 5)  // CHOICE Shape  fieldName(radial_shapes)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::RadialShapes _tmp_215;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes.push_back(_tmp_215);
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinateSmall _tmp_216;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate.push_back(_tmp_216);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000216\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate " << tools::green("present");
                                }
                                
                                // Field name: ref_point_id
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_217 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_217;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000217\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: x_coordinate
                                // Real
                                // Float
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_218 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value = *_tmp_218;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value += -3094;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000218\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: y_coordinate
                                // Real
                                // Float
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_219 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value = *_tmp_219;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value += -3094;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000219\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field name: z_coordinate
                                    // Real
                                    // Float
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_220 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value = *_tmp_220;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value += -3094;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000220\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                // Field name: radial_shapes_list
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                uint8_t* _ext_flag_142 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000221\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.: " << int(*_ext_flag_142);
                                }
                                
                                int16_t* _tmp_221 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_221;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_221 = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000222\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list. size: " << int(__aux64__);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int m = 0; m < _if__tmp_221; m++) {
                                    its_container_v4_etsi_its_cdd_msgs::msg::RadialShapeDetails seqof_m;  // SEQUENCE
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements.push_back(seqof_m);
                                
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_222;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start.push_back(_tmp_222);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000223\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_223;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end.push_back(_tmp_223);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000224\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end " << tools::green("present");
                                        }
                                        
                                        // Field name: range
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_224 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value = *_tmp_224;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000225\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: horizontal_opening_angle_start
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_225 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value = *_tmp_225;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000226\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: horizontal_opening_angle_end
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_226 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value = *_tmp_226;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000227\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start.size() != 0) {
                                            // Field name: vertical_opening_angle_start
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_227 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value = *_tmp_227;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000228\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end.size() != 0) {
                                            // Field name: vertical_opening_angle_end
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_228 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value = *_tmp_228;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000229\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                        }
                        else
                        {
                            uint16_t* _tmp_229 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2 + int(*_tmp_229);            // Ignoring opentype data
                        }
                    }
                    
                    // Field name: excluded_shapes
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(0) max(4) span(5)
                    uint8_t* _ext_flag_148 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000230\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.: " << int(*_ext_flag_148);
                    }
                    
                    int16_t* _tmp_230 = (int16_t*)buffer;
                    buffer += 2;
                    __aux64__ = *_tmp_230;
                    
                    int _if__tmp_230 = __aux64__;
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000231\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes. size: " << int(__aux64__);
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
                    
                    
                    for(int n = 0; n < _if__tmp_230; n++) {
                        its_container_v4_etsi_its_cdd_msgs::msg::Shape seqof_n;  // CHOICE
                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements.push_back(seqof_n);
                    
                        // Choice
                        uint8_t* _ext_flag_149 = (uint8_t*)buffer++; // ext flag
                        
                           // #0  rectangular   RectangularShape   
                           // #1  circular   CircularShape   
                           // #2  polygonal   PolygonalShape   
                           // #3  elliptical   EllipticalShape   
                           // #4  radial   RadialShape   
                           // #5  radialShapes   RadialShapes   
                        uint8_t _choice_4 = *(buffer++);
                        
                        if(*_ext_flag_149)
                            _choice_4 += 5 + 1; // Ext addition
                        
                        if(_choice_4 == 0) {
                            its_container_v4_etsi_its_cdd_msgs::msg::RectangularShape _tmp_231;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular.push_back(_tmp_231);
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_232;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point.push_back(_tmp_232);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000232\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_233;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation.push_back(_tmp_233);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000233\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_234;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height.push_back(_tmp_234);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000234\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_235;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate.push_back(_tmp_235);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000235\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_236 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value = *_tmp_236;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000236\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_237 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value = *_tmp_237;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000237\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_238 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_238;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000238\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: semi_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_239 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value = *_tmp_239;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000239\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_breadth
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_240 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value = *_tmp_240;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000240\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation.size() != 0) {
                                    // Field name: orientation
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_241 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value = *_tmp_241;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000241\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_242 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value = *_tmp_242;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000242\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_4 == 1)  // CHOICE Shape  fieldName(circular)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::CircularShape _tmp_243;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular.push_back(_tmp_243);
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_244;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point.push_back(_tmp_244);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000243\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_245;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height.push_back(_tmp_245);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000244\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_246;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate.push_back(_tmp_246);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000245\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_247 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value = *_tmp_247;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000246\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_248 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value = *_tmp_248;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000247\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_249 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_249;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000248\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: radius
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_250 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value = *_tmp_250;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000249\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_251 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value = *_tmp_251;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000250\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_4 == 2)  // CHOICE Shape  fieldName(polygonal)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::PolygonalShape _tmp_252;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal.push_back(_tmp_252);
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_253;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point.push_back(_tmp_253);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000251\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_254;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height.push_back(_tmp_254);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000252\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_255;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate.push_back(_tmp_255);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000253\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_256 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value = *_tmp_256;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000254\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_257 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value = *_tmp_257;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000255\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_258 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_258;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000256\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: polygon
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                uint8_t* _ext_flag_165 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000257\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.: " << int(*_ext_flag_165);
                                }
                                
                                int16_t* _tmp_259 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_259;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_259 = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000258\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon. size: " << int(__aux64__);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int o = 0; o < _if__tmp_259; o++) {
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d seqof_o;  // SEQUENCE
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements.push_back(seqof_o);
                                
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_260;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate.push_back(_tmp_260);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000259\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_261 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value = *_tmp_261;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000260\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_262 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value = *_tmp_262;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000261\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_263 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value = *_tmp_263;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000262\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_264 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value = *_tmp_264;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000263\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_4 == 3)  // CHOICE Shape  fieldName(elliptical)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::EllipticalShape _tmp_265;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical.push_back(_tmp_265);
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_266;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point.push_back(_tmp_266);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000264\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_267;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation.push_back(_tmp_267);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000265\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::StandardLength12b _tmp_268;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height.push_back(_tmp_268);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000266\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_269;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate.push_back(_tmp_269);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000267\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_270 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value = *_tmp_270;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000268\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_271 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value = *_tmp_271;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000269\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_272 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_272;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000270\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: semi_major_axis_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_273 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value = *_tmp_273;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000271\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: semi_minor_axis_length
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_274 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value = *_tmp_274;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000272\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation.size() != 0) {
                                    // Field name: orientation
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_275 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value = *_tmp_275;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000273\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height.size() != 0) {
                                    // Field name: height
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_276 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value = *_tmp_276;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000274\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_4 == 4)  // CHOICE Shape  fieldName(radial)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::RadialShape _tmp_277;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial.push_back(_tmp_277);
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianPosition3d _tmp_278;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point.push_back(_tmp_278);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000275\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_279;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start.push_back(_tmp_279);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000276\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_280;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end.push_back(_tmp_280);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000277\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end " << tools::green("present");
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point.size() != 0) {
                                    // Field name: shape_reference_point
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinate _tmp_281;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate.push_back(_tmp_281);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000278\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate " << tools::green("present");
                                        }
                                        
                                        // Field name: x_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_282 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value = *_tmp_282;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000279\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: y_coordinate
                                        // Real
                                        // Float
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        uint16_t* _tmp_283 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value = *_tmp_283;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value += -32768;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value /= 100.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000280\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field name: z_coordinate
                                            // Real
                                            // Float
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            uint16_t* _tmp_284 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value = *_tmp_284;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value += -32768;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value /= 100.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-32768); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000281\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                                
                                // Field name: range
                                // Real
                                // Float
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_285 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value = *_tmp_285;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000282\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: horizontal_opening_angle_start
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_286 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value = *_tmp_286;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000283\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: horizontal_opening_angle_end
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_287 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value = *_tmp_287;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000284\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field name: vertical_opening_angle_start
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_288 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value = *_tmp_288;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000285\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field name: vertical_opening_angle_end
                                    // Real
                                    // Float
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    uint16_t* _tmp_289 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value = *_tmp_289;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value /= 10.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000286\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                        else if(_choice_4 == 5)  // CHOICE Shape  fieldName(radial_shapes)
                        {
                            its_container_v4_etsi_its_cdd_msgs::msg::RadialShapes _tmp_290;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes.push_back(_tmp_290);
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                if(*(buffer++)) { 
                                    its_container_v4_etsi_its_cdd_msgs::msg::CartesianCoordinateSmall _tmp_291;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate.push_back(_tmp_291);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000287\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate " << tools::green("present");
                                }
                                
                                // Field name: ref_point_id
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_292 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_292;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000288\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: x_coordinate
                                // Real
                                // Float
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_293 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value = *_tmp_293;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value += -3094;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000289\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: y_coordinate
                                // Real
                                // Float
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_294 = (uint16_t*) buffer; buffer += 2;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value = *_tmp_294;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value += -3094;
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value;
                                ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000290\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate: " <<
                                                 ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field name: z_coordinate
                                    // Real
                                    // Float
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_295 = (uint16_t*) buffer; buffer += 2;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value = *_tmp_295;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value += -3094;
                                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value;
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value' " << (__aux64__) << " is less than allowable (-3094); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value' " << (__aux64__) << " exceeds max allowable (1001); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000291\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0]: " <<
                                                     ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                                
                                // Field name: radial_shapes_list
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16)
                                uint8_t* _ext_flag_188 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000292\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.: " << int(*_ext_flag_188);
                                }
                                
                                int16_t* _tmp_296 = (int16_t*)buffer;
                                buffer += 2;
                                __aux64__ = *_tmp_296;
                                __aux64__ += 1;     // +min
                                
                                int _if__tmp_296 = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000293\033[0m| SequenceOf ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list. size: " << int(__aux64__);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                                    return false;
                                }
                                
                                
                                for(int p = 0; p < _if__tmp_296; p++) {
                                    its_container_v4_etsi_its_cdd_msgs::msg::RadialShapeDetails seqof_p;  // SEQUENCE
                                    ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements.push_back(seqof_p);
                                
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_297;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start.push_back(_tmp_297);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000294\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            its_container_v4_etsi_its_cdd_msgs::msg::CartesianAngleValue _tmp_298;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end.push_back(_tmp_298);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000295\033[0m| ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end " << tools::green("present");
                                        }
                                        
                                        // Field name: range
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_299 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value = *_tmp_299;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000296\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: horizontal_opening_angle_start
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_300 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value = *_tmp_300;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000297\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        // Field name: horizontal_opening_angle_end
                                        // Real
                                        // Float
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        uint16_t* _tmp_301 = (uint16_t*) buffer; buffer += 2;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value = *_tmp_301;
                                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value;
                                        ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value /= 10.0;
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                            return false;
                                        }
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000298\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end: " <<
                                                         ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value << " (" << __aux64__ << ")";
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start.size() != 0) {
                                            // Field name: vertical_opening_angle_start
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_302 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value = *_tmp_302;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000299\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end.size() != 0) {
                                            // Field name: vertical_opening_angle_end
                                            // Real
                                            // Float
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            uint16_t* _tmp_303 = (uint16_t*) buffer; buffer += 2;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value = *_tmp_303;
                                            __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value;
                                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value /= 10.0;
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                                return false;
                                            }
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000300\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value) << " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0]: " <<
                                                             ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value << " (" << __aux64__ << ")";
                                            }
                                        }
                                }
                        }
                        else
                        {
                            uint16_t* _tmp_304 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2 + int(*_tmp_304);            // Ignoring opentype data
                        }
                    }
                
                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.size() != 0) {
                    // Field name: epu_section_capabilities
                        // EPUSectionCapabilities  SEQUENCE
                            //  companyName EPUSectionCapabilities_companyName     
                            //  sensorTypes SensorTypes                            
                            //  ...
                        uint8_t* _ext_flag_194 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000301\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].: " << int(*_ext_flag_194);
                        }
                        
                        
                        // Field name: company_name
                        // Text
                        
                        // TEXT  min(1) max(24) span(24)
                        uint8_t* _tmp_305 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_305 + 1;
                        buffer += 1;
                        
                        int _if__tmp_305 = __aux64__;
                        for(int q = 0; q < _if__tmp_305; q++) {  // EPUSectionCapabilities_companyName
                            char* __tmp__ = (char*)buffer++;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value += *__tmp__;
                        }
                        
                        // Field name: sensor_types
                        // BitString
                        // BIT_STRING  min(16) max(16) span(1)
                        uint8_t* _ext_flag_195 = (uint8_t*) buffer++;  // Read ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000302\033[0m| Reading ext flag from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.: " << int(*_ext_flag_195);
                        }
                        
                        uint8_t* _tmp_306 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_306 + 16;
                        buffer += 1;
                        
                        if(debug)
                            logger->print() << "|\033[38;5;94m000303\033[0m| epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value: " << __aux64__;
                        
                        int _if__tmp_306 = __aux64__;
                        for(int r = 0; r < _if__tmp_306; r++) {
                            uint8_t __c__;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values[r] = (*__b__ == 1);
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
                        if(*_ext_flag_194) { // from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0]. 
                            uint8_t* _tmp_307 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_5[*_tmp_307];
                            
                            if(debug)
                                logger->print() << "|\033[38;5;94m000304\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].: " << static_cast<unsigned int>(*_tmp_307);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_307; i++)
                                _array_5[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_307; i++) {
                                uint16_t* _tmp_308 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_308; i++)
                                    buffer++;
                            }
                            
                        }
                }
                if(*_ext_flag_101) { // from ros->epu_to_vehicle.epu_low_frequency_container[0]. 
                    uint8_t* _tmp_309 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_6[*_tmp_309];
                    
                    if(debug)
                        logger->print() << "|\033[38;5;94m000305\033[0m| Reading number of exts from ros->epu_to_vehicle.epu_low_frequency_container[0].: " << static_cast<unsigned int>(*_tmp_309);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_309; i++)
                        _array_6[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_309; i++) {
                        uint16_t* _tmp_310 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_310; i++)
                            buffer++;
                    }
                    
                }
        }
	
	        return true;
        }
    }
}