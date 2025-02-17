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
 * Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(302637) cam(2) version(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <mad_cam_pdu_descriptions_wer_decoder.h>


/**
 *
 */
namespace wind
{
    namespace decoder_mad_cam_pdu_descriptions
    {        
        
        #if WIND_ROS_VERSION == 1
          bool WerDecoder::decode(mad_cam_pdu_descriptions_msgs::MADCAM* ros, const uint8_t *buffer)
        #else
          bool WerDecoder::decode(mad_cam_pdu_descriptions_msgs::msg::MADCAM* ros, const uint8_t *buffer)
        #endif
        {
            const uint8_t *start = buffer;
            int64_t __aux64__;
	
    // MADCAM  SEQUENCE
        //  header     ItsPduHeader      
        //  cam        CoopAwareness     
    
    // Field name: hheader
        // ItsPduHeader  SEQUENCE
            //  protocolVersion ItsPduHeader_protocolVersion     
            //  messageID       ItsPduHeader_messageID           
            //  stationID       StationID                        
        
        // Field name: protocol_version
        // Integer
        // UINT8  min(0) max(255) span(256) datatype(UInt8)
        uint8_t* _tmp_1 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_1;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m000000\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
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
            logger->debug() << "|\033[38;5;94m000001\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
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
            logger->debug() << "|\033[38;5;94m000002\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
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
    
    // Field name: cam
        // CoopAwareness  SEQUENCE
            //  generationDeltaTime GenerationDeltaTime     
            //  camParameters       CamParameters           
        
        // Field name: generation_delta_time
        // Integer
        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
        uint16_t* _tmp_4 = (uint16_t*) buffer; buffer += 2;
        __aux64__ = *_tmp_4;
        ros->cam.generation_delta_time.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m000003\033[0m| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
                         " cam.generation_delta_time.value: " << ros->cam.generation_delta_time.value;
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'cam.generation_delta_time.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->warning() << "Error: Value in 'cam.generation_delta_time.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
            return false;
        }
        
        // Field name: cam_parameters
            // CamParameters  SEQUENCE
                //  basicContainer          BasicContainer              
                //  highFrequencyContainer  HighFrequencyContainer      
                //  lowFrequencyContainer   LowFrequencyContainer     OPTIONAL  
                //  specialVehicleContainer SpecialVehicleContainer   OPTIONAL  
                //  ...
            uint8_t* _ext_flag_1 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m000004\033[0m| Reading ext flag from ros->cam.cam_parameters.: " << int(*_ext_flag_1);
            }
            
            if(*(buffer++)) { 
                mad_cam_pdu_descriptions_msgs::msg::LowFrequencyContainer _tmp_5;
                ros->cam.cam_parameters.low_frequency_container.push_back(_tmp_5);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000005\033[0m| ros->cam.cam_parameters.low_frequency_container " << tools::green("present");
            }
            if(*(buffer++)) { 
                mad_cam_pdu_descriptions_msgs::msg::SpecialVehicleContainer _tmp_6;
                ros->cam.cam_parameters.special_vehicle_container.push_back(_tmp_6);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000006\033[0m| ros->cam.cam_parameters.special_vehicle_container " << tools::green("present");
            }
            
            // Field name: basic_container
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_2 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.basic_container.
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000007\033[0m| Reading ext flag from ros->cam.cam_parameters.basic_container.: " << int(*_ext_flag_2);
                }
                
                
                // Field name: station_type
                // Integer
                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                uint8_t* _tmp_7 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_7;
                ros->cam.cam_parameters.basic_container.station_type.value = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000008\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
                                 " cam.cam_parameters.basic_container.station_type.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.station_type.value);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                    logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
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
                    uint32_t* _tmp_8 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value = *_tmp_8;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value += -900000000;
                    __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value /= 1.0E7;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000009\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << " cam.cam_parameters.basic_container.reference_position.latitude: " <<
                                     ros->cam.cam_parameters.basic_container.reference_position.latitude.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: longitude
                    // Real
                    // Double
                    // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                    uint32_t* _tmp_9 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value = *_tmp_9;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value += -1800000000;
                    __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value /= 1.0E7;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000010\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << " cam.cam_parameters.basic_container.reference_position.longitude: " <<
                                     ros->cam.cam_parameters.basic_container.reference_position.longitude.value << " (" << __aux64__ << ")";
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
                        uint16_t* _tmp_10 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value = *_tmp_10;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000011\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_minor_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_11 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value = *_tmp_11;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' " << (__aux64__) << " exceeds max allowable (4095); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000012\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_major_orientation
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_12 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value = *_tmp_12;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000013\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: altitude
                        // Altitude  SEQUENCE
                            //  altitudeValue      AltitudeValue          
                            //  altitudeConfidence AltitudeConfidence     
                        
                        // Field name: altitude_value
                        // Real
                        // Float
                        // FLOAT  min(-100000) max(800001) span(900002) scaleDivisor(100.0) dataType(Float)
                        uint32_t* _tmp_13 = (uint32_t*) buffer; buffer += 4;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value = *_tmp_13;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value += -100000;
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -100000) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' " << (__aux64__) << " is less than allowable (-100000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 800001) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' " << (__aux64__) << " exceeds max allowable (800001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000014\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: altitude_confidence
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_14 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_14;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000015\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                if(*_ext_flag_2) { // from ros->cam.cam_parameters.basic_container. 
                    uint8_t* _tmp_15 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_1[*_tmp_15];
                    
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000016\033[0m| Reading number of exts from ros->cam.cam_parameters.basic_container.: " << static_cast<unsigned int>(*_tmp_15);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_15; i++)
                        _array_1[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_15; i++) {
                        uint16_t* _tmp_16 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_16; i++)
                            buffer++;
                    }
                    
                }
            
            // Field name: high_frequency_container
            // Choice
            uint8_t* _ext_flag_10 = (uint8_t*)buffer++; // ext flag
            
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency   
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency   
               // #2  madVehicleContainerHighFrequency   MADVehicleContainerHighFrequency   (ext field)
            uint8_t _choice_1 = *(buffer++);
            
            if(*_ext_flag_10)
                _choice_1 += 1 + 1; // Ext addition
            
            if(_choice_1 == 0) {
                mad_cam_pdu_descriptions_msgs::msg::BasicVehicleContainerHighFrequency _tmp_17;
                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.push_back(_tmp_17);
            
                    // BasicVehicleContainerHighFrequency  SEQUENCE
                        //  heading                  Heading                      
                        //  speed                    Speed                        
                        //  driveDirection           DriveDirection               
                        //  vehicleLength            VehicleLength                
                        //  vehicleWidth             VehicleWidth                 
                        //  longitudinalAcceleration LongitudinalAcceleration     
                        //  curvature                Curvature                    
                        //  curvatureCalculationMode CurvatureCalculationMode     
                        //  yawRate                  YawRate                      
                        //  accelerationControl      AccelerationControl        OPTIONAL  
                        //  lanePosition             LanePosition               OPTIONAL  
                        //  steeringWheelAngle       SteeringWheelAngle         OPTIONAL  
                        //  lateralAcceleration      LateralAcceleration        OPTIONAL  
                        //  verticalAcceleration     VerticalAcceleration       OPTIONAL  
                        //  performanceClass         PerformanceClass           OPTIONAL  
                        //  cenDsrcTollingZone       CenDsrcTollingZone         OPTIONAL  
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::AccelerationControl _tmp_18;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.push_back(_tmp_18);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000017\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::LanePosition _tmp_19;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.push_back(_tmp_19);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000018\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::SteeringWheelAngle _tmp_20;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.push_back(_tmp_20);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000019\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::LateralAcceleration _tmp_21;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.push_back(_tmp_21);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000020\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::VerticalAcceleration _tmp_22;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.push_back(_tmp_22);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000021\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::PerformanceClass _tmp_23;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.push_back(_tmp_23);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000022\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::CenDsrcTollingZone _tmp_24;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.push_back(_tmp_24);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000023\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone " << tools::green("present");
                    }
                    
                    // Field name: heading
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        
                        // Field name: heading_value
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_25 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value = *_tmp_25;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000024\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: heading_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_26 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value = *_tmp_26;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000025\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: speed
                        // Speed  SEQUENCE
                            //  speedValue      SpeedValue          
                            //  speedConfidence SpeedConfidence     
                        
                        // Field name: speed_value
                        // Real
                        // Float
                        // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_27 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value = *_tmp_27;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000026\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: speed_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                        uint8_t* _tmp_28 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value = *_tmp_28;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000027\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: drive_direction
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _tmp_29 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_29;
                    __aux64__ += 0;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value = __aux64__;
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                        return false;
                    }
                    
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000028\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value);
                    }
                    
                    // Field name: vehicle_length
                        // VehicleLength  SEQUENCE
                            //  vehicleLengthValue                VehicleLengthValue                    
                            //  vehicleLengthConfidenceIndication VehicleLengthConfidenceIndication     
                        
                        // Field name: vehicle_length_value
                        // Real
                        // Float
                        // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_30 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value = *_tmp_30;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000029\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: vehicle_length_confidence_indication
                        // Enumerated
                        // INT32  min(0) max(4) span(5) datatype(Int32)
                        uint8_t* _tmp_31 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_31;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000030\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                    
                    // Field name: vehicle_width
                    // Real
                    // Float
                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                    uint8_t* _tmp_32 = (uint8_t*) buffer++;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value = *_tmp_32;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value += 1;
                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value /= 10.0;
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 62) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' " << (__aux64__) << " exceeds max allowable (62); message dropped.";
                        return false;
                    }
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000031\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width: " <<
                                     ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: longitudinal_acceleration
                        // LongitudinalAcceleration  SEQUENCE
                            //  longitudinalAccelerationValue      LongitudinalAccelerationValue     
                            //  longitudinalAccelerationConfidence AccelerationConfidence            
                        
                        // Field name: longitudinal_acceleration_value
                        // Real
                        // Float
                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_33 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value = *_tmp_33;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value += -160;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -160) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 161) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000032\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longitudinal_acceleration_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_34 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value = *_tmp_34;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 102) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000033\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: curvature
                        // Curvature  SEQUENCE
                            //  curvatureValue      CurvatureValue          
                            //  curvatureConfidence CurvatureConfidence     
                        
                        // Field name: curvature_value
                        // Integer
                        // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                        uint16_t* _tmp_35 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_35;
                        __aux64__ += -1023;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000034\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                            return false;
                        }
                        
                        // Field name: curvature_confidence
                        // Enumerated
                        // INT32  min(0) max(7) span(8) datatype(Int32)
                        uint8_t* _tmp_36 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_36;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000035\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                    
                    // Field name: curvature_calculation_mode
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _ext_flag_22 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000036\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.: " << int(*_ext_flag_22);
                    }
                    
                    uint8_t* _tmp_37 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_37;
                    __aux64__ += 0;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value = __aux64__;
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                        return false;
                    }
                    
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000037\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value);
                    }
                    
                    // Field name: yaw_rate
                        // YawRate  SEQUENCE
                            //  yawRateValue      YawRateValue          
                            //  yawRateConfidence YawRateConfidence     
                        
                        // Field name: yaw_rate_value
                        // Real
                        // Float
                        // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_38 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value = *_tmp_38;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value += -32766;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value /= 100.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -32766) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' " << (__aux64__) << " is less than allowable (-32766); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000038\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: yaw_rate_confidence
                        // Enumerated
                        // INT32  min(0) max(8) span(9) datatype(Int32)
                        uint8_t* _tmp_39 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_39;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 8) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000039\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0) {
                        // Field name: acceleration_control
                        // BitString
                        // BIT_STRING  min(7) max(7) span(1)
                        uint8_t* _tmp_40 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_40 + 7;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000040\033[0m| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << __aux64__;
                        
                        int _if__tmp_40 = __aux64__;
                        for(int a = 0; a < _if__tmp_40; a++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[a] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (__aux64__) << " is less than allowable (7); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0) {
                        // Field name: lane_position
                        // Integer
                        // INT8  min(-1) max(14) span(16) datatype(Int8)
                        uint8_t* _tmp_41 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_41;
                        __aux64__ += -1;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000041\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' " << (__aux64__) << " is less than allowable (-1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 14) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' " << (__aux64__) << " exceeds max allowable (14); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() != 0) {
                        // Field name: steering_wheel_angle
                            // SteeringWheelAngle  SEQUENCE
                                //  steeringWheelAngleValue      SteeringWheelAngleValue          
                                //  steeringWheelAngleConfidence SteeringWheelAngleConfidence     
                            
                            // Field name: steering_wheel_angle_value
                            // Integer
                            // INT16  min(-511) max(512) span(1024) datatype(Int16)
                            uint16_t* _tmp_42 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_42;
                            __aux64__ += -511;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000042\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -511) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " is less than allowable (-511); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 512) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " exceeds max allowable (512); message dropped.";
                                return false;
                            }
                            
                            // Field name: steering_wheel_angle_confidence
                            // Integer
                            // UINT8  min(1) max(127) span(127) datatype(UInt8)
                            uint8_t* _tmp_43 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_43;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000043\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                return false;
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() != 0) {
                        // Field name: lateral_acceleration
                            // LateralAcceleration  SEQUENCE
                                //  lateralAccelerationValue      LateralAccelerationValue     
                                //  lateralAccelerationConfidence AccelerationConfidence       
                            
                            // Field name: lateral_acceleration_value
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_44 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value = *_tmp_44;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value += -160;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000044\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: lateral_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_45 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value = *_tmp_45;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000045\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() != 0) {
                        // Field name: vertical_acceleration
                            // VerticalAcceleration  SEQUENCE
                                //  verticalAccelerationValue      VerticalAccelerationValue     
                                //  verticalAccelerationConfidence AccelerationConfidence        
                            
                            // Field name: vertical_acceleration_value
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_46 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value = *_tmp_46;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value += -160;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000046\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vertical_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_47 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value = *_tmp_47;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000047\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0) {
                        // Field name: performance_class
                        // Integer
                        // UINT8  min(0) max(7) span(8) datatype(UInt8)
                        uint8_t* _tmp_48 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_48;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000048\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() != 0) {
                        // Field name: cen_dsrc_tolling_zone
                            // CenDsrcTollingZone  SEQUENCE
                                //  protectedZoneLatitude  Latitude                 
                                //  protectedZoneLongitude Longitude                
                                //  cenDsrcTollingZoneID   CenDsrcTollingZoneID   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_29 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000049\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << int(*_ext_flag_29);
                            }
                            
                            if(*(buffer++)) { 
                                its_container_v2_its_container_msgs::msg::CenDsrcTollingZoneID _tmp_49;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.push_back(_tmp_49);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000050\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id " << tools::green("present");
                            }
                            
                            // Field name: protected_zone_latitude
                            // Real
                            // Double
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_50 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value = *_tmp_50;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value += -900000000;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value /= 1.0E7;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000051\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: protected_zone_longitude
                            // Real
                            // Double
                            // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_51 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value = *_tmp_51;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value += -1800000000;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value /= 1.0E7;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000052\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value << " (" << __aux64__ << ")";
                            }
                            
                            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                // Field name: cen_dsrc_tolling_zone_id
                                // Integer
                                // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                uint32_t* _tmp_52 = (uint32_t*) buffer; buffer += 4;
                                __aux64__ = *_tmp_52;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000053\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                 " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                    return false;
                                }
                            }
                            if(*_ext_flag_29) { // from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0]. 
                                uint8_t* _tmp_53 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_2[*_tmp_53];
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000054\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << static_cast<unsigned int>(*_tmp_53);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_53; i++)
                                    _array_2[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_53; i++) {
                                    uint16_t* _tmp_54 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_54; i++)
                                        buffer++;
                                }
                                
                            }
                    }
            }
            else if(_choice_1 == 1)  // CHOICE HighFrequencyContainer  fieldName(rsu_container_high_frequency)
            {
                mad_cam_pdu_descriptions_msgs::msg::RSUContainerHighFrequency _tmp_55;
                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.push_back(_tmp_55);
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_32 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000055\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << int(*_ext_flag_32);
                    }
                    
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::ProtectedCommunicationZonesRSU _tmp_56;
                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.push_back(_tmp_56);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000056\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu " << tools::green("present");
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0) {
                        // Field name: protected_communication_zones_rsu
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16)
                        int16_t* _tmp_57 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_57;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_57 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000057\033[0m| SequenceOf ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0]. size: " << int(*_tmp_57);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 16) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].value' " << (__aux64__) << " exceeds max allowable (16); message dropped.";
                            return false;
                        }
                        
                        
                        for(int b = 0; b < _if__tmp_57; b++) {
                            its_container_v2_its_container_msgs::msg::ProtectedCommunicationZone seqof_b;  // SEQUENCE
                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.push_back(seqof_b);
                        
                                // ProtectedCommunicationZone  SEQUENCE
                                    //  protectedZoneType      ProtectedZoneType       
                                    //  expiryTime             TimestampIts          OPTIONAL  
                                    //  protectedZoneLatitude  Latitude                
                                    //  protectedZoneLongitude Longitude               
                                    //  protectedZoneRadius    ProtectedZoneRadius   OPTIONAL  
                                    //  protectedZoneID        ProtectedZoneID       OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_33 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000058\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].: " << int(*_ext_flag_33);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::TimestampIts _tmp_58;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.push_back(_tmp_58);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000059\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::ProtectedZoneRadius _tmp_59;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.push_back(_tmp_59);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000060\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::ProtectedZoneID _tmp_60;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.push_back(_tmp_60);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000061\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id " << tools::green("present");
                                }
                                
                                // Field name: protected_zone_type
                                // Enumerated
                                // INT32  min(0) max(1) span(2) datatype(Int32)
                                uint8_t* _ext_flag_34 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000062\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.: " << int(*_ext_flag_34);
                                }
                                
                                uint8_t* _tmp_61 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_61;
                                __aux64__ += 0;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' " << (__aux64__) << " exceeds max allowable (1); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000063\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value);
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.size() != 0) {
                                    // Field name: expiry_time
                                    // Integer
                                    // INT64  min(0) max(4398046511103) span(4398046511104) datatype(Int64)
                                    uint64_t* _tmp_62 = (uint64_t*)buffer; buffer += 8;
                                    __aux64__ = *_tmp_62;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000064\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' " << (__aux64__) << " exceeds max allowable (4398046511103); message dropped.";
                                        return false;
                                    }
                                }
                                
                                // Field name: protected_zone_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_63 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value = *_tmp_63;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value += -900000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000065\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: protected_zone_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_64 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value = *_tmp_64;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value += -1800000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000066\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.size() != 0) {
                                    // Field name: protected_zone_radius
                                    // Integer
                                    // UINT8  min(1) max(255) span(255) datatype(UInt8)
                                    uint8_t* _ext_flag_37 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000067\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].: " << int(*_ext_flag_37);
                                    }
                                    
                                    if(*_ext_flag_37) {
                                        uint8_t* _tmp_66 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_66) {
                                            uint64_t* _tmp_67 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = *_tmp_67;
                                            __aux64__ += INT64_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value = __aux64__;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_67 = (uint32_t*) buffer; buffer += 4;
                                            __aux64__ = *_tmp_67;
                                            __aux64__ += INT32_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value = __aux64__;
                                        }
                                    }
                                    else
                                    {
                                        uint8_t* _tmp_65 = (uint8_t*) buffer++;
                                        __aux64__ = *_tmp_65;
                                        __aux64__ += 1;
                                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value = __aux64__;
                                    
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000068\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value) << 
                                                         " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value);
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                            return false;
                                        }
                                        
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.size() != 0) {
                                    // Field name: protected_zone_id
                                    // Integer
                                    // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                    uint32_t* _tmp_68 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_68;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000069\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_33) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b]. 
                                    uint8_t* _tmp_69 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_3[*_tmp_69];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000070\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].: " << static_cast<unsigned int>(*_tmp_69);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_69; i++)
                                        _array_3[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_69; i++) {
                                        uint16_t* _tmp_70 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_70; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                    }
                    if(*_ext_flag_32) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0]. 
                        uint8_t* _tmp_71 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_4[*_tmp_71];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000071\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << static_cast<unsigned int>(*_tmp_71);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_71; i++)
                            _array_4[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_71; i++) {
                            uint16_t* _tmp_72 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_72; i++)
                                buffer++;
                        }
                        
                    }
            }
            else if(_choice_1 == 2)  // CHOICE HighFrequencyContainer  fieldName(mad_vehicle_container_high_frequency)
            {
                mad_cam_pdu_descriptions_msgs::msg::MADVehicleContainerHighFrequency _tmp_73;
                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency.push_back(_tmp_73);
            
                uint16_t* _tmp_74 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                    // MADVehicleContainerHighFrequency  SEQUENCE
                        //  basicVehicleContainerHighFrequency BasicVehicleContainerHighFrequency     
                        //  madControlModeState                MADControlModeState                    
                    
                    // Field name: basic_vehicle_container_high_frequency
                        // BasicVehicleContainerHighFrequency  SEQUENCE
                            //  heading                  Heading                      
                            //  speed                    Speed                        
                            //  driveDirection           DriveDirection               
                            //  vehicleLength            VehicleLength                
                            //  vehicleWidth             VehicleWidth                 
                            //  longitudinalAcceleration LongitudinalAcceleration     
                            //  curvature                Curvature                    
                            //  curvatureCalculationMode CurvatureCalculationMode     
                            //  yawRate                  YawRate                      
                            //  accelerationControl      AccelerationControl        OPTIONAL  
                            //  lanePosition             LanePosition               OPTIONAL  
                            //  steeringWheelAngle       SteeringWheelAngle         OPTIONAL  
                            //  lateralAcceleration      LateralAcceleration        OPTIONAL  
                            //  verticalAcceleration     VerticalAcceleration       OPTIONAL  
                            //  performanceClass         PerformanceClass           OPTIONAL  
                            //  cenDsrcTollingZone       CenDsrcTollingZone         OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::AccelerationControl _tmp_75;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.push_back(_tmp_75);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000072\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::LanePosition _tmp_76;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.push_back(_tmp_76);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000073\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::SteeringWheelAngle _tmp_77;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.push_back(_tmp_77);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000074\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::LateralAcceleration _tmp_78;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.push_back(_tmp_78);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000075\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::VerticalAcceleration _tmp_79;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.push_back(_tmp_79);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000076\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::PerformanceClass _tmp_80;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.push_back(_tmp_80);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000077\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::CenDsrcTollingZone _tmp_81;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.push_back(_tmp_81);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000078\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone " << tools::green("present");
                        }
                        
                        // Field name: heading
                            // Heading  SEQUENCE
                                //  headingValue      HeadingValue          
                                //  headingConfidence HeadingConfidence     
                            
                            // Field name: heading_value
                            // Real
                            // Float
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_82 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value = *_tmp_82;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000079\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: heading_confidence
                            // Real
                            // Float
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_83 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value = *_tmp_83;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value += 1;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000080\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: speed
                            // Speed  SEQUENCE
                                //  speedValue      SpeedValue          
                                //  speedConfidence SpeedConfidence     
                            
                            // Field name: speed_value
                            // Real
                            // Float
                            // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                            uint16_t* _tmp_84 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value = *_tmp_84;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value /= 100.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000081\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: speed_confidence
                            // Real
                            // Float
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                            uint8_t* _tmp_85 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value = *_tmp_85;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value += 1;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value /= 100.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000082\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: drive_direction
                        // Enumerated
                        // INT32  min(0) max(2) span(3) datatype(Int32)
                        uint8_t* _tmp_86 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_86;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000083\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value);
                        }
                        
                        // Field name: vehicle_length
                            // VehicleLength  SEQUENCE
                                //  vehicleLengthValue                VehicleLengthValue                    
                                //  vehicleLengthConfidenceIndication VehicleLengthConfidenceIndication     
                            
                            // Field name: vehicle_length_value
                            // Real
                            // Float
                            // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_87 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value = *_tmp_87;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value += 1;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000084\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vehicle_length_confidence_indication
                            // Enumerated
                            // INT32  min(0) max(4) span(5) datatype(Int32)
                            uint8_t* _tmp_88 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_88;
                            __aux64__ += 0;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000085\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value);
                            }
                        
                        // Field name: vehicle_width
                        // Real
                        // Float
                        // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_89 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value = *_tmp_89;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value += 1;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value /= 10.0;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 62) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value' " << (__aux64__) << " exceeds max allowable (62); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000086\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width: " <<
                                         ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longitudinal_acceleration
                            // LongitudinalAcceleration  SEQUENCE
                                //  longitudinalAccelerationValue      LongitudinalAccelerationValue     
                                //  longitudinalAccelerationConfidence AccelerationConfidence            
                            
                            // Field name: longitudinal_acceleration_value
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_90 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value = *_tmp_90;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value += -160;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000087\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: longitudinal_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_91 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value = *_tmp_91;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000088\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: curvature
                            // Curvature  SEQUENCE
                                //  curvatureValue      CurvatureValue          
                                //  curvatureConfidence CurvatureConfidence     
                            
                            // Field name: curvature_value
                            // Integer
                            // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                            uint16_t* _tmp_92 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_92;
                            __aux64__ += -1023;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000089\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                return false;
                            }
                            
                            // Field name: curvature_confidence
                            // Enumerated
                            // INT32  min(0) max(7) span(8) datatype(Int32)
                            uint8_t* _tmp_93 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_93;
                            __aux64__ += 0;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000090\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value);
                            }
                        
                        // Field name: curvature_calculation_mode
                        // Enumerated
                        // INT32  min(0) max(2) span(3) datatype(Int32)
                        uint8_t* _ext_flag_49 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000091\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.: " << int(*_ext_flag_49);
                        }
                        
                        uint8_t* _tmp_94 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_94;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000092\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value);
                        }
                        
                        // Field name: yaw_rate
                            // YawRate  SEQUENCE
                                //  yawRateValue      YawRateValue          
                                //  yawRateConfidence YawRateConfidence     
                            
                            // Field name: yaw_rate_value
                            // Real
                            // Float
                            // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                            uint16_t* _tmp_95 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value = *_tmp_95;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value += -32766;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value /= 100.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -32766) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value' " << (__aux64__) << " is less than allowable (-32766); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 32767) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value' " << (__aux64__) << " exceeds max allowable (32767); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000093\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: yaw_rate_confidence
                            // Enumerated
                            // INT32  min(0) max(8) span(9) datatype(Int32)
                            uint8_t* _tmp_96 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_96;
                            __aux64__ += 0;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000094\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value);
                            }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.size() != 0) {
                            // Field name: acceleration_control
                            // BitString
                            // BIT_STRING  min(7) max(7) span(1)
                            uint8_t* _tmp_97 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_97 + 7;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000095\033[0m| cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value: " << __aux64__;
                            
                            int _if__tmp_97 = __aux64__;
                            for(int c = 0; c < _if__tmp_97; c++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values[c] = (*__b__ == 1);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (__aux64__) << " is less than allowable (7); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.size() != 0) {
                            // Field name: lane_position
                            // Integer
                            // INT8  min(-1) max(14) span(16) datatype(Int8)
                            uint8_t* _tmp_98 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_98;
                            __aux64__ += -1;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000096\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value' " << (__aux64__) << " is less than allowable (-1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 14) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value' " << (__aux64__) << " exceeds max allowable (14); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.size() != 0) {
                            // Field name: steering_wheel_angle
                                // SteeringWheelAngle  SEQUENCE
                                    //  steeringWheelAngleValue      SteeringWheelAngleValue          
                                    //  steeringWheelAngleConfidence SteeringWheelAngleConfidence     
                                
                                // Field name: steering_wheel_angle_value
                                // Integer
                                // INT16  min(-511) max(512) span(1024) datatype(Int16)
                                uint16_t* _tmp_99 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_99;
                                __aux64__ += -511;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000097\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -511) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " is less than allowable (-511); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 512) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value' " << (__aux64__) << " exceeds max allowable (512); message dropped.";
                                    return false;
                                }
                                
                                // Field name: steering_wheel_angle_confidence
                                // Integer
                                // UINT8  min(1) max(127) span(127) datatype(UInt8)
                                uint8_t* _tmp_100 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_100;
                                __aux64__ += 1;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000098\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                    return false;
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.size() != 0) {
                            // Field name: lateral_acceleration
                                // LateralAcceleration  SEQUENCE
                                    //  lateralAccelerationValue      LateralAccelerationValue     
                                    //  lateralAccelerationConfidence AccelerationConfidence       
                                
                                // Field name: lateral_acceleration_value
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_101 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value = *_tmp_101;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value += -160;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000099\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lateral_acceleration_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_102 = (uint8_t*) buffer++;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value = *_tmp_102;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000100\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value << " (" << __aux64__ << ")";
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.size() != 0) {
                            // Field name: vertical_acceleration
                                // VerticalAcceleration  SEQUENCE
                                    //  verticalAccelerationValue      VerticalAccelerationValue     
                                    //  verticalAccelerationConfidence AccelerationConfidence        
                                
                                // Field name: vertical_acceleration_value
                                // Real
                                // Float
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_103 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value = *_tmp_103;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value += -160;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000101\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: vertical_acceleration_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_104 = (uint8_t*) buffer++;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value = *_tmp_104;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 102) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value' " << (__aux64__) << " exceeds max allowable (102); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000102\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value << " (" << __aux64__ << ")";
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.size() != 0) {
                            // Field name: performance_class
                            // Integer
                            // UINT8  min(0) max(7) span(8) datatype(UInt8)
                            uint8_t* _tmp_105 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_105;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000103\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.size() != 0) {
                            // Field name: cen_dsrc_tolling_zone
                                // CenDsrcTollingZone  SEQUENCE
                                    //  protectedZoneLatitude  Latitude                 
                                    //  protectedZoneLongitude Longitude                
                                    //  cenDsrcTollingZoneID   CenDsrcTollingZoneID   OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_56 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000104\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].: " << int(*_ext_flag_56);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::CenDsrcTollingZoneID _tmp_106;
                                    ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.push_back(_tmp_106);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000105\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id " << tools::green("present");
                                }
                                
                                // Field name: protected_zone_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_107 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value = *_tmp_107;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value += -900000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000106\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: protected_zone_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_108 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value = *_tmp_108;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value += -1800000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000107\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                    // Field name: cen_dsrc_tolling_zone_id
                                    // Integer
                                    // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                    uint32_t* _tmp_109 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_109;
                                    ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000108\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_56) { // from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0]. 
                                    uint8_t* _tmp_110 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_5[*_tmp_110];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000109\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].: " << static_cast<unsigned int>(*_tmp_110);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_110; i++)
                                        _array_5[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_110; i++) {
                                        uint16_t* _tmp_111 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_111; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                    
                    // Field name: mad_control_mode_state
                        // MADControlModeState  SEQUENCE
                            //  madControlMode       MADControlMode          
                            //  madDrivingMode       MADDrivingMode          
                            //  adviceTimeConsidered GenerationDeltaTime   OPTIONAL  
                        if(*(buffer++)) { 
                            mad_cam_pdu_descriptions_msgs::msg::GenerationDeltaTime _tmp_112;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.push_back(_tmp_112);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000110\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered " << tools::green("present");
                        }
                        
                        // Field name: mad_control_mode
                        // Enumerated
                        // INT32  min(0) max(7) span(8) datatype(Int32)
                        uint8_t* _ext_flag_59 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000111\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.: " << int(*_ext_flag_59);
                        }
                        
                        uint8_t* _tmp_113 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_113;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000112\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value);
                        }
                        
                        // Field name: mad_driving_mode
                        // Enumerated
                        // INT32  min(0) max(3) span(4) datatype(Int32)
                        uint8_t* _tmp_114 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_114;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000113\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value);
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.size() != 0) {
                            // Field name: advice_time_considered
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_115 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_115;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000114\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
            }
            else
            {
                uint16_t* _tmp_116 = (uint16_t*)buffer;  // OpenType length
                buffer += 2 + int(*_tmp_116);            // Ignoring opentype data
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() != 0) {
                // Field name: low_frequency_container
                // Choice
                uint8_t* _ext_flag_61 = (uint8_t*)buffer++; // ext flag
                
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency   
                   // #1  madVehicleContainerLowFrequency   MADVehicleContainerLowFrequency   (ext field)
                uint8_t _choice_2 = *(buffer++);
                
                if(*_ext_flag_61)
                    _choice_2 += 0 + 1; // Ext addition
                
                if(_choice_2 == 0) {
                    mad_cam_pdu_descriptions_msgs::msg::BasicVehicleContainerLowFrequency _tmp_117;
                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.push_back(_tmp_117);
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        
                        // Field name: vehicle_role
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_118 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_118;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000115\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        // Field name: exterior_lights
                        // BitString
                        // BIT_STRING  min(8) max(8) span(1)
                        uint8_t* _tmp_119 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_119 + 8;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000116\033[0m| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << __aux64__;
                        
                        int _if__tmp_119 = __aux64__;
                        for(int d = 0; d < _if__tmp_119; d++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values[d] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 8) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 8) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                            return false;
                        }
                        
                        // Field name: path_history
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(40) span(41)
                        int16_t* _tmp_120 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_120;
                        
                        int _if__tmp_120 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000117\033[0m| SequenceOf ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history. size: " << int(*_tmp_120);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 40) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.value' " << (__aux64__) << " exceeds max allowable (40); message dropped.";
                            return false;
                        }
                        
                        
                        for(int e = 0; e < _if__tmp_120; e++) {
                            its_container_v2_its_container_msgs::msg::PathPoint seqof_e;  // SEQUENCE
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements.push_back(seqof_e);
                        
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::PathDeltaTime _tmp_121;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time.push_back(_tmp_121);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000118\033[0m| ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time " << tools::green("present");
                                }
                                
                                // Field name: path_position
                                    // DeltaReferencePosition  SEQUENCE
                                        //  deltaLatitude  DeltaLatitude      
                                        //  deltaLongitude DeltaLongitude     
                                        //  deltaAltitude  DeltaAltitude      
                                    
                                    // Field name: delta_latitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_122 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value = *_tmp_122;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000119\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_longitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_123 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value = *_tmp_123;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000120\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_altitude
                                    // Real
                                    // Float
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_124 = (uint16_t*) buffer; buffer += 2;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value = *_tmp_124;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value += -12700;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000121\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value << " (" << __aux64__ << ")";
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time.size() != 0) {
                                    // Field name: path_delta_time
                                    // Real
                                    // Float
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    uint8_t* _ext_flag_66 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000122\033[0m| Reading ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].: " << int(*_ext_flag_66);
                                    }
                                    
                                    if(*_ext_flag_66) {
                                        uint8_t* _tmp_126 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_126) {
                                            uint64_t* _tmp_127 = (uint64_t*)buffer; buffer += 8;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value = *_tmp_127;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value += INT64_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value /= 100.0;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_127 = (uint32_t*) buffer; buffer += 4;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value = *_tmp_127;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value += INT32_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value /= 100.0;
                                        }
                                    }
                                    else
                                    {
                                        uint16_t* _tmp_125 = (uint16_t*) buffer; buffer += 2;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value = *_tmp_125;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value += 1;
                                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value /= 100.0;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000123\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0]: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                }
                else if(_choice_2 == 1)  // CHOICE LowFrequencyContainer  fieldName(mad_vehicle_container_low_frequency)
                {
                    mad_cam_pdu_descriptions_msgs::msg::MADVehicleContainerLowFrequency _tmp_128;
                    ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency.push_back(_tmp_128);
                
                    uint16_t* _tmp_129 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                        // MADVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleDimensions   VehicleDimensions     
                            //  vehicleCapabilities MADCapabilities       
                            //  localDestination    LocalDestination      
                        
                        // Field name: vehicle_dimensions
                            // VehicleDimensions  SEQUENCE
                                //  posCentMass PosCentMass          
                                //  posFrontAx  PosFrontAx           
                                //  wheelBase   WheelBaseVehicle     
                                //  vehicleMass VehicleMass          
                            
                            // Field name: pos_cent_mass
                            // Real
                            // Float
                            // FLOAT  min(1) max(63) span(63) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_130 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value = *_tmp_130;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value += 1;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 63) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value' " << (__aux64__) << " exceeds max allowable (63); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000124\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: pos_front_ax
                            // Real
                            // Float
                            // FLOAT  min(1) max(20) span(20) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_131 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value = *_tmp_131;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value += 1;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 20) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value' " << (__aux64__) << " exceeds max allowable (20); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000125\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: wheel_base
                            // Real
                            // Float
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_132 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value = *_tmp_132;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value += 1;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000126\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vehicle_mass
                            // Real
                            // Double
                            // DOUBLE  min(1) max(1024) span(1024) scaleDivisor(1.0E-5) dataType(Double)
                            uint16_t* _tmp_133 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value = *_tmp_133;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value += 1;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value /= 1.0E-5;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1024) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value' " << (__aux64__) << " exceeds max allowable (1024); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000127\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: vehicle_capabilities
                            // MADCapabilities  SEQUENCE
                                //  curvatureValueMin    CurvatureValue        
                                //  curvatureValueMax    CurvatureValue        
                                //  accelerationValueMin AccelerationValue     
                                //  accelerationValueMax AccelerationValue     
                                //  possibleLevelOfInput LevelsOfControl       
                            
                            // Field name: curvature_value_min
                            // Integer
                            // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                            uint16_t* _tmp_134 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_134;
                            __aux64__ += -1023;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000128\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                return false;
                            }
                            
                            // Field name: curvature_value_max
                            // Integer
                            // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                            uint16_t* _tmp_135 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_135;
                            __aux64__ += -1023;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000129\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value' " << (__aux64__) << " is less than allowable (-1023); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value' " << (__aux64__) << " exceeds max allowable (1023); message dropped.";
                                return false;
                            }
                            
                            // Field name: acceleration_value_min
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_136 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value = *_tmp_136;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value += -160;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000130\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: acceleration_value_max
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_137 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value = *_tmp_137;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value += -160;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value' " << (__aux64__) << " is less than allowable (-160); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value' " << (__aux64__) << " exceeds max allowable (161); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000131\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: possible_level_of_input
                            // BitString
                            // BIT_STRING  min(3) max(3) span(1)
                            uint8_t* _ext_flag_73 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000132\033[0m| Reading ext flag from ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.: " << int(*_ext_flag_73);
                            }
                            
                            uint8_t* _tmp_138 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_138 + 3;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000133\033[0m| cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value: " << __aux64__;
                            
                            int _if__tmp_138 = __aux64__;
                            for(int f = 0; f < _if__tmp_138; f++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values[f] = (*__b__ == 1);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 3) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (__aux64__) << " is less than allowable (3); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                return false;
                            }
                        
                        // Field name: local_destination
                            // LocalDestination  SEQUENCE
                                //  deltaReferencePosition DeltaReferencePosition     
                                //  speedValue             SpeedValue               OPTIONAL  
                                //  headingValue           HeadingValue             OPTIONAL  
                            if(*(buffer++)) { 
                                mad_cam_pdu_descriptions_msgs::msg::SpeedValue _tmp_139;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.push_back(_tmp_139);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000134\033[0m| ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                mad_cam_pdu_descriptions_msgs::msg::HeadingValue _tmp_140;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.push_back(_tmp_140);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000135\033[0m| ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value " << tools::green("present");
                            }
                            
                            // Field name: delta_reference_position
                                // DeltaReferencePosition  SEQUENCE
                                    //  deltaLatitude  DeltaLatitude      
                                    //  deltaLongitude DeltaLongitude     
                                    //  deltaAltitude  DeltaAltitude      
                                
                                // Field name: delta_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_141 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value = *_tmp_141;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value += -131071;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000136\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: delta_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_142 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value = *_tmp_142;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value += -131071;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000137\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: delta_altitude
                                // Real
                                // Float
                                // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_143 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value = *_tmp_143;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value += -12700;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000138\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value << " (" << __aux64__ << ")";
                                }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.size() != 0) {
                                // Field name: speed_value
                                // Real
                                // Float
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_144 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value = *_tmp_144;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value /= 100.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 16383) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value' " << (__aux64__) << " exceeds max allowable (16383); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000139\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0]: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value << " (" << __aux64__ << ")";
                                }
                            }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.size() != 0) {
                                // Field name: heading_value
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_145 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value = *_tmp_145;
                                __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value /= 10.0;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value' " << (__aux64__) << " exceeds max allowable (3601); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000140\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0]: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value << " (" << __aux64__ << ")";
                                }
                            }
                }
                else
                {
                    uint16_t* _tmp_146 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_146);            // Ignoring opentype data
                }
            }
            
            if(ros->cam.cam_parameters.special_vehicle_container.size() != 0) {
                // Field name: special_vehicle_container
                // Choice
                uint8_t* _ext_flag_79 = (uint8_t*)buffer++; // ext flag
                
                   // #0  publicTransportContainer   PublicTransportContainer   
                   // #1  specialTransportContainer   SpecialTransportContainer   
                   // #2  dangerousGoodsContainer   DangerousGoodsContainer   
                   // #3  roadWorksContainerBasic   RoadWorksContainerBasic   
                   // #4  rescueContainer   RescueContainer   
                   // #5  emergencyContainer   EmergencyContainer   
                   // #6  safetyCarContainer   SafetyCarContainer   
                uint8_t _choice_3 = *(buffer++);
                
                if(*_ext_flag_79)
                    _choice_3 += 6 + 1; // Ext addition
                
                if(_choice_3 == 0) {
                    mad_cam_pdu_descriptions_msgs::msg::PublicTransportContainer _tmp_147;
                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.push_back(_tmp_147);
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::PtActivation _tmp_148;
                            ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.push_back(_tmp_148);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000141\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation " << tools::green("present");
                        }
                        
                        // Field name: embarkation_status
                        // Value
                        // Boolean
                        uint8_t* _tmp_149 = (uint8_t*)buffer;
                        buffer++;
                        ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value = (*_tmp_149 == 1);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000142\033[0m| \033[37;1mbool  \033[0m ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.: " << (*_tmp_149);
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0) {
                            // Field name: pt_activation
                                // PtActivation  SEQUENCE
                                    //  ptActivationType PtActivationType     
                                    //  ptActivationData PtActivationData     
                                
                                // Field name: pt_activation_type
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_150 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_150;
                                ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000143\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: pt_activation_data
                                // OctetString
                                // min(1) max(20) span(20)
                                uint8_t* _tmp_151 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = *_tmp_151 + 1;
                                
                                int _if__tmp_151 = __aux64__;
                                for(int g = 0; g < _if__tmp_151; g++) {
                                    int8_t* __n__ = (int8_t*)buffer++;
                                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.push_back(*__n__);
                                }
                        }
                }
                else if(_choice_3 == 1)  // CHOICE SpecialVehicleContainer  fieldName(special_transport_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::SpecialTransportContainer _tmp_152;
                    ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.push_back(_tmp_152);
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        
                        // Field name: special_transport_type
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        uint8_t* _tmp_153 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_153 + 4;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000144\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << __aux64__;
                        
                        int _if__tmp_153 = __aux64__;
                        for(int h = 0; h < _if__tmp_153; h++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values[h] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 4) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (__aux64__) << " is less than allowable (4); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (__aux64__) << " exceeds max allowable (4); message dropped.";
                            return false;
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_154 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_154 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000145\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_154 = __aux64__;
                        for(int i = 0; i < _if__tmp_154; i++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[i] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                }
                else if(_choice_3 == 2)  // CHOICE SpecialVehicleContainer  fieldName(dangerous_goods_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::DangerousGoodsContainer _tmp_155;
                    ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.push_back(_tmp_155);
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        
                        // Field name: dangerous_goods_basic
                        // Enumerated
                        // INT32  min(0) max(19) span(20) datatype(Int32)
                        uint8_t* _tmp_156 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_156;
                        __aux64__ += 0;
                        ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 19) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' " << (__aux64__) << " exceeds max allowable (19); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000146\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                }
                else if(_choice_3 == 3)  // CHOICE SpecialVehicleContainer  fieldName(road_works_container_basic)
                {
                    mad_cam_pdu_descriptions_msgs::msg::RoadWorksContainerBasic _tmp_157;
                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic.push_back(_tmp_157);
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::RoadworksSubCauseCode _tmp_158;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.push_back(_tmp_158);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000147\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::ClosedLanes _tmp_159;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.push_back(_tmp_159);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000148\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes " << tools::green("present");
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0) {
                            // Field name: roadworks_sub_cause_code
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_160 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_160;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000149\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_161 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_161 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000150\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_161 = __aux64__;
                        for(int j = 0; j < _if__tmp_161; j++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[j] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0) {
                            // Field name: closed_lanes
                                // ClosedLanes  SEQUENCE
                                    //  innerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  outerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  drivingLaneStatus       DrivingLaneStatus    OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_81 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000151\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << int(*_ext_flag_81);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::HardShoulderStatus _tmp_162;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.push_back(_tmp_162);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000152\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::HardShoulderStatus _tmp_163;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.push_back(_tmp_163);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000153\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::DrivingLaneStatus _tmp_164;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.push_back(_tmp_164);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000154\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status " << tools::green("present");
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0) {
                                    // Field name: innerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_165 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_165;
                                    __aux64__ += 0;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000155\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0) {
                                    // Field name: outerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_166 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_166;
                                    __aux64__ += 0;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000156\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0) {
                                    // Field name: driving_lane_status
                                    // BitString
                                    // BIT_STRING  min(1) max(13) span(13)
                                    uint8_t* _tmp_167 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_167 + 1;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000157\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << __aux64__;
                                    
                                    int _if__tmp_167 = __aux64__;
                                    for(int k = 0; k < _if__tmp_167; k++) {
                                        uint8_t __c__;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[k] = (*__b__ == 1);
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 13) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (__aux64__) << " exceeds max allowable (13); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_81) { // from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0]. 
                                    uint8_t* _tmp_168 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_6[*_tmp_168];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000158\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << static_cast<unsigned int>(*_tmp_168);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_168; i++)
                                        _array_6[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_168; i++) {
                                        uint16_t* _tmp_169 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_169; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                }
                else if(_choice_3 == 4)  // CHOICE SpecialVehicleContainer  fieldName(rescue_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::RescueContainer _tmp_170;
                    ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.push_back(_tmp_170);
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_171 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_171 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000159\033[0m| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_171 = __aux64__;
                        for(int l = 0; l < _if__tmp_171; l++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[l] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                }
                else if(_choice_3 == 5)  // CHOICE SpecialVehicleContainer  fieldName(emergency_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::EmergencyContainer _tmp_172;
                    ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.push_back(_tmp_172);
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::CauseCode _tmp_173;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.push_back(_tmp_173);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000160\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::EmergencyPriority _tmp_174;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.push_back(_tmp_174);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000161\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_175 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_175 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000162\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_175 = __aux64__;
                        for(int m = 0; m < _if__tmp_175; m++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[m] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0) {
                            // Field name: incident_indication
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_84 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000163\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << int(*_ext_flag_84);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_176 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_176;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000164\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: sub_cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_177 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_177;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000165\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                if(*_ext_flag_84) { // from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_178 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_7[*_tmp_178];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000166\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_178);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_178; i++)
                                        _array_7[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_178; i++) {
                                        uint16_t* _tmp_179 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_179; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0) {
                            // Field name: emergency_priority
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            uint8_t* _tmp_180 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_180 + 2;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000167\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << __aux64__;
                            
                            int _if__tmp_180 = __aux64__;
                            for(int n = 0; n < _if__tmp_180; n++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[n] = (*__b__ == 1);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                                return false;
                            }
                        }
                }
                else if(_choice_3 == 6)  // CHOICE SpecialVehicleContainer  fieldName(safety_car_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::SafetyCarContainer _tmp_181;
                    ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.push_back(_tmp_181);
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::CauseCode _tmp_182;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.push_back(_tmp_182);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000168\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::TrafficRule _tmp_183;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.push_back(_tmp_183);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000169\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::SpeedLimit _tmp_184;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.push_back(_tmp_184);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000170\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_185 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_185 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000171\033[0m| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_185 = __aux64__;
                        for(int o = 0; o < _if__tmp_185; o++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[o] = (*__b__ == 1);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " is less than allowable (2); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (__aux64__) << " exceeds max allowable (2); message dropped.";
                            return false;
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0) {
                            // Field name: incident_indication
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_85 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000172\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << int(*_ext_flag_85);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_186 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_186;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000173\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: sub_cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_187 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_187;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000174\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                if(*_ext_flag_85) { // from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_188 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_8[*_tmp_188];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000175\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_188);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_188; i++)
                                        _array_8[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_188; i++) {
                                        uint16_t* _tmp_189 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_189; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0) {
                            // Field name: traffic_rule
                            // Enumerated
                            // INT32  min(0) max(3) span(4) datatype(Int32)
                            uint8_t* _ext_flag_86 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000176\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].: " << int(*_ext_flag_86);
                            }
                            
                            uint8_t* _tmp_190 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_190;
                            __aux64__ += 0;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000177\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0) {
                            // Field name: speed_limit
                            // Integer
                            // UINT8  min(1) max(255) span(255) datatype(UInt8)
                            uint8_t* _tmp_191 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_191;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000178\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                }
                else
                {
                    uint16_t* _tmp_192 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_192);            // Ignoring opentype data
                }
            }
            if(*_ext_flag_1) { // from ros->cam.cam_parameters. 
                uint8_t* _tmp_193 = (uint8_t*) buffer++;  // number of extensions
                bool _array_9[*_tmp_193];
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m000179\033[0m| Reading number of exts from ros->cam.cam_parameters.: " << static_cast<unsigned int>(*_tmp_193);
                
                // Extensions bytemap
                for(int i = 0; i < *_tmp_193; i++)
                    _array_9[i] = (*buffer++) != 0;
                
                // Discarding unknown OpenType containers
                for(int i = 0; i < *_tmp_193; i++) {
                    uint16_t* _tmp_194 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                    if(debug) {
                    }
                
                    for(int i = 0; i < *_tmp_194; i++)
                        buffer++;
                }
                
            }
	
	        return true;
        }
    }
}