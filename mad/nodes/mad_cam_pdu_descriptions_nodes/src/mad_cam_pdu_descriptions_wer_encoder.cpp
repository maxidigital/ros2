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
#include <mad_cam_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_mad_cam_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const mad_cam_pdu_descriptions_msgs::MADCAM::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<mad_cam_pdu_descriptions_msgs::msg::MADCAM>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const mad_cam_pdu_descriptions_msgs::msg::MADCAM* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // MADCAM  SEQUENCE
        //  header     ItsPduHeader      
        //  cam        CoopAwareness     
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
    
    // Field:  type(CoopAwareness) name(cam) extGroup(0)
        // CoopAwareness  SEQUENCE
            //  generationDeltaTime GenerationDeltaTime     
            //  camParameters       CamParameters           
        // Optional fields bytemap
        
        // Field:  type(GenerationDeltaTime) name(generation_delta_time) extGroup(0)
        // Integer
        
        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
        if(debug) {
            logger->debug() << "|\033[38;5;94m000003\033[0m| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
                         " cam.generation_delta_time.value: " << ros->cam.generation_delta_time.value;
        }
        
        uint16_t* _tmp_4 = (uint16_t*) buffer; buffer += 2;
        *_tmp_4 = ros->cam.generation_delta_time.value; 
        __aux64__ = ros->cam.generation_delta_time.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'cam.generation_delta_time.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->warning() << "Error: Value in 'cam.generation_delta_time.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
            return -1;
        }
        
        // Field:  type(CamParameters) name(cam_parameters) extGroup(0)
            // CamParameters  SEQUENCE
                //  basicContainer          BasicContainer              
                //  highFrequencyContainer  HighFrequencyContainer      
                //  lowFrequencyContainer   LowFrequencyContainer     OPTIONAL  
                //  specialVehicleContainer SpecialVehicleContainer   OPTIONAL  
                //  ...
            uint8_t* _ext_flag_5 = (uint8_t*) buffer++;  // Write extension flag for CamParameters
            *_ext_flag_5 = 0;  
            
            // Optional fields bytemap
            char* _tmp_5 = (char*) buffer++;
            *_tmp_5 = (ros->cam.cam_parameters.low_frequency_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000004\033[0m| Optional field low_frequency_container = " << *_tmp_5;
            char* _tmp_6 = (char*) buffer++;
            *_tmp_6 = (ros->cam.cam_parameters.special_vehicle_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000005\033[0m| Optional field special_vehicle_container = " << *_tmp_6;
            
            // Field:  type(BasicContainer) name(basic_container) extGroup(0)
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_6 = (uint8_t*) buffer++;  // Write extension flag for BasicContainer
                *_ext_flag_6 = 0;  
                
                // Optional fields bytemap
                
                // Field:  type(StationType) name(station_type) extGroup(0)
                // Integer
                
                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000006\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
                                 " cam.cam_parameters.basic_container.station_type.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.station_type.value);
                }
                
                uint8_t* _tmp_7 = (uint8_t*) buffer++;
                *_tmp_7 = ros->cam.cam_parameters.basic_container.station_type.value; 
                __aux64__ = ros->cam.cam_parameters.basic_container.station_type.value;
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                    logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.station_type.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
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
                        logger->debug() << "|\033[38;5;94m000007\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.latitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    }
                    
                    double _tmp_9 = ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    _tmp_9 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_9);
                    _tmp_9 -= -900000000;
                    uint32_t* _tmp_8 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_8 = static_cast<uint32_t>(_tmp_9);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(Longitude) name(longitude) extGroup(0)
                    // Real
                    
                    // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000008\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.longitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    }
                    
                    double _tmp_11 = ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    _tmp_11 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_11);
                    _tmp_11 -= -1800000000;
                    uint32_t* _tmp_10 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_10 = static_cast<uint32_t>(_tmp_11);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
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
                            logger->debug() << "|\033[38;5;94m000009\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        }
                        
                        float _tmp_13 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        _tmp_13 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_13);
                        uint16_t* _tmp_12 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_12 = static_cast<uint16_t>(_tmp_13);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SemiAxisLength) name(semi_minor_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000010\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        }
                        
                        float _tmp_15 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        _tmp_15 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_15);
                        uint16_t* _tmp_14 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_14 = static_cast<uint16_t>(_tmp_15);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4095) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value' (" << __aux64__ << ") exceeds max allowable (4095); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(HeadingValue) name(semi_major_orientation) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000011\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        }
                        
                        float _tmp_17 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        _tmp_17 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_17);
                        uint16_t* _tmp_16 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_16 = static_cast<uint16_t>(_tmp_17);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
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
                            logger->debug() << "|\033[38;5;94m000012\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value: " << ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        }
                        
                        float _tmp_19 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        _tmp_19 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_19);
                        _tmp_19 -= -100000;
                        uint32_t* _tmp_18 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_18 = static_cast<uint32_t>(_tmp_19);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -100000) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") less than (-100000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 800001) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value' (" << __aux64__ << ") exceeds max allowable (800001); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(AltitudeConfidence) name(altitude_confidence) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000013\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                        
                        uint8_t* _tmp_20 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_20 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value; 
                        __aux64__ = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                            return -1;
                        }
                
                if(*_ext_flag_6) {
                }
            
            // Field:  type(HighFrequencyContainer) name(high_frequency_container) extGroup(0)
            // Choice
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency
               // #2  madVehicleContainerHighFrequency   MADVehicleContainerHighFrequency
            uint8_t* _ext_flag_15 = (uint8_t*) buffer; 
            buffer++;
            *_ext_flag_15 = 0; 
            
            uint8_t* _choice_1 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.size() != 0) {  // CHOICE 0  fieldType(HighFrequencyContainer) 
                *_choice_1 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000014\033[0m| Choice selection: 0";
            
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
                    // Optional fields bytemap
                    char* _tmp_22 = (char*) buffer++;
                    *_tmp_22 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000015\033[0m| Optional field acceleration_control = " << *_tmp_22;
                    char* _tmp_23 = (char*) buffer++;
                    *_tmp_23 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000016\033[0m| Optional field lane_position = " << *_tmp_23;
                    char* _tmp_24 = (char*) buffer++;
                    *_tmp_24 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000017\033[0m| Optional field steering_wheel_angle = " << *_tmp_24;
                    char* _tmp_25 = (char*) buffer++;
                    *_tmp_25 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000018\033[0m| Optional field lateral_acceleration = " << *_tmp_25;
                    char* _tmp_26 = (char*) buffer++;
                    *_tmp_26 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000019\033[0m| Optional field vertical_acceleration = " << *_tmp_26;
                    char* _tmp_27 = (char*) buffer++;
                    *_tmp_27 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000020\033[0m| Optional field performance_class = " << *_tmp_27;
                    char* _tmp_28 = (char*) buffer++;
                    *_tmp_28 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000021\033[0m| Optional field cen_dsrc_tolling_zone = " << *_tmp_28;
                    
                    // Field:  type(Heading) name(heading) extGroup(0)
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000022\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        }
                        
                        float _tmp_30 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        _tmp_30 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_30);
                        uint16_t* _tmp_29 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_29 = static_cast<uint16_t>(_tmp_30);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(HeadingConfidence) name(heading_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000023\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value);
                        }
                        
                        float _tmp_32 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value;
                        _tmp_32 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_32);
                        _tmp_32 -= 1;
                        uint8_t* _tmp_31 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_31 = static_cast<uint8_t>(_tmp_32);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(Speed) name(speed) extGroup(0)
                        // Speed  SEQUENCE
                            //  speedValue      SpeedValue          
                            //  speedConfidence SpeedConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(SpeedValue) name(speed_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000024\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        }
                        
                        float _tmp_34 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        _tmp_34 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_34);
                        uint16_t* _tmp_33 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_33 = static_cast<uint16_t>(_tmp_34);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(SpeedConfidence) name(speed_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000025\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value);
                        }
                        
                        float _tmp_36 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value;
                        _tmp_36 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_36);
                        _tmp_36 -= 1;
                        uint8_t* _tmp_35 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_35 = static_cast<uint8_t>(_tmp_36);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 127) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(DriveDirection) name(drive_direction) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(2) span(3) dataType(Int32)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000026\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value);
                    }
                    
                    uint8_t* _tmp_37 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_37 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value; 
                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(VehicleLength) name(vehicle_length) extGroup(0)
                        // VehicleLength  SEQUENCE
                            //  vehicleLengthValue                VehicleLengthValue                    
                            //  vehicleLengthConfidenceIndication VehicleLengthConfidenceIndication     
                        // Optional fields bytemap
                        
                        // Field:  type(VehicleLengthValue) name(vehicle_length_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000027\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        }
                        
                        float _tmp_39 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        _tmp_39 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_39);
                        _tmp_39 -= 1;
                        uint16_t* _tmp_38 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_38 = static_cast<uint16_t>(_tmp_39);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(VehicleLengthConfidenceIndication) name(vehicle_length_confidence_indication) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(4) span(5) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000028\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                        
                        uint8_t* _tmp_40 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_40 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 4) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") exceeds max allowable (4); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(VehicleWidth) name(vehicle_width) extGroup(0)
                    // Real
                    
                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000029\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value);
                    }
                    
                    float _tmp_42 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value;
                    _tmp_42 *= 10.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_42);
                    _tmp_42 -= 1;
                    uint8_t* _tmp_41 = (uint8_t*) buffer; buffer += 1;
                    *_tmp_41 = static_cast<uint8_t>(_tmp_42);
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 1) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' (" << __aux64__ << ") less than (1); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 62) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(LongitudinalAcceleration) name(longitudinal_acceleration) extGroup(0)
                        // LongitudinalAcceleration  SEQUENCE
                            //  longitudinalAccelerationValue      LongitudinalAccelerationValue     
                            //  longitudinalAccelerationConfidence AccelerationConfidence            
                        // Optional fields bytemap
                        
                        // Field:  type(LongitudinalAccelerationValue) name(longitudinal_acceleration_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000030\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        }
                        
                        float _tmp_44 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        _tmp_44 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_44);
                        _tmp_44 -= -160;
                        uint16_t* _tmp_43 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_43 = static_cast<uint16_t>(_tmp_44);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -160) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 161) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(AccelerationConfidence) name(longitudinal_acceleration_confidence) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000031\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value);
                        }
                        
                        float _tmp_46 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                        _tmp_46 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_46);
                        uint8_t* _tmp_45 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_45 = static_cast<uint8_t>(_tmp_46);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 102) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(Curvature) name(curvature) extGroup(0)
                        // Curvature  SEQUENCE
                            //  curvatureValue      CurvatureValue          
                            //  curvatureConfidence CurvatureConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(CurvatureValue) name(curvature_value) extGroup(0)
                        // Integer
                        
                        // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000032\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        }
                        
                        uint16_t* _tmp_47 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value - -1023;
                        *_tmp_47 = __aux64__;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(CurvatureConfidence) name(curvature_confidence) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(7) span(8) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000033\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                        
                        uint8_t* _tmp_48 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_48 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                    
                    // Field:  type(CurvatureCalculationMode) name(curvature_calculation_mode) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(2) span(3) dataType(Int32)
                    uint8_t* _ext_flag_28 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000034\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value);
                    }
                    
                    uint8_t* _tmp_49 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_49 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value; 
                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                        return -1;
                    }
                    
                    // Field:  type(YawRate) name(yaw_rate) extGroup(0)
                        // YawRate  SEQUENCE
                            //  yawRateValue      YawRateValue          
                            //  yawRateConfidence YawRateConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(YawRateValue) name(yaw_rate_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000035\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        }
                        
                        float _tmp_51 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        _tmp_51 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_51);
                        _tmp_51 -= -32766;
                        uint16_t* _tmp_50 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_50 = static_cast<uint16_t>(_tmp_51);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -32766) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") less than (-32766); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(YawRateConfidence) name(yaw_rate_confidence) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(8) span(9) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000036\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                        
                        uint8_t* _tmp_52 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_52 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 8) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") exceeds max allowable (8); message dropped.";
                            return -1;
                        }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0) {
                        // Field:  type(AccelerationControl) name(acceleration_control) extGroup(0)
                        // BitString
                        // BIT_STRING  min(7) max(7) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000037\033[0m| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size());
                        
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() < 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " is less than allowable (7); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_53 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size();
                        if(__aux64__ > 7) __aux64__ = 7;
                        *_tmp_53 = __aux64__ - 7;
                        buffer += 1;
                        
                        int __ifa = __aux64__;
                        for(int a = 0; a < __ifa; a++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[a]? 1: 0);
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0) {
                        // Field:  type(LanePosition) name(lane_position) extGroup(0)
                        // Integer
                        
                        // INT8  min(-1) max(14) span(16) dataType(Int8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000038\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value);
                        }
                        
                        uint8_t* _tmp_54 = (uint8_t*) buffer++;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value - -1;
                        *_tmp_54 = __aux64__;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' (" << __aux64__ << ") less than (-1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 14) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value' (" << __aux64__ << ") exceeds max allowable (14); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() != 0) {
                        // Field:  type(SteeringWheelAngle) name(steering_wheel_angle) extGroup(0)
                            // SteeringWheelAngle  SEQUENCE
                                //  steeringWheelAngleValue      SteeringWheelAngleValue          
                                //  steeringWheelAngleConfidence SteeringWheelAngleConfidence     
                            // Optional fields bytemap
                            
                            // Field:  type(SteeringWheelAngleValue) name(steering_wheel_angle_value) extGroup(0)
                            // Integer
                            
                            // INT16  min(-511) max(512) span(1024) dataType(Int16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000039\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            }
                            
                            uint16_t* _tmp_55 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value - -511;
                            *_tmp_55 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -511) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") less than (-511); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 512) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") exceeds max allowable (512); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(SteeringWheelAngleConfidence) name(steering_wheel_angle_confidence) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(127) span(127) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000040\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                            }
                            
                            uint8_t* _tmp_56 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value - 1;
                            *_tmp_56 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() != 0) {
                        // Field:  type(LateralAcceleration) name(lateral_acceleration) extGroup(0)
                            // LateralAcceleration  SEQUENCE
                                //  lateralAccelerationValue      LateralAccelerationValue     
                                //  lateralAccelerationConfidence AccelerationConfidence       
                            // Optional fields bytemap
                            
                            // Field:  type(LateralAccelerationValue) name(lateral_acceleration_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000041\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            }
                            
                            float _tmp_58 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            _tmp_58 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_58);
                            _tmp_58 -= -160;
                            uint16_t* _tmp_57 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_57 = static_cast<uint16_t>(_tmp_58);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationConfidence) name(lateral_acceleration_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000042\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value);
                            }
                            
                            float _tmp_60 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value;
                            _tmp_60 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_60);
                            uint8_t* _tmp_59 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_59 = static_cast<uint8_t>(_tmp_60);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() != 0) {
                        // Field:  type(VerticalAcceleration) name(vertical_acceleration) extGroup(0)
                            // VerticalAcceleration  SEQUENCE
                                //  verticalAccelerationValue      VerticalAccelerationValue     
                                //  verticalAccelerationConfidence AccelerationConfidence        
                            // Optional fields bytemap
                            
                            // Field:  type(VerticalAccelerationValue) name(vertical_acceleration_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000043\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            }
                            
                            float _tmp_62 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            _tmp_62 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_62);
                            _tmp_62 -= -160;
                            uint16_t* _tmp_61 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_61 = static_cast<uint16_t>(_tmp_62);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationConfidence) name(vertical_acceleration_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000044\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value);
                            }
                            
                            float _tmp_64 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value;
                            _tmp_64 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_64);
                            uint8_t* _tmp_63 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_63 = static_cast<uint8_t>(_tmp_64);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0) {
                        // Field:  type(PerformanceClass) name(performance_class) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(7) span(8) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000045\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value);
                        }
                        
                        uint8_t* _tmp_65 = (uint8_t*) buffer++;
                        *_tmp_65 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() != 0) {
                        // Field:  type(CenDsrcTollingZone) name(cen_dsrc_tolling_zone) extGroup(0)
                            // CenDsrcTollingZone  SEQUENCE
                                //  protectedZoneLatitude  Latitude                 
                                //  protectedZoneLongitude Longitude                
                                //  cenDsrcTollingZoneID   CenDsrcTollingZoneID   OPTIONAL  
                                //  ...
                            uint8_t* _ext_flag_39 = (uint8_t*) buffer++;  // Write extension flag for CenDsrcTollingZone
                            *_ext_flag_39 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_66 = (char*) buffer++;
                            *_tmp_66 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000046\033[0m| Optional field cen_dsrc_tolling_zone_id = " << *_tmp_66;
                            
                            // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                            // Real
                            
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000047\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            }
                            
                            double _tmp_68 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            _tmp_68 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_68);
                            _tmp_68 -= -900000000;
                            uint32_t* _tmp_67 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_67 = static_cast<uint32_t>(_tmp_68);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                            // Real
                            
                            // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000048\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            }
                            
                            double _tmp_70 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            _tmp_70 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_70);
                            _tmp_70 -= -1800000000;
                            uint32_t* _tmp_69 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_69 = static_cast<uint32_t>(_tmp_70);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                return -1;
                            }
                            
                            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                // Field:  type(CenDsrcTollingZoneID) name(cen_dsrc_tolling_zone_id) extGroup(0)
                                // Integer
                                
                                // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000049\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                 " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                }
                                
                                uint32_t* _tmp_71 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_71 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value; 
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(*_ext_flag_39) {
                            }
                    }
            
            }
            else if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.size() != 0)  // CHOICE 1  fieldType(HighFrequencyContainer) 
            {
                *_choice_1 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000050\033[0m| Choice selection: 1";
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_43 = (uint8_t*) buffer++;  // Write extension flag for RSUContainerHighFrequency
                    *_ext_flag_43 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_73 = (char*) buffer++;
                    *_tmp_73 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000051\033[0m| Optional field protected_communication_zones_rsu = " << *_tmp_73;
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0) {
                        // Field:  type(ProtectedCommunicationZonesRSU) name(protected_communication_zones_rsu) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        uint16_t* _tmp_74 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_74 = __aux64__ - 1;
                        
                        int __ifb = __aux64__;
                        for(int b = 0; b < __ifb; b++) { 
                            
                                // ProtectedCommunicationZone  SEQUENCE
                                    //  protectedZoneType      ProtectedZoneType       
                                    //  expiryTime             TimestampIts          OPTIONAL  
                                    //  protectedZoneLatitude  Latitude                
                                    //  protectedZoneLongitude Longitude               
                                    //  protectedZoneRadius    ProtectedZoneRadius   OPTIONAL  
                                    //  protectedZoneID        ProtectedZoneID       OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_44 = (uint8_t*) buffer++;  // Write extension flag for ProtectedCommunicationZone
                                *_ext_flag_44 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_75 = (char*) buffer++;
                                *_tmp_75 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000053\033[0m| Optional field expiry_time = " << *_tmp_75;
                                char* _tmp_76 = (char*) buffer++;
                                *_tmp_76 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000054\033[0m| Optional field protected_zone_radius = " << *_tmp_76;
                                char* _tmp_77 = (char*) buffer++;
                                *_tmp_77 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000055\033[0m| Optional field protected_zone_id = " << *_tmp_77;
                                
                                // Field:  type(ProtectedZoneType) name(protected_zone_type) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(1) span(2) dataType(Int32)
                                uint8_t* _ext_flag_45 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000056\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value);
                                }
                                
                                uint8_t* _tmp_78 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_78 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value; 
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_type.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time.size() != 0) {
                                    // Field:  type(TimestampIts) name(expiry_time) extGroup(0)
                                    // Integer
                                    
                                    // INT64  min(0) max(4398046511103) span(4398046511104) dataType(Int64)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000057\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value;
                                    }
                                    
                                    uint64_t* _tmp_79 = (uint64_t*)buffer; buffer += 8;
                                    *_tmp_79 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].expiry_time[0].value' (" << __aux64__ << ") exceeds max allowable (4398046511103); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000058\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value;
                                }
                                
                                double _tmp_81 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value;
                                _tmp_81 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_81);
                                _tmp_81 -= -900000000;
                                uint32_t* _tmp_80 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_80 = static_cast<uint32_t>(_tmp_81);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000059\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value;
                                }
                                
                                double _tmp_83 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value;
                                _tmp_83 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_83);
                                _tmp_83 -= -1800000000;
                                uint32_t* _tmp_82 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_82 = static_cast<uint32_t>(_tmp_83);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius.size() != 0) {
                                    // Field:  type(ProtectedZoneRadius) name(protected_zone_radius) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(1) max(255) span(255) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000060\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value);
                                    }
                                    
                                    uint8_t* _ext_flag_49 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].
                                    *_ext_flag_49 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value >= 1 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value <= 255) ? 0 : 1;
                                    
                                    if(*_ext_flag_49) {
                                        uint8_t* _tmp_85 = (uint8_t*) buffer++; 
                                        if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value >= 0 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value <= INT32_MAX) {
                                            *_tmp_85 = 0;
                                        
                                            uint32_t* _tmp_84 = (uint32_t*)buffer; buffer += 4;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value;
                                            __aux64__ -= INT32_MIN;
                                            *_tmp_84 = __aux64__;
                                        } 
                                        else
                                        {
                                            *_tmp_85 = 1;
                                        
                                            uint64_t* _tmp_84 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value;
                                            __aux64__ -= INT64_MIN;
                                            *_tmp_84 = __aux64__;
                                        }
                                    } else {
                                        uint8_t* _tmp_84 = (uint8_t*) buffer++;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value - 1;
                                        *_tmp_84 = __aux64__;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_radius[0].value;
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id.size() != 0) {
                                    // Field:  type(ProtectedZoneID) name(protected_zone_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000061\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_86 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_86 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[b].protected_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(*_ext_flag_44) {
                                }
                        }
                    }
                    
                    if(*_ext_flag_43) {
                    }
            
            }
            else if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency.size() != 0)  // CHOICE 2  fieldType(HighFrequencyContainer) 
            {
                *_choice_1   = 2 - 2;  // Setting choice selection
                *_ext_flag_15 = 1;      // setting ext flag
            
                uint16_t* _tmp_89_openType = (uint16_t*) buffer;  // OpenType length variable 
                buffer += 2;
                const uint8_t *_tmp_90_start = buffer; // Starting point
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000062\033[0m| Choice selection: 2";
            
                    // MADVehicleContainerHighFrequency  SEQUENCE
                        //  basicVehicleContainerHighFrequency BasicVehicleContainerHighFrequency     
                        //  madControlModeState                MADControlModeState                    
                    // Optional fields bytemap
                    
                    // Field:  type(BasicVehicleContainerHighFrequency) name(basic_vehicle_container_high_frequency) extGroup(0)
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
                        // Optional fields bytemap
                        char* _tmp_91 = (char*) buffer++;
                        *_tmp_91 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000063\033[0m| Optional field acceleration_control = " << *_tmp_91;
                        char* _tmp_92 = (char*) buffer++;
                        *_tmp_92 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000064\033[0m| Optional field lane_position = " << *_tmp_92;
                        char* _tmp_93 = (char*) buffer++;
                        *_tmp_93 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000065\033[0m| Optional field steering_wheel_angle = " << *_tmp_93;
                        char* _tmp_94 = (char*) buffer++;
                        *_tmp_94 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000066\033[0m| Optional field lateral_acceleration = " << *_tmp_94;
                        char* _tmp_95 = (char*) buffer++;
                        *_tmp_95 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000067\033[0m| Optional field vertical_acceleration = " << *_tmp_95;
                        char* _tmp_96 = (char*) buffer++;
                        *_tmp_96 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000068\033[0m| Optional field performance_class = " << *_tmp_96;
                        char* _tmp_97 = (char*) buffer++;
                        *_tmp_97 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000069\033[0m| Optional field cen_dsrc_tolling_zone = " << *_tmp_97;
                        
                        // Field:  type(Heading) name(heading) extGroup(0)
                            // Heading  SEQUENCE
                                //  headingValue      HeadingValue          
                                //  headingConfidence HeadingConfidence     
                            // Optional fields bytemap
                            
                            // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000070\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value;
                            }
                            
                            float _tmp_99 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value;
                            _tmp_99 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_99);
                            uint16_t* _tmp_98 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_98 = static_cast<uint16_t>(_tmp_99);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(HeadingConfidence) name(heading_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000071\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value);
                            }
                            
                            float _tmp_101 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value;
                            _tmp_101 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_101);
                            _tmp_101 -= 1;
                            uint8_t* _tmp_100 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_100 = static_cast<uint8_t>(_tmp_101);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(Speed) name(speed) extGroup(0)
                            // Speed  SEQUENCE
                                //  speedValue      SpeedValue          
                                //  speedConfidence SpeedConfidence     
                            // Optional fields bytemap
                            
                            // Field:  type(SpeedValue) name(speed_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000072\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value;
                            }
                            
                            float _tmp_103 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value;
                            _tmp_103 *= 100.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_103);
                            uint16_t* _tmp_102 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_102 = static_cast<uint16_t>(_tmp_103);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(SpeedConfidence) name(speed_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000073\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value);
                            }
                            
                            float _tmp_105 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value;
                            _tmp_105 *= 100.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_105);
                            _tmp_105 -= 1;
                            uint8_t* _tmp_104 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_104 = static_cast<uint8_t>(_tmp_105);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(DriveDirection) name(drive_direction) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(2) span(3) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000074\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value);
                        }
                        
                        uint8_t* _tmp_106 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_106 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(VehicleLength) name(vehicle_length) extGroup(0)
                            // VehicleLength  SEQUENCE
                                //  vehicleLengthValue                VehicleLengthValue                    
                                //  vehicleLengthConfidenceIndication VehicleLengthConfidenceIndication     
                            // Optional fields bytemap
                            
                            // Field:  type(VehicleLengthValue) name(vehicle_length_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(1023) span(1023) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000075\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value;
                            }
                            
                            float _tmp_108 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value;
                            _tmp_108 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_108);
                            _tmp_108 -= 1;
                            uint16_t* _tmp_107 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_107 = static_cast<uint16_t>(_tmp_108);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(VehicleLengthConfidenceIndication) name(vehicle_length_confidence_indication) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(4) span(5) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000076\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value);
                            }
                            
                            uint8_t* _tmp_109 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_109 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value' (" << __aux64__ << ") exceeds max allowable (4); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(VehicleWidth) name(vehicle_width) extGroup(0)
                        // Real
                        
                        // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000077\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value);
                        }
                        
                        float _tmp_111 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value;
                        _tmp_111 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_111);
                        _tmp_111 -= 1;
                        uint8_t* _tmp_110 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_110 = static_cast<uint8_t>(_tmp_111);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 1) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value' (" << __aux64__ << ") less than (1); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 62) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value' (" << __aux64__ << ") exceeds max allowable (62); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(LongitudinalAcceleration) name(longitudinal_acceleration) extGroup(0)
                            // LongitudinalAcceleration  SEQUENCE
                                //  longitudinalAccelerationValue      LongitudinalAccelerationValue     
                                //  longitudinalAccelerationConfidence AccelerationConfidence            
                            // Optional fields bytemap
                            
                            // Field:  type(LongitudinalAccelerationValue) name(longitudinal_acceleration_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000078\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value;
                            }
                            
                            float _tmp_113 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value;
                            _tmp_113 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_113);
                            _tmp_113 -= -160;
                            uint16_t* _tmp_112 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_112 = static_cast<uint16_t>(_tmp_113);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationConfidence) name(longitudinal_acceleration_confidence) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000079\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value);
                            }
                            
                            float _tmp_115 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                            _tmp_115 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_115);
                            uint8_t* _tmp_114 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_114 = static_cast<uint8_t>(_tmp_115);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(Curvature) name(curvature) extGroup(0)
                            // Curvature  SEQUENCE
                                //  curvatureValue      CurvatureValue          
                                //  curvatureConfidence CurvatureConfidence     
                            // Optional fields bytemap
                            
                            // Field:  type(CurvatureValue) name(curvature_value) extGroup(0)
                            // Integer
                            
                            // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000080\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value;
                            }
                            
                            uint16_t* _tmp_116 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value - -1023;
                            *_tmp_116 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(CurvatureConfidence) name(curvature_confidence) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(7) span(8) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000081\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value);
                            }
                            
                            uint8_t* _tmp_117 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_117 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(CurvatureCalculationMode) name(curvature_calculation_mode) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(2) span(3) dataType(Int32)
                        uint8_t* _ext_flag_63 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000082\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value);
                        }
                        
                        uint8_t* _tmp_118 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_118 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 2) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(YawRate) name(yaw_rate) extGroup(0)
                            // YawRate  SEQUENCE
                                //  yawRateValue      YawRateValue          
                                //  yawRateConfidence YawRateConfidence     
                            // Optional fields bytemap
                            
                            // Field:  type(YawRateValue) name(yaw_rate_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-32766) max(32767) span(65534) scaleDivisor(100.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000083\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value;
                            }
                            
                            float _tmp_120 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value;
                            _tmp_120 *= 100.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_120);
                            _tmp_120 -= -32766;
                            uint16_t* _tmp_119 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_119 = static_cast<uint16_t>(_tmp_120);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -32766) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") less than (-32766); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 32767) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value' (" << __aux64__ << ") exceeds max allowable (32767); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(YawRateConfidence) name(yaw_rate_confidence) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(8) span(9) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000084\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value);
                            }
                            
                            uint8_t* _tmp_121 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_121 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value' (" << __aux64__ << ") exceeds max allowable (8); message dropped.";
                                return -1;
                            }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.size() != 0) {
                            // Field:  type(AccelerationControl) name(acceleration_control) extGroup(0)
                            // BitString
                            // BIT_STRING  min(7) max(7) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000085\033[0m| cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size());
                            
                            if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size() < 7) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size()) << " is less than allowable (7); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size() > 7) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size()) << " exceeds max allowable (7); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_122 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size();
                            if(__aux64__ > 7) __aux64__ = 7;
                            *_tmp_122 = __aux64__ - 7;
                            buffer += 1;
                            
                            int __ifc = __aux64__;
                            for(int c = 0; c < __ifc; c++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values[c]? 1: 0);
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.size() != 0) {
                            // Field:  type(LanePosition) name(lane_position) extGroup(0)
                            // Integer
                            
                            // INT8  min(-1) max(14) span(16) dataType(Int8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000086\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value);
                            }
                            
                            uint8_t* _tmp_123 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value - -1;
                            *_tmp_123 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value' (" << __aux64__ << ") less than (-1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 14) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value' (" << __aux64__ << ") exceeds max allowable (14); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.size() != 0) {
                            // Field:  type(SteeringWheelAngle) name(steering_wheel_angle) extGroup(0)
                                // SteeringWheelAngle  SEQUENCE
                                    //  steeringWheelAngleValue      SteeringWheelAngleValue          
                                    //  steeringWheelAngleConfidence SteeringWheelAngleConfidence     
                                // Optional fields bytemap
                                
                                // Field:  type(SteeringWheelAngleValue) name(steering_wheel_angle_value) extGroup(0)
                                // Integer
                                
                                // INT16  min(-511) max(512) span(1024) dataType(Int16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000087\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value;
                                }
                                
                                uint16_t* _tmp_124 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value - -511;
                                *_tmp_124 = __aux64__;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -511) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") less than (-511); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 512) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value' (" << __aux64__ << ") exceeds max allowable (512); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SteeringWheelAngleConfidence) name(steering_wheel_angle_confidence) extGroup(0)
                                // Integer
                                
                                // UINT8  min(1) max(127) span(127) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000088\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                                }
                                
                                uint8_t* _tmp_125 = (uint8_t*) buffer++;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value - 1;
                                *_tmp_125 = __aux64__;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") less than (1); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                    return -1;
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.size() != 0) {
                            // Field:  type(LateralAcceleration) name(lateral_acceleration) extGroup(0)
                                // LateralAcceleration  SEQUENCE
                                    //  lateralAccelerationValue      LateralAccelerationValue     
                                    //  lateralAccelerationConfidence AccelerationConfidence       
                                // Optional fields bytemap
                                
                                // Field:  type(LateralAccelerationValue) name(lateral_acceleration_value) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000089\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value;
                                }
                                
                                float _tmp_127 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value;
                                _tmp_127 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_127);
                                _tmp_127 -= -160;
                                uint16_t* _tmp_126 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_126 = static_cast<uint16_t>(_tmp_127);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(AccelerationConfidence) name(lateral_acceleration_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000090\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value);
                                }
                                
                                float _tmp_129 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value;
                                _tmp_129 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_129);
                                uint8_t* _tmp_128 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_128 = static_cast<uint8_t>(_tmp_129);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                    return -1;
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.size() != 0) {
                            // Field:  type(VerticalAcceleration) name(vertical_acceleration) extGroup(0)
                                // VerticalAcceleration  SEQUENCE
                                    //  verticalAccelerationValue      VerticalAccelerationValue     
                                    //  verticalAccelerationConfidence AccelerationConfidence        
                                // Optional fields bytemap
                                
                                // Field:  type(VerticalAccelerationValue) name(vertical_acceleration_value) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000091\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value;
                                }
                                
                                float _tmp_131 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value;
                                _tmp_131 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_131);
                                _tmp_131 -= -160;
                                uint16_t* _tmp_130 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_130 = static_cast<uint16_t>(_tmp_131);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(AccelerationConfidence) name(vertical_acceleration_confidence) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000092\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value);
                                }
                                
                                float _tmp_133 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value;
                                _tmp_133 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_133);
                                uint8_t* _tmp_132 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_132 = static_cast<uint8_t>(_tmp_133);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 102) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value' (" << __aux64__ << ") exceeds max allowable (102); message dropped.";
                                    return -1;
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.size() != 0) {
                            // Field:  type(PerformanceClass) name(performance_class) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(7) span(8) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000093\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value);
                            }
                            
                            uint8_t* _tmp_134 = (uint8_t*) buffer++;
                            *_tmp_134 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.size() != 0) {
                            // Field:  type(CenDsrcTollingZone) name(cen_dsrc_tolling_zone) extGroup(0)
                                // CenDsrcTollingZone  SEQUENCE
                                    //  protectedZoneLatitude  Latitude                 
                                    //  protectedZoneLongitude Longitude                
                                    //  cenDsrcTollingZoneID   CenDsrcTollingZoneID   OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_74 = (uint8_t*) buffer++;  // Write extension flag for CenDsrcTollingZone
                                *_ext_flag_74 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_135 = (char*) buffer++;
                                *_tmp_135 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000094\033[0m| Optional field cen_dsrc_tolling_zone_id = " << *_tmp_135;
                                
                                // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000095\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                                }
                                
                                double _tmp_137 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                                _tmp_137 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_137);
                                _tmp_137 -= -900000000;
                                uint32_t* _tmp_136 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_136 = static_cast<uint32_t>(_tmp_137);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000096\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                                }
                                
                                double _tmp_139 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                                _tmp_139 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_139);
                                _tmp_139 -= -1800000000;
                                uint32_t* _tmp_138 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_138 = static_cast<uint32_t>(_tmp_139);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                    // Field:  type(CenDsrcTollingZoneID) name(cen_dsrc_tolling_zone_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000097\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_140 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_140 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(*_ext_flag_74) {
                                }
                        }
                    
                    // Field:  type(MADControlModeState) name(mad_control_mode_state) extGroup(0)
                        // MADControlModeState  SEQUENCE
                            //  madControlMode       MADControlMode          
                            //  madDrivingMode       MADDrivingMode          
                            //  adviceTimeConsidered GenerationDeltaTime   OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_142 = (char*) buffer++;
                        *_tmp_142 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000098\033[0m| Optional field advice_time_considered = " << *_tmp_142;
                        
                        // Field:  type(MADControlMode) name(mad_control_mode) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(7) span(8) dataType(Int32)
                        uint8_t* _ext_flag_78 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000099\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value);
                        }
                        
                        uint8_t* _tmp_143 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_143 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(MADDrivingMode) name(mad_driving_mode) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(3) span(4) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000100\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value);
                        }
                        
                        uint8_t* _tmp_144 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_144 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value; 
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                            return -1;
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.size() != 0) {
                            // Field:  type(GenerationDeltaTime) name(advice_time_considered) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000101\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value;
                            }
                            
                            uint16_t* _tmp_145 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_145 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value; 
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
            
                *_tmp_89_openType = buffer - _tmp_90_start;  // OpenType length  
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_1) << ") selected in CHOICE HighFrequencyContainer in 'cam.cam_parameters.high_frequency_container'; message dropped.";
                return -1;
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() != 0) {
                // Field:  type(LowFrequencyContainer) name(low_frequency_container) extGroup(0)
                // Choice
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency
                   // #1  madVehicleContainerLowFrequency   MADVehicleContainerLowFrequency
                uint8_t* _ext_flag_81 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_81 = 0; 
                
                uint8_t* _choice_2 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.size() != 0) {  // CHOICE 0  fieldType(LowFrequencyContainer) 
                    *_choice_2 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000102\033[0m| Choice selection: 0";
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        // Optional fields bytemap
                        
                        // Field:  type(VehicleRole) name(vehicle_role) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000103\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        uint8_t* _tmp_146 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_146 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value; 
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(ExteriorLights) name(exterior_lights) extGroup(0)
                        // BitString
                        // BIT_STRING  min(8) max(8) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000104\033[0m| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size());
                        
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() < 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " is less than allowable (8); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() > 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " exceeds max allowable (8); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_147 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size();
                        if(__aux64__ > 8) __aux64__ = 8;
                        *_tmp_147 = __aux64__ - 8;
                        buffer += 1;
                        
                        int __ifd = __aux64__;
                        for(int d = 0; d < __ifd; d++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values[d]? 1: 0);
                        }
                        
                        // Field:  type(PathHistory) name(path_history) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(40) span(41) ext(false)
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements.size();
                        if(__aux64__ > 40) __aux64__ = 40;
                        uint16_t* _tmp_148 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_148 = __aux64__;
                        
                        int __ife = __aux64__;
                        for(int e = 0; e < __ife; e++) { 
                            
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_149 = (char*) buffer++;
                                *_tmp_149 = (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000106\033[0m| Optional field path_delta_time = " << *_tmp_149;
                                
                                // Field:  type(DeltaReferencePosition) name(path_position) extGroup(0)
                                    // DeltaReferencePosition  SEQUENCE
                                        //  deltaLatitude  DeltaLatitude      
                                        //  deltaLongitude DeltaLongitude     
                                        //  deltaAltitude  DeltaAltitude      
                                    // Optional fields bytemap
                                    
                                    // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000107\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value;
                                    }
                                    
                                    double _tmp_151 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value;
                                    _tmp_151 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_151);
                                    _tmp_151 -= -131071;
                                    uint32_t* _tmp_150 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_150 = static_cast<uint32_t>(_tmp_151);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000108\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value;
                                    }
                                    
                                    double _tmp_153 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value;
                                    _tmp_153 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_153);
                                    _tmp_153 -= -131071;
                                    uint32_t* _tmp_152 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_152 = static_cast<uint32_t>(_tmp_153);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000109\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value;
                                    }
                                    
                                    float _tmp_155 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value;
                                    _tmp_155 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_155);
                                    _tmp_155 -= -12700;
                                    uint16_t* _tmp_154 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_154 = static_cast<uint16_t>(_tmp_155);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                        return -1;
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time.size() != 0) {
                                    // Field:  type(PathDeltaTime) name(path_delta_time) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000110\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value;
                                    }
                                    
                                    uint8_t* _ext_flag_86 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].
                                    float _tmp_156 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value;
                                    _tmp_156 *= 100.0;
                                    __aux64__ = static_cast<int64_t>(_tmp_156);
                                    *_ext_flag_86 = (__aux64__ >= 1 && __aux64__ <= 65535) ? 0 : 1;
                                    
                                    if(*_ext_flag_86) {
                                        uint8_t* _tmp_157 = (uint8_t*) buffer++; 
                                    
                                        if(__aux64__ >= INT32_MIN && __aux64__ <= INT32_MAX) {
                                            *_tmp_157 = 0;
                                    
                                            float _tmp_159 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value;
                                            _tmp_159 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_159);
                                            _tmp_159 -= INT32_MIN;
                                            uint32_t* _tmp_158 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_158 = static_cast<uint32_t>(_tmp_159);
                                        }
                                        else
                                        {
                                            *_tmp_157 = 1;
                                    
                                            float _tmp_161 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value;
                                            _tmp_161 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_161);
                                            _tmp_161 -= INT64_MIN;
                                            uint32_t* _tmp_160 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_160 = static_cast<uint32_t>(_tmp_161);
                                        }
                                    }
                                    else
                                    {
                                        float _tmp_163 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[e].path_delta_time[0].value;
                                        _tmp_163 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_163);
                                        _tmp_163 -= 1;
                                        uint16_t* _tmp_162 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_162 = static_cast<uint16_t>(_tmp_163);
                                    }
                                }
                                
                        }
                
                }
                else if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency.size() != 0)  // CHOICE 1  fieldType(LowFrequencyContainer) 
                {
                    *_choice_2   = 1 - 1;  // Setting choice selection
                    *_ext_flag_81 = 1;      // setting ext flag
                
                    uint16_t* _tmp_164_openType = (uint16_t*) buffer;  // OpenType length variable 
                    buffer += 2;
                    const uint8_t *_tmp_165_start = buffer; // Starting point
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000111\033[0m| Choice selection: 1";
                
                        // MADVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleDimensions   VehicleDimensions     
                            //  vehicleCapabilities MADCapabilities       
                            //  localDestination    LocalDestination      
                        // Optional fields bytemap
                        
                        // Field:  type(VehicleDimensions) name(vehicle_dimensions) extGroup(0)
                            // VehicleDimensions  SEQUENCE
                                //  posCentMass PosCentMass          
                                //  posFrontAx  PosFrontAx           
                                //  wheelBase   WheelBaseVehicle     
                                //  vehicleMass VehicleMass          
                            // Optional fields bytemap
                            
                            // Field:  type(PosCentMass) name(pos_cent_mass) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(63) span(63) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000112\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value);
                            }
                            
                            float _tmp_167 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value;
                            _tmp_167 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_167);
                            _tmp_167 -= 1;
                            uint8_t* _tmp_166 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_166 = static_cast<uint8_t>(_tmp_167);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 63) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value' (" << __aux64__ << ") exceeds max allowable (63); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(PosFrontAx) name(pos_front_ax) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(20) span(20) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000113\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value);
                            }
                            
                            float _tmp_169 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value;
                            _tmp_169 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_169);
                            _tmp_169 -= 1;
                            uint8_t* _tmp_168 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_168 = static_cast<uint8_t>(_tmp_169);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 20) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value' (" << __aux64__ << ") exceeds max allowable (20); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(WheelBaseVehicle) name(wheel_base) extGroup(0)
                            // Real
                            
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000114\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value);
                            }
                            
                            float _tmp_171 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value;
                            _tmp_171 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_171);
                            _tmp_171 -= 1;
                            uint8_t* _tmp_170 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_170 = static_cast<uint8_t>(_tmp_171);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(VehicleMass) name(vehicle_mass) extGroup(0)
                            // Real
                            
                            // DOUBLE  min(1) max(1024) span(1024) scaleDivisor(1.0E-5) dataType(Double)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000115\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value;
                            }
                            
                            double _tmp_173 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value;
                            _tmp_173 *= 1.0E-5;
                            __aux64__ = static_cast<uint64_t>(_tmp_173);
                            _tmp_173 -= 1;
                            uint16_t* _tmp_172 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_172 = static_cast<uint16_t>(_tmp_173);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1024) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value' (" << __aux64__ << ") exceeds max allowable (1024); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(MADCapabilities) name(vehicle_capabilities) extGroup(0)
                            // MADCapabilities  SEQUENCE
                                //  curvatureValueMin    CurvatureValue        
                                //  curvatureValueMax    CurvatureValue        
                                //  accelerationValueMin AccelerationValue     
                                //  accelerationValueMax AccelerationValue     
                                //  possibleLevelOfInput LevelsOfControl       
                            // Optional fields bytemap
                            
                            // Field:  type(CurvatureValue) name(curvature_value_min) extGroup(0)
                            // Integer
                            
                            // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000116\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value;
                            }
                            
                            uint16_t* _tmp_174 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value - -1023;
                            *_tmp_174 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(CurvatureValue) name(curvature_value_max) extGroup(0)
                            // Integer
                            
                            // INT16  min(-1023) max(1023) span(2047) dataType(Int16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000117\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value;
                            }
                            
                            uint16_t* _tmp_175 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value - -1023;
                            *_tmp_175 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value' (" << __aux64__ << ") less than (-1023); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 1023) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value' (" << __aux64__ << ") exceeds max allowable (1023); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationValue) name(acceleration_value_min) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000118\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value;
                            }
                            
                            float _tmp_177 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value;
                            _tmp_177 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_177);
                            _tmp_177 -= -160;
                            uint16_t* _tmp_176 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_176 = static_cast<uint16_t>(_tmp_177);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(AccelerationValue) name(acceleration_value_max) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000119\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value;
                            }
                            
                            float _tmp_179 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value;
                            _tmp_179 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_179);
                            _tmp_179 -= -160;
                            uint16_t* _tmp_178 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_178 = static_cast<uint16_t>(_tmp_179);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -160) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value' (" << __aux64__ << ") less than (-160); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 161) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value' (" << __aux64__ << ") exceeds max allowable (161); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(LevelsOfControl) name(possible_level_of_input) extGroup(0)
                            // BitString
                            // BIT_STRING  min(3) max(3) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000120\033[0m| cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size());
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size() < 3) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size()) << " is less than allowable (3); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size() > 3) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size()) << " exceeds max allowable (3); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _ext_flag_95 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.
                            *_ext_flag_95 = 0; 
                            
                            uint8_t* _tmp_180 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size();
                            if(__aux64__ > 3) __aux64__ = 3;
                            *_tmp_180 = __aux64__ - 3;
                            buffer += 1;
                            
                            int __iff = __aux64__;
                            for(int f = 0; f < __iff; f++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values[f]? 1: 0);
                            }
                        
                        // Field:  type(LocalDestination) name(local_destination) extGroup(0)
                            // LocalDestination  SEQUENCE
                                //  deltaReferencePosition DeltaReferencePosition     
                                //  speedValue             SpeedValue               OPTIONAL  
                                //  headingValue           HeadingValue             OPTIONAL  
                            // Optional fields bytemap
                            char* _tmp_181 = (char*) buffer++;
                            *_tmp_181 = (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000121\033[0m| Optional field speed_value = " << *_tmp_181;
                            char* _tmp_182 = (char*) buffer++;
                            *_tmp_182 = (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000122\033[0m| Optional field heading_value = " << *_tmp_182;
                            
                            // Field:  type(DeltaReferencePosition) name(delta_reference_position) extGroup(0)
                                // DeltaReferencePosition  SEQUENCE
                                    //  deltaLatitude  DeltaLatitude      
                                    //  deltaLongitude DeltaLongitude     
                                    //  deltaAltitude  DeltaAltitude      
                                // Optional fields bytemap
                                
                                // Field:  type(DeltaLatitude) name(delta_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000123\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value;
                                }
                                
                                double _tmp_184 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value;
                                _tmp_184 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_184);
                                _tmp_184 -= -131071;
                                uint32_t* _tmp_183 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_183 = static_cast<uint32_t>(_tmp_184);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000124\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value;
                                }
                                
                                double _tmp_186 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value;
                                _tmp_186 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_186);
                                _tmp_186 -= -131071;
                                uint32_t* _tmp_185 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_185 = static_cast<uint32_t>(_tmp_186);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                // Real
                                
                                // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000125\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value;
                                }
                                
                                float _tmp_188 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value;
                                _tmp_188 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_188);
                                _tmp_188 -= -12700;
                                uint16_t* _tmp_187 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_187 = static_cast<uint16_t>(_tmp_188);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                    return -1;
                                }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.size() != 0) {
                                // Field:  type(SpeedValue) name(speed_value) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000126\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value;
                                }
                                
                                float _tmp_190 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value;
                                _tmp_190 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_190);
                                uint16_t* _tmp_189 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_189 = static_cast<uint16_t>(_tmp_190);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 16383) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value' (" << __aux64__ << ") exceeds max allowable (16383); message dropped.";
                                    return -1;
                                }
                            }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.size() != 0) {
                                // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                                // Real
                                
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000127\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value;
                                }
                                
                                float _tmp_192 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value;
                                _tmp_192 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_192);
                                uint16_t* _tmp_191 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_191 = static_cast<uint16_t>(_tmp_192);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 3601) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value' (" << __aux64__ << ") exceeds max allowable (3601); message dropped.";
                                    return -1;
                                }
                            }
                
                    *_tmp_164_openType = buffer - _tmp_165_start;  // OpenType length  
                }
                else
                {
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_2) << ") selected in CHOICE LowFrequencyContainer in 'cam.cam_parameters.low_frequency_container[0]'; message dropped.";
                    return -1;
                }
            }
            
            if(ros->cam.cam_parameters.special_vehicle_container.size() != 0) {
                // Field:  type(SpecialVehicleContainer) name(special_vehicle_container) extGroup(0)
                // Choice
                   // #0  publicTransportContainer   PublicTransportContainer
                   // #1  specialTransportContainer   SpecialTransportContainer
                   // #2  dangerousGoodsContainer   DangerousGoodsContainer
                   // #3  roadWorksContainerBasic   RoadWorksContainerBasic
                   // #4  rescueContainer   RescueContainer
                   // #5  emergencyContainer   EmergencyContainer
                   // #6  safetyCarContainer   SafetyCarContainer
                uint8_t* _ext_flag_101 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_101 = 0; 
                
                uint8_t* _choice_3 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.size() != 0) {  // CHOICE 0  fieldType(SpecialVehicleContainer) 
                    *_choice_3 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000128\033[0m| Choice selection: 0";
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_193 = (char*) buffer++;
                        *_tmp_193 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000129\033[0m| Optional field pt_activation = " << *_tmp_193;
                        
                        // Field:  type(EmbarkationStatus) name(embarkation_status) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_194 = (uint8_t*)buffer++;
                        *_tmp_194 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000130\033[0m| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status: " << (*_tmp_194);
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0) {
                            // Field:  type(PtActivation) name(pt_activation) extGroup(0)
                                // PtActivation  SEQUENCE
                                    //  ptActivationType PtActivationType     
                                    //  ptActivationData PtActivationData     
                                // Optional fields bytemap
                                
                                // Field:  type(PtActivationType) name(pt_activation_type) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000131\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value);
                                }
                                
                                uint8_t* _tmp_195 = (uint8_t*) buffer++;
                                *_tmp_195 = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(PtActivationData) name(pt_activation_data) extGroup(0)
                                // OctetString
                                // OCTET_STRING  min(1) max(20) span(20)
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000132\033[0m| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size(): cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data" << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size());
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size() < 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.value' (" << 
                                                ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size() << ") is less than allowable (1); message dropped.";
                                    return -1;
                                }
                                if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size() > 20) {
                                    logger->warning() << "Error: Value in 'ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.value' (" << 
                                                ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size() << ") exceeds max allowable (20); message dropped.";
                                    return -1;
                                }
                                uint8_t* _tmp_196 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size();
                                if(__aux64__ > 20) __aux64__ = 20;
                                *_tmp_196 = __aux64__ - 1;
                                
                                int __ifg = __aux64__;
                                for(int g = 0; g < __ifg; g++) {
                                    int8_t* __m__ = (int8_t*)buffer++;
                                    *__m__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values[g];
                                }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.size() != 0)  // CHOICE 1  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 1;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000133\033[0m| Choice selection: 1";
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        // Optional fields bytemap
                        
                        // Field:  type(SpecialTransportType) name(special_transport_type) extGroup(0)
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000134\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() < 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " is less than allowable (4); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() > 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " exceeds max allowable (4); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_197 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size();
                        if(__aux64__ > 4) __aux64__ = 4;
                        *_tmp_197 = __aux64__ - 4;
                        buffer += 1;
                        
                        int __ifh = __aux64__;
                        for(int h = 0; h < __ifh; h++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values[h]? 1: 0);
                        }
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000135\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_198 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_198 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifi = __aux64__;
                        for(int i = 0; i < __ifi; i++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[i]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.size() != 0)  // CHOICE 2  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 2;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000136\033[0m| Choice selection: 2";
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        // Optional fields bytemap
                        
                        // Field:  type(DangerousGoodsBasic) name(dangerous_goods_basic) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(19) span(20) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000137\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                        
                        uint8_t* _tmp_199 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_199 = ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value; 
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 19) {
                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value' (" << __aux64__ << ") exceeds max allowable (19); message dropped.";
                            return -1;
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic.size() != 0)  // CHOICE 3  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 3;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000138\033[0m| Choice selection: 3";
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_200 = (char*) buffer++;
                        *_tmp_200 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000139\033[0m| Optional field roadworks_sub_cause_code = " << *_tmp_200;
                        char* _tmp_201 = (char*) buffer++;
                        *_tmp_201 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000140\033[0m| Optional field closed_lanes = " << *_tmp_201;
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0) {
                            // Field:  type(RoadworksSubCauseCode) name(roadworks_sub_cause_code) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000141\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value);
                            }
                            
                            uint8_t* _tmp_202 = (uint8_t*) buffer++;
                            *_tmp_202 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value; 
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000142\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_203 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_203 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifj = __aux64__;
                        for(int j = 0; j < __ifj; j++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[j]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0) {
                            // Field:  type(ClosedLanes) name(closed_lanes) extGroup(0)
                                // ClosedLanes  SEQUENCE
                                    //  innerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  outerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  drivingLaneStatus       DrivingLaneStatus    OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_105 = (uint8_t*) buffer++;  // Write extension flag for ClosedLanes
                                *_ext_flag_105 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_204 = (char*) buffer++;
                                *_tmp_204 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000143\033[0m| Optional field innerhard_shoulder_status = " << *_tmp_204;
                                char* _tmp_205 = (char*) buffer++;
                                *_tmp_205 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000144\033[0m| Optional field outerhard_shoulder_status = " << *_tmp_205;
                                char* _tmp_206 = (char*) buffer++;
                                *_tmp_206 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000145\033[0m| Optional field driving_lane_status = " << *_tmp_206;
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0) {
                                    // Field:  type(HardShoulderStatus) name(innerhard_shoulder_status) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000146\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_207 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_207 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0) {
                                    // Field:  type(HardShoulderStatus) name(outerhard_shoulder_status) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000147\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_208 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_208 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 2) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value' (" << __aux64__ << ") exceeds max allowable (2); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0) {
                                    // Field:  type(DrivingLaneStatus) name(driving_lane_status) extGroup(0)
                                    // BitString
                                    // BIT_STRING  min(1) max(13) span(13)
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000148\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size());
                                    
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() < 1) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " is less than allowable (1); message dropped.";
                                        return -1;
                                    }
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() > 13) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " exceeds max allowable (13); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_209 = (uint8_t*)buffer;
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size();
                                    if(__aux64__ > 13) __aux64__ = 13;
                                    *_tmp_209 = __aux64__ - 1;
                                    buffer += 1;
                                    
                                    int __ifk = __aux64__;
                                    for(int k = 0; k < __ifk; k++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[k]? 1: 0);
                                    }
                                }
                                
                                if(*_ext_flag_105) {
                                }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.size() != 0)  // CHOICE 4  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 4;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000149\033[0m| Choice selection: 4";
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        // Optional fields bytemap
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000150\033[0m| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_211 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_211 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifl = __aux64__;
                        for(int l = 0; l < __ifl; l++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[l]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.size() != 0)  // CHOICE 5  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 5;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000151\033[0m| Choice selection: 5";
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_212 = (char*) buffer++;
                        *_tmp_212 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000152\033[0m| Optional field incident_indication = " << *_tmp_212;
                        char* _tmp_213 = (char*) buffer++;
                        *_tmp_213 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000153\033[0m| Optional field emergency_priority = " << *_tmp_213;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000154\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_214 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_214 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifm = __aux64__;
                        for(int m = 0; m < __ifm; m++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[m]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_108 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_108 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000155\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_215 = (uint8_t*) buffer++;
                                *_tmp_215 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SubCauseCodeType) name(sub_cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000156\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_216 = (uint8_t*) buffer++;
                                *_tmp_216 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(*_ext_flag_108) {
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0) {
                            // Field:  type(EmergencyPriority) name(emergency_priority) extGroup(0)
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000157\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size());
                            
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() < 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " is less than allowable (2); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() > 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " exceeds max allowable (2); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_218 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size();
                            if(__aux64__ > 2) __aux64__ = 2;
                            *_tmp_218 = __aux64__ - 2;
                            buffer += 1;
                            
                            int __ifn = __aux64__;
                            for(int n = 0; n < __ifn; n++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[n]? 1: 0);
                            }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.size() != 0)  // CHOICE 6  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_3 = 6;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000158\033[0m| Choice selection: 6";
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_219 = (char*) buffer++;
                        *_tmp_219 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000159\033[0m| Optional field incident_indication = " << *_tmp_219;
                        char* _tmp_220 = (char*) buffer++;
                        *_tmp_220 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000160\033[0m| Optional field traffic_rule = " << *_tmp_220;
                        char* _tmp_221 = (char*) buffer++;
                        *_tmp_221 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000161\033[0m| Optional field speed_limit = " << *_tmp_221;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000162\033[0m| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_222 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_222 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifo = __aux64__;
                        for(int o = 0; o < __ifo; o++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[o]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_111 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_111 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000163\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_223 = (uint8_t*) buffer++;
                                *_tmp_223 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(SubCauseCodeType) name(sub_cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000164\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_224 = (uint8_t*) buffer++;
                                *_tmp_224 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value; 
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                if(*_ext_flag_111) {
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0) {
                            // Field:  type(TrafficRule) name(traffic_rule) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(3) span(4) dataType(Int32)
                            uint8_t* _ext_flag_114 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000165\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                            
                            uint8_t* _tmp_226 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_226 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value; 
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 3) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0) {
                            // Field:  type(SpeedLimit) name(speed_limit) extGroup(0)
                            // Integer
                            
                            // UINT8  min(1) max(255) span(255) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000166\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value);
                            }
                            
                            uint8_t* _tmp_227 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value - 1;
                            *_tmp_227 = __aux64__;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 1) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' (" << __aux64__ << ") less than (1); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        }
                
                }
                else
                {
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_3) << ") selected in CHOICE SpecialVehicleContainer in 'cam.cam_parameters.special_vehicle_container[0]'; message dropped.";
                    return -1;
                }
            }
            
            if(*_ext_flag_5) {
            }
    
	
            return buffer - start;
        }
    } 
}