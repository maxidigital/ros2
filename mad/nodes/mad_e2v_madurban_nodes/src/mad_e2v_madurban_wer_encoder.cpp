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
            logger->debug() << "|\033[38;5;94m015793\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_17694 = (uint8_t*) buffer++;
        *_tmp_17694 = ros->hheader.protocol_version.value; 
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
            logger->debug() << "|\033[38;5;94m015794\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_17695 = (uint8_t*) buffer++;
        *_tmp_17695 = ros->hheader.message_id.value; 
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
            logger->debug() << "|\033[38;5;94m015795\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_17696 = (uint32_t*) buffer; buffer += 4;
        *_tmp_17696 = ros->hheader.station_id.value; 
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
        char* _tmp_17697 = (char*) buffer++;
        *_tmp_17697 = (ros->epu_to_vehicle.epu_low_frequency_container.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m015796\033[0m| Optional field epu_low_frequency_container = " << *_tmp_17697;
        
        // Field:  type(ManagementContainer) name(management_container) extGroup(0)
            // ManagementContainer  SEQUENCE
                //  referenceTime     GenerationDeltaTime     
                //  referencePosition ReferencePosition       
                //  ...
            uint8_t* _ext_flag_7753 = (uint8_t*) buffer++;  // Write extension flag for ManagementContainer
            *_ext_flag_7753 = 0;  
            
            // Optional fields bytemap
            
            // Field:  type(GenerationDeltaTime) name(reference_time) extGroup(0)
            // Integer
            
            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
            if(debug) {
                logger->debug() << "|\033[38;5;94m015797\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_time.value) << 
                             " epu_to_vehicle.management_container.reference_time.value: " << ros->epu_to_vehicle.management_container.reference_time.value;
            }
            
            uint16_t* _tmp_17698 = (uint16_t*) buffer; buffer += 2;
            *_tmp_17698 = ros->epu_to_vehicle.management_container.reference_time.value; 
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
                    logger->debug() << "|\033[38;5;94m015798\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.latitude.value) << 
                                 " epu_to_vehicle.management_container.reference_position.latitude.value: " << ros->epu_to_vehicle.management_container.reference_position.latitude.value;
                }
                
                double _tmp_17700 = ros->epu_to_vehicle.management_container.reference_position.latitude.value;
                _tmp_17700 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_17700);
                _tmp_17700 -= -900000000;
                uint32_t* _tmp_17699 = (uint32_t*) buffer; buffer += 4;
                *_tmp_17699 = static_cast<uint32_t>(_tmp_17700);
                
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
                    logger->debug() << "|\033[38;5;94m015799\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.longitude.value) << 
                                 " epu_to_vehicle.management_container.reference_position.longitude.value: " << ros->epu_to_vehicle.management_container.reference_position.longitude.value;
                }
                
                double _tmp_17702 = ros->epu_to_vehicle.management_container.reference_position.longitude.value;
                _tmp_17702 *= 1.0E7;
                __aux64__ = static_cast<uint64_t>(_tmp_17702);
                _tmp_17702 -= -1800000000;
                uint32_t* _tmp_17701 = (uint32_t*) buffer; buffer += 4;
                *_tmp_17701 = static_cast<uint32_t>(_tmp_17702);
                
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
                        logger->debug() << "|\033[38;5;94m015800\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    }
                    
                    float _tmp_17704 = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                    _tmp_17704 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_17704);
                    uint16_t* _tmp_17703 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_17703 = static_cast<uint16_t>(_tmp_17704);
                    
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
                        logger->debug() << "|\033[38;5;94m015801\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    }
                    
                    float _tmp_17706 = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                    _tmp_17706 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_17706);
                    uint16_t* _tmp_17705 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_17705 = static_cast<uint16_t>(_tmp_17706);
                    
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
                        logger->debug() << "|\033[38;5;94m015802\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                     " epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    }
                    
                    float _tmp_17708 = ros->epu_to_vehicle.management_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                    _tmp_17708 *= 10.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_17708);
                    uint16_t* _tmp_17707 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_17707 = static_cast<uint16_t>(_tmp_17708);
                    
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
                        logger->debug() << "|\033[38;5;94m015803\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value) << 
                                     " epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value: " << ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value;
                    }
                    
                    float _tmp_17710 = ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_value.value;
                    _tmp_17710 *= 100.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_17710);
                    _tmp_17710 -= -100000;
                    uint32_t* _tmp_17709 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_17709 = static_cast<uint32_t>(_tmp_17710);
                    
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
                        logger->debug() << "|\033[38;5;94m015804\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value) << 
                                     " epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value);
                    }
                    
                    uint8_t* _tmp_17711 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_17711 = ros->epu_to_vehicle.management_container.reference_position.altitude.altitude_confidence.value; 
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
            
            if(*_ext_flag_7753) {
            }
        
        // Field:  type(EPUHighFrequencyContainer) name(epu_high_frequency_container) extGroup(0)
            // EPUHighFrequencyContainer  SEQUENCE
                //  behaviours Behaviours      OPTIONAL  
                //  safety     SafetyAdvices   OPTIONAL  
            // Optional fields bytemap
            char* _tmp_17713 = (char*) buffer++;
            *_tmp_17713 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m015805\033[0m| Optional field behaviours = " << *_tmp_17713;
            char* _tmp_17714 = (char*) buffer++;
            *_tmp_17714 = (ros->epu_to_vehicle.epu_high_frequency_container.safety.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m015806\033[0m| Optional field safety = " << *_tmp_17714;
            
            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours.size() != 0) {
                // Field:  type(Behaviours) name(behaviours) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(10) span(10) ext(true)
                uint8_t* _ext_flag_7762 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].
                *_ext_flag_7762 = 0; 
                
                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements.size();
                if(__aux64__ > 10) __aux64__ = 10;
                uint16_t* _tmp_17715 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_17715 = __aux64__ - 1;
                
                int __ifm = __aux64__;
                for(int m = 0; m < __ifm; m++) { 
                    
                        // BehaviourContainer  SEQUENCE
                            //  subjectStationID     StationId          
                            //  movementAdvice       MovementAdvice     
                            //  exteriorLightsAdvice ExteriorLights   OPTIONAL  
                            //  hornAdvice           HornAdvice       OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_7763 = (uint8_t*) buffer++;  // Write extension flag for BehaviourContainer
                        *_ext_flag_7763 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_17716 = (char*) buffer++;
                        *_tmp_17716 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015808\033[0m| Optional field exterior_lights_advice = " << *_tmp_17716;
                        char* _tmp_17717 = (char*) buffer++;
                        *_tmp_17717 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].horn_advice.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015809\033[0m| Optional field horn_advice = " << *_tmp_17717;
                        
                        // Field:  type(StationId) name(subject_station_id) extGroup(0)
                        // Integer
                        
                        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015810\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].subject_station_id.value;
                        }
                        
                        uint32_t* _tmp_17718 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_17718 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].subject_station_id.value; 
                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].subject_station_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].subject_station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].subject_station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MovementAdvice) name(movement_advice) extGroup(0)
                            // MovementAdvice  SEQUENCE
                                //  maneuverAdvice   ManeuverAdvice     OPTIONAL  
                                //  trajectoryAdvice TrajectoryAdvice   OPTIONAL  
                                //  controlAdvice    ControlAdvice      OPTIONAL  
                            // Optional fields bytemap
                            char* _tmp_17719 = (char*) buffer++;
                            *_tmp_17719 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015811\033[0m| Optional field maneuver_advice = " << *_tmp_17719;
                            char* _tmp_17720 = (char*) buffer++;
                            *_tmp_17720 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015812\033[0m| Optional field trajectory_advice = " << *_tmp_17720;
                            char* _tmp_17721 = (char*) buffer++;
                            *_tmp_17721 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015813\033[0m| Optional field control_advice = " << *_tmp_17721;
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice.size() != 0) {
                                // Field:  type(ManeuverAdvice) name(maneuver_advice) extGroup(0)
                                    // ManeuverAdvice  SEQUENCE
                                        //  nominalManeuver ManeuverAdviceNominal     
                                        //  mrmManeuver     ManeuverAdviceMRM         
                                    // Optional fields bytemap
                                    
                                    // Field:  type(ManeuverAdviceNominal) name(nominal_maneuver) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(12) span(13) dataType(Int32)
                                    uint8_t* _ext_flag_7765 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].nominal_maneuver.
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015814\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].nominal_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].nominal_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].nominal_maneuver.value);
                                    }
                                    
                                    uint8_t* _tmp_17722 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_17722 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].nominal_maneuver.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].nominal_maneuver.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].nominal_maneuver.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].nominal_maneuver.value' (" << __aux64__ << ") exceeds max allowable (12); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(ManeuverAdviceMRM) name(mrm_maneuver) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(6) span(7) dataType(Int32)
                                    uint8_t* _ext_flag_7766 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].mrm_maneuver.
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015815\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].mrm_maneuver.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].mrm_maneuver.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].mrm_maneuver.value);
                                    }
                                    
                                    uint8_t* _tmp_17723 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_17723 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].mrm_maneuver.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].mrm_maneuver.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].mrm_maneuver.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 6) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.maneuver_advice[0].mrm_maneuver.value' (" << __aux64__ << ") exceeds max allowable (6); message dropped.";
                                        return -1;
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice.size() != 0) {
                                // Field:  type(TrajectoryAdvice) name(trajectory_advice) extGroup(0)
                                    // TrajectoryAdvice  SEQUENCE
                                        //  nominalTrajectory PathPredicted     
                                        //  mrmTrajectory     PathPredicted     
                                    // Optional fields bytemap
                                    
                                    // Field:  type(PathPredicted) name(nominal_trajectory) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_7767 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.
                                    *_ext_flag_7767 = 0; 
                                    
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_17724 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_17724 = __aux64__ - 1;
                                    
                                    int __ifn = __aux64__;
                                    for(int n = 0; n < __ifn; n++) { 
                                        
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
                                            uint8_t* _ext_flag_7768 = (uint8_t*) buffer++;  // Write extension flag for PathPointPredicted
                                            *_ext_flag_7768 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration.size() != 0) ? 1 : 0; 
                                            
                                            // Optional fields bytemap
                                            char* _tmp_17725 = (char*) buffer++;
                                            *_tmp_17725 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m015817\033[0m| Optional field horizontal_position_confidence = " << *_tmp_17725;
                                            char* _tmp_17726 = (char*) buffer++;
                                            *_tmp_17726 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m015818\033[0m| Optional field path_delta_time = " << *_tmp_17726;
                                            char* _tmp_17727 = (char*) buffer++;
                                            *_tmp_17727 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].symmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m015819\033[0m| Optional field symmetric_area_offset = " << *_tmp_17727;
                                            char* _tmp_17728 = (char*) buffer++;
                                            *_tmp_17728 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].asymmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m015820\033[0m| Optional field asymmetric_area_offset = " << *_tmp_17728;
                                            
                                            // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015821\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_latitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_latitude.value;
                                            }
                                            
                                            double _tmp_17730 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_latitude.value;
                                            _tmp_17730 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17730);
                                            _tmp_17730 -= -131071;
                                            uint32_t* _tmp_17729 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_17729 = static_cast<uint32_t>(_tmp_17730);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015822\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_longitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_longitude.value;
                                            }
                                            
                                            double _tmp_17732 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_longitude.value;
                                            _tmp_17732 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17732);
                                            _tmp_17732 -= -131071;
                                            uint32_t* _tmp_17731 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_17731 = static_cast<uint32_t>(_tmp_17732);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence.size() != 0) {
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
                                                        logger->debug() << "|\033[38;5;94m015823\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    }
                                                    
                                                    float _tmp_17734 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    _tmp_17734 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17734);
                                                    uint16_t* _tmp_17733 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17733 = static_cast<uint16_t>(_tmp_17734);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015824\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_minor_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_minor_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    }
                                                    
                                                    float _tmp_17736 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    _tmp_17736 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17736);
                                                    uint16_t* _tmp_17735 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17735 = static_cast<uint16_t>(_tmp_17736);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015825\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_orientation.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_orientation.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    }
                                                    
                                                    float _tmp_17738 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    _tmp_17738 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17738);
                                                    uint16_t* _tmp_17737 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17737 = static_cast<uint16_t>(_tmp_17738);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                            }
                                            
                                            // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015826\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_altitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_altitude.value;
                                            }
                                            
                                            float _tmp_17740 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_altitude.value;
                                            _tmp_17740 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17740);
                                            _tmp_17740 -= -12700;
                                            uint16_t* _tmp_17739 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17739 = static_cast<uint16_t>(_tmp_17740);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015827\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].altitude_confidence.value);
                                            }
                                            
                                            uint8_t* _tmp_17741 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_17741 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].altitude_confidence.value; 
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].altitude_confidence.value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time.size() != 0) {
                                                // Field:  type(PathDeltaTimeChoice) name(path_delta_time) extGroup(0)
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds
                                                uint8_t* _choice_407 = (uint8_t*) buffer;
                                                buffer++;
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_high_precision.size() != 0) {  // CHOICE 0  fieldType(PathDeltaTimeChoice) 
                                                    *_choice_407 = 0;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m015828\033[0m| Choice selection: 0";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015829\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_high_precision[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_high_precision[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_high_precision[0].value);
                                                    }
                                                    
                                                    float _tmp_17743 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_high_precision[0].value;
                                                    _tmp_17743 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17743);
                                                    uint8_t* _tmp_17742 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_17742 = static_cast<uint8_t>(_tmp_17743);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_big_range.size() != 0)  // CHOICE 1  fieldType(PathDeltaTimeChoice) 
                                                {
                                                    *_choice_407 = 1;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m015830\033[0m| Choice selection: 1";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015831\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_big_range[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_big_range[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_big_range[0].value);
                                                    }
                                                    
                                                    float _tmp_17745 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_big_range[0].value;
                                                    _tmp_17745 *= 0.1;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17745);
                                                    uint8_t* _tmp_17744 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_17744 = static_cast<uint8_t>(_tmp_17745);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_407) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].path_delta_time[0]'; message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].symmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(symmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m015832\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].symmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].symmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].symmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_17747 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].symmetric_area_offset[0].value;
                                                _tmp_17747 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_17747);
                                                uint16_t* _tmp_17746 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_17746 = static_cast<uint16_t>(_tmp_17747);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].symmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].symmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].asymmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(asymmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m015833\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].asymmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].asymmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].asymmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_17749 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].asymmetric_area_offset[0].value;
                                                _tmp_17749 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_17749);
                                                uint16_t* _tmp_17748 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_17748 = static_cast<uint16_t>(_tmp_17749);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].asymmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].asymmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(*_ext_flag_7768) {
                                                // Write number of extensions 
                                                uint8_t* _tmp_17750 = (uint8_t*) buffer++;
                                                *_tmp_17750 = 1;
                                                
                                                // Write Bytemap
                                                // extension group #1)
                                                uint8_t* _tmp_17751 = (uint8_t*) buffer++;
                                                *_tmp_17751 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration.size() != 0) ? 1 : 0;
                                                
                                                // OpenType length variable 
                                                uint16_t* _tmp_17752_openType = (uint16_t*) buffer;
                                                buffer += 2;
                                                const uint8_t *_tmp_17753_start = buffer; // Starting point
                                                
                                                // Optional fields bytemap
                                                uint8_t* _tmp_17754 = (uint8_t*)buffer++;
                                                *_tmp_17754 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_17755 = (uint8_t*)buffer++;
                                                *_tmp_17755 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_17756 = (uint8_t*)buffer++;
                                                *_tmp_17756 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration.size() != 0 ? 1: 0);
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value.size() != 0) {
                                                    // Field:  type(HeadingValue) name(heading_value) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015834\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value[0].value;
                                                    }
                                                    
                                                    float _tmp_17758 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value[0].value;
                                                    _tmp_17758 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17758);
                                                    uint16_t* _tmp_17757 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17757 = static_cast<uint16_t>(_tmp_17758);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].heading_value[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed.size() != 0) {
                                                    // Field:  type(SpeedValue) name(abs_speed) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015835\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed[0].value;
                                                    }
                                                    
                                                    float _tmp_17760 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed[0].value;
                                                    _tmp_17760 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17760);
                                                    uint16_t* _tmp_17759 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17759 = static_cast<uint16_t>(_tmp_17760);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].abs_speed[0].value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration.size() != 0) {
                                                    // Field:  type(AccelerationValue) name(longitudinal_acceleration) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015836\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration[0].value;
                                                    }
                                                    
                                                    float _tmp_17762 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration[0].value;
                                                    _tmp_17762 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17762);
                                                    _tmp_17762 -= -160;
                                                    uint16_t* _tmp_17761 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17761 = static_cast<uint16_t>(_tmp_17762);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration[0].value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].nominal_trajectory.elements[n].longitudinal_acceleration[0].value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                *_tmp_17752_openType = buffer - _tmp_17753_start;  // OpenType length
                                            }
                                    }
                                    
                                    // Field:  type(PathPredicted) name(mrm_trajectory) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                    uint8_t* _ext_flag_7784 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.
                                    *_ext_flag_7784 = 0; 
                                    
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements.size();
                                    if(__aux64__ > 16) __aux64__ = 16;
                                    uint16_t* _tmp_17763 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_17763 = __aux64__ - 1;
                                    
                                    int __ifo = __aux64__;
                                    for(int o = 0; o < __ifo; o++) { 
                                        
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
                                            uint8_t* _ext_flag_7785 = (uint8_t*) buffer++;  // Write extension flag for PathPointPredicted
                                            *_ext_flag_7785 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration.size() != 0) ? 1 : 0; 
                                            
                                            // Optional fields bytemap
                                            char* _tmp_17764 = (char*) buffer++;
                                            *_tmp_17764 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m015838\033[0m| Optional field horizontal_position_confidence = " << *_tmp_17764;
                                            char* _tmp_17765 = (char*) buffer++;
                                            *_tmp_17765 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m015839\033[0m| Optional field path_delta_time = " << *_tmp_17765;
                                            char* _tmp_17766 = (char*) buffer++;
                                            *_tmp_17766 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].symmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m015840\033[0m| Optional field symmetric_area_offset = " << *_tmp_17766;
                                            char* _tmp_17767 = (char*) buffer++;
                                            *_tmp_17767 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].asymmetric_area_offset.size() != 0 ? 1 : 0);
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m015841\033[0m| Optional field asymmetric_area_offset = " << *_tmp_17767;
                                            
                                            // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015842\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_latitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_latitude.value;
                                            }
                                            
                                            double _tmp_17769 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_latitude.value;
                                            _tmp_17769 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17769);
                                            _tmp_17769 -= -131071;
                                            uint32_t* _tmp_17768 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_17768 = static_cast<uint32_t>(_tmp_17769);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015843\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_longitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_longitude.value;
                                            }
                                            
                                            double _tmp_17771 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_longitude.value;
                                            _tmp_17771 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17771);
                                            _tmp_17771 -= -131071;
                                            uint32_t* _tmp_17770 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_17770 = static_cast<uint32_t>(_tmp_17771);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence.size() != 0) {
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
                                                        logger->debug() << "|\033[38;5;94m015844\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    }
                                                    
                                                    float _tmp_17773 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_confidence.value;
                                                    _tmp_17773 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17773);
                                                    uint16_t* _tmp_17772 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17772 = static_cast<uint16_t>(_tmp_17773);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015845\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_minor_confidence.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_minor_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    }
                                                    
                                                    float _tmp_17775 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_minor_confidence.value;
                                                    _tmp_17775 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17775);
                                                    uint16_t* _tmp_17774 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17774 = static_cast<uint16_t>(_tmp_17775);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                                        return -1;
                                                    }
                                                    
                                                    // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015846\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_orientation.value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_orientation.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    }
                                                    
                                                    float _tmp_17777 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_orientation.value;
                                                    _tmp_17777 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17777);
                                                    uint16_t* _tmp_17776 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17776 = static_cast<uint16_t>(_tmp_17777);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].horizontal_position_confidence[0].semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                            }
                                            
                                            // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015847\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_altitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_altitude.value;
                                            }
                                            
                                            float _tmp_17779 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_altitude.value;
                                            _tmp_17779 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17779);
                                            _tmp_17779 -= -12700;
                                            uint16_t* _tmp_17778 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17778 = static_cast<uint16_t>(_tmp_17779);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015848\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].altitude_confidence.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].altitude_confidence.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].altitude_confidence.value);
                                            }
                                            
                                            uint8_t* _tmp_17780 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_17780 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].altitude_confidence.value; 
                                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].altitude_confidence.value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time.size() != 0) {
                                                // Field:  type(PathDeltaTimeChoice) name(path_delta_time) extGroup(0)
                                                // Choice
                                                   // #0  deltaTimeHighPrecision   DeltaTimeTenthOfSecond
                                                   // #1  deltaTimeBigRange   DeltaTimeTenSeconds
                                                uint8_t* _choice_408 = (uint8_t*) buffer;
                                                buffer++;
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_high_precision.size() != 0) {  // CHOICE 0  fieldType(PathDeltaTimeChoice) 
                                                    *_choice_408 = 0;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m015849\033[0m| Choice selection: 0";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015850\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_high_precision[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_high_precision[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_high_precision[0].value);
                                                    }
                                                    
                                                    float _tmp_17782 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_high_precision[0].value;
                                                    _tmp_17782 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17782);
                                                    uint8_t* _tmp_17781 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_17781 = static_cast<uint8_t>(_tmp_17782);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_high_precision[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_big_range.size() != 0)  // CHOICE 1  fieldType(PathDeltaTimeChoice) 
                                                {
                                                    *_choice_408 = 1;  // Setting choice selection
                                                
                                                    if(debug)
                                                        logger->debug() << "|\033[38;5;94m015851\033[0m| Choice selection: 1";
                                                
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(127) span(128) scaleDivisor(0.1) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015852\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_big_range[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_big_range[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_big_range[0].value);
                                                    }
                                                    
                                                    float _tmp_17784 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_big_range[0].value;
                                                    _tmp_17784 *= 0.1;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17784);
                                                    uint8_t* _tmp_17783 = (uint8_t*) buffer; buffer += 1;
                                                    *_tmp_17783 = static_cast<uint8_t>(_tmp_17784);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0].delta_time_big_range[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                                        return -1;
                                                    }
                                                
                                                }
                                                else
                                                {
                                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_408) << ") selected in CHOICE PathDeltaTimeChoice in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].path_delta_time[0]'; message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].symmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(symmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m015853\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].symmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].symmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].symmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_17786 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].symmetric_area_offset[0].value;
                                                _tmp_17786 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_17786);
                                                uint16_t* _tmp_17785 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_17785 = static_cast<uint16_t>(_tmp_17786);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].symmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].symmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].asymmetric_area_offset.size() != 0) {
                                                // Field:  type(StandardLength9b) name(asymmetric_area_offset) extGroup(0)
                                                // Real
                                                
                                                // FLOAT  min(0) max(511) span(512) scaleDivisor(10.0) dataType(Float)
                                                if(debug) {
                                                    logger->debug() << "|\033[38;5;94m015854\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].asymmetric_area_offset[0].value) << 
                                                                 " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].asymmetric_area_offset[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].asymmetric_area_offset[0].value;
                                                }
                                                
                                                float _tmp_17788 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].asymmetric_area_offset[0].value;
                                                _tmp_17788 *= 10.0;
                                                __aux64__ = static_cast<uint64_t>(_tmp_17788);
                                                uint16_t* _tmp_17787 = (uint16_t*) buffer; buffer += 2;
                                                *_tmp_17787 = static_cast<uint16_t>(_tmp_17788);
                                                
                                                // MIN validator
                                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].asymmetric_area_offset[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                    return -1;
                                                }
                                                // MAX validator
                                                if (VALIDATORS_ENABLED && __aux64__ > 511) {
                                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].asymmetric_area_offset[0].value' (" << __aux64__ << ") exceeds max allowable (511); message dropped.";
                                                    return -1;
                                                }
                                            }
                                            
                                            if(*_ext_flag_7785) {
                                                // Write number of extensions 
                                                uint8_t* _tmp_17789 = (uint8_t*) buffer++;
                                                *_tmp_17789 = 1;
                                                
                                                // Write Bytemap
                                                // extension group #1)
                                                uint8_t* _tmp_17790 = (uint8_t*) buffer++;
                                                *_tmp_17790 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed.size() != 0 || ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration.size() != 0) ? 1 : 0;
                                                
                                                // OpenType length variable 
                                                uint16_t* _tmp_17791_openType = (uint16_t*) buffer;
                                                buffer += 2;
                                                const uint8_t *_tmp_17792_start = buffer; // Starting point
                                                
                                                // Optional fields bytemap
                                                uint8_t* _tmp_17793 = (uint8_t*)buffer++;
                                                *_tmp_17793 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_17794 = (uint8_t*)buffer++;
                                                *_tmp_17794 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed.size() != 0 ? 1: 0);
                                                
                                                uint8_t* _tmp_17795 = (uint8_t*)buffer++;
                                                *_tmp_17795 = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration.size() != 0 ? 1: 0);
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value.size() != 0) {
                                                    // Field:  type(HeadingValue) name(heading_value) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015855\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value[0].value;
                                                    }
                                                    
                                                    float _tmp_17797 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value[0].value;
                                                    _tmp_17797 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17797);
                                                    uint16_t* _tmp_17796 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17796 = static_cast<uint16_t>(_tmp_17797);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].heading_value[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed.size() != 0) {
                                                    // Field:  type(SpeedValue) name(abs_speed) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015856\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed[0].value;
                                                    }
                                                    
                                                    float _tmp_17799 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed[0].value;
                                                    _tmp_17799 *= 100.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17799);
                                                    uint16_t* _tmp_17798 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17798 = static_cast<uint16_t>(_tmp_17799);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].abs_speed[0].value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration.size() != 0) {
                                                    // Field:  type(AccelerationValue) name(longitudinal_acceleration) extGroup(1)
                                                    // Real
                                                    
                                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                                    if(debug) {
                                                        logger->debug() << "|\033[38;5;94m015857\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration[0].value) << 
                                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration[0].value;
                                                    }
                                                    
                                                    float _tmp_17801 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration[0].value;
                                                    _tmp_17801 *= 10.0;
                                                    __aux64__ = static_cast<uint64_t>(_tmp_17801);
                                                    _tmp_17801 -= -160;
                                                    uint16_t* _tmp_17800 = (uint16_t*) buffer; buffer += 2;
                                                    *_tmp_17800 = static_cast<uint16_t>(_tmp_17801);
                                                    
                                                    // MIN validator
                                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration[0].value' (" << __aux64__ << ") less than (-160); message dropped.";
                                                        return -1;
                                                    }
                                                    // MAX validator
                                                    if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.trajectory_advice[0].mrm_trajectory.elements[o].longitudinal_acceleration[0].value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                                        return -1;
                                                    }
                                                }
                                                
                                                *_tmp_17791_openType = buffer - _tmp_17792_start;  // OpenType length
                                            }
                                    }
                            }
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice.size() != 0) {
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
                                        logger->debug() << "|\033[38;5;94m015858\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].drive_direction.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].drive_direction.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].drive_direction.value);
                                    }
                                    
                                    uint8_t* _tmp_17802 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_17802 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].drive_direction.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].drive_direction.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].drive_direction.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].drive_direction.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(AccelerationValue) name(acceleration) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015859\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].acceleration.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].acceleration.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].acceleration.value;
                                    }
                                    
                                    float _tmp_17804 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].acceleration.value;
                                    _tmp_17804 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17804);
                                    _tmp_17804 -= -160;
                                    uint16_t* _tmp_17803 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17803 = static_cast<uint16_t>(_tmp_17804);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].acceleration.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].acceleration.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(SteeringAngleValue) name(steering_angle) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-160) max(160) span(321) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015860\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].steering_angle.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].steering_angle.value: " << ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].steering_angle.value;
                                    }
                                    
                                    uint16_t* _tmp_17805 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].steering_angle.value - -160;
                                    *_tmp_17805 = __aux64__;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].steering_angle.value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].steering_angle.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].movement_advice.control_advice[0].steering_angle.value' (" << __aux64__ << ") exceeds max allowable (160); message dropped.";
                                        return -1;
                                    }
                            }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice.size() != 0) {
                            // Field:  type(ExteriorLights) name(exterior_lights_advice) extGroup(0)
                            // BitString
                            // BIT_STRING  min(8) max(8) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015861\033[0m| epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].values.size());
                            
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].values.size() < 8) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].value' " << (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].values.size()) << " is less than allowable (8); message dropped.";
                                return -1;
                            }
                            if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].values.size() > 8) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].value' " << (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].values.size()) << " exceeds max allowable (8); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_17806 = (uint8_t*)buffer;
                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].values.size();
                            if(__aux64__ > 8) __aux64__ = 8;
                            *_tmp_17806 = __aux64__ - 8;
                            buffer += 1;
                            
                            int __ifp = __aux64__;
                            for(int p = 0; p < __ifp; p++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].exterior_lights_advice[0].values[p]? 1: 0);
                            }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].horn_advice.size() != 0) {
                            // Field:  type(HornAdvice) name(horn_advice) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(3) span(4) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m015862\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].horn_advice[0].value) << 
                                             " epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].horn_advice[0].value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].horn_advice[0].value);
                            }
                            
                            uint8_t* _tmp_17807 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_17807 = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].horn_advice[0].value; 
                            __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].horn_advice[0].value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].horn_advice[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.behaviours[0].elements[m].horn_advice[0].value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(*_ext_flag_7763) {
                        }
                }
            }
            
            if(ros->epu_to_vehicle.epu_high_frequency_container.safety.size() != 0) {
                // Field:  type(SafetyAdvices) name(safety) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(10) span(10) ext(true)
                uint8_t* _ext_flag_7805 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.safety[0].
                *_ext_flag_7805 = 0; 
                
                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements.size();
                if(__aux64__ > 10) __aux64__ = 10;
                uint16_t* _tmp_17809 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_17809 = __aux64__ - 1;
                
                int __ifq = __aux64__;
                for(int q = 0; q < __ifq; q++) { 
                    
                        // SafetyContainer  SEQUENCE
                            //  subjectStationID StationId           
                            //  objectData       RssObjectData     OPTIONAL  
                            //  rssDynamics      RssDynamics       OPTIONAL  
                            //  rssResults       RssCheckResults     
                        // Optional fields bytemap
                        char* _tmp_17810 = (char*) buffer++;
                        *_tmp_17810 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015864\033[0m| Optional field object_data = " << *_tmp_17810;
                        char* _tmp_17811 = (char*) buffer++;
                        *_tmp_17811 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m015865\033[0m| Optional field rss_dynamics = " << *_tmp_17811;
                        
                        // Field:  type(StationId) name(subject_station_id) extGroup(0)
                        // Integer
                        
                        // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m015866\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].subject_station_id.value) << 
                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].subject_station_id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].subject_station_id.value;
                        }
                        
                        uint32_t* _tmp_17812 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_17812 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].subject_station_id.value; 
                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].subject_station_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].subject_station_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].subject_station_id.value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
                            return -1;
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data.size() != 0) {
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
                                char* _tmp_17813 = (char*) buffer++;
                                *_tmp_17813 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].steering_angle.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015867\033[0m| Optional field steering_angle = " << *_tmp_17813;
                                
                                // Field:  type(Identifier2B) name(id) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015868\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].id.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].id.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].id.value;
                                }
                                
                                uint16_t* _tmp_17814 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17814 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].id.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StationType) name(type) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015869\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].type.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].type.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].type.value);
                                }
                                
                                uint8_t* _tmp_17815 = (uint8_t*) buffer++;
                                *_tmp_17815 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].type.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].type.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].type.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
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
                                        logger->debug() << "|\033[38;5;94m015870\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_latitude.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_latitude.value;
                                    }
                                    
                                    double _tmp_17817 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_latitude.value;
                                    _tmp_17817 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17817);
                                    _tmp_17817 -= -131071;
                                    uint32_t* _tmp_17816 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_17816 = static_cast<uint32_t>(_tmp_17817);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015871\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_longitude.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_longitude.value;
                                    }
                                    
                                    double _tmp_17819 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_longitude.value;
                                    _tmp_17819 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17819);
                                    _tmp_17819 -= -131071;
                                    uint32_t* _tmp_17818 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_17818 = static_cast<uint32_t>(_tmp_17819);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015872\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_altitude.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_altitude.value;
                                    }
                                    
                                    float _tmp_17821 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_altitude.value;
                                    _tmp_17821 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17821);
                                    _tmp_17821 -= -12700;
                                    uint16_t* _tmp_17820 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17820 = static_cast<uint16_t>(_tmp_17821);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].delta_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                        return -1;
                                    }
                                
                                // Field:  type(HeadingValue) name(heading) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015873\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].heading.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].heading.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].heading.value;
                                }
                                
                                float _tmp_17823 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].heading.value;
                                _tmp_17823 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17823);
                                uint16_t* _tmp_17822 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17822 = static_cast<uint16_t>(_tmp_17823);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].heading.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].heading.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SemiAxisLength) name(semi_major_position_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015874\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_major_position_confidence.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_major_position_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_major_position_confidence.value;
                                }
                                
                                float _tmp_17825 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_major_position_confidence.value;
                                _tmp_17825 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17825);
                                uint16_t* _tmp_17824 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17824 = static_cast<uint16_t>(_tmp_17825);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_major_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_major_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SemiAxisLength) name(semi_minor_position_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015875\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_minor_position_confidence.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_minor_position_confidence.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_minor_position_confidence.value;
                                }
                                
                                float _tmp_17827 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_minor_position_confidence.value;
                                _tmp_17827 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17827);
                                uint16_t* _tmp_17826 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17826 = static_cast<uint16_t>(_tmp_17827);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_minor_position_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].semi_minor_position_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VehicleLengthValue) name(dimension_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015876\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_length.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_length.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_length.value;
                                }
                                
                                float _tmp_17829 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_length.value;
                                _tmp_17829 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17829);
                                _tmp_17829 -= 1;
                                uint16_t* _tmp_17828 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17828 = static_cast<uint16_t>(_tmp_17829);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_length.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_length.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VehicleWidth) name(dimension_width) extGroup(0)
                                // Real
                                
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015877\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_width.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_width.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_width.value);
                                }
                                
                                float _tmp_17831 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_width.value;
                                _tmp_17831 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17831);
                                _tmp_17831 -= 1;
                                uint8_t* _tmp_17830 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_17830 = static_cast<uint8_t>(_tmp_17831);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_width.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_width.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(VehicleWidth) name(dimension_height) extGroup(0)
                                // Real
                                
                                // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015878\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_height.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_height.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_height.value);
                                }
                                
                                float _tmp_17833 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_height.value;
                                _tmp_17833 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17833);
                                _tmp_17833 -= 1;
                                uint8_t* _tmp_17832 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_17832 = static_cast<uint8_t>(_tmp_17833);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_height.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 62) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].dimension_height.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
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
                                        logger->debug() << "|\033[38;5;94m015879\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.minimum.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.minimum.value;
                                    }
                                    
                                    float _tmp_17835 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.minimum.value;
                                    _tmp_17835 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17835);
                                    _tmp_17835 -= -16383;
                                    uint16_t* _tmp_17834 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17834 = static_cast<uint16_t>(_tmp_17835);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.minimum.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(VelocityComponentValue) name(maximum) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015880\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.maximum.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.maximum.value;
                                    }
                                    
                                    float _tmp_17837 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.maximum.value;
                                    _tmp_17837 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17837);
                                    _tmp_17837 -= -16383;
                                    uint16_t* _tmp_17836 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17836 = static_cast<uint16_t>(_tmp_17837);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.maximum.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].speed_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                        return -1;
                                    }
                                
                                // Field:  type(YawRateValue) name(yaw_rate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015881\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].yaw_rate.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].yaw_rate.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].yaw_rate.value;
                                }
                                
                                float _tmp_17839 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].yaw_rate.value;
                                _tmp_17839 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17839);
                                _tmp_17839 -= -32766;
                                uint16_t* _tmp_17838 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17838 = static_cast<uint16_t>(_tmp_17839);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -32766) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].yaw_rate.value' (" << __aux64__ << ") less than (-32766); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].yaw_rate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].steering_angle.size() != 0) {
                                    // Field:  type(SteeringAngleValue) name(steering_angle) extGroup(0)
                                    // Integer
                                    
                                    // INT16  min(-160) max(160) span(321) dataType(Int16)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015882\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].steering_angle[0].value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].steering_angle[0].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].steering_angle[0].value;
                                    }
                                    
                                    uint16_t* _tmp_17840 = (uint16_t*) buffer; buffer += 2;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].steering_angle[0].value - -160;
                                    *_tmp_17840 = __aux64__;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].steering_angle[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].steering_angle[0].value' (" << __aux64__ << ") less than (-160); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 160) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].object_data[0].steering_angle[0].value' (" << __aux64__ << ") exceeds max allowable (160); message dropped.";
                                        return -1;
                                    }
                                }
                        }
                        
                        if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics.size() != 0) {
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
                                    logger->debug() << "|\033[38;5;94m015883\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_accel_max.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_accel_max.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_accel_max.value;
                                }
                                
                                float _tmp_17842 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_accel_max.value;
                                _tmp_17842 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17842);
                                _tmp_17842 -= -160;
                                uint16_t* _tmp_17841 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17841 = static_cast<uint16_t>(_tmp_17842);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_accel_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_accel_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_brake_max) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015884\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_max.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_max.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_max.value;
                                }
                                
                                float _tmp_17844 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_max.value;
                                _tmp_17844 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17844);
                                _tmp_17844 -= -160;
                                uint16_t* _tmp_17843 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17843 = static_cast<uint16_t>(_tmp_17844);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_brake_min) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015885\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min.value;
                                }
                                
                                float _tmp_17846 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min.value;
                                _tmp_17846 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17846);
                                _tmp_17846 -= -160;
                                uint16_t* _tmp_17845 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17845 = static_cast<uint16_t>(_tmp_17846);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LongitudinalAccelerationValue) name(lon_brake_min_correct) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015886\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min_correct.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min_correct.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min_correct.value;
                                }
                                
                                float _tmp_17848 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min_correct.value;
                                _tmp_17848 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17848);
                                _tmp_17848 -= -160;
                                uint16_t* _tmp_17847 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17847 = static_cast<uint16_t>(_tmp_17848);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min_correct.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lon_brake_min_correct.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LateralAccelerationValue) name(lat_accel_max) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015887\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_accel_max.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_accel_max.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_accel_max.value;
                                }
                                
                                float _tmp_17850 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_accel_max.value;
                                _tmp_17850 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17850);
                                _tmp_17850 -= -160;
                                uint16_t* _tmp_17849 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17849 = static_cast<uint16_t>(_tmp_17850);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_accel_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_accel_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LateralAccelerationValue) name(lat_brake_min) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015888\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_brake_min.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_brake_min.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_brake_min.value;
                                }
                                
                                float _tmp_17852 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_brake_min.value;
                                _tmp_17852 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17852);
                                _tmp_17852 -= -160;
                                uint16_t* _tmp_17851 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17851 = static_cast<uint16_t>(_tmp_17852);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_brake_min.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lat_brake_min.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(LateralFluctuationMargin) name(lateral_fluctuation_margin) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015889\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lateral_fluctuation_margin.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lateral_fluctuation_margin.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lateral_fluctuation_margin.value);
                                }
                                
                                uint8_t* _tmp_17853 = (uint8_t*) buffer++;
                                *_tmp_17853 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lateral_fluctuation_margin.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lateral_fluctuation_margin.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lateral_fluctuation_margin.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].lateral_fluctuation_margin.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(DeltaTimeTenthOfSecond) name(response_time) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015890\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].response_time.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].response_time.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].response_time.value);
                                }
                                
                                float _tmp_17855 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].response_time.value;
                                _tmp_17855 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17855);
                                uint8_t* _tmp_17854 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_17854 = static_cast<uint8_t>(_tmp_17855);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].response_time.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].response_time.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SpeedValue) name(max_speed_on_acceleration) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015891\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].max_speed_on_acceleration.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].max_speed_on_acceleration.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].max_speed_on_acceleration.value;
                                }
                                
                                float _tmp_17857 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].max_speed_on_acceleration.value;
                                _tmp_17857 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17857);
                                uint16_t* _tmp_17856 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17856 = static_cast<uint16_t>(_tmp_17857);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].max_speed_on_acceleration.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].max_speed_on_acceleration.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(min_longitudinal_safety_distance) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015892\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].min_longitudinal_safety_distance.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].min_longitudinal_safety_distance.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].min_longitudinal_safety_distance.value);
                                }
                                
                                float _tmp_17859 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].min_longitudinal_safety_distance.value;
                                _tmp_17859 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17859);
                                uint8_t* _tmp_17858 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_17858 = static_cast<uint8_t>(_tmp_17859);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].min_longitudinal_safety_distance.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].min_longitudinal_safety_distance.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(unstructured_pedestrian_turning_radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015893\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_pedestrian_turning_radius.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_pedestrian_turning_radius.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_pedestrian_turning_radius.value);
                                }
                                
                                float _tmp_17861 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_pedestrian_turning_radius.value;
                                _tmp_17861 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17861);
                                uint8_t* _tmp_17860 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_17860 = static_cast<uint8_t>(_tmp_17861);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_pedestrian_turning_radius.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength1B) name(unstructured_vehicle_min_radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(255) span(256) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015894\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_min_radius.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_min_radius.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_min_radius.value);
                                }
                                
                                float _tmp_17863 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_min_radius.value;
                                _tmp_17863 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17863);
                                uint8_t* _tmp_17862 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_17862 = static_cast<uint8_t>(_tmp_17863);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_min_radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_min_radius.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(YawAccelerationValue) name(unstructured_vehicle_yaw_rate_change) extGroup(0)
                                // Integer
                                
                                // INT16  min(-2040) max(2041) span(4082) dataType(Int16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015895\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value;
                                }
                                
                                uint16_t* _tmp_17864 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value - -2040;
                                *_tmp_17864 = __aux64__;
                                __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -2040) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' (" << __aux64__ << ") less than (-2040); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 2041) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_vehicle_yaw_rate_change.value' (" << __aux64__ << ") exceeds max allowable (2041); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(HeadingValue) name(unstructured_drive_away_max_angle) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015896\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_drive_away_max_angle.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_drive_away_max_angle.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_drive_away_max_angle.value;
                                }
                                
                                float _tmp_17866 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_drive_away_max_angle.value;
                                _tmp_17866 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17866);
                                uint16_t* _tmp_17865 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17865 = static_cast<uint16_t>(_tmp_17866);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_drive_away_max_angle.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_dynamics[0].unstructured_drive_away_max_angle.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                        }
                        
                        // Field:  type(RssCheckResults) name(rss_results) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(4) span(5) ext(false)
                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements.size();
                        if(__aux64__ > 4) __aux64__ = 4;
                        uint16_t* _tmp_17867 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_17867 = __aux64__;
                        
                        int __ifr = __aux64__;
                        for(int r = 0; r < __ifr; r++) { 
                            
                                // RssCheckResult  SEQUENCE
                                    //  v2xLatency        DeltaTimeTenthOfSecond     
                                    //  properResponse    RssProperResponse          
                                    //  rssRoute          RssRoute                 OPTIONAL  
                                    //  vehicleRouteState RssVehicleRouteState     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_17868 = (char*) buffer++;
                                *_tmp_17868 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015898\033[0m| Optional field rss_route = " << *_tmp_17868;
                                char* _tmp_17869 = (char*) buffer++;
                                *_tmp_17869 = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015899\033[0m| Optional field vehicle_route_state = " << *_tmp_17869;
                                
                                // Field:  type(DeltaTimeTenthOfSecond) name(v2x_latency) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(127) span(128) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015900\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].v2x_latency.value) << 
                                                 " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].v2x_latency.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].v2x_latency.value);
                                }
                                
                                float _tmp_17871 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].v2x_latency.value;
                                _tmp_17871 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17871);
                                uint8_t* _tmp_17870 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_17870 = static_cast<uint8_t>(_tmp_17871);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].v2x_latency.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].v2x_latency.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
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
                                        logger->debug() << "|\033[38;5;94m015901\033[0m| epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.values.size());
                                    
                                    if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.values.size() < 8) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.value' " << (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.values.size()) << " is less than allowable (8); message dropped.";
                                        return -1;
                                    }
                                    if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.values.size() > 8) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.value' " << (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.values.size()) << " exceeds max allowable (8); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _ext_flag_7837 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.
                                    *_ext_flag_7837 = 0; 
                                    
                                    uint8_t* _tmp_17872 = (uint8_t*)buffer;
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.values.size();
                                    if(__aux64__ > 8) __aux64__ = 8;
                                    *_tmp_17872 = __aux64__ - 8;
                                    buffer += 1;
                                    
                                    int __ifs = __aux64__;
                                    for(int s = 0; s < __ifs; s++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.response_flags.values[s]? 1: 0);
                                    }
                                    
                                    // Field:  type(RssLongitudinalResponse) name(longitudinal_response) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015902\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_response.value);
                                    }
                                    
                                    uint8_t* _tmp_17873 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_17873 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_response.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_response.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_response.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_response.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(RssLateralResponse) name(lateral_response_right) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015903\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_right.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_right.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_right.value);
                                    }
                                    
                                    uint8_t* _tmp_17874 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_17874 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_right.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_right.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_right.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_right.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(RssLateralResponse) name(lateral_response_left) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(1) span(2) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015904\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_left.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_left.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_left.value);
                                    }
                                    
                                    uint8_t* _tmp_17875 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_17875 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_left.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_left.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_left.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_response_left.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(RssUnstructuredConstellationResponse) name(unstructured_constellation_response) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(3) span(4) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015905\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.unstructured_constellation_response.value) << 
                                                     " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.unstructured_constellation_response.value: " << static_cast<int>(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.unstructured_constellation_response.value);
                                    }
                                    
                                    uint8_t* _tmp_17876 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_17876 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.unstructured_constellation_response.value; 
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.unstructured_constellation_response.value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.unstructured_constellation_response.value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.unstructured_constellation_response.value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(CartesianAngleRanges) name(heading_ranges) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5) ext(false)
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    uint16_t* _tmp_17877 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_17877 = __aux64__;
                                    
                                    int __ift = __aux64__;
                                    for(int t = 0; t < __ift; t++) { 
                                        
                                            // CartesianAngleRange  SEQUENCE
                                                //  begin      CartesianAngleValue     
                                                //  end        CartesianAngleValue     
                                            // Optional fields bytemap
                                            
                                            // Field:  type(CartesianAngleValue) name(begin) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015907\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].begin.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].begin.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].begin.value;
                                            }
                                            
                                            float _tmp_17879 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].begin.value;
                                            _tmp_17879 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17879);
                                            uint16_t* _tmp_17878 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17878 = static_cast<uint16_t>(_tmp_17879);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].begin.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].begin.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(CartesianAngleValue) name(end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015908\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].end.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].end.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].end.value;
                                            }
                                            
                                            float _tmp_17881 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].end.value;
                                            _tmp_17881 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17881);
                                            uint16_t* _tmp_17880 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17880 = static_cast<uint16_t>(_tmp_17881);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.heading_ranges.elements[t].end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                            
                                    }
                                    
                                    // Field:  type(ObjectIdentifierList) name(dangerous_objects) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(0) max(4) span(5) ext(true)
                                    uint8_t* _ext_flag_7844 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.dangerous_objects.
                                    *_ext_flag_7844 = 0; 
                                    
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.dangerous_objects.elements.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    uint16_t* _tmp_17882 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_17882 = __aux64__;
                                    
                                    int __ifu = __aux64__;
                                    for(int u = 0; u < __ifu; u++) { 
                                        
                                        // Integer
                                        
                                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015910\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.dangerous_objects.elements[u].value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.dangerous_objects.elements[u].value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.dangerous_objects.elements[u].value;
                                        }
                                        
                                        uint16_t* _tmp_17883 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17883 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.dangerous_objects.elements[u].value; 
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.dangerous_objects.elements[u].value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.dangerous_objects.elements[u].value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.dangerous_objects.elements[u].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
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
                                            logger->debug() << "|\033[38;5;94m015911\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.minimum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.minimum.value;
                                        }
                                        
                                        float _tmp_17885 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.minimum.value;
                                        _tmp_17885 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17885);
                                        _tmp_17885 -= -160;
                                        uint16_t* _tmp_17884 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17884 = static_cast<uint16_t>(_tmp_17885);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.minimum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(maximum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015912\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.maximum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.maximum.value;
                                        }
                                        
                                        float _tmp_17887 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.maximum.value;
                                        _tmp_17887 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17887);
                                        _tmp_17887 -= -160;
                                        uint16_t* _tmp_17886 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17886 = static_cast<uint16_t>(_tmp_17887);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.maximum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.longitudinal_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
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
                                            logger->debug() << "|\033[38;5;94m015913\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.minimum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.minimum.value;
                                        }
                                        
                                        float _tmp_17889 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.minimum.value;
                                        _tmp_17889 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17889);
                                        _tmp_17889 -= -160;
                                        uint16_t* _tmp_17888 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17888 = static_cast<uint16_t>(_tmp_17889);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.minimum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(maximum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015914\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.maximum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.maximum.value;
                                        }
                                        
                                        float _tmp_17891 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.maximum.value;
                                        _tmp_17891 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17891);
                                        _tmp_17891 -= -160;
                                        uint16_t* _tmp_17890 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17890 = static_cast<uint16_t>(_tmp_17891);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.maximum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_right_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
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
                                            logger->debug() << "|\033[38;5;94m015915\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.minimum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.minimum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.minimum.value;
                                        }
                                        
                                        float _tmp_17893 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.minimum.value;
                                        _tmp_17893 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17893);
                                        _tmp_17893 -= -160;
                                        uint16_t* _tmp_17892 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17892 = static_cast<uint16_t>(_tmp_17893);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.minimum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.minimum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(maximum) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015916\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.maximum.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.maximum.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.maximum.value;
                                        }
                                        
                                        float _tmp_17895 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.maximum.value;
                                        _tmp_17895 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17895);
                                        _tmp_17895 -= -160;
                                        uint16_t* _tmp_17894 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17894 = static_cast<uint16_t>(_tmp_17895);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.maximum.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].proper_response.lateral_left_range.maximum.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route.size() != 0) {
                                    // Field:  type(RssRoute) name(rss_route) extGroup(0)
                                    // SequenceOf
                                    // Data Type UInt8
                                    // SEQUENCE_OF  min(1) max(4) span(4) ext(false)
                                    __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    uint16_t* _tmp_17896 = (uint16_t*)buffer;
                                    buffer += 2;
                                    *_tmp_17896 = __aux64__ - 1;
                                    
                                    int __ifv = __aux64__;
                                    for(int v = 0; v < __ifv; v++) { 
                                        
                                            // DeltaReferencePosition  SEQUENCE
                                                //  deltaLatitude  DeltaLatitude      
                                                //  deltaLongitude DeltaLongitude     
                                                //  deltaAltitude  DeltaAltitude      
                                            // Optional fields bytemap
                                            
                                            // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015918\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_latitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_latitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_latitude.value;
                                            }
                                            
                                            double _tmp_17898 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_latitude.value;
                                            _tmp_17898 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17898);
                                            _tmp_17898 -= -131071;
                                            uint32_t* _tmp_17897 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_17897 = static_cast<uint32_t>(_tmp_17898);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                            // Real
                                            
                                            // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015919\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_longitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_longitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_longitude.value;
                                            }
                                            
                                            double _tmp_17900 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_longitude.value;
                                            _tmp_17900 *= 1.0E7;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17900);
                                            _tmp_17900 -= -131071;
                                            uint32_t* _tmp_17899 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_17899 = static_cast<uint32_t>(_tmp_17900);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                                return -1;
                                            }
                                            
                                            // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015920\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_altitude.value) << 
                                                             " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_altitude.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_altitude.value;
                                            }
                                            
                                            float _tmp_17902 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_altitude.value;
                                            _tmp_17902 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17902);
                                            _tmp_17902 -= -12700;
                                            uint16_t* _tmp_17901 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17901 = static_cast<uint16_t>(_tmp_17902);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].rss_route[0].elements[v].delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                                return -1;
                                            }
                                            
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state.size() != 0) {
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
                                            logger->debug() << "|\033[38;5;94m015921\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading.value;
                                        }
                                        
                                        float _tmp_17904 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading.value;
                                        _tmp_17904 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17904);
                                        uint16_t* _tmp_17903 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17903 = static_cast<uint16_t>(_tmp_17904);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(RouteRadius) name(route_radius) extGroup(0)
                                        // Integer
                                        
                                        // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015922\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_radius.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_radius.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_radius.value;
                                        }
                                        
                                        uint16_t* _tmp_17905 = (uint16_t*) buffer; buffer += 2;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_radius.value - -1023;
                                        *_tmp_17905 = __aux64__;
                                        __aux64__ = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_radius.value;
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_radius.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_radius.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(route_heading_delta) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015923\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading_delta.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading_delta.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading_delta.value;
                                        }
                                        
                                        float _tmp_17907 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading_delta.value;
                                        _tmp_17907 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17907);
                                        uint16_t* _tmp_17906 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17906 = static_cast<uint16_t>(_tmp_17907);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading_delta.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_heading_delta.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(VelocityComponentValue) name(route_speed_lon) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015924\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lon.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lon.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lon.value;
                                        }
                                        
                                        float _tmp_17909 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lon.value;
                                        _tmp_17909 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17909);
                                        _tmp_17909 -= -16383;
                                        uint16_t* _tmp_17908 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17908 = static_cast<uint16_t>(_tmp_17909);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lon.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lon.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(VelocityComponentValue) name(route_speed_lat) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-16383) max(16383) span(32767) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015925\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lat.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lat.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lat.value;
                                        }
                                        
                                        float _tmp_17911 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lat.value;
                                        _tmp_17911 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17911);
                                        _tmp_17911 -= -16383;
                                        uint16_t* _tmp_17910 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17910 = static_cast<uint16_t>(_tmp_17911);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lat.value' (" << __aux64__ << ") less than (-16383); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_speed_lat.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(route_accel_lon) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015926\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lon.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lon.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lon.value;
                                        }
                                        
                                        float _tmp_17913 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lon.value;
                                        _tmp_17913 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17913);
                                        _tmp_17913 -= -160;
                                        uint16_t* _tmp_17912 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17912 = static_cast<uint16_t>(_tmp_17913);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lon.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lon.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(route_accel_lat) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015927\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lat.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lat.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lat.value;
                                        }
                                        
                                        float _tmp_17915 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lat.value;
                                        _tmp_17915 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17915);
                                        _tmp_17915 -= -160;
                                        uint16_t* _tmp_17914 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17914 = static_cast<uint16_t>(_tmp_17915);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lat.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].route_accel_lat.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LongitudinalAccelerationValue) name(avg_route_accel_lon) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015928\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lon.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lon.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lon.value;
                                        }
                                        
                                        float _tmp_17917 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lon.value;
                                        _tmp_17917 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17917);
                                        _tmp_17917 -= -160;
                                        uint16_t* _tmp_17916 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17916 = static_cast<uint16_t>(_tmp_17917);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lon.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lon.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(LateralAccelerationValue) name(avg_route_accel_lat) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015929\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lat.value) << 
                                                         " epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lat.value: " << ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lat.value;
                                        }
                                        
                                        float _tmp_17919 = ros->epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lat.value;
                                        _tmp_17919 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17919);
                                        _tmp_17919 -= -160;
                                        uint16_t* _tmp_17918 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17918 = static_cast<uint16_t>(_tmp_17919);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lat.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_high_frequency_container.safety[0].elements[q].rss_results.elements[r].vehicle_route_state[0].avg_route_accel_lat.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
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
                uint8_t* _ext_flag_7864 = (uint8_t*) buffer++;  // Write extension flag for EPULowFrequencyContainer
                *_ext_flag_7864 = 0;  
                
                // Optional fields bytemap
                char* _tmp_17920 = (char*) buffer++;
                *_tmp_17920 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m015930\033[0m| Optional field epu_section_capabilities = " << *_tmp_17920;
                
                // Field:  type(EPUSectionDimensions) name(epu_section_dimensions) extGroup(0)
                    // EPUSectionDimensions  SEQUENCE
                        //  includedShapes IncludedShapes     
                        //  excludedShapes ExcludedShapes     
                    // Optional fields bytemap
                    
                    // Field:  type(IncludedShapes) name(included_shapes) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(1) max(4) span(4) ext(true)
                    uint8_t* _ext_flag_7865 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.
                    *_ext_flag_7865 = 0; 
                    
                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements.size();
                    if(__aux64__ > 4) __aux64__ = 4;
                    uint16_t* _tmp_17921 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_17921 = __aux64__ - 1;
                    
                    int __ifw = __aux64__;
                    for(int w = 0; w < __ifw; w++) { 
                        
                        // Choice
                           // #0  rectangular   RectangularShape
                           // #1  circular   CircularShape
                           // #2  polygonal   PolygonalShape
                           // #3  elliptical   EllipticalShape
                           // #4  radial   RadialShape
                           // #5  radialShapes   RadialShapes
                        uint8_t* _ext_flag_7866 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_7866 = 0; 
                        
                        uint8_t* _choice_409 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_409 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015932\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_17922 = (char*) buffer++;
                                *_tmp_17922 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015933\033[0m| Optional field shape_reference_point = " << *_tmp_17922;
                                char* _tmp_17923 = (char*) buffer++;
                                *_tmp_17923 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015934\033[0m| Optional field orientation = " << *_tmp_17923;
                                char* _tmp_17924 = (char*) buffer++;
                                *_tmp_17924 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015935\033[0m| Optional field height = " << *_tmp_17924;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_17925 = (char*) buffer++;
                                        *_tmp_17925 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015936\033[0m| Optional field z_coordinate = " << *_tmp_17925;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015937\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_17927 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_17927 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17927);
                                        _tmp_17927 -= -32768;
                                        uint16_t* _tmp_17926 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17926 = static_cast<uint16_t>(_tmp_17927);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015938\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_17929 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_17929 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17929);
                                        _tmp_17929 -= -32768;
                                        uint16_t* _tmp_17928 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17928 = static_cast<uint16_t>(_tmp_17929);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015939\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_17931 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_17931 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17931);
                                            _tmp_17931 -= -32768;
                                            uint16_t* _tmp_17930 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17930 = static_cast<uint16_t>(_tmp_17931);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015940\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_17933 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_length.value;
                                _tmp_17933 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17933);
                                uint16_t* _tmp_17932 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17932 = static_cast<uint16_t>(_tmp_17933);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015941\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_breadth.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_breadth.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_17935 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_breadth.value;
                                _tmp_17935 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17935);
                                uint16_t* _tmp_17934 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17934 = static_cast<uint16_t>(_tmp_17935);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015942\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_17937 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].orientation[0].value;
                                    _tmp_17937 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17937);
                                    uint16_t* _tmp_17936 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17936 = static_cast<uint16_t>(_tmp_17937);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015943\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_17939 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].height[0].value;
                                    _tmp_17939 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17939);
                                    uint16_t* _tmp_17938 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17938 = static_cast<uint16_t>(_tmp_17939);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_409 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015944\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_17940 = (char*) buffer++;
                                *_tmp_17940 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015945\033[0m| Optional field shape_reference_point = " << *_tmp_17940;
                                char* _tmp_17941 = (char*) buffer++;
                                *_tmp_17941 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015946\033[0m| Optional field height = " << *_tmp_17941;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_17942 = (char*) buffer++;
                                        *_tmp_17942 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015947\033[0m| Optional field z_coordinate = " << *_tmp_17942;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015948\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_17944 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_17944 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17944);
                                        _tmp_17944 -= -32768;
                                        uint16_t* _tmp_17943 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17943 = static_cast<uint16_t>(_tmp_17944);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015949\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_17946 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_17946 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17946);
                                        _tmp_17946 -= -32768;
                                        uint16_t* _tmp_17945 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17945 = static_cast<uint16_t>(_tmp_17946);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015950\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_17948 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_17948 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17948);
                                            _tmp_17948 -= -32768;
                                            uint16_t* _tmp_17947 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17947 = static_cast<uint16_t>(_tmp_17948);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015951\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].radius.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].radius.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].radius.value;
                                }
                                
                                float _tmp_17950 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].radius.value;
                                _tmp_17950 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17950);
                                uint16_t* _tmp_17949 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17949 = static_cast<uint16_t>(_tmp_17950);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015952\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_17952 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].height[0].value;
                                    _tmp_17952 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17952);
                                    uint16_t* _tmp_17951 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17951 = static_cast<uint16_t>(_tmp_17952);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_409 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015953\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_17953 = (char*) buffer++;
                                *_tmp_17953 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015954\033[0m| Optional field shape_reference_point = " << *_tmp_17953;
                                char* _tmp_17954 = (char*) buffer++;
                                *_tmp_17954 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015955\033[0m| Optional field height = " << *_tmp_17954;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_17955 = (char*) buffer++;
                                        *_tmp_17955 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015956\033[0m| Optional field z_coordinate = " << *_tmp_17955;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015957\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_17957 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_17957 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17957);
                                        _tmp_17957 -= -32768;
                                        uint16_t* _tmp_17956 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17956 = static_cast<uint16_t>(_tmp_17957);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015958\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_17959 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_17959 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17959);
                                        _tmp_17959 -= -32768;
                                        uint16_t* _tmp_17958 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17958 = static_cast<uint16_t>(_tmp_17959);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015959\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_17961 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_17961 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17961);
                                            _tmp_17961 -= -32768;
                                            uint16_t* _tmp_17960 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17960 = static_cast<uint16_t>(_tmp_17961);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_7882 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.
                                *_ext_flag_7882 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_17962 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_17962 = __aux64__ - 1;
                                
                                int __ifx = __aux64__;
                                for(int x = 0; x < __ifx; x++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_17963 = (char*) buffer++;
                                        *_tmp_17963 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015961\033[0m| Optional field z_coordinate = " << *_tmp_17963;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015962\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].x_coordinate.value;
                                        }
                                        
                                        float _tmp_17965 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].x_coordinate.value;
                                        _tmp_17965 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17965);
                                        _tmp_17965 -= -32768;
                                        uint16_t* _tmp_17964 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17964 = static_cast<uint16_t>(_tmp_17965);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015963\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].y_coordinate.value;
                                        }
                                        
                                        float _tmp_17967 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].y_coordinate.value;
                                        _tmp_17967 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17967);
                                        _tmp_17967 -= -32768;
                                        uint16_t* _tmp_17966 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17966 = static_cast<uint16_t>(_tmp_17967);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015964\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_17969 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].z_coordinate[0].value;
                                            _tmp_17969 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17969);
                                            _tmp_17969 -= -32768;
                                            uint16_t* _tmp_17968 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17968 = static_cast<uint16_t>(_tmp_17969);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].polygon.elements[x].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015965\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_17971 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].height[0].value;
                                    _tmp_17971 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17971);
                                    uint16_t* _tmp_17970 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17970 = static_cast<uint16_t>(_tmp_17971);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_409 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015966\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_17972 = (char*) buffer++;
                                *_tmp_17972 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015967\033[0m| Optional field shape_reference_point = " << *_tmp_17972;
                                char* _tmp_17973 = (char*) buffer++;
                                *_tmp_17973 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015968\033[0m| Optional field orientation = " << *_tmp_17973;
                                char* _tmp_17974 = (char*) buffer++;
                                *_tmp_17974 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015969\033[0m| Optional field height = " << *_tmp_17974;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_17975 = (char*) buffer++;
                                        *_tmp_17975 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015970\033[0m| Optional field z_coordinate = " << *_tmp_17975;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015971\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_17977 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_17977 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17977);
                                        _tmp_17977 -= -32768;
                                        uint16_t* _tmp_17976 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17976 = static_cast<uint16_t>(_tmp_17977);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015972\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_17979 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_17979 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17979);
                                        _tmp_17979 -= -32768;
                                        uint16_t* _tmp_17978 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17978 = static_cast<uint16_t>(_tmp_17979);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015973\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_17981 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_17981 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17981);
                                            _tmp_17981 -= -32768;
                                            uint16_t* _tmp_17980 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17980 = static_cast<uint16_t>(_tmp_17981);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015974\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_major_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_major_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_17983 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_major_axis_length.value;
                                _tmp_17983 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17983);
                                uint16_t* _tmp_17982 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17982 = static_cast<uint16_t>(_tmp_17983);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015975\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_minor_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_minor_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_17985 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_minor_axis_length.value;
                                _tmp_17985 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_17985);
                                uint16_t* _tmp_17984 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_17984 = static_cast<uint16_t>(_tmp_17985);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015976\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_17987 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].orientation[0].value;
                                    _tmp_17987 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17987);
                                    uint16_t* _tmp_17986 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17986 = static_cast<uint16_t>(_tmp_17987);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015977\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_17989 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].height[0].value;
                                    _tmp_17989 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_17989);
                                    uint16_t* _tmp_17988 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_17988 = static_cast<uint16_t>(_tmp_17989);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_409 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015978\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_17990 = (char*) buffer++;
                                *_tmp_17990 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015979\033[0m| Optional field shape_reference_point = " << *_tmp_17990;
                                char* _tmp_17991 = (char*) buffer++;
                                *_tmp_17991 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015980\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_17991;
                                char* _tmp_17992 = (char*) buffer++;
                                *_tmp_17992 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015981\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_17992;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_17993 = (char*) buffer++;
                                        *_tmp_17993 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015982\033[0m| Optional field z_coordinate = " << *_tmp_17993;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015983\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_17995 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_17995 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17995);
                                        _tmp_17995 -= -32768;
                                        uint16_t* _tmp_17994 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17994 = static_cast<uint16_t>(_tmp_17995);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m015984\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_17997 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_17997 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_17997);
                                        _tmp_17997 -= -32768;
                                        uint16_t* _tmp_17996 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_17996 = static_cast<uint16_t>(_tmp_17997);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m015985\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_17999 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_17999 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_17999);
                                            _tmp_17999 -= -32768;
                                            uint16_t* _tmp_17998 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_17998 = static_cast<uint16_t>(_tmp_17999);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015986\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].range.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].range.value;
                                }
                                
                                float _tmp_18001 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].range.value;
                                _tmp_18001 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18001);
                                uint16_t* _tmp_18000 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18000 = static_cast<uint16_t>(_tmp_18001);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015987\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_start.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_18003 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_start.value;
                                _tmp_18003 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18003);
                                uint16_t* _tmp_18002 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18002 = static_cast<uint16_t>(_tmp_18003);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015988\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_end.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_18005 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_end.value;
                                _tmp_18005 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18005);
                                uint16_t* _tmp_18004 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18004 = static_cast<uint16_t>(_tmp_18005);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015989\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_start[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_18007 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_18007 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18007);
                                    uint16_t* _tmp_18006 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18006 = static_cast<uint16_t>(_tmp_18007);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015990\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_end[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_18009 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_18009 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18009);
                                    uint16_t* _tmp_18008 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18008 = static_cast<uint16_t>(_tmp_18009);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_409 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m015991\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_18010 = (char*) buffer++;
                                *_tmp_18010 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m015992\033[0m| Optional field z_coordinate = " << *_tmp_18010;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015993\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_18011 = (uint8_t*) buffer++;
                                *_tmp_18011 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015994\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].x_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_18013 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].x_coordinate.value;
                                _tmp_18013 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18013);
                                _tmp_18013 -= -3094;
                                uint16_t* _tmp_18012 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18012 = static_cast<uint16_t>(_tmp_18013);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m015995\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].y_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_18015 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].y_coordinate.value;
                                _tmp_18015 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18015);
                                _tmp_18015 -= -3094;
                                uint16_t* _tmp_18014 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18014 = static_cast<uint16_t>(_tmp_18015);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m015996\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].z_coordinate[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_18017 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].z_coordinate[0].value;
                                    _tmp_18017 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18017);
                                    _tmp_18017 -= -3094;
                                    uint16_t* _tmp_18016 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18016 = static_cast<uint16_t>(_tmp_18017);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_7906 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.
                                *_ext_flag_7906 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_18018 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_18018 = __aux64__ - 1;
                                
                                int __ify = __aux64__;
                                for(int y = 0; y < __ify; y++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_18019 = (char*) buffer++;
                                        *_tmp_18019 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015998\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_18019;
                                        char* _tmp_18020 = (char*) buffer++;
                                        *_tmp_18020 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m015999\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_18020;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016000\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].range.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].range.value;
                                        }
                                        
                                        float _tmp_18022 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].range.value;
                                        _tmp_18022 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18022);
                                        uint16_t* _tmp_18021 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18021 = static_cast<uint16_t>(_tmp_18022);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016001\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_start.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_18024 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_start.value;
                                        _tmp_18024 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18024);
                                        uint16_t* _tmp_18023 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18023 = static_cast<uint16_t>(_tmp_18024);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016002\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_end.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_18026 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_end.value;
                                        _tmp_18026 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18026);
                                        uint16_t* _tmp_18025 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18025 = static_cast<uint16_t>(_tmp_18026);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016003\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_start[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_18028 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_start[0].value;
                                            _tmp_18028 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18028);
                                            uint16_t* _tmp_18027 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18027 = static_cast<uint16_t>(_tmp_18028);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016004\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_end[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_18030 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_end[0].value;
                                            _tmp_18030 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18030);
                                            uint16_t* _tmp_18029 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18029 = static_cast<uint16_t>(_tmp_18030);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w].radial_shapes[0].radial_shapes_list.elements[y].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_409) << ") selected in CHOICE Shape in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.included_shapes.elements[w]'; message dropped.";
                            return -1;
                        }
                    }
                    
                    // Field:  type(ExcludedShapes) name(excluded_shapes) extGroup(0)
                    // SequenceOf
                    // Data Type UInt8
                    // SEQUENCE_OF  min(0) max(4) span(5) ext(true)
                    uint8_t* _ext_flag_7912 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.
                    *_ext_flag_7912 = 0; 
                    
                    __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements.size();
                    if(__aux64__ > 4) __aux64__ = 4;
                    uint16_t* _tmp_18031 = (uint16_t*)buffer;
                    buffer += 2;
                    *_tmp_18031 = __aux64__;
                    
                    int __ifz = __aux64__;
                    for(int z = 0; z < __ifz; z++) { 
                        
                        // Choice
                           // #0  rectangular   RectangularShape
                           // #1  circular   CircularShape
                           // #2  polygonal   PolygonalShape
                           // #3  elliptical   EllipticalShape
                           // #4  radial   RadialShape
                           // #5  radialShapes   RadialShapes
                        uint8_t* _ext_flag_7913 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_7913 = 0; 
                        
                        uint8_t* _choice_410 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular.size() != 0) {  // CHOICE 0  fieldType(Shape) 
                            *_choice_410 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016006\033[0m| Choice selection: 0";
                        
                                // RectangularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiLength          StandardLength12b       
                                    //  semiBreadth         StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_18032 = (char*) buffer++;
                                *_tmp_18032 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016007\033[0m| Optional field shape_reference_point = " << *_tmp_18032;
                                char* _tmp_18033 = (char*) buffer++;
                                *_tmp_18033 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016008\033[0m| Optional field orientation = " << *_tmp_18033;
                                char* _tmp_18034 = (char*) buffer++;
                                *_tmp_18034 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016009\033[0m| Optional field height = " << *_tmp_18034;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_18035 = (char*) buffer++;
                                        *_tmp_18035 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m016010\033[0m| Optional field z_coordinate = " << *_tmp_18035;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016011\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_18037 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_18037 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18037);
                                        _tmp_18037 -= -32768;
                                        uint16_t* _tmp_18036 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18036 = static_cast<uint16_t>(_tmp_18037);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016012\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_18039 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_18039 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18039);
                                        _tmp_18039 -= -32768;
                                        uint16_t* _tmp_18038 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18038 = static_cast<uint16_t>(_tmp_18039);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016013\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_18041 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_18041 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18041);
                                            _tmp_18041 -= -32768;
                                            uint16_t* _tmp_18040 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18040 = static_cast<uint16_t>(_tmp_18041);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016014\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_length.value;
                                }
                                
                                float _tmp_18043 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_length.value;
                                _tmp_18043 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18043);
                                uint16_t* _tmp_18042 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18042 = static_cast<uint16_t>(_tmp_18043);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_breadth) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016015\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_breadth.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_breadth.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_breadth.value;
                                }
                                
                                float _tmp_18045 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_breadth.value;
                                _tmp_18045 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18045);
                                uint16_t* _tmp_18044 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18044 = static_cast<uint16_t>(_tmp_18045);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_breadth.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].semi_breadth.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016016\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_18047 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].orientation[0].value;
                                    _tmp_18047 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18047);
                                    uint16_t* _tmp_18046 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18046 = static_cast<uint16_t>(_tmp_18047);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016017\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].height[0].value;
                                    }
                                    
                                    float _tmp_18049 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].height[0].value;
                                    _tmp_18049 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18049);
                                    uint16_t* _tmp_18048 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18048 = static_cast<uint16_t>(_tmp_18049);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].rectangular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular.size() != 0)  // CHOICE 1  fieldType(Shape) 
                        {
                            *_choice_410 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016018\033[0m| Choice selection: 1";
                        
                                // CircularShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  radius              StandardLength12b       
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_18050 = (char*) buffer++;
                                *_tmp_18050 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016019\033[0m| Optional field shape_reference_point = " << *_tmp_18050;
                                char* _tmp_18051 = (char*) buffer++;
                                *_tmp_18051 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016020\033[0m| Optional field height = " << *_tmp_18051;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_18052 = (char*) buffer++;
                                        *_tmp_18052 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m016021\033[0m| Optional field z_coordinate = " << *_tmp_18052;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016022\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_18054 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_18054 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18054);
                                        _tmp_18054 -= -32768;
                                        uint16_t* _tmp_18053 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18053 = static_cast<uint16_t>(_tmp_18054);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016023\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_18056 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_18056 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18056);
                                        _tmp_18056 -= -32768;
                                        uint16_t* _tmp_18055 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18055 = static_cast<uint16_t>(_tmp_18056);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016024\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_18058 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_18058 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18058);
                                            _tmp_18058 -= -32768;
                                            uint16_t* _tmp_18057 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18057 = static_cast<uint16_t>(_tmp_18058);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(radius) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016025\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].radius.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].radius.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].radius.value;
                                }
                                
                                float _tmp_18060 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].radius.value;
                                _tmp_18060 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18060);
                                uint16_t* _tmp_18059 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18059 = static_cast<uint16_t>(_tmp_18060);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].radius.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].radius.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016026\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].height[0].value;
                                    }
                                    
                                    float _tmp_18062 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].height[0].value;
                                    _tmp_18062 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18062);
                                    uint16_t* _tmp_18061 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18061 = static_cast<uint16_t>(_tmp_18062);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].circular[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal.size() != 0)  // CHOICE 2  fieldType(Shape) 
                        {
                            *_choice_410 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016027\033[0m| Choice selection: 2";
                        
                                // PolygonalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d             OPTIONAL  
                                    //  polygon             SequenceOfCartesianPosition3d     
                                    //  height              StandardLength12b               OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_18063 = (char*) buffer++;
                                *_tmp_18063 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016028\033[0m| Optional field shape_reference_point = " << *_tmp_18063;
                                char* _tmp_18064 = (char*) buffer++;
                                *_tmp_18064 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016029\033[0m| Optional field height = " << *_tmp_18064;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_18065 = (char*) buffer++;
                                        *_tmp_18065 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m016030\033[0m| Optional field z_coordinate = " << *_tmp_18065;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016031\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_18067 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_18067 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18067);
                                        _tmp_18067 -= -32768;
                                        uint16_t* _tmp_18066 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18066 = static_cast<uint16_t>(_tmp_18067);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016032\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_18069 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_18069 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18069);
                                        _tmp_18069 -= -32768;
                                        uint16_t* _tmp_18068 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18068 = static_cast<uint16_t>(_tmp_18069);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016033\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_18071 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_18071 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18071);
                                            _tmp_18071 -= -32768;
                                            uint16_t* _tmp_18070 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18070 = static_cast<uint16_t>(_tmp_18071);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(SequenceOfCartesianPosition3d) name(polygon) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_7929 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.
                                *_ext_flag_7929 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_18072 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_18072 = __aux64__ - 1;
                                
                                int __ifa = __aux64__;
                                for(int a = 0; a < __ifa; a++) { 
                                    
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_18073 = (char*) buffer++;
                                        *_tmp_18073 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m016035\033[0m| Optional field z_coordinate = " << *_tmp_18073;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016036\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].x_coordinate.value;
                                        }
                                        
                                        float _tmp_18075 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].x_coordinate.value;
                                        _tmp_18075 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18075);
                                        _tmp_18075 -= -32768;
                                        uint16_t* _tmp_18074 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18074 = static_cast<uint16_t>(_tmp_18075);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016037\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].y_coordinate.value;
                                        }
                                        
                                        float _tmp_18077 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].y_coordinate.value;
                                        _tmp_18077 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18077);
                                        _tmp_18077 -= -32768;
                                        uint16_t* _tmp_18076 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18076 = static_cast<uint16_t>(_tmp_18077);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016038\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_18079 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].z_coordinate[0].value;
                                            _tmp_18079 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18079);
                                            _tmp_18079 -= -32768;
                                            uint16_t* _tmp_18078 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18078 = static_cast<uint16_t>(_tmp_18079);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].polygon.elements[a].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016039\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].height[0].value;
                                    }
                                    
                                    float _tmp_18081 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].height[0].value;
                                    _tmp_18081 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18081);
                                    uint16_t* _tmp_18080 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18080 = static_cast<uint16_t>(_tmp_18081);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].polygonal[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical.size() != 0)  // CHOICE 3  fieldType(Shape) 
                        {
                            *_choice_410 = 3;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016040\033[0m| Choice selection: 3";
                        
                                // EllipticalShape  SEQUENCE
                                    //  shapeReferencePoint CartesianPosition3d   OPTIONAL  
                                    //  semiMajorAxisLength StandardLength12b       
                                    //  semiMinorAxisLength StandardLength12b       
                                    //  orientation         CartesianAngleValue   OPTIONAL  
                                    //  height              StandardLength12b     OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_18082 = (char*) buffer++;
                                *_tmp_18082 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016041\033[0m| Optional field shape_reference_point = " << *_tmp_18082;
                                char* _tmp_18083 = (char*) buffer++;
                                *_tmp_18083 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].orientation.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016042\033[0m| Optional field orientation = " << *_tmp_18083;
                                char* _tmp_18084 = (char*) buffer++;
                                *_tmp_18084 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].height.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016043\033[0m| Optional field height = " << *_tmp_18084;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_18085 = (char*) buffer++;
                                        *_tmp_18085 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m016044\033[0m| Optional field z_coordinate = " << *_tmp_18085;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016045\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_18087 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_18087 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18087);
                                        _tmp_18087 -= -32768;
                                        uint16_t* _tmp_18086 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18086 = static_cast<uint16_t>(_tmp_18087);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016046\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_18089 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_18089 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18089);
                                        _tmp_18089 -= -32768;
                                        uint16_t* _tmp_18088 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18088 = static_cast<uint16_t>(_tmp_18089);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016047\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_18091 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_18091 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18091);
                                            _tmp_18091 -= -32768;
                                            uint16_t* _tmp_18090 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18090 = static_cast<uint16_t>(_tmp_18091);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_major_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016048\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_major_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_major_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_major_axis_length.value;
                                }
                                
                                float _tmp_18093 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_major_axis_length.value;
                                _tmp_18093 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18093);
                                uint16_t* _tmp_18092 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18092 = static_cast<uint16_t>(_tmp_18093);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_major_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(StandardLength12b) name(semi_minor_axis_length) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016049\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_minor_axis_length.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_minor_axis_length.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_minor_axis_length.value;
                                }
                                
                                float _tmp_18095 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_minor_axis_length.value;
                                _tmp_18095 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18095);
                                uint16_t* _tmp_18094 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18094 = static_cast<uint16_t>(_tmp_18095);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].semi_minor_axis_length.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].orientation.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(orientation) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016050\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].orientation[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].orientation[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].orientation[0].value;
                                    }
                                    
                                    float _tmp_18097 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].orientation[0].value;
                                    _tmp_18097 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18097);
                                    uint16_t* _tmp_18096 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18096 = static_cast<uint16_t>(_tmp_18097);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].orientation[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].orientation[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].height.size() != 0) {
                                    // Field:  type(StandardLength12b) name(height) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016051\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].height[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].height[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].height[0].value;
                                    }
                                    
                                    float _tmp_18099 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].height[0].value;
                                    _tmp_18099 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18099);
                                    uint16_t* _tmp_18098 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18098 = static_cast<uint16_t>(_tmp_18099);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].height[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].elliptical[0].height[0].value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial.size() != 0)  // CHOICE 4  fieldType(Shape) 
                        {
                            *_choice_410 = 4;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016052\033[0m| Choice selection: 4";
                        
                                // RadialShape  SEQUENCE
                                    //  shapeReferencePoint         CartesianPosition3d   OPTIONAL  
                                    //  range                       StandardLength12b       
                                    //  horizontalOpeningAngleStart CartesianAngleValue     
                                    //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                    //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                    //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_18100 = (char*) buffer++;
                                *_tmp_18100 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016053\033[0m| Optional field shape_reference_point = " << *_tmp_18100;
                                char* _tmp_18101 = (char*) buffer++;
                                *_tmp_18101 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016054\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_18101;
                                char* _tmp_18102 = (char*) buffer++;
                                *_tmp_18102 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016055\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_18102;
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point.size() != 0) {
                                    // Field:  type(CartesianPosition3d) name(shape_reference_point) extGroup(0)
                                        // CartesianPosition3d  SEQUENCE
                                            //  xCoordinate CartesianCoordinate     
                                            //  yCoordinate CartesianCoordinate     
                                            //  zCoordinate CartesianCoordinate   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_18103 = (char*) buffer++;
                                        *_tmp_18103 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].z_coordinate.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m016056\033[0m| Optional field z_coordinate = " << *_tmp_18103;
                                        
                                        // Field:  type(CartesianCoordinate) name(x_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016057\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].x_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].x_coordinate.value;
                                        }
                                        
                                        float _tmp_18105 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].x_coordinate.value;
                                        _tmp_18105 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18105);
                                        _tmp_18105 -= -32768;
                                        uint16_t* _tmp_18104 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18104 = static_cast<uint16_t>(_tmp_18105);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianCoordinate) name(y_coordinate) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016058\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].y_coordinate.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].y_coordinate.value;
                                        }
                                        
                                        float _tmp_18107 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].y_coordinate.value;
                                        _tmp_18107 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18107);
                                        _tmp_18107 -= -32768;
                                        uint16_t* _tmp_18106 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18106 = static_cast<uint16_t>(_tmp_18107);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].z_coordinate.size() != 0) {
                                            // Field:  type(CartesianCoordinate) name(z_coordinate) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(-32768) max(32767) span(65536) scaleDivisor(100.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016059\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].z_coordinate[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            }
                                            
                                            float _tmp_18109 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].z_coordinate[0].value;
                                            _tmp_18109 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18109);
                                            _tmp_18109 -= -32768;
                                            uint16_t* _tmp_18108 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18108 = static_cast<uint16_t>(_tmp_18109);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < -32768) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-32768); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].shape_reference_point[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                                return -1;
                                            }
                                        }
                                }
                                
                                // Field:  type(StandardLength12b) name(range) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016060\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].range.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].range.value;
                                }
                                
                                float _tmp_18111 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].range.value;
                                _tmp_18111 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18111);
                                uint16_t* _tmp_18110 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18110 = static_cast<uint16_t>(_tmp_18111);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016061\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_start.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_start.value;
                                }
                                
                                float _tmp_18113 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_start.value;
                                _tmp_18113 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18113);
                                uint16_t* _tmp_18112 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18112 = static_cast<uint16_t>(_tmp_18113);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016062\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_end.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_end.value;
                                }
                                
                                float _tmp_18115 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_end.value;
                                _tmp_18115 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18115);
                                uint16_t* _tmp_18114 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18114 = static_cast<uint16_t>(_tmp_18115);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_start.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016063\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_start[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_start[0].value;
                                    }
                                    
                                    float _tmp_18117 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_start[0].value;
                                    _tmp_18117 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18117);
                                    uint16_t* _tmp_18116 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18116 = static_cast<uint16_t>(_tmp_18117);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_end.size() != 0) {
                                    // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016064\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_end[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_end[0].value;
                                    }
                                    
                                    float _tmp_18119 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_end[0].value;
                                    _tmp_18119 *= 10.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18119);
                                    uint16_t* _tmp_18118 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18118 = static_cast<uint16_t>(_tmp_18119);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial[0].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                        return -1;
                                    }
                                }
                        
                        }
                        else if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes.size() != 0)  // CHOICE 5  fieldType(Shape) 
                        {
                            *_choice_410 = 5;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016065\033[0m| Choice selection: 5";
                        
                                // RadialShapes  SEQUENCE
                                    //  refPointId       Identifier1B                 
                                    //  xCoordinate      CartesianCoordinateSmall     
                                    //  yCoordinate      CartesianCoordinateSmall     
                                    //  zCoordinate      CartesianCoordinateSmall   OPTIONAL  
                                    //  radialShapesList RadialShapesList             
                                // Optional fields bytemap
                                char* _tmp_18120 = (char*) buffer++;
                                *_tmp_18120 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].z_coordinate.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016066\033[0m| Optional field z_coordinate = " << *_tmp_18120;
                                
                                // Field:  type(Identifier1B) name(ref_point_id) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016067\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].ref_point_id.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].ref_point_id.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].ref_point_id.value);
                                }
                                
                                uint8_t* _tmp_18121 = (uint8_t*) buffer++;
                                *_tmp_18121 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].ref_point_id.value; 
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].ref_point_id.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].ref_point_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(x_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016068\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].x_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].x_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].x_coordinate.value;
                                }
                                
                                float _tmp_18123 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].x_coordinate.value;
                                _tmp_18123 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18123);
                                _tmp_18123 -= -3094;
                                uint16_t* _tmp_18122 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18122 = static_cast<uint16_t>(_tmp_18123);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].x_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(CartesianCoordinateSmall) name(y_coordinate) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016069\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].y_coordinate.value) << 
                                                 " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].y_coordinate.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].y_coordinate.value;
                                }
                                
                                float _tmp_18125 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].y_coordinate.value;
                                _tmp_18125 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18125);
                                _tmp_18125 -= -3094;
                                uint16_t* _tmp_18124 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18124 = static_cast<uint16_t>(_tmp_18125);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                    logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].y_coordinate.value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].z_coordinate.size() != 0) {
                                    // Field:  type(CartesianCoordinateSmall) name(z_coordinate) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-3094) max(1001) span(4096) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016070\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].z_coordinate[0].value) << 
                                                     " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].z_coordinate[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].z_coordinate[0].value;
                                    }
                                    
                                    float _tmp_18127 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].z_coordinate[0].value;
                                    _tmp_18127 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18127);
                                    _tmp_18127 -= -3094;
                                    uint16_t* _tmp_18126 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18126 = static_cast<uint16_t>(_tmp_18127);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -3094) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") less than (-3094); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 1001) {
                                        logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].z_coordinate[0].value' (" << __aux64__ << ") exceeds max allowable (1001); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(RadialShapesList) name(radial_shapes_list) extGroup(0)
                                // SequenceOf
                                // Data Type UInt8
                                // SEQUENCE_OF  min(1) max(16) span(16) ext(true)
                                uint8_t* _ext_flag_7953 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.
                                *_ext_flag_7953 = 0; 
                                
                                __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements.size();
                                if(__aux64__ > 16) __aux64__ = 16;
                                uint16_t* _tmp_18128 = (uint16_t*)buffer;
                                buffer += 2;
                                *_tmp_18128 = __aux64__ - 1;
                                
                                int __ifb = __aux64__;
                                for(int b = 0; b < __ifb; b++) { 
                                    
                                        // RadialShapeDetails  SEQUENCE
                                            //  range                       StandardLength12b       
                                            //  horizontalOpeningAngleStart CartesianAngleValue     
                                            //  horizontalOpeningAngleEnd   CartesianAngleValue     
                                            //  verticalOpeningAngleStart   CartesianAngleValue   OPTIONAL  
                                            //  verticalOpeningAngleEnd     CartesianAngleValue   OPTIONAL  
                                        // Optional fields bytemap
                                        char* _tmp_18129 = (char*) buffer++;
                                        *_tmp_18129 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_start.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m016072\033[0m| Optional field vertical_opening_angle_start = " << *_tmp_18129;
                                        char* _tmp_18130 = (char*) buffer++;
                                        *_tmp_18130 = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_end.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m016073\033[0m| Optional field vertical_opening_angle_end = " << *_tmp_18130;
                                        
                                        // Field:  type(StandardLength12b) name(range) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016074\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].range.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].range.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].range.value;
                                        }
                                        
                                        float _tmp_18132 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].range.value;
                                        _tmp_18132 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18132);
                                        uint16_t* _tmp_18131 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18131 = static_cast<uint16_t>(_tmp_18132);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].range.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].range.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_start) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016075\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_start.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_start.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_start.value;
                                        }
                                        
                                        float _tmp_18134 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_start.value;
                                        _tmp_18134 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18134);
                                        uint16_t* _tmp_18133 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18133 = static_cast<uint16_t>(_tmp_18134);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_start.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_start.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        // Field:  type(CartesianAngleValue) name(horizontal_opening_angle_end) extGroup(0)
                                        // Real
                                        
                                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016076\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_end.value) << 
                                                         " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_end.value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_end.value;
                                        }
                                        
                                        float _tmp_18136 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_end.value;
                                        _tmp_18136 *= 10.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18136);
                                        uint16_t* _tmp_18135 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18135 = static_cast<uint16_t>(_tmp_18136);
                                        
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_end.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                            logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].horizontal_opening_angle_end.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_start.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_start) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016077\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_start[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_start[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_start[0].value;
                                            }
                                            
                                            float _tmp_18138 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_start[0].value;
                                            _tmp_18138 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18138);
                                            uint16_t* _tmp_18137 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18137 = static_cast<uint16_t>(_tmp_18138);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_start[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_start[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_end.size() != 0) {
                                            // Field:  type(CartesianAngleValue) name(vertical_opening_angle_end) extGroup(0)
                                            // Real
                                            
                                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m016078\033[0m| " << tools::getTypeName(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_end[0].value) << 
                                                             " epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_end[0].value: " << ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_end[0].value;
                                            }
                                            
                                            float _tmp_18140 = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_end[0].value;
                                            _tmp_18140 *= 10.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18140);
                                            uint16_t* _tmp_18139 = (uint16_t*) buffer; buffer += 2;
                                            *_tmp_18139 = static_cast<uint16_t>(_tmp_18140);
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_end[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z].radial_shapes[0].radial_shapes_list.elements[b].vertical_opening_angle_end[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_410) << ") selected in CHOICE Shape in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_dimensions.excluded_shapes.elements[z]'; message dropped.";
                            return -1;
                        }
                    }
                
                if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities.size() != 0) {
                    // Field:  type(EPUSectionCapabilities) name(epu_section_capabilities) extGroup(0)
                        // EPUSectionCapabilities  SEQUENCE
                            //  companyName EPUSectionCapabilities_companyName     
                            //  sensorTypes SensorTypes                            
                            //  ...
                        uint8_t* _ext_flag_7959 = (uint8_t*) buffer++;  // Write extension flag for EPUSectionCapabilities
                        *_ext_flag_7959 = 0;  
                        
                        // Optional fields bytemap
                        
                        // Field:  type(EPUSectionCapabilities_companyName) name(company_name) extGroup(0)
                        // Text
                        
                        // TEXT  min(1) max(24) span(24)
                        uint8_t* _tmp_18141 = (uint8_t*)buffer;
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
                            logger->debug() << "|\033[38;5;94m016079\033[0m| epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size(): " << 
                                        static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.size());
                        
                        if(__aux64__ > 24) __aux64__ = 24;
                        *_tmp_18141 = __aux64__ - 1;
                        buffer += 1;
                        
                        int __ifc = __aux64__;
                        for(int c = 0; c < __ifc; c++) {  // 24
                            char* __tmp__ = (char*)buffer++;
                            *__tmp__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].company_name.value.c_str()[c];
                        }
                        
                        // Field:  type(SensorTypes) name(sensor_types) extGroup(0)
                        // BitString
                        // BIT_STRING  min(16) max(16) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016080\033[0m| epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value: " << static_cast<int>(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size());
                        
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size() < 16) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size()) << " is less than allowable (16); message dropped.";
                            return -1;
                        }
                        if(ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size() > 16) {
                                logger->warning() << "Error: Value in 'epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.value' " << (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size()) << " exceeds max allowable (16); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _ext_flag_7960 = (uint8_t*) buffer++; // Write extension flag for ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.
                        *_ext_flag_7960 = 0; 
                        
                        uint8_t* _tmp_18142 = (uint8_t*)buffer;
                        __aux64__ = ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        *_tmp_18142 = __aux64__ - 16;
                        buffer += 1;
                        
                        int __ifd = __aux64__;
                        for(int d = 0; d < __ifd; d++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->epu_to_vehicle.epu_low_frequency_container[0].epu_section_capabilities[0].sensor_types.values[d]? 1: 0);
                        }
                        
                        if(*_ext_flag_7959) {
                        }
                }
                
                if(*_ext_flag_7864) {
                }
        }
    
	
            return buffer - start;
        }
    } 
}