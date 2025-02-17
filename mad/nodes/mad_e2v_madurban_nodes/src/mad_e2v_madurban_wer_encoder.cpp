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
#include <mad_e2v_madurban_wer_encoder.h>

namespace wind
{
    namespace encoder_mad_e2v_madurban
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const mad_e2v_madurban_msgs::EPUtoVehicle::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<mad_e2v_madurban_msgs::msg::EPUtoVehicle>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const mad_e2v_madurban_msgs::msg::EPUtoVehicle* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // EPUtoVehicle  SEQUENCE
        //  header       ItsPduHeader            
        //  epuToVehicle EPUtoVehiclePayload     
    // Optional fields bytemap
    
    // Field:  type(ItsPduHeader) name(hheader) extGroup(0)
        // ItsPduHeader  SEQUENCE
            //  protocolVersion OrdinalNumber1B     
            //  messageId       MessageId           
            //  stationId       StationId           
        // Optional fields bytemap
        
        // Field:  type(OrdinalNumber1B) name(protocol_version) extGroup(0)
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
        
        // Field:  type(MessageId) name(message_id) extGroup(0)
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
        
        // Field:  type(StationId) name(station_id) extGroup(0)
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
    
    // Field:  type(EPUtoVehiclePayload) name(epu_to_vehicle) extGroup(0)
        // EPUtoVehiclePayload  SEQUENCE
            //  managementContainer       ManagementContainer           
            //  epuHighFrequencyContainer EPUHighFrequencyContainer     
            //  epuLowFrequencyContainer  EPULowFrequencyContainer    OPTIONAL  
        // Optional fields bytemap
        char* _tmp_4 = (char*) buffer++;
        *_tmp_4 = (ros->epu_to_vehicle.epu_low_frequency_container.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000003\033[0m| Optional field epu_low_frequency_container = " << *_tmp_4;
        
        // Field:  type(ManagementContainer) name(management_container) extGroup(0)
            // ManagementContainer  SEQUENCE
                //  referenceTime     GenerationDeltaTime     
                //  referencePosition ReferencePosition       
                //  ...
            uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Write extension flag for ManagementContainer
            *_ext_flag_4 = 0;  
            
            // Optional fields bytemap
            
            // Field:  type(GenerationDeltaTime) name(reference_time) extGroup(0)
            // Integer
            
            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
            if(debug) {
                logger->debug() << "|\033[38;5;94m000004\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_time.value) << 
                             " epu_to_vehicle.management_container.reference_time.value: " << ros->epu_to_vehicle.management_container.reference_time.value;
            }
            
            uint16_t* _tmp_5 = (uint16_t*) buffer; buffer += 2;
            *_tmp_5 = ros->epu_to_vehicle.management_container.reference_time.value; 
            __aux64__ = ros->epu_to_vehicle.management_container.reference_time.value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_time.value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_time.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
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
                    logger->debug() << "|\033[38;5;94m000005\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.latitude.value) << 
                                 " epu_to_vehicle.management_container.reference_position.latitude.value: " << ros->epu_to_vehicle.management_container.reference_position.latitude.value;
                }
                
                double _tmp_7 = ros->epu_to_vehicle.management_container.reference_position.latitude.value;
                _tmp_7 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_7);
                _tmp_7 -= -900000000;
                uint32_t* _tmp_6 = (uint32_t*) buffer; buffer += 4;
                *_tmp_6 = static_cast<uint32_t>(_tmp_7);
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                    return -1;
                }
                
                // Field:  type(Longitude) name(longitude) extGroup(0)
                // Real
                
                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000006\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.longitude.value) << 
                                 " epu_to_vehicle.management_container.reference_position.longitude.value: " << ros->epu_to_vehicle.management_container.reference_position.longitude.value;
                }
                
                double _tmp_9 = ros->epu_to_vehicle.management_container.reference_position.longitude.value;
                _tmp_9 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_9);
                _tmp_9 -= -1800000000;
                uint32_t* _tmp_8 = (uint32_t*) buffer; buffer += 4;
                *_tmp_8 = static_cast<uint32_t>(_tmp_9);
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                    logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
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
                        logger->debug() << "|\033[38;5;94m000007\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    }
                    
                    float _tmp_11 = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    _tmp_11 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_11);
                    uint16_t* _tmp_10 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_10 = static_cast<uint16_t>(_tmp_11);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                    // Real
                    
                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000008\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    }
                    
                    float _tmp_13 = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    _tmp_13 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_13);
                    uint16_t* _tmp_12 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_12 = static_cast<uint16_t>(_tmp_13);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                    // Real
                    
                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000009\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                     " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    }
                    
                    float _tmp_15 = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    _tmp_15 *= 10.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_15);
                    uint16_t* _tmp_14 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_14 = static_cast<uint16_t>(_tmp_15);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
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
                        logger->debug() << "|\033[38;5;94m000010\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value) << 
                                     " epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value: " << ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value;
                    }
                    
                    float _tmp_17 = ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value;
                    _tmp_17 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_17);
                    _tmp_17 -= -100000;
                    uint32_t* _tmp_16 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_16 = static_cast<uint32_t>(_tmp_17);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -100000) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") less than (-100000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 800001) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") exceeds max allowable (800001); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(15) span(16) dataType(Int32)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000011\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value);
                    }
                    
                    uint8_t* _tmp_18 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_18 = ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value; 
                    __aux64__ = ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 15) {
                        logger->warning() << "Error: Value in 'epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                        return -1;
                    }
            
            if(*_ext_flag_4) {
            }
        
        // Field:  type(EPUHighFrequencyContainer) name(epu_high_frequency_container) extGroup(0)
            // EPUHighFrequencyContainer  SEQUENCE
                //  behaviours Behaviours      OPTIONAL  
                //  safety     SafetyAdvices   OPTIONAL  
            // Optional fields bytemap
            char* _tmp_20 = (char*) buffer++;
            *_tmp_20 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000012\033[0m| Optional field behaviours = " << *_tmp_20;
            char* _tmp_21 = (char*) buffer++;
            *_tmp_21 = (ros->epu_to_vehicle.epu_high_frequency_container.safety.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000013\033[0m| Optional field safety = " << *_tmp_21;
            
            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours.size() != 0) {
                // Field:  type(Behaviours) name(behaviours) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(10) span(10) ext(true)
                uint8_t* _ext_flag_13 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].
                *_ext_flag_13 = 0; 
                
                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements.size();
                if(__aux64__ > 10) __aux64__ = 10;
                uint16_t* _tmp_22 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_22 = __aux64__ - 1;
                
                int __ifa = __aux64__;
                for(int a = 0; a < __ifa; a++) { 
                    
                        // BehaviourContainer  SEQUENCE
                            //  subjectStationID     StationId          
                            //  movementAdvice       MovementAdvice     
                            //  exteriorLightsAdvice ExteriorLights   OPTIONAL  
                            //  hornAdvice           HornAdvice       OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_14 = (uint8_t*) buffer++;  // Write extension flag for BehaviourContainer
                        *_ext_flag_14 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_23 = (char*) buffer++;
                        *_tmp_23 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000015\033[0m| Optional field exterior_lights_advice = " << *_tmp_23;
                        char* _tmp_24 = (char*) buffer++;
                        *_tmp_24 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000016\033[0m| Optional field horn_advice = " << *_tmp_24;
                        
                        // Field:  type(StationId) name(subject_station_id) extGroup(0)
                        // Integer
                        
                        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000017\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value;
                        }
                        
                        uint32_t* _tmp_25 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_25 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value; 
                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].subject_station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MovementAdvice) name(movement_advice) extGroup(0)
                            // MovementAdvice  SEQUENCE
                                //  maneuverAdvice   ManeuverAdvice     OPTIONAL  
                                //  trajectoryAdvice TrajectoryAdvice   OPTIONAL  
                                //  controlAdvice    ControlAdvice      OPTIONAL  
                            // Optional fields bytemap
                            char* _tmp_26 = (char*) buffer++;
                            *_tmp_26 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000018\033[0m| Optional field maneuver_advice = " << *_tmp_26;
                            char* _tmp_27 = (char*) buffer++;
                            *_tmp_27 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000019\033[0m| Optional field trajectory_advice = " << *_tmp_27;
                            char* _tmp_28 = (char*) buffer++;
                            *_tmp_28 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000020\033[0m| Optional field control_advice = " << *_tmp_28;
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice.size() != 0) {
                                // Field:  type(ManeuverAdvice) name(maneuver_advice) extGroup(0)
                                    // ManeuverAdvice  SEQUENCE
                                        //  nominalManeuver ManeuverAdviceNominal     
                                        //  mrmManeuver     ManeuverAdviceMRM         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ManeuverAdviceNominal) name(nominal_maneuver) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(12) span(13) dataType(Int32)
                                    uint8_t* _ext_flag_16 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000021\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value);
                                    }
                                    
                                    uint8_t* _tmp_29 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_29 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].nominal_maneuver.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ManeuverAdviceMRM) name(mrm_maneuver) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(6) span(7) dataType(Int32)
                                    uint8_t* _ext_flag_17 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000022\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value);
                                    }
                                    
                                    uint8_t* _tmp_30 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_30 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 6) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.maneuver_advice[0].mrm_maneuver.value' (" << __aux64__ << ") exceeds max allowable (6); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice.size() != 0) {
                                // Field:  type(TrajectoryAdvice) name(trajectory_advice) extGroup(0)
                                    // TrajectoryAdvice  SEQUENCE
                                        //  nominalTrajectory PathPredicted     
                                        //  mrmTrajectory     PathPredicted     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(PathPredicted) name(nominal_trajectory) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_18 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.
                                    *_ext_flag_18 = 0; 
                                    
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_31 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_31 = __aux64__ - 1;
                                    
                                    int __ifb = __aux64__;
                                    for(int b = 0; b < __ifb; b++) { 
                                        
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
                                            uint8_t* _ext_flag_19 = (uint8_t*) buffer++;  // Write extension flag for PathPointPredicted
                                            *_ext_flag_19 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration.size() != 0) ? 1 : 0; 
                                            
                                            // Optional fields bytemap
                                            char* _tmp_32 = (char*) buffer++;
                                            *_tmp_32 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000024\033[0m| Optional field horizontal_position_confidence = " << *_tmp_32;
                                            char* _tmp_33 = (char*) buffer++;
                                            *_tmp_33 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000025\033[0m| Optional field path_delta_time = " << *_tmp_33;
                                            char* _tmp_34 = (char*) buffer++;
                                            *_tmp_34 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000026\033[0m| Optional field symmetric_area_offset = " << *_tmp_34;
                                            char* _tmp_35 = (char*) buffer++;
                                            *_tmp_35 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000027\033[0m| Optional field asymmetric_area_offset = " << *_tmp_35;
                                            
                                            // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000028\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value;
                                            }
                                            
                                            double _tmp_37 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value;
                                            _tmp_37 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_37);
                                            _tmp_37 -= -131071;
                                            uint32_t* _tmp_36 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_36 = static_cast<uint32_t>(_tmp_37);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000029\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value;
                                            }
                                            
                                            double _tmp_39 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value;
                                            _tmp_39 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_39);
                                            _tmp_39 -= -131071;
                                            uint32_t* _tmp_38 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_38 = static_cast<uint32_t>(_tmp_39);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence.size() != 0) {
                                                // Field:  type(PosConfidenceEllipse) name(horizontal_position_confidence) extGroup(0)
                                                    // PosConfidenceEllipse  SEQUENCE
                                                        //  semiMajorConfidence  SemiAxisLength     
                                                        //  semiMinorConfidence  SemiAxisLength     
                                                        //  semiMajorOrientation HeadingValue       
                                                    // Optional fields bytemap
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_major_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000030\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    }
                                                    
                                                    float _tmp_41 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    _tmp_41 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_41);
                                                    uint16_t* _tmp_40 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_40 = static_cast<uint16_t>(_tmp_41);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000031\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    }
                                                    
                                                    float _tmp_43 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    _tmp_43 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_43);
                                                    uint16_t* _tmp_42 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_42 = static_cast<uint16_t>(_tmp_43);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000032\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    }
                                                    
                                                    float _tmp_45 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    _tmp_45 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_45);
                                                    uint16_t* _tmp_44 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_44 = static_cast<uint16_t>(_tmp_45);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                            }
                                            
                                            // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000033\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value;
                                            }
                                            
                                            float _tmp_47 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value;
                                            _tmp_47 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_47);
                                            _tmp_47 -= -12700;
                                            uint16_t* _tmp_46 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_46 = static_cast<uint16_t>(_tmp_47);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000034\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value);
                                            }
                                            
                                            uint8_t* _tmp_48 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_48 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value; 
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time.size() != 0) {
                                                // Field:  type(PathDeltaTimeChoice) name(path_delta_time) extGroup(0)
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds
                                                uint8_t* _choice_1 = (uint8_t*) buffer;
                                                buffer++;
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision.size() != 0) {  // CHOICE 0  fieldType(PathDeltaTimeChoice) 
                                                    *_choice_1 = 0;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000035\033[0m| Choice selection: 0";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000036\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value);
                                                    }
                                                    
                                                    float _tmp_50 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value;
                                                    _tmp_50 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_50);
                                                    uint8_t* _tmp_49 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_49 = static_cast<uint8_t>(_tmp_50);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range.size() != 0)  // CHOICE 1  fieldType(PathDeltaTimeChoice) 
                                                {
                                                    *_choice_1 = 1;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000037\033[0m| Choice selection: 1";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000038\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value);
                                                    }
                                                    
                                                    float _tmp_52 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value;
                                                    _tmp_52 *= 0.1;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_52);
                                                    uint8_t* _tmp_51 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_51 = static_cast<uint8_t>(_tmp_52);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_1) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].path_delta_time[0]'; message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(symmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000039\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_54 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value;
                                                _tmp_54 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_54);
                                                uint16_t* _tmp_53 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_53 = static_cast<uint16_t>(_tmp_54);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].symmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(asymmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000040\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_56 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value;
                                                _tmp_56 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_56);
                                                uint16_t* _tmp_55 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_55 = static_cast<uint16_t>(_tmp_56);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].asymmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(*_ext_flag_19) {
                                                // Write number of extensions 
                                                uint8_t* _tmp_57 = (uint8_t*) buffer++;
                                                *_tmp_57 = 1;
                                                
                                                // Write Bytemap
                                                // extension group #1)
                                                uint8_t* _tmp_58 = (uint8_t*) buffer++;
                                                *_tmp_58 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration.size() != 0) ? 1 : 0;
                                                
                                                // OpenType length variable 
                                                uint16_t* _tmp_59_openType = (uint16_t*) buffer;
                                                buffer += 2;
                                                const uint8_t *_tmp_60_start = buffer; // Starting point
                                                
                                                // Optional fields bytemap
                                                uint8_t* _tmp_61 = (uint8_t*)buffer++;
                                                *_tmp_61 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_62 = (uint8_t*)buffer++;
                                                *_tmp_62 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_63 = (uint8_t*)buffer++;
                                                *_tmp_63 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration.size() != 0 ? 1: 0);
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value.size() != 0) {
                                                    // Field:  type(HeadingValue) name(heading_value) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000041\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value;
                                                    }
                                                    
                                                    float _tmp_65 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value;
                                                    _tmp_65 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_65);
                                                    uint16_t* _tmp_64 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_64 = static_cast<uint16_t>(_tmp_65);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].heading_value[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed.size() != 0) {
                                                    // Field:  type(SpeedValue) name(abs_speed) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000042\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value;
                                                    }
                                                    
                                                    float _tmp_67 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value;
                                                    _tmp_67 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_67);
                                                    uint16_t* _tmp_66 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_66 = static_cast<uint16_t>(_tmp_67);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].abs_speed[0].value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration.size() != 0) {
                                                    // Field:  type(AccelerationValue) name(longitudinal_acceleration) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000043\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value;
                                                    }
                                                    
                                                    float _tmp_69 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value;
                                                    _tmp_69 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_69);
                                                    _tmp_69 -= -160;
                                                    uint16_t* _tmp_68 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_68 = static_cast<uint16_t>(_tmp_69);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].nominal_trajectory.elements[b].longitudinal_acceleration[0].value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                *_tmp_59_openType = buffer - _tmp_60_start;  // OpenType length
                                            }
                                    }
                                    
                                    // Field:  type(PathPredicted) name(mrm_trajectory) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_35 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.
                                    *_ext_flag_35 = 0; 
                                    
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_70 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_70 = __aux64__ - 1;
                                    
                                    int __ifc = __aux64__;
                                    for(int c = 0; c < __ifc; c++) { 
                                        
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
                                            uint8_t* _ext_flag_36 = (uint8_t*) buffer++;  // Write extension flag for PathPointPredicted
                                            *_ext_flag_36 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration.size() != 0) ? 1 : 0; 
                                            
                                            // Optional fields bytemap
                                            char* _tmp_71 = (char*) buffer++;
                                            *_tmp_71 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000045\033[0m| Optional field horizontal_position_confidence = " << *_tmp_71;
                                            char* _tmp_72 = (char*) buffer++;
                                            *_tmp_72 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000046\033[0m| Optional field path_delta_time = " << *_tmp_72;
                                            char* _tmp_73 = (char*) buffer++;
                                            *_tmp_73 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000047\033[0m| Optional field symmetric_area_offset = " << *_tmp_73;
                                            char* _tmp_74 = (char*) buffer++;
                                            *_tmp_74 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m000048\033[0m| Optional field asymmetric_area_offset = " << *_tmp_74;
                                            
                                            // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000049\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value;
                                            }
                                            
                                            double _tmp_76 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value;
                                            _tmp_76 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_76);
                                            _tmp_76 -= -131071;
                                            uint32_t* _tmp_75 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_75 = static_cast<uint32_t>(_tmp_76);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000050\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value;
                                            }
                                            
                                            double _tmp_78 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value;
                                            _tmp_78 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_78);
                                            _tmp_78 -= -131071;
                                            uint32_t* _tmp_77 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_77 = static_cast<uint32_t>(_tmp_78);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence.size() != 0) {
                                                // Field:  type(PosConfidenceEllipse) name(horizontal_position_confidence) extGroup(0)
                                                    // PosConfidenceEllipse  SEQUENCE
                                                        //  semiMajorConfidence  SemiAxisLength     
                                                        //  semiMinorConfidence  SemiAxisLength     
                                                        //  semiMajorOrientation HeadingValue       
                                                    // Optional fields bytemap
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_major_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000051\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    }
                                                    
                                                    float _tmp_80 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    _tmp_80 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_80);
                                                    uint16_t* _tmp_79 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_79 = static_cast<uint16_t>(_tmp_80);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000052\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    }
                                                    
                                                    float _tmp_82 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    _tmp_82 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_82);
                                                    uint16_t* _tmp_81 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_81 = static_cast<uint16_t>(_tmp_82);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000053\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    }
                                                    
                                                    float _tmp_84 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    _tmp_84 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_84);
                                                    uint16_t* _tmp_83 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_83 = static_cast<uint16_t>(_tmp_84);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                            }
                                            
                                            // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000054\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value;
                                            }
                                            
                                            float _tmp_86 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value;
                                            _tmp_86 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_86);
                                            _tmp_86 -= -12700;
                                            uint16_t* _tmp_85 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_85 = static_cast<uint16_t>(_tmp_86);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000055\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value);
                                            }
                                            
                                            uint8_t* _tmp_87 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_87 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value; 
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time.size() != 0) {
                                                // Field:  type(PathDeltaTimeChoice) name(path_delta_time) extGroup(0)
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds
                                                uint8_t* _choice_2 = (uint8_t*) buffer;
                                                buffer++;
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision.size() != 0) {  // CHOICE 0  fieldType(PathDeltaTimeChoice) 
                                                    *_choice_2 = 0;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000056\033[0m| Choice selection: 0";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000057\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value);
                                                    }
                                                    
                                                    float _tmp_89 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value;
                                                    _tmp_89 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_89);
                                                    uint8_t* _tmp_88 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_88 = static_cast<uint8_t>(_tmp_89);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range.size() != 0)  // CHOICE 1  fieldType(PathDeltaTimeChoice) 
                                                {
                                                    *_choice_2 = 1;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m000058\033[0m| Choice selection: 1";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000059\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value);
                                                    }
                                                    
                                                    float _tmp_91 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value;
                                                    _tmp_91 *= 0.1;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_91);
                                                    uint8_t* _tmp_90 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_90 = static_cast<uint8_t>(_tmp_91);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_2) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].path_delta_time[0]'; message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(symmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000060\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_93 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value;
                                                _tmp_93 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_93);
                                                uint16_t* _tmp_92 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_92 = static_cast<uint16_t>(_tmp_93);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].symmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(asymmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m000061\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_95 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value;
                                                _tmp_95 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_95);
                                                uint16_t* _tmp_94 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_94 = static_cast<uint16_t>(_tmp_95);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].asymmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(*_ext_flag_36) {
                                                // Write number of extensions 
                                                uint8_t* _tmp_96 = (uint8_t*) buffer++;
                                                *_tmp_96 = 1;
                                                
                                                // Write Bytemap
                                                // extension group #1)
                                                uint8_t* _tmp_97 = (uint8_t*) buffer++;
                                                *_tmp_97 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration.size() != 0) ? 1 : 0;
                                                
                                                // OpenType length variable 
                                                uint16_t* _tmp_98_openType = (uint16_t*) buffer;
                                                buffer += 2;
                                                const uint8_t *_tmp_99_start = buffer; // Starting point
                                                
                                                // Optional fields bytemap
                                                uint8_t* _tmp_100 = (uint8_t*)buffer++;
                                                *_tmp_100 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_101 = (uint8_t*)buffer++;
                                                *_tmp_101 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_102 = (uint8_t*)buffer++;
                                                *_tmp_102 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration.size() != 0 ? 1: 0);
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value.size() != 0) {
                                                    // Field:  type(HeadingValue) name(heading_value) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000062\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value;
                                                    }
                                                    
                                                    float _tmp_104 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value;
                                                    _tmp_104 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_104);
                                                    uint16_t* _tmp_103 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_103 = static_cast<uint16_t>(_tmp_104);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].heading_value[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed.size() != 0) {
                                                    // Field:  type(SpeedValue) name(abs_speed) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000063\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value;
                                                    }
                                                    
                                                    float _tmp_106 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value;
                                                    _tmp_106 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_106);
                                                    uint16_t* _tmp_105 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_105 = static_cast<uint16_t>(_tmp_106);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].abs_speed[0].value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration.size() != 0) {
                                                    // Field:  type(AccelerationValue) name(longitudinal_acceleration) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m000064\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value;
                                                    }
                                                    
                                                    float _tmp_108 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value;
                                                    _tmp_108 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_108);
                                                    _tmp_108 -= -160;
                                                    uint16_t* _tmp_107 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_107 = static_cast<uint16_t>(_tmp_108);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.trajectory_advice[0].mrm_trajectory.elements[c].longitudinal_acceleration[0].value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                *_tmp_98_openType = buffer - _tmp_99_start;  // OpenType length
                                            }
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice.size() != 0) {
                                // Field:  type(ControlAdvice) name(control_advice) extGroup(0)
                                    // ControlAdvice  SEQUENCE
                                        //  driveDirection DriveDirection         
                                        //  acceleration   AccelerationValue      
                                        //  steeringAngle  SteeringAngleValue     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(DriveDirection) name(drive_direction) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000065\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value);
                                    }
                                    
                                    uint8_t* _tmp_109 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_109 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].drive_direction.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AccelerationValue) name(acceleration) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000066\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value;
                                    }
                                    
                                    float _tmp_111 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value;
                                    _tmp_111 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_111);
                                    _tmp_111 -= -160;
                                    uint16_t* _tmp_110 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_110 = static_cast<uint16_t>(_tmp_111);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].acceleration.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(SteeringAngleValue) name(steering_angle) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-160) max(160) span(321) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000067\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value;
                                    }
                                    
                                    uint16_t* _tmp_112 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value - -160;
                                    *_tmp_112 = __aux64__;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].movement_advice.control_advice[0].steering_angle.value' (" << __aux64__ << ") exceeds max allowable (160); message dropped.";
                                        return -1;
                                    }
                            }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice.size() != 0) {
                            // Field:  type(ExteriorLights) name(exterior_lights_advice) extGroup(0)
                            // BitString
                            // BIT_STRING  min(8) max(8) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000068\033[0m| epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].values.size());
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].values.size() < 8) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].value' " << (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].values.size()) << " is less than allowable (8); message dropped.";
                                return -1;
                            }
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].values.size() > 8) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].value' " << (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].values.size()) << " exceeds max allowable (8); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_113 = (uint8_t*)buffer;
                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].values.size();
                            if(__aux64__ > 8) __aux64__ = 8;
                            *_tmp_113 = __aux64__ - 8;
                            buffer += 1;
                            
                            int __ifd = __aux64__;
                            for(int d = 0; d < __ifd; d++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].exterior_lights_advice[0].values[d]? 1: 0);
                            }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice.size() != 0) {
                            // Field:  type(HornAdvice) name(horn_advice) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(3) span(4) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000069\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value) << 
                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value);
                            }
                            
                            uint8_t* _tmp_114 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_114 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value; 
                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[a].horn_advice[0].value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(*_ext_flag_14) {
                        }
                }
            }
            
            if(ros->epu_to_vehicle.epu_high_frequency_container.safety.size() != 0) {
                // Field:  type(SafetyAdvices) name(safety) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(10) span(10) ext(true)
                uint8_t* _ext_flag_56 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.safety[0].
                *_ext_flag_56 = 0; 
                
                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements.size();
                if(__aux64__ > 10) __aux64__ = 10;
                uint16_t* _tmp_116 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_116 = __aux64__ - 1;
                
                int __ife = __aux64__;
                for(int e = 0; e < __ife; e++) { 
                    
                        // SafetyContainer  SEQUENCE
                            //  subjectStationID StationId           
                            //  objectData       RssObjectData     OPTIONAL  
                            //  rssDynamics      RssDynamics       OPTIONAL  
                            //  rssResults       RssCheckResults     
                        // Optional fields bytemap
                        char* _tmp_117 = (char*) buffer++;
                        *_tmp_117 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000071\033[0m| Optional field object_data = " << *_tmp_117;
                        char* _tmp_118 = (char*) buffer++;
                        *_tmp_118 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000072\033[0m| Optional field rss_dynamics = " << *_tmp_118;
                        
                        // Field:  type(StationId) name(subject_station_id) extGroup(0)
                        // Integer
                        
                        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000073\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value;
                        }
                        
                        uint32_t* _tmp_119 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_119 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value; 
                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].subject_station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
                            return -1;
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data.size() != 0) {
                            // Field:  type(RssObjectData) name(object_data) extGroup(0)
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
                                // Optional fields bytemap
                                char* _tmp_120 = (char*) buffer++;
                                *_tmp_120 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000074\033[0m| Optional field steering_angle = " << *_tmp_120;
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000075\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value;
                                }
                                
                                uint16_t* _tmp_121 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_121 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StationType) name(type) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000076\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value);
                                }
                                
                                uint8_t* _tmp_122 = (uint8_t*) buffer++;
                                *_tmp_122 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].type.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(DeltaReferencePosition) name(delta_position) extGroup(0)
                                    // DeltaReferencePosition  SEQUENCE
                                        //  deltaLatitude  DeltaLatitude      
                                        //  deltaLongitude DeltaLongitude     
                                        //  deltaAltitude  DeltaAltitude      
                                    // Optional fields bytemap
                                    
                                    // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000077\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value;
                                    }
                                    
                                    double _tmp_124 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value;
                                    _tmp_124 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_124);
                                    _tmp_124 -= -131071;
                                    uint32_t* _tmp_123 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_123 = static_cast<uint32_t>(_tmp_124);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000078\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value;
                                    }
                                    
                                    double _tmp_126 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value;
                                    _tmp_126 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_126);
                                    _tmp_126 -= -131071;
                                    uint32_t* _tmp_125 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_125 = static_cast<uint32_t>(_tmp_126);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000079\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value;
                                    }
                                    
                                    float _tmp_128 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value;
                                    _tmp_128 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_128);
                                    _tmp_128 -= -12700;
                                    uint16_t* _tmp_127 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_127 = static_cast<uint16_t>(_tmp_128);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].delta_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                        return -1;
                                    }
                                
                                // Field:  type(HeadingValue) name(heading) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000080\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value;
                                }
                                
                                float _tmp_130 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value;
                                _tmp_130 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_130);
                                uint16_t* _tmp_129 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_129 = static_cast<uint16_t>(_tmp_130);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].heading.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SemiAxisLength) name(semi_major_position_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000081\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value;
                                }
                                
                                float _tmp_132 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value;
                                _tmp_132 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_132);
                                uint16_t* _tmp_131 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_131 = static_cast<uint16_t>(_tmp_132);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_major_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SemiAxisLength) name(semi_minor_position_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000082\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value;
                                }
                                
                                float _tmp_134 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value;
                                _tmp_134 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_134);
                                uint16_t* _tmp_133 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_133 = static_cast<uint16_t>(_tmp_134);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].semi_minor_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VehicleLengthValue) name(dimension_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000083\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value;
                                }
                                
                                float _tmp_136 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value;
                                _tmp_136 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_136);
                                _tmp_136 -= 1;
                                uint16_t* _tmp_135 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_135 = static_cast<uint16_t>(_tmp_136);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_length.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VehicleWidth) name(dimension_width) extGroup(0)
                                // Real
                                
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000084\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value);
                                }
                                
                                float _tmp_138 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value;
                                _tmp_138 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_138);
                                _tmp_138 -= 1;
                                uint8_t* _tmp_137 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_137 = static_cast<uint8_t>(_tmp_138);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_width.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VehicleWidth) name(dimension_height) extGroup(0)
                                // Real
                                
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000085\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value);
                                }
                                
                                float _tmp_140 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value;
                                _tmp_140 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_140);
                                _tmp_140 -= 1;
                                uint8_t* _tmp_139 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_139 = static_cast<uint8_t>(_tmp_140);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].dimension_height.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VelocityComponentRange) name(speed_range) extGroup(0)
                                    // VelocityComponentRange  SEQUENCE
                                        //  minimum    VelocityComponentValue     
                                        //  maximum    VelocityComponentValue     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(VelocityComponentValue) name(minimum) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000086\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value;
                                    }
                                    
                                    float _tmp_142 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value;
                                    _tmp_142 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_142);
                                    _tmp_142 -= -16383;
                                    uint16_t* _tmp_141 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_141 = static_cast<uint16_t>(_tmp_142);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(VelocityComponentValue) name(maximum) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000087\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value;
                                    }
                                    
                                    float _tmp_144 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value;
                                    _tmp_144 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_144);
                                    _tmp_144 -= -16383;
                                    uint16_t* _tmp_143 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_143 = static_cast<uint16_t>(_tmp_144);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].speed_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                        return -1;
                                    }
                                
                                // Field:  type(YawRateValue) name(yaw_rate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000088\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value;
                                }
                                
                                float _tmp_146 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value;
                                _tmp_146 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_146);
                                _tmp_146 -= -32766;
                                uint16_t* _tmp_145 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_145 = static_cast<uint16_t>(_tmp_146);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -32766) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value' (" << __aux64__ << ") less than (-32766); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].yaw_rate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle.size() != 0) {
                                    // Field:  type(SteeringAngleValue) name(steering_angle) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-160) max(160) span(321) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000089\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value;
                                    }
                                    
                                    uint16_t* _tmp_147 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value - -160;
                                    *_tmp_147 = __aux64__;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value' (" << __aux64__ << ") less than (-160); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].object_data[0].steering_angle[0].value' (" << __aux64__ << ") exceeds max allowable (160); message dropped.";
                                        return -1;
                                    }
                                }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics.size() != 0) {
                            // Field:  type(RssDynamics) name(rss_dynamics) extGroup(0)
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
                                // Optional fields bytemap
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_accel_max) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000090\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value;
                                }
                                
                                float _tmp_149 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value;
                                _tmp_149 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_149);
                                _tmp_149 -= -160;
                                uint16_t* _tmp_148 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_148 = static_cast<uint16_t>(_tmp_149);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_accel_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_brake_max) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000091\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value;
                                }
                                
                                float _tmp_151 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value;
                                _tmp_151 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_151);
                                _tmp_151 -= -160;
                                uint16_t* _tmp_150 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_150 = static_cast<uint16_t>(_tmp_151);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_brake_min) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000092\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value;
                                }
                                
                                float _tmp_153 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value;
                                _tmp_153 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_153);
                                _tmp_153 -= -160;
                                uint16_t* _tmp_152 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_152 = static_cast<uint16_t>(_tmp_153);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_brake_min_correct) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000093\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value;
                                }
                                
                                float _tmp_155 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value;
                                _tmp_155 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_155);
                                _tmp_155 -= -160;
                                uint16_t* _tmp_154 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_154 = static_cast<uint16_t>(_tmp_155);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lon_brake_min_correct.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LateralAccelerationValue) name(lat_accel_max) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000094\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value;
                                }
                                
                                float _tmp_157 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value;
                                _tmp_157 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_157);
                                _tmp_157 -= -160;
                                uint16_t* _tmp_156 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_156 = static_cast<uint16_t>(_tmp_157);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_accel_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LateralAccelerationValue) name(lat_brake_min) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000095\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value;
                                }
                                
                                float _tmp_159 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value;
                                _tmp_159 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_159);
                                _tmp_159 -= -160;
                                uint16_t* _tmp_158 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_158 = static_cast<uint16_t>(_tmp_159);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lat_brake_min.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LateralFluctuationMargin) name(lateral_fluctuation_margin) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000096\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value);
                                }
                                
                                uint8_t* _tmp_160 = (uint8_t*) buffer++;
                                *_tmp_160 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].lateral_fluctuation_margin.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(DeltaTimeTenthOfSecond) name(response_time) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000097\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value);
                                }
                                
                                float _tmp_162 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value;
                                _tmp_162 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_162);
                                uint8_t* _tmp_161 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_161 = static_cast<uint8_t>(_tmp_162);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].response_time.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SpeedValue) name(max_speed_on_acceleration) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000098\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value;
                                }
                                
                                float _tmp_164 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value;
                                _tmp_164 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_164);
                                uint16_t* _tmp_163 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_163 = static_cast<uint16_t>(_tmp_164);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].max_speed_on_acceleration.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(min_longitudinal_safety_distance) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000099\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value);
                                }
                                
                                float _tmp_166 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value;
                                _tmp_166 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_166);
                                uint8_t* _tmp_165 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_165 = static_cast<uint8_t>(_tmp_166);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].min_longitudinal_safety_distance.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(unstructured_pedestrian_turning_radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000100\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value);
                                }
                                
                                float _tmp_168 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value;
                                _tmp_168 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_168);
                                uint8_t* _tmp_167 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_167 = static_cast<uint8_t>(_tmp_168);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(unstructured_vehicle_min_radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000101\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value);
                                }
                                
                                float _tmp_170 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value;
                                _tmp_170 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_170);
                                uint8_t* _tmp_169 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_169 = static_cast<uint8_t>(_tmp_170);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_min_radius.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(YawAccelerationValue) name(unstructured_vehicle_yaw_rate_change) extGroup(0)
                                // Integer
                                
                                // INT16  min(-2040) max(2041) span(4082) dataType(Int16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000102\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value;
                                }
                                
                                uint16_t* _tmp_171 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value - -2040;
                                *_tmp_171 = __aux64__;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -2040) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' (" << __aux64__ << ") less than (-2040); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 2041) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' (" << __aux64__ << ") exceeds max allowable (2041); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(HeadingValue) name(unstructured_drive_away_max_angle) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000103\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value;
                                }
                                
                                float _tmp_173 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value;
                                _tmp_173 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_173);
                                uint16_t* _tmp_172 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_172 = static_cast<uint16_t>(_tmp_173);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_dynamics[0].unstructured_drive_away_max_angle.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                        }
                        
                        // Field:  type(RssCheckResults) name(rss_results) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(4) span(5) ext(false)
                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements.size();
                        if(__aux64__ > 4) __aux64__ = 4;
                        uint16_t* _tmp_174 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_174 = __aux64__;
                        
                        int __iff = __aux64__;
                        for(int f = 0; f < __iff; f++) { 
                            
                                // RssCheckResult  SEQUENCE
                                    //  v2xLatency        DeltaTimeTenthOfSecond     
                                    //  properResponse    RssProperResponse          
                                    //  rssRoute          RssRoute                 OPTIONAL  
                                    //  vehicleRouteState RssVehicleRouteState     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_175 = (char*) buffer++;
                                *_tmp_175 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000105\033[0m| Optional field rss_route = " << *_tmp_175;
                                char* _tmp_176 = (char*) buffer++;
                                *_tmp_176 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000106\033[0m| Optional field vehicle_route_state = " << *_tmp_176;
                                
                                // Field:  type(DeltaTimeTenthOfSecond) name(v2x_latency) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000107\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value);
                                }
                                
                                float _tmp_178 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value;
                                _tmp_178 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_178);
                                uint8_t* _tmp_177 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_177 = static_cast<uint8_t>(_tmp_178);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].v2x_latency.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(RssProperResponse) name(proper_response) extGroup(0)
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
                                    // Optional fields bytemap
                                    
                                    // Field:  type(RssProperResponseFlags) name(response_flags) extGroup(0)
                                    // BitString
                                    // BIT_STRING  min(8) max(8) span(1)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000108\033[0m| epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.values.size());
                                    
                                    if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.values.size() < 8) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.value' " << (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.values.size()) << " is less than allowable (8); message dropped.";
                                        return -1;
                                    }
                                    if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.values.size() > 8) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.value' " << (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.values.size()) << " exceeds max allowable (8); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _ext_flag_88 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.
                                    *_ext_flag_88 = 0; 
                                    
                                    uint8_t* _tmp_179 = (uint8_t*)buffer;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.values.size();
                                    if(__aux64__ > 8) __aux64__ = 8;
                                    *_tmp_179 = __aux64__ - 8;
                                    buffer += 1;
                                    
                                    int __ifg = __aux64__;
                                    for(int g = 0; g < __ifg; g++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.response_flags.values[g]? 1: 0);
                                    }
                                    
                                    // Field:  type(RssLongitudinalResponse) name(longitudinal_response) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000109\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value);
                                    }
                                    
                                    uint8_t* _tmp_180 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_180 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_response.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(RssLateralResponse) name(lateral_response_right) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000110\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value);
                                    }
                                    
                                    uint8_t* _tmp_181 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_181 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_right.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(RssLateralResponse) name(lateral_response_left) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000111\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value);
                                    }
                                    
                                    uint8_t* _tmp_182 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_182 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_response_left.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(RssUnstructuredConstellationResponse) name(unstructured_constellation_response) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(3) span(4) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000112\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value);
                                    }
                                    
                                    uint8_t* _tmp_183 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_183 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.unstructured_constellation_response.value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianAngleRanges) name(heading_ranges) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5) ext(false)
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    uint16_t* _tmp_184 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_184 = __aux64__;
                                    
                                    int __ifh = __aux64__;
                                    for(int h = 0; h < __ifh; h++) { 
                                        
                                            // CartesianAngleRange  SEQUENCE
                                                //  begin      CartesianAngleValue     
                                                //  end        CartesianAngleValue     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(begin) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000114\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value;
                                            }
                                            
                                            float _tmp_186 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value;
                                            _tmp_186 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_186);
                                            uint16_t* _tmp_185 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_185 = static_cast<uint16_t>(_tmp_186);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].begin.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000115\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value;
                                            }
                                            
                                            float _tmp_188 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value;
                                            _tmp_188 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_188);
                                            uint16_t* _tmp_187 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_187 = static_cast<uint16_t>(_tmp_188);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.heading_ranges.elements[h].end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                    }
                                    
                                    // Field:  type(ObjectIdentifierList) name(dangerous_objects) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5) ext(true)
                                    uint8_t* _ext_flag_95 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.
                                    *_ext_flag_95 = 0; 
                                    
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    uint16_t* _tmp_189 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_189 = __aux64__;
                                    
                                    int __ifi = __aux64__;
                                    for(int i = 0; i < __ifi; i++) { 
                                        
                                        // Integer
                                        
                                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000117\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value;
                                        }
                                        
                                        uint16_t* _tmp_190 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_190 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value; 
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.dangerous_objects.elements[i].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                            return -1;
                                        }
                                        
                                    }
                                    
                                    // Field:  type(LongitudinalAccelerationRange) name(longitudinal_range) extGroup(0)
                                        // LongitudinalAccelerationRange  SEQUENCE
                                            //  minimum    LongitudinalAccelerationValue     
                                            //  maximum    LongitudinalAccelerationValue     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(minimum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000118\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value;
                                        }
                                        
                                        float _tmp_192 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value;
                                        _tmp_192 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_192);
                                        _tmp_192 -= -160;
                                        uint16_t* _tmp_191 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_191 = static_cast<uint16_t>(_tmp_192);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(maximum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000119\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value;
                                        }
                                        
                                        float _tmp_194 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value;
                                        _tmp_194 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_194);
                                        _tmp_194 -= -160;
                                        uint16_t* _tmp_193 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_193 = static_cast<uint16_t>(_tmp_194);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.longitudinal_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                    
                                    // Field:  type(LateralAccelerationRange) name(lateral_right_range) extGroup(0)
                                        // LateralAccelerationRange  SEQUENCE
                                            //  minimum    LateralAccelerationValue     
                                            //  maximum    LateralAccelerationValue     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(LateralAccelerationValue) name(minimum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000120\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value;
                                        }
                                        
                                        float _tmp_196 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value;
                                        _tmp_196 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_196);
                                        _tmp_196 -= -160;
                                        uint16_t* _tmp_195 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_195 = static_cast<uint16_t>(_tmp_196);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(maximum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000121\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value;
                                        }
                                        
                                        float _tmp_198 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value;
                                        _tmp_198 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_198);
                                        _tmp_198 -= -160;
                                        uint16_t* _tmp_197 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_197 = static_cast<uint16_t>(_tmp_198);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_right_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                    
                                    // Field:  type(LateralAccelerationRange) name(lateral_left_range) extGroup(0)
                                        // LateralAccelerationRange  SEQUENCE
                                            //  minimum    LateralAccelerationValue     
                                            //  maximum    LateralAccelerationValue     
                                        // Optional fields bytemap
                                        
                                        // Field:  type(LateralAccelerationValue) name(minimum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000122\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value;
                                        }
                                        
                                        float _tmp_200 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value;
                                        _tmp_200 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_200);
                                        _tmp_200 -= -160;
                                        uint16_t* _tmp_199 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_199 = static_cast<uint16_t>(_tmp_200);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(maximum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000123\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value;
                                        }
                                        
                                        float _tmp_202 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value;
                                        _tmp_202 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_202);
                                        _tmp_202 -= -160;
                                        uint16_t* _tmp_201 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_201 = static_cast<uint16_t>(_tmp_202);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].proper_response.lateral_left_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route.size() != 0) {
                                    // Field:  type(RssRoute) name(rss_route) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(4) span(4) ext(false)
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    uint16_t* _tmp_203 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_203 = __aux64__ - 1;
                                    
                                    int __ifj = __aux64__;
                                    for(int j = 0; j < __ifj; j++) { 
                                        
                                            // DeltaReferencePosition  SEQUENCE
                                                //  deltaLatitude  DeltaLatitude      
                                                //  deltaLongitude DeltaLongitude     
                                                //  deltaAltitude  DeltaAltitude      
                                            // Optional fields bytemap
                                            
                                            // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000125\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value;
                                            }
                                            
                                            double _tmp_205 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value;
                                            _tmp_205 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_205);
                                            _tmp_205 -= -131071;
                                            uint32_t* _tmp_204 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_204 = static_cast<uint32_t>(_tmp_205);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000126\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value;
                                            }
                                            
                                            double _tmp_207 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value;
                                            _tmp_207 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_207);
                                            _tmp_207 -= -131071;
                                            uint32_t* _tmp_206 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_206 = static_cast<uint32_t>(_tmp_207);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000127\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value;
                                            }
                                            
                                            float _tmp_209 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value;
                                            _tmp_209 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_209);
                                            _tmp_209 -= -12700;
                                            uint16_t* _tmp_208 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_208 = static_cast<uint16_t>(_tmp_209);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].rss_route[0].elements[j].delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                                return -1;
                                            }
                                            
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state.size() != 0) {
                                    // Field:  type(RssVehicleRouteState) name(vehicle_route_state) extGroup(0)
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
                                        // Optional fields bytemap
                                        
                                        // Field:  type(HeadingValue) name(route_heading) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000128\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value;
                                        }
                                        
                                        float _tmp_211 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value;
                                        _tmp_211 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_211);
                                        uint16_t* _tmp_210 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_210 = static_cast<uint16_t>(_tmp_211);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(RouteRadius) name(route_radius) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000129\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value;
                                        }
                                        
                                        uint16_t* _tmp_212 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value - -1023;
                                        *_tmp_212 = __aux64__;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_radius.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(route_heading_delta) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000130\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value;
                                        }
                                        
                                        float _tmp_214 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value;
                                        _tmp_214 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_214);
                                        uint16_t* _tmp_213 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_213 = static_cast<uint16_t>(_tmp_214);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_heading_delta.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(VelocityComponentValue) name(route_speed_lon) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000131\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value;
                                        }
                                        
                                        float _tmp_216 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value;
                                        _tmp_216 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_216);
                                        _tmp_216 -= -16383;
                                        uint16_t* _tmp_215 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_215 = static_cast<uint16_t>(_tmp_216);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lon.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(VelocityComponentValue) name(route_speed_lat) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000132\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value;
                                        }
                                        
                                        float _tmp_218 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value;
                                        _tmp_218 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_218);
                                        _tmp_218 -= -16383;
                                        uint16_t* _tmp_217 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_217 = static_cast<uint16_t>(_tmp_218);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_speed_lat.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(route_accel_lon) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000133\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value;
                                        }
                                        
                                        float _tmp_220 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value;
                                        _tmp_220 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_220);
                                        _tmp_220 -= -160;
                                        uint16_t* _tmp_219 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_219 = static_cast<uint16_t>(_tmp_220);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lon.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(route_accel_lat) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000134\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value;
                                        }
                                        
                                        float _tmp_222 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value;
                                        _tmp_222 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_222);
                                        _tmp_222 -= -160;
                                        uint16_t* _tmp_221 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_221 = static_cast<uint16_t>(_tmp_222);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].route_accel_lat.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(avg_route_accel_lon) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000135\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value;
                                        }
                                        
                                        float _tmp_224 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value;
                                        _tmp_224 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_224);
                                        _tmp_224 -= -160;
                                        uint16_t* _tmp_223 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_223 = static_cast<uint16_t>(_tmp_224);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lon.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(avg_route_accel_lat) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000136\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value;
                                        }
                                        
                                        float _tmp_226 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value;
                                        _tmp_226 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_226);
                                        _tmp_226 -= -160;
                                        uint16_t* _tmp_225 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_225 = static_cast<uint16_t>(_tmp_226);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[e].rss_results.elements[f].vehicle_route_state[0].avg_route_accel_lat.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                }
                                
                        }
                        
                }
            }
        
        if(ros->epu_to_vehicle.epu_low_frequency_container.size() != 0) {
            // Field:  type(EPULowFrequencyContainer) name(epu_low_frequency_container) extGroup(0)
                // EPULowFrequencyContainer  SEQUENCE
                    //  epuSectionDimensions   EPUSectionDimensions       
                    //  epuSectionCapabilities EPUSectionCapabilities   OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_115 = (uint8_t*) buffer++;  // Write extension flag for EPULowFrequencyContainer
                *_ext_flag_115 = 0;  
                
                // Optional fields bytemap
                char* _tmp_227 = (char*) buffer++;
                *_tmp_227 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m000137\033[0m| Optional field epu_section_capabilities = " << *_tmp_227;
                
                // Field:  type(EPUSectionDimensions) name(epu_section_dimensions) extGroup(0)
                    // EPUSectionDimensions  SEQUENCE
                        //  includedShapes IncludedShapes     
                        //  excludedShapes ExcludedShapes     
                    // Optional fields bytemap
                    
                    // Field:  type(IncludedShapes) name(included_shapes) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(4) span(4) ext(true)
                    uint8_t* _ext_flag_116 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.
                    *_ext_flag_116 = 0; 
                    
                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements.size();
                    if(__aux64__ > 4) __aux64__ = 4;
                    uint16_t* _tmp_228 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_228 = __aux64__ - 1;
                    
                    int __ifk = __aux64__;
                    for(int k = 0; k < __ifk; k++) { 
                        
                        // Choice
                           // #0  rectangular   RectangularShape
                           // #1  circular   CircularShape
                           // #2  polygonal   PolygonalShape
                           // #3  elliptical   EllipticalShape
                           // #4  radial   RadialShape
                           // #5  radialShapes   RadialShapes
                        uint8_t* _ext_flag_117 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_117 = 0; 
                        
                        uint8_t* _choice_3 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_3 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000139\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_229 = (char*) buffer++;
                                *_tmp_229 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000140\033[0m| Optional field shape_reference_point = " << *_tmp_229;
                                char* _tmp_230 = (char*) buffer++;
                                *_tmp_230 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000141\033[0m| Optional field orientation = " << *_tmp_230;
                                char* _tmp_231 = (char*) buffer++;
                                *_tmp_231 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000142\033[0m| Optional field height = " << *_tmp_231;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_232 = (char*) buffer++;
                                        *_tmp_232 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000143\033[0m| Optional field z_coordinate = " << *_tmp_232;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000144\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_234 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_234 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_234);
                                        _tmp_234 -= -32768;
                                        uint16_t* _tmp_233 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_233 = static_cast<uint16_t>(_tmp_234);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000145\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_236 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_236 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_236);
                                        _tmp_236 -= -32768;
                                        uint16_t* _tmp_235 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_235 = static_cast<uint16_t>(_tmp_236);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000146\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_238 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_238 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_238);
                                            _tmp_238 -= -32768;
                                            uint16_t* _tmp_237 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_237 = static_cast<uint16_t>(_tmp_238);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000147\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_240 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value;
                                _tmp_240 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_240);
                                uint16_t* _tmp_239 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_239 = static_cast<uint16_t>(_tmp_240);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000148\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_242 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value;
                                _tmp_242 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_242);
                                uint16_t* _tmp_241 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_241 = static_cast<uint16_t>(_tmp_242);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000149\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_244 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value;
                                    _tmp_244 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_244);
                                    uint16_t* _tmp_243 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_243 = static_cast<uint16_t>(_tmp_244);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000150\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_246 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value;
                                    _tmp_246 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_246);
                                    uint16_t* _tmp_245 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_245 = static_cast<uint16_t>(_tmp_246);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_3 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000151\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_247 = (char*) buffer++;
                                *_tmp_247 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000152\033[0m| Optional field shape_reference_point = " << *_tmp_247;
                                char* _tmp_248 = (char*) buffer++;
                                *_tmp_248 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000153\033[0m| Optional field height = " << *_tmp_248;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_249 = (char*) buffer++;
                                        *_tmp_249 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000154\033[0m| Optional field z_coordinate = " << *_tmp_249;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000155\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_251 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_251 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_251);
                                        _tmp_251 -= -32768;
                                        uint16_t* _tmp_250 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_250 = static_cast<uint16_t>(_tmp_251);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000156\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_253 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_253 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_253);
                                        _tmp_253 -= -32768;
                                        uint16_t* _tmp_252 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_252 = static_cast<uint16_t>(_tmp_253);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000157\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_255 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_255 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_255);
                                            _tmp_255 -= -32768;
                                            uint16_t* _tmp_254 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_254 = static_cast<uint16_t>(_tmp_255);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000158\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value;
                                }
                                
                                float _tmp_257 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value;
                                _tmp_257 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_257);
                                uint16_t* _tmp_256 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_256 = static_cast<uint16_t>(_tmp_257);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000159\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_259 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value;
                                    _tmp_259 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_259);
                                    uint16_t* _tmp_258 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_258 = static_cast<uint16_t>(_tmp_259);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_3 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000160\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_260 = (char*) buffer++;
                                *_tmp_260 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000161\033[0m| Optional field shape_reference_point = " << *_tmp_260;
                                char* _tmp_261 = (char*) buffer++;
                                *_tmp_261 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000162\033[0m| Optional field height = " << *_tmp_261;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_262 = (char*) buffer++;
                                        *_tmp_262 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000163\033[0m| Optional field z_coordinate = " << *_tmp_262;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000164\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_264 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_264 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_264);
                                        _tmp_264 -= -32768;
                                        uint16_t* _tmp_263 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_263 = static_cast<uint16_t>(_tmp_264);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000165\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_266 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_266 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_266);
                                        _tmp_266 -= -32768;
                                        uint16_t* _tmp_265 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_265 = static_cast<uint16_t>(_tmp_266);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000166\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_268 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_268 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_268);
                                            _tmp_268 -= -32768;
                                            uint16_t* _tmp_267 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_267 = static_cast<uint16_t>(_tmp_268);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_133 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.
                                *_ext_flag_133 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_269 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_269 = __aux64__ - 1;
                                
                                int __ifl = __aux64__;
                                for(int l = 0; l < __ifl; l++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_270 = (char*) buffer++;
                                        *_tmp_270 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000168\033[0m| Optional field z_coordinate = " << *_tmp_270;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000169\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value;
                                        }
                                        
                                        float _tmp_272 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value;
                                        _tmp_272 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_272);
                                        _tmp_272 -= -32768;
                                        uint16_t* _tmp_271 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_271 = static_cast<uint16_t>(_tmp_272);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000170\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value;
                                        }
                                        
                                        float _tmp_274 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value;
                                        _tmp_274 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_274);
                                        _tmp_274 -= -32768;
                                        uint16_t* _tmp_273 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_273 = static_cast<uint16_t>(_tmp_274);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000171\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_276 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value;
                                            _tmp_276 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_276);
                                            _tmp_276 -= -32768;
                                            uint16_t* _tmp_275 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_275 = static_cast<uint16_t>(_tmp_276);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].polygon.elements[l].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000172\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_278 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value;
                                    _tmp_278 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_278);
                                    uint16_t* _tmp_277 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_277 = static_cast<uint16_t>(_tmp_278);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_3 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000173\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_279 = (char*) buffer++;
                                *_tmp_279 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000174\033[0m| Optional field shape_reference_point = " << *_tmp_279;
                                char* _tmp_280 = (char*) buffer++;
                                *_tmp_280 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000175\033[0m| Optional field orientation = " << *_tmp_280;
                                char* _tmp_281 = (char*) buffer++;
                                *_tmp_281 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000176\033[0m| Optional field height = " << *_tmp_281;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_282 = (char*) buffer++;
                                        *_tmp_282 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000177\033[0m| Optional field z_coordinate = " << *_tmp_282;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000178\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_284 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_284 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_284);
                                        _tmp_284 -= -32768;
                                        uint16_t* _tmp_283 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_283 = static_cast<uint16_t>(_tmp_284);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000179\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_286 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_286 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_286);
                                        _tmp_286 -= -32768;
                                        uint16_t* _tmp_285 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_285 = static_cast<uint16_t>(_tmp_286);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000180\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_288 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_288 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_288);
                                            _tmp_288 -= -32768;
                                            uint16_t* _tmp_287 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_287 = static_cast<uint16_t>(_tmp_288);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000181\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_290 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value;
                                _tmp_290 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_290);
                                uint16_t* _tmp_289 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_289 = static_cast<uint16_t>(_tmp_290);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000182\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_292 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value;
                                _tmp_292 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_292);
                                uint16_t* _tmp_291 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_291 = static_cast<uint16_t>(_tmp_292);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000183\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_294 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value;
                                    _tmp_294 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_294);
                                    uint16_t* _tmp_293 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_293 = static_cast<uint16_t>(_tmp_294);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000184\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_296 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value;
                                    _tmp_296 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_296);
                                    uint16_t* _tmp_295 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_295 = static_cast<uint16_t>(_tmp_296);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_3 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000185\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_297 = (char*) buffer++;
                                *_tmp_297 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000186\033[0m| Optional field shape_reference_point = " << *_tmp_297;
                                char* _tmp_298 = (char*) buffer++;
                                *_tmp_298 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000187\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_298;
                                char* _tmp_299 = (char*) buffer++;
                                *_tmp_299 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000188\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_299;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_300 = (char*) buffer++;
                                        *_tmp_300 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000189\033[0m| Optional field z_coordinate = " << *_tmp_300;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000190\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_302 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_302 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_302);
                                        _tmp_302 -= -32768;
                                        uint16_t* _tmp_301 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_301 = static_cast<uint16_t>(_tmp_302);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000191\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_304 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_304 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_304);
                                        _tmp_304 -= -32768;
                                        uint16_t* _tmp_303 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_303 = static_cast<uint16_t>(_tmp_304);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000192\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_306 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_306 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_306);
                                            _tmp_306 -= -32768;
                                            uint16_t* _tmp_305 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_305 = static_cast<uint16_t>(_tmp_306);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000193\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value;
                                }
                                
                                float _tmp_308 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value;
                                _tmp_308 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_308);
                                uint16_t* _tmp_307 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_307 = static_cast<uint16_t>(_tmp_308);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000194\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_310 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value;
                                _tmp_310 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_310);
                                uint16_t* _tmp_309 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_309 = static_cast<uint16_t>(_tmp_310);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000195\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_312 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value;
                                _tmp_312 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_312);
                                uint16_t* _tmp_311 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_311 = static_cast<uint16_t>(_tmp_312);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000196\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_314 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_314 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_314);
                                    uint16_t* _tmp_313 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_313 = static_cast<uint16_t>(_tmp_314);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000197\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_316 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_316 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_316);
                                    uint16_t* _tmp_315 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_315 = static_cast<uint16_t>(_tmp_316);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_3 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000198\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_317 = (char*) buffer++;
                                *_tmp_317 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000199\033[0m| Optional field z_coordinate = " << *_tmp_317;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000200\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_318 = (uint8_t*) buffer++;
                                *_tmp_318 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000201\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_320 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value;
                                _tmp_320 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_320);
                                _tmp_320 -= -3094;
                                uint16_t* _tmp_319 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_319 = static_cast<uint16_t>(_tmp_320);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000202\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_322 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value;
                                _tmp_322 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_322);
                                _tmp_322 -= -3094;
                                uint16_t* _tmp_321 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_321 = static_cast<uint16_t>(_tmp_322);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000203\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_324 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value;
                                    _tmp_324 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_324);
                                    _tmp_324 -= -3094;
                                    uint16_t* _tmp_323 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_323 = static_cast<uint16_t>(_tmp_324);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_157 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.
                                *_ext_flag_157 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_325 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_325 = __aux64__ - 1;
                                
                                int __ifm = __aux64__;
                                for(int m = 0; m < __ifm; m++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_326 = (char*) buffer++;
                                        *_tmp_326 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000205\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_326;
                                        char* _tmp_327 = (char*) buffer++;
                                        *_tmp_327 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000206\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_327;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000207\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value;
                                        }
                                        
                                        float _tmp_329 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value;
                                        _tmp_329 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_329);
                                        uint16_t* _tmp_328 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_328 = static_cast<uint16_t>(_tmp_329);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000208\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_331 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value;
                                        _tmp_331 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_331);
                                        uint16_t* _tmp_330 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_330 = static_cast<uint16_t>(_tmp_331);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000209\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_333 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value;
                                        _tmp_333 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_333);
                                        uint16_t* _tmp_332 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_332 = static_cast<uint16_t>(_tmp_333);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000210\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_335 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value;
                                            _tmp_335 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_335);
                                            uint16_t* _tmp_334 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_334 = static_cast<uint16_t>(_tmp_335);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000211\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_337 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value;
                                            _tmp_337 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_337);
                                            uint16_t* _tmp_336 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_336 = static_cast<uint16_t>(_tmp_337);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k].radial_shapes[0].radial_shapes_list.elements[m].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_3) << ") selected in CHOICE Shape in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[k]'; message dropped.";
                            return -1;
                        }
                    }
                    
                    // Field:  type(ExcludedShapes) name(excluded_shapes) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(0) max(4) span(5) ext(true)
                    uint8_t* _ext_flag_163 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.
                    *_ext_flag_163 = 0; 
                    
                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements.size();
                    if(__aux64__ > 4) __aux64__ = 4;
                    uint16_t* _tmp_338 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_338 = __aux64__;
                    
                    int __ifn = __aux64__;
                    for(int n = 0; n < __ifn; n++) { 
                        
                        // Choice
                           // #0  rectangular   RectangularShape
                           // #1  circular   CircularShape
                           // #2  polygonal   PolygonalShape
                           // #3  elliptical   EllipticalShape
                           // #4  radial   RadialShape
                           // #5  radialShapes   RadialShapes
                        uint8_t* _ext_flag_164 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_164 = 0; 
                        
                        uint8_t* _choice_4 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_4 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000213\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_339 = (char*) buffer++;
                                *_tmp_339 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000214\033[0m| Optional field shape_reference_point = " << *_tmp_339;
                                char* _tmp_340 = (char*) buffer++;
                                *_tmp_340 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000215\033[0m| Optional field orientation = " << *_tmp_340;
                                char* _tmp_341 = (char*) buffer++;
                                *_tmp_341 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000216\033[0m| Optional field height = " << *_tmp_341;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_342 = (char*) buffer++;
                                        *_tmp_342 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000217\033[0m| Optional field z_coordinate = " << *_tmp_342;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000218\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_344 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_344 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_344);
                                        _tmp_344 -= -32768;
                                        uint16_t* _tmp_343 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_343 = static_cast<uint16_t>(_tmp_344);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000219\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_346 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_346 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_346);
                                        _tmp_346 -= -32768;
                                        uint16_t* _tmp_345 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_345 = static_cast<uint16_t>(_tmp_346);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000220\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_348 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_348 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_348);
                                            _tmp_348 -= -32768;
                                            uint16_t* _tmp_347 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_347 = static_cast<uint16_t>(_tmp_348);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000221\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_350 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value;
                                _tmp_350 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_350);
                                uint16_t* _tmp_349 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_349 = static_cast<uint16_t>(_tmp_350);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000222\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_352 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value;
                                _tmp_352 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_352);
                                uint16_t* _tmp_351 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_351 = static_cast<uint16_t>(_tmp_352);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000223\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_354 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value;
                                    _tmp_354 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_354);
                                    uint16_t* _tmp_353 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_353 = static_cast<uint16_t>(_tmp_354);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000224\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_356 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value;
                                    _tmp_356 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_356);
                                    uint16_t* _tmp_355 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_355 = static_cast<uint16_t>(_tmp_356);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_4 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000225\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_357 = (char*) buffer++;
                                *_tmp_357 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000226\033[0m| Optional field shape_reference_point = " << *_tmp_357;
                                char* _tmp_358 = (char*) buffer++;
                                *_tmp_358 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000227\033[0m| Optional field height = " << *_tmp_358;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_359 = (char*) buffer++;
                                        *_tmp_359 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000228\033[0m| Optional field z_coordinate = " << *_tmp_359;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000229\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_361 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_361 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_361);
                                        _tmp_361 -= -32768;
                                        uint16_t* _tmp_360 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_360 = static_cast<uint16_t>(_tmp_361);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000230\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_363 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_363 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_363);
                                        _tmp_363 -= -32768;
                                        uint16_t* _tmp_362 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_362 = static_cast<uint16_t>(_tmp_363);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000231\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_365 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_365 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_365);
                                            _tmp_365 -= -32768;
                                            uint16_t* _tmp_364 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_364 = static_cast<uint16_t>(_tmp_365);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000232\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value;
                                }
                                
                                float _tmp_367 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value;
                                _tmp_367 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_367);
                                uint16_t* _tmp_366 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_366 = static_cast<uint16_t>(_tmp_367);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000233\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_369 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value;
                                    _tmp_369 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_369);
                                    uint16_t* _tmp_368 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_368 = static_cast<uint16_t>(_tmp_369);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_4 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000234\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_370 = (char*) buffer++;
                                *_tmp_370 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000235\033[0m| Optional field shape_reference_point = " << *_tmp_370;
                                char* _tmp_371 = (char*) buffer++;
                                *_tmp_371 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000236\033[0m| Optional field height = " << *_tmp_371;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_372 = (char*) buffer++;
                                        *_tmp_372 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000237\033[0m| Optional field z_coordinate = " << *_tmp_372;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000238\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_374 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_374 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_374);
                                        _tmp_374 -= -32768;
                                        uint16_t* _tmp_373 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_373 = static_cast<uint16_t>(_tmp_374);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000239\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_376 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_376 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_376);
                                        _tmp_376 -= -32768;
                                        uint16_t* _tmp_375 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_375 = static_cast<uint16_t>(_tmp_376);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000240\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_378 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_378 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_378);
                                            _tmp_378 -= -32768;
                                            uint16_t* _tmp_377 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_377 = static_cast<uint16_t>(_tmp_378);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_180 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.
                                *_ext_flag_180 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_379 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_379 = __aux64__ - 1;
                                
                                int __ifo = __aux64__;
                                for(int o = 0; o < __ifo; o++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_380 = (char*) buffer++;
                                        *_tmp_380 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000242\033[0m| Optional field z_coordinate = " << *_tmp_380;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000243\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value;
                                        }
                                        
                                        float _tmp_382 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value;
                                        _tmp_382 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_382);
                                        _tmp_382 -= -32768;
                                        uint16_t* _tmp_381 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_381 = static_cast<uint16_t>(_tmp_382);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000244\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value;
                                        }
                                        
                                        float _tmp_384 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value;
                                        _tmp_384 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_384);
                                        _tmp_384 -= -32768;
                                        uint16_t* _tmp_383 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_383 = static_cast<uint16_t>(_tmp_384);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000245\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_386 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value;
                                            _tmp_386 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_386);
                                            _tmp_386 -= -32768;
                                            uint16_t* _tmp_385 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_385 = static_cast<uint16_t>(_tmp_386);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].polygon.elements[o].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000246\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_388 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value;
                                    _tmp_388 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_388);
                                    uint16_t* _tmp_387 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_387 = static_cast<uint16_t>(_tmp_388);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_4 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000247\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_389 = (char*) buffer++;
                                *_tmp_389 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000248\033[0m| Optional field shape_reference_point = " << *_tmp_389;
                                char* _tmp_390 = (char*) buffer++;
                                *_tmp_390 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000249\033[0m| Optional field orientation = " << *_tmp_390;
                                char* _tmp_391 = (char*) buffer++;
                                *_tmp_391 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000250\033[0m| Optional field height = " << *_tmp_391;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_392 = (char*) buffer++;
                                        *_tmp_392 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000251\033[0m| Optional field z_coordinate = " << *_tmp_392;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000252\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_394 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_394 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_394);
                                        _tmp_394 -= -32768;
                                        uint16_t* _tmp_393 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_393 = static_cast<uint16_t>(_tmp_394);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000253\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_396 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_396 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_396);
                                        _tmp_396 -= -32768;
                                        uint16_t* _tmp_395 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_395 = static_cast<uint16_t>(_tmp_396);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000254\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_398 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_398 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_398);
                                            _tmp_398 -= -32768;
                                            uint16_t* _tmp_397 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_397 = static_cast<uint16_t>(_tmp_398);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000255\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_400 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value;
                                _tmp_400 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_400);
                                uint16_t* _tmp_399 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_399 = static_cast<uint16_t>(_tmp_400);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000256\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_402 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value;
                                _tmp_402 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_402);
                                uint16_t* _tmp_401 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_401 = static_cast<uint16_t>(_tmp_402);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000257\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_404 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value;
                                    _tmp_404 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_404);
                                    uint16_t* _tmp_403 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_403 = static_cast<uint16_t>(_tmp_404);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000258\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_406 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value;
                                    _tmp_406 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_406);
                                    uint16_t* _tmp_405 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_405 = static_cast<uint16_t>(_tmp_406);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_4 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000259\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_407 = (char*) buffer++;
                                *_tmp_407 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000260\033[0m| Optional field shape_reference_point = " << *_tmp_407;
                                char* _tmp_408 = (char*) buffer++;
                                *_tmp_408 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000261\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_408;
                                char* _tmp_409 = (char*) buffer++;
                                *_tmp_409 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000262\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_409;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_410 = (char*) buffer++;
                                        *_tmp_410 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000263\033[0m| Optional field z_coordinate = " << *_tmp_410;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000264\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_412 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_412 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_412);
                                        _tmp_412 -= -32768;
                                        uint16_t* _tmp_411 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_411 = static_cast<uint16_t>(_tmp_412);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000265\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_414 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_414 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_414);
                                        _tmp_414 -= -32768;
                                        uint16_t* _tmp_413 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_413 = static_cast<uint16_t>(_tmp_414);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000266\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_416 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_416 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_416);
                                            _tmp_416 -= -32768;
                                            uint16_t* _tmp_415 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_415 = static_cast<uint16_t>(_tmp_416);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000267\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value;
                                }
                                
                                float _tmp_418 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value;
                                _tmp_418 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_418);
                                uint16_t* _tmp_417 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_417 = static_cast<uint16_t>(_tmp_418);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000268\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_420 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value;
                                _tmp_420 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_420);
                                uint16_t* _tmp_419 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_419 = static_cast<uint16_t>(_tmp_420);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000269\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_422 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value;
                                _tmp_422 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_422);
                                uint16_t* _tmp_421 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_421 = static_cast<uint16_t>(_tmp_422);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000270\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_424 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_424 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_424);
                                    uint16_t* _tmp_423 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_423 = static_cast<uint16_t>(_tmp_424);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000271\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_426 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_426 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_426);
                                    uint16_t* _tmp_425 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_425 = static_cast<uint16_t>(_tmp_426);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_4 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000272\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_427 = (char*) buffer++;
                                *_tmp_427 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000273\033[0m| Optional field z_coordinate = " << *_tmp_427;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000274\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_428 = (uint8_t*) buffer++;
                                *_tmp_428 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000275\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_430 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value;
                                _tmp_430 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_430);
                                _tmp_430 -= -3094;
                                uint16_t* _tmp_429 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_429 = static_cast<uint16_t>(_tmp_430);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000276\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_432 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value;
                                _tmp_432 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_432);
                                _tmp_432 -= -3094;
                                uint16_t* _tmp_431 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_431 = static_cast<uint16_t>(_tmp_432);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000277\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_434 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value;
                                    _tmp_434 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_434);
                                    _tmp_434 -= -3094;
                                    uint16_t* _tmp_433 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_433 = static_cast<uint16_t>(_tmp_434);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_204 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.
                                *_ext_flag_204 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_435 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_435 = __aux64__ - 1;
                                
                                int __ifp = __aux64__;
                                for(int p = 0; p < __ifp; p++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_436 = (char*) buffer++;
                                        *_tmp_436 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000279\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_436;
                                        char* _tmp_437 = (char*) buffer++;
                                        *_tmp_437 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000280\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_437;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000281\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value;
                                        }
                                        
                                        float _tmp_439 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value;
                                        _tmp_439 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_439);
                                        uint16_t* _tmp_438 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_438 = static_cast<uint16_t>(_tmp_439);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000282\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_441 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value;
                                        _tmp_441 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_441);
                                        uint16_t* _tmp_440 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_440 = static_cast<uint16_t>(_tmp_441);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000283\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_443 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value;
                                        _tmp_443 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_443);
                                        uint16_t* _tmp_442 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_442 = static_cast<uint16_t>(_tmp_443);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000284\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_445 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value;
                                            _tmp_445 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_445);
                                            uint16_t* _tmp_444 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_444 = static_cast<uint16_t>(_tmp_445);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000285\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_447 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value;
                                            _tmp_447 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_447);
                                            uint16_t* _tmp_446 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_446 = static_cast<uint16_t>(_tmp_447);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n].radial_shapes[0].radial_shapes_list.elements[p].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_4) << ") selected in CHOICE Shape in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[n]'; message dropped.";
                            return -1;
                        }
                    }
                
                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.size() != 0) {
                    // Field:  type(EPUSectionCapabilities) name(epu_section_capabilities) extGroup(0)
                        // EPUSectionCapabilities  SEQUENCE
                            //  companyName EPUSectionCapabilities_companyName     
                            //  sensorTypes SensorTypes                            
                            //  ...
                        uint8_t* _ext_flag_210 = (uint8_t*) buffer++;  // Write extension flag for EPUSectionCapabilities
                        *_ext_flag_210 = 0;  
                        
                        // Optional fields bytemap
                        
                        // Field:  type(EPUSectionCapabilities_companyName) name(company_name) extGroup(0)
                        // Text
                        
                        // TEXT  min(1) max(24) span(24)
                        uint8_t* _tmp_448 = (uint8_t*)buffer;
                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size();
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size() < 1) {
                            logger->warning() << "Error: Length of 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value) << " is less than allowable (1); message dropped.";
                            return -1;
                        }
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size() > 24) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value) << " exceeds max allowable (24); message dropped.";
                            return -1;
                        }
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000286\033[0m| epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size(): " << 
                                        static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size());
                        
                        if(__aux64__ > 24) __aux64__ = 24;
                        *_tmp_448 = __aux64__ - 1;
                        buffer += 1;
                        
                        int __ifq = __aux64__;
                        for(int q = 0; q < __ifq; q++) {  // 24
                            char* __tmp__ = (char*)buffer++;
                            *__tmp__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.c_str()[q];
                        }
                        
                        // Field:  type(SensorTypes) name(sensor_types) extGroup(0)
                        // BitString
                        // BIT_STRING  min(16) max(16) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000287\033[0m| epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size());
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size() < 16) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size()) << " is less than allowable (16); message dropped.";
                            return -1;
                        }
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size() > 16) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size()) << " exceeds max allowable (16); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _ext_flag_211 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.
                        *_ext_flag_211 = 0; 
                        
                        uint8_t* _tmp_449 = (uint8_t*)buffer;
                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        *_tmp_449 = __aux64__ - 16;
                        buffer += 1;
                        
                        int __ifr = __aux64__;
                        for(int r = 0; r < __ifr; r++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values[r]? 1: 0);
                        }
                        
                        if(*_ext_flag_210) {
                        }
                }
                
                if(*_ext_flag_115) {
                }
        }
    
	
            return buffer - start;
        }
    } 
}