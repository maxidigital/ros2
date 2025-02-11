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
            logger->debug() << "|\033[38;5;94m016387\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_18455 = (uint8_t*) buffer++;
        *_tmp_18455 = ros->hheader.protocol_version.value; 
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
            logger->debug() << "|\033[38;5;94m016388\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_18456 = (uint8_t*) buffer++;
        *_tmp_18456 = ros->hheader.message_id.value; 
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
            logger->debug() << "|\033[38;5;94m016389\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_18457 = (uint32_t*) buffer; buffer += 4;
        *_tmp_18457 = ros->hheader.station_id.value; 
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
            logger->debug() << "|\033[38;5;94m016390\033[0m| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
                         " cam.generation_delta_time.value: " << ros->cam.generation_delta_time.value;
        }
        
        uint16_t* _tmp_18458 = (uint16_t*) buffer; buffer += 2;
        *_tmp_18458 = ros->cam.generation_delta_time.value; 
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
            uint8_t* _ext_flag_8160 = (uint8_t*) buffer++;  // Write extension flag for CamParameters
            *_ext_flag_8160 = 0;  
            
            // Optional fields bytemap
            char* _tmp_18459 = (char*) buffer++;
            *_tmp_18459 = (ros->cam.cam_parameters.low_frequency_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m016391\033[0m| Optional field low_frequency_container = " << *_tmp_18459;
            char* _tmp_18460 = (char*) buffer++;
            *_tmp_18460 = (ros->cam.cam_parameters.special_vehicle_container.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m016392\033[0m| Optional field special_vehicle_container = " << *_tmp_18460;
            
            // Field:  type(BasicContainer) name(basic_container) extGroup(0)
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_8161 = (uint8_t*) buffer++;  // Write extension flag for BasicContainer
                *_ext_flag_8161 = 0;  
                
                // Optional fields bytemap
                
                // Field:  type(StationType) name(station_type) extGroup(0)
                // Integer
                
                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016393\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
                                 " cam.cam_parameters.basic_container.station_type.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.station_type.value);
                }
                
                uint8_t* _tmp_18461 = (uint8_t*) buffer++;
                *_tmp_18461 = ros->cam.cam_parameters.basic_container.station_type.value; 
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
                        logger->debug() << "|\033[38;5;94m016394\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.latitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    }
                    
                    double _tmp_18463 = ros->cam.cam_parameters.basic_container.reference_position.latitude.value;
                    _tmp_18463 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_18463);
                    _tmp_18463 -= -900000000;
                    uint32_t* _tmp_18462 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_18462 = static_cast<uint32_t>(_tmp_18463);
                    
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
                        logger->debug() << "|\033[38;5;94m016395\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << 
                                     " cam.cam_parameters.basic_container.reference_position.longitude.value: " << ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    }
                    
                    double _tmp_18465 = ros->cam.cam_parameters.basic_container.reference_position.longitude.value;
                    _tmp_18465 *= 1.0E7;
                    __aux64__ = static_cast<uint64_t>(_tmp_18465);
                    _tmp_18465 -= -1800000000;
                    uint32_t* _tmp_18464 = (uint32_t*) buffer; buffer += 4;
                    *_tmp_18464 = static_cast<uint32_t>(_tmp_18465);
                    
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
                            logger->debug() << "|\033[38;5;94m016396\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        }
                        
                        float _tmp_18467 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value;
                        _tmp_18467 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18467);
                        uint16_t* _tmp_18466 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18466 = static_cast<uint16_t>(_tmp_18467);
                        
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
                            logger->debug() << "|\033[38;5;94m016397\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        }
                        
                        float _tmp_18469 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value;
                        _tmp_18469 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18469);
                        uint16_t* _tmp_18468 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18468 = static_cast<uint16_t>(_tmp_18469);
                        
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
                            logger->debug() << "|\033[38;5;94m016398\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value: " << ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        }
                        
                        float _tmp_18471 = ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value;
                        _tmp_18471 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18471);
                        uint16_t* _tmp_18470 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18470 = static_cast<uint16_t>(_tmp_18471);
                        
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
                            logger->debug() << "|\033[38;5;94m016399\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value: " << ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        }
                        
                        float _tmp_18473 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value;
                        _tmp_18473 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18473);
                        _tmp_18473 -= -100000;
                        uint32_t* _tmp_18472 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_18472 = static_cast<uint32_t>(_tmp_18473);
                        
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
                            logger->debug() << "|\033[38;5;94m016400\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                        
                        uint8_t* _tmp_18474 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18474 = ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value; 
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
                
                if(*_ext_flag_8161) {
                }
            
            // Field:  type(HighFrequencyContainer) name(high_frequency_container) extGroup(0)
            // Choice
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency
               // #2  madVehicleContainerHighFrequency   MADVehicleContainerHighFrequency
            uint8_t* _ext_flag_8170 = (uint8_t*) buffer; 
            buffer++;
            *_ext_flag_8170 = 0; 
            
            uint8_t* _choice_415 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.size() != 0) {  // CHOICE 0  fieldType(HighFrequencyContainer) 
                *_choice_415 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016401\033[0m| Choice selection: 0";
            
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
                    char* _tmp_18476 = (char*) buffer++;
                    *_tmp_18476 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016402\033[0m| Optional field acceleration_control = " << *_tmp_18476;
                    char* _tmp_18477 = (char*) buffer++;
                    *_tmp_18477 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016403\033[0m| Optional field lane_position = " << *_tmp_18477;
                    char* _tmp_18478 = (char*) buffer++;
                    *_tmp_18478 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016404\033[0m| Optional field steering_wheel_angle = " << *_tmp_18478;
                    char* _tmp_18479 = (char*) buffer++;
                    *_tmp_18479 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016405\033[0m| Optional field lateral_acceleration = " << *_tmp_18479;
                    char* _tmp_18480 = (char*) buffer++;
                    *_tmp_18480 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016406\033[0m| Optional field vertical_acceleration = " << *_tmp_18480;
                    char* _tmp_18481 = (char*) buffer++;
                    *_tmp_18481 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016407\033[0m| Optional field performance_class = " << *_tmp_18481;
                    char* _tmp_18482 = (char*) buffer++;
                    *_tmp_18482 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016408\033[0m| Optional field cen_dsrc_tolling_zone = " << *_tmp_18482;
                    
                    // Field:  type(Heading) name(heading) extGroup(0)
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        // Optional fields bytemap
                        
                        // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                        // Real
                        
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016409\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        }
                        
                        float _tmp_18484 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value;
                        _tmp_18484 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18484);
                        uint16_t* _tmp_18483 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18483 = static_cast<uint16_t>(_tmp_18484);
                        
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
                            logger->debug() << "|\033[38;5;94m016410\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value);
                        }
                        
                        float _tmp_18486 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value;
                        _tmp_18486 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18486);
                        _tmp_18486 -= 1;
                        uint8_t* _tmp_18485 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_18485 = static_cast<uint8_t>(_tmp_18486);
                        
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
                            logger->debug() << "|\033[38;5;94m016411\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        }
                        
                        float _tmp_18488 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value;
                        _tmp_18488 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18488);
                        uint16_t* _tmp_18487 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18487 = static_cast<uint16_t>(_tmp_18488);
                        
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
                            logger->debug() << "|\033[38;5;94m016412\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value);
                        }
                        
                        float _tmp_18490 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value;
                        _tmp_18490 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18490);
                        _tmp_18490 -= 1;
                        uint8_t* _tmp_18489 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_18489 = static_cast<uint8_t>(_tmp_18490);
                        
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
                        logger->debug() << "|\033[38;5;94m016413\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value);
                    }
                    
                    uint8_t* _tmp_18491 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_18491 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value; 
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
                            logger->debug() << "|\033[38;5;94m016414\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        }
                        
                        float _tmp_18493 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value;
                        _tmp_18493 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18493);
                        _tmp_18493 -= 1;
                        uint16_t* _tmp_18492 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18492 = static_cast<uint16_t>(_tmp_18493);
                        
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
                            logger->debug() << "|\033[38;5;94m016415\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                        
                        uint8_t* _tmp_18494 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18494 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value; 
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
                        logger->debug() << "|\033[38;5;94m016416\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value);
                    }
                    
                    float _tmp_18496 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value;
                    _tmp_18496 *= 10.0;
                    __aux64__ = static_cast<uint64_t>(_tmp_18496);
                    _tmp_18496 -= 1;
                    uint8_t* _tmp_18495 = (uint8_t*) buffer; buffer += 1;
                    *_tmp_18495 = static_cast<uint8_t>(_tmp_18496);
                    
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
                            logger->debug() << "|\033[38;5;94m016417\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        }
                        
                        float _tmp_18498 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value;
                        _tmp_18498 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18498);
                        _tmp_18498 -= -160;
                        uint16_t* _tmp_18497 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18497 = static_cast<uint16_t>(_tmp_18498);
                        
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
                            logger->debug() << "|\033[38;5;94m016418\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value);
                        }
                        
                        float _tmp_18500 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                        _tmp_18500 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18500);
                        uint8_t* _tmp_18499 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_18499 = static_cast<uint8_t>(_tmp_18500);
                        
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
                            logger->debug() << "|\033[38;5;94m016419\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value;
                        }
                        
                        uint16_t* _tmp_18501 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value - -1023;
                        *_tmp_18501 = __aux64__;
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
                            logger->debug() << "|\033[38;5;94m016420\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                        
                        uint8_t* _tmp_18502 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18502 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value; 
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
                    uint8_t* _ext_flag_8183 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016421\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
                                     " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value);
                    }
                    
                    uint8_t* _tmp_18503 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_18503 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value; 
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
                            logger->debug() << "|\033[38;5;94m016422\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        }
                        
                        float _tmp_18505 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value;
                        _tmp_18505 *= 100.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18505);
                        _tmp_18505 -= -32766;
                        uint16_t* _tmp_18504 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_18504 = static_cast<uint16_t>(_tmp_18505);
                        
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
                            logger->debug() << "|\033[38;5;94m016423\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                        
                        uint8_t* _tmp_18506 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18506 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value; 
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
                            logger->debug() << "|\033[38;5;94m016424\033[0m| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size());
                        
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() < 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " is less than allowable (7); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size() > 7) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size()) << " exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18507 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.size();
                        if(__aux64__ > 7) __aux64__ = 7;
                        *_tmp_18507 = __aux64__ - 7;
                        buffer += 1;
                        
                        int __ifw = __aux64__;
                        for(int w = 0; w < __ifw; w++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[w]? 1: 0);
                        }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.size() != 0) {
                        // Field:  type(LanePosition) name(lane_position) extGroup(0)
                        // Integer
                        
                        // INT8  min(-1) max(14) span(16) dataType(Int8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016425\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value);
                        }
                        
                        uint8_t* _tmp_18508 = (uint8_t*) buffer++;
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value - -1;
                        *_tmp_18508 = __aux64__;
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
                                logger->debug() << "|\033[38;5;94m016426\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value;
                            }
                            
                            uint16_t* _tmp_18509 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value - -511;
                            *_tmp_18509 = __aux64__;
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
                                logger->debug() << "|\033[38;5;94m016427\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                            }
                            
                            uint8_t* _tmp_18510 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value - 1;
                            *_tmp_18510 = __aux64__;
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
                                logger->debug() << "|\033[38;5;94m016428\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            }
                            
                            float _tmp_18512 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value;
                            _tmp_18512 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18512);
                            _tmp_18512 -= -160;
                            uint16_t* _tmp_18511 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18511 = static_cast<uint16_t>(_tmp_18512);
                            
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
                                logger->debug() << "|\033[38;5;94m016429\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value);
                            }
                            
                            float _tmp_18514 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value;
                            _tmp_18514 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18514);
                            uint8_t* _tmp_18513 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18513 = static_cast<uint8_t>(_tmp_18514);
                            
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
                                logger->debug() << "|\033[38;5;94m016430\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            }
                            
                            float _tmp_18516 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value;
                            _tmp_18516 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18516);
                            _tmp_18516 -= -160;
                            uint16_t* _tmp_18515 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18515 = static_cast<uint16_t>(_tmp_18516);
                            
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
                                logger->debug() << "|\033[38;5;94m016431\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value);
                            }
                            
                            float _tmp_18518 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value;
                            _tmp_18518 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18518);
                            uint8_t* _tmp_18517 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18517 = static_cast<uint8_t>(_tmp_18518);
                            
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
                            logger->debug() << "|\033[38;5;94m016432\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value);
                        }
                        
                        uint8_t* _tmp_18519 = (uint8_t*) buffer++;
                        *_tmp_18519 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value; 
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
                            uint8_t* _ext_flag_8194 = (uint8_t*) buffer++;  // Write extension flag for CenDsrcTollingZone
                            *_ext_flag_8194 = 0;  
                            
                            // Optional fields bytemap
                            char* _tmp_18520 = (char*) buffer++;
                            *_tmp_18520 = (ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016433\033[0m| Optional field cen_dsrc_tolling_zone_id = " << *_tmp_18520;
                            
                            // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                            // Real
                            
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016434\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            }
                            
                            double _tmp_18522 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                            _tmp_18522 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_18522);
                            _tmp_18522 -= -900000000;
                            uint32_t* _tmp_18521 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_18521 = static_cast<uint32_t>(_tmp_18522);
                            
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
                                logger->debug() << "|\033[38;5;94m016435\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << 
                                             " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            }
                            
                            double _tmp_18524 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                            _tmp_18524 *= 1.0E7;
                            __aux64__ = static_cast<uint64_t>(_tmp_18524);
                            _tmp_18524 -= -1800000000;
                            uint32_t* _tmp_18523 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_18523 = static_cast<uint32_t>(_tmp_18524);
                            
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
                                    logger->debug() << "|\033[38;5;94m016436\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                 " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                }
                                
                                uint32_t* _tmp_18525 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18525 = ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value; 
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
                            
                            if(*_ext_flag_8194) {
                            }
                    }
            
            }
            else if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.size() != 0)  // CHOICE 1  fieldType(HighFrequencyContainer) 
            {
                *_choice_415 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016437\033[0m| Choice selection: 1";
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_8198 = (uint8_t*) buffer++;  // Write extension flag for RSUContainerHighFrequency
                    *_ext_flag_8198 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_18527 = (char*) buffer++;
                    *_tmp_18527 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016438\033[0m| Optional field protected_communication_zones_rsu = " << *_tmp_18527;
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0) {
                        // Field:  type(ProtectedCommunicationZonesRSU) name(protected_communication_zones_rsu) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16) ext(false)
                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.size();
                        if(__aux64__ > 16) __aux64__ = 16;
                        uint16_t* _tmp_18528 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_18528 = __aux64__ - 1;
                        
                        int __ifx = __aux64__;
                        for(int x = 0; x < __ifx; x++) { 
                            
                                // ProtectedCommunicationZone  SEQUENCE
                                    //  protectedZoneType      ProtectedZoneType       
                                    //  expiryTime             TimestampIts          OPTIONAL  
                                    //  protectedZoneLatitude  Latitude                
                                    //  protectedZoneLongitude Longitude               
                                    //  protectedZoneRadius    ProtectedZoneRadius   OPTIONAL  
                                    //  protectedZoneID        ProtectedZoneID       OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_8199 = (uint8_t*) buffer++;  // Write extension flag for ProtectedCommunicationZone
                                *_ext_flag_8199 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_18529 = (char*) buffer++;
                                *_tmp_18529 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].expiry_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016440\033[0m| Optional field expiry_time = " << *_tmp_18529;
                                char* _tmp_18530 = (char*) buffer++;
                                *_tmp_18530 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016441\033[0m| Optional field protected_zone_radius = " << *_tmp_18530;
                                char* _tmp_18531 = (char*) buffer++;
                                *_tmp_18531 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_id.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016442\033[0m| Optional field protected_zone_id = " << *_tmp_18531;
                                
                                // Field:  type(ProtectedZoneType) name(protected_zone_type) extGroup(0)
                                // Enumerated
                                // INT32  min(0) max(1) span(2) dataType(Int32)
                                uint8_t* _ext_flag_8200 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_type.
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016443\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_type.value);
                                }
                                
                                uint8_t* _tmp_18532 = (uint8_t*)buffer;
                                buffer += 1;
                                *_tmp_18532 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_type.value; 
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_type.value; 
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_type.value' (" << __aux64__ << ") exceeds max allowable (1); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].expiry_time.size() != 0) {
                                    // Field:  type(TimestampIts) name(expiry_time) extGroup(0)
                                    // Integer
                                    
                                    // INT64  min(0) max(4398046511103) span(4398046511104) dataType(Int64)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016444\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].expiry_time[0].value;
                                    }
                                    
                                    uint64_t* _tmp_18533 = (uint64_t*)buffer; buffer += 8;
                                    *_tmp_18533 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].expiry_time[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].expiry_time[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].expiry_time[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].expiry_time[0].value' (" << __aux64__ << ") exceeds max allowable (4398046511103); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016445\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_latitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_latitude.value;
                                }
                                
                                double _tmp_18535 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_latitude.value;
                                _tmp_18535 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_18535);
                                _tmp_18535 -= -900000000;
                                uint32_t* _tmp_18534 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18534 = static_cast<uint32_t>(_tmp_18535);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_latitude.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_latitude.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(Longitude) name(protected_zone_longitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016446\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_longitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_longitude.value;
                                }
                                
                                double _tmp_18537 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_longitude.value;
                                _tmp_18537 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_18537);
                                _tmp_18537 -= -1800000000;
                                uint32_t* _tmp_18536 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18536 = static_cast<uint32_t>(_tmp_18537);
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_longitude.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_longitude.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius.size() != 0) {
                                    // Field:  type(ProtectedZoneRadius) name(protected_zone_radius) extGroup(0)
                                    // Integer
                                    
                                    // UINT8  min(1) max(255) span(255) dataType(UInt8)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016447\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value);
                                    }
                                    
                                    uint8_t* _ext_flag_8204 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].
                                    *_ext_flag_8204 = (ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value >= 1 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value <= 255) ? 0 : 1;
                                    
                                    if(*_ext_flag_8204) {
                                        uint8_t* _tmp_18539 = (uint8_t*) buffer++; 
                                        if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value >= 0 && ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value <= INT32_MAX) {
                                            *_tmp_18539 = 0;
                                        
                                            uint32_t* _tmp_18538 = (uint32_t*)buffer; buffer += 4;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value;
                                            __aux64__ -= INT32_MIN;
                                            *_tmp_18538 = __aux64__;
                                        } 
                                        else
                                        {
                                            *_tmp_18539 = 1;
                                        
                                            uint64_t* _tmp_18538 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value;
                                            __aux64__ -= INT64_MIN;
                                            *_tmp_18538 = __aux64__;
                                        }
                                    } else {
                                        uint8_t* _tmp_18538 = (uint8_t*) buffer++;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value - 1;
                                        *_tmp_18538 = __aux64__;
                                        __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_radius[0].value;
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_id.size() != 0) {
                                    // Field:  type(ProtectedZoneID) name(protected_zone_id) extGroup(0)
                                    // Integer
                                    
                                    // UINT32  min(0) max(134217727) span(134217728) dataType(UInt32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016448\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_18540 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_18540 = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_id[0].value; 
                                    __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_id[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[x].protected_zone_id[0].value' (" << __aux64__ << ") exceeds max allowable (134217727); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(*_ext_flag_8199) {
                                }
                        }
                    }
                    
                    if(*_ext_flag_8198) {
                    }
            
            }
            else if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency.size() != 0)  // CHOICE 2  fieldType(HighFrequencyContainer) 
            {
                *_choice_415   = 2 - 2;  // Setting choice selection
                *_ext_flag_8170 = 1;      // setting ext flag
            
                uint16_t* _tmp_18543_openType = (uint16_t*) buffer;  // OpenType length variable 
                buffer += 2;
                const uint8_t *_tmp_18544_start = buffer; // Starting point
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016449\033[0m| Choice selection: 2";
            
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
                        char* _tmp_18545 = (char*) buffer++;
                        *_tmp_18545 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016450\033[0m| Optional field acceleration_control = " << *_tmp_18545;
                        char* _tmp_18546 = (char*) buffer++;
                        *_tmp_18546 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016451\033[0m| Optional field lane_position = " << *_tmp_18546;
                        char* _tmp_18547 = (char*) buffer++;
                        *_tmp_18547 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016452\033[0m| Optional field steering_wheel_angle = " << *_tmp_18547;
                        char* _tmp_18548 = (char*) buffer++;
                        *_tmp_18548 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016453\033[0m| Optional field lateral_acceleration = " << *_tmp_18548;
                        char* _tmp_18549 = (char*) buffer++;
                        *_tmp_18549 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016454\033[0m| Optional field vertical_acceleration = " << *_tmp_18549;
                        char* _tmp_18550 = (char*) buffer++;
                        *_tmp_18550 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016455\033[0m| Optional field performance_class = " << *_tmp_18550;
                        char* _tmp_18551 = (char*) buffer++;
                        *_tmp_18551 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016456\033[0m| Optional field cen_dsrc_tolling_zone = " << *_tmp_18551;
                        
                        // Field:  type(Heading) name(heading) extGroup(0)
                            // Heading  SEQUENCE
                                //  headingValue      HeadingValue          
                                //  headingConfidence HeadingConfidence     
                            // Optional fields bytemap
                            
                            // Field:  type(HeadingValue) name(heading_value) extGroup(0)
                            // Real
                            
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016457\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value;
                            }
                            
                            float _tmp_18553 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value;
                            _tmp_18553 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18553);
                            uint16_t* _tmp_18552 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18552 = static_cast<uint16_t>(_tmp_18553);
                            
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
                                logger->debug() << "|\033[38;5;94m016458\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value);
                            }
                            
                            float _tmp_18555 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value;
                            _tmp_18555 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18555);
                            _tmp_18555 -= 1;
                            uint8_t* _tmp_18554 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18554 = static_cast<uint8_t>(_tmp_18555);
                            
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
                                logger->debug() << "|\033[38;5;94m016459\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value;
                            }
                            
                            float _tmp_18557 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value;
                            _tmp_18557 *= 100.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18557);
                            uint16_t* _tmp_18556 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18556 = static_cast<uint16_t>(_tmp_18557);
                            
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
                                logger->debug() << "|\033[38;5;94m016460\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value);
                            }
                            
                            float _tmp_18559 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value;
                            _tmp_18559 *= 100.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18559);
                            _tmp_18559 -= 1;
                            uint8_t* _tmp_18558 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18558 = static_cast<uint8_t>(_tmp_18559);
                            
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
                            logger->debug() << "|\033[38;5;94m016461\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value);
                        }
                        
                        uint8_t* _tmp_18560 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18560 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value; 
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
                                logger->debug() << "|\033[38;5;94m016462\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value;
                            }
                            
                            float _tmp_18562 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value;
                            _tmp_18562 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18562);
                            _tmp_18562 -= 1;
                            uint16_t* _tmp_18561 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18561 = static_cast<uint16_t>(_tmp_18562);
                            
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
                                logger->debug() << "|\033[38;5;94m016463\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value);
                            }
                            
                            uint8_t* _tmp_18563 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_18563 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value; 
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
                            logger->debug() << "|\033[38;5;94m016464\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value);
                        }
                        
                        float _tmp_18565 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value;
                        _tmp_18565 *= 10.0;
                        __aux64__ = static_cast<uint64_t>(_tmp_18565);
                        _tmp_18565 -= 1;
                        uint8_t* _tmp_18564 = (uint8_t*) buffer; buffer += 1;
                        *_tmp_18564 = static_cast<uint8_t>(_tmp_18565);
                        
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
                                logger->debug() << "|\033[38;5;94m016465\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value;
                            }
                            
                            float _tmp_18567 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value;
                            _tmp_18567 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18567);
                            _tmp_18567 -= -160;
                            uint16_t* _tmp_18566 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18566 = static_cast<uint16_t>(_tmp_18567);
                            
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
                                logger->debug() << "|\033[38;5;94m016466\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value);
                            }
                            
                            float _tmp_18569 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value;
                            _tmp_18569 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18569);
                            uint8_t* _tmp_18568 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18568 = static_cast<uint8_t>(_tmp_18569);
                            
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
                                logger->debug() << "|\033[38;5;94m016467\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value;
                            }
                            
                            uint16_t* _tmp_18570 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value - -1023;
                            *_tmp_18570 = __aux64__;
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
                                logger->debug() << "|\033[38;5;94m016468\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value);
                            }
                            
                            uint8_t* _tmp_18571 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_18571 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value; 
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
                        uint8_t* _ext_flag_8218 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016469\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value);
                        }
                        
                        uint8_t* _tmp_18572 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18572 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value; 
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
                                logger->debug() << "|\033[38;5;94m016470\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value;
                            }
                            
                            float _tmp_18574 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value;
                            _tmp_18574 *= 100.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18574);
                            _tmp_18574 -= -32766;
                            uint16_t* _tmp_18573 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18573 = static_cast<uint16_t>(_tmp_18574);
                            
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
                                logger->debug() << "|\033[38;5;94m016471\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value);
                            }
                            
                            uint8_t* _tmp_18575 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_18575 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value; 
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
                                logger->debug() << "|\033[38;5;94m016472\033[0m| cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size());
                            
                            if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size() < 7) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size()) << " is less than allowable (7); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size() > 7) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value' " << (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size()) << " exceeds max allowable (7); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_18576 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.size();
                            if(__aux64__ > 7) __aux64__ = 7;
                            *_tmp_18576 = __aux64__ - 7;
                            buffer += 1;
                            
                            int __ify = __aux64__;
                            for(int y = 0; y < __ify; y++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values[y]? 1: 0);
                            }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.size() != 0) {
                            // Field:  type(LanePosition) name(lane_position) extGroup(0)
                            // Integer
                            
                            // INT8  min(-1) max(14) span(16) dataType(Int8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016473\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value);
                            }
                            
                            uint8_t* _tmp_18577 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value - -1;
                            *_tmp_18577 = __aux64__;
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
                                    logger->debug() << "|\033[38;5;94m016474\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value;
                                }
                                
                                uint16_t* _tmp_18578 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value - -511;
                                *_tmp_18578 = __aux64__;
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
                                    logger->debug() << "|\033[38;5;94m016475\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value);
                                }
                                
                                uint8_t* _tmp_18579 = (uint8_t*) buffer++;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value - 1;
                                *_tmp_18579 = __aux64__;
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
                                    logger->debug() << "|\033[38;5;94m016476\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value;
                                }
                                
                                float _tmp_18581 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value;
                                _tmp_18581 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18581);
                                _tmp_18581 -= -160;
                                uint16_t* _tmp_18580 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18580 = static_cast<uint16_t>(_tmp_18581);
                                
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
                                    logger->debug() << "|\033[38;5;94m016477\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value);
                                }
                                
                                float _tmp_18583 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value;
                                _tmp_18583 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18583);
                                uint8_t* _tmp_18582 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_18582 = static_cast<uint8_t>(_tmp_18583);
                                
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
                                    logger->debug() << "|\033[38;5;94m016478\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value;
                                }
                                
                                float _tmp_18585 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value;
                                _tmp_18585 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18585);
                                _tmp_18585 -= -160;
                                uint16_t* _tmp_18584 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18584 = static_cast<uint16_t>(_tmp_18585);
                                
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
                                    logger->debug() << "|\033[38;5;94m016479\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value);
                                }
                                
                                float _tmp_18587 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value;
                                _tmp_18587 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18587);
                                uint8_t* _tmp_18586 = (uint8_t*) buffer; buffer += 1;
                                *_tmp_18586 = static_cast<uint8_t>(_tmp_18587);
                                
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
                                logger->debug() << "|\033[38;5;94m016480\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value);
                            }
                            
                            uint8_t* _tmp_18588 = (uint8_t*) buffer++;
                            *_tmp_18588 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value; 
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
                                uint8_t* _ext_flag_8229 = (uint8_t*) buffer++;  // Write extension flag for CenDsrcTollingZone
                                *_ext_flag_8229 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_18589 = (char*) buffer++;
                                *_tmp_18589 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016481\033[0m| Optional field cen_dsrc_tolling_zone_id = " << *_tmp_18589;
                                
                                // Field:  type(Latitude) name(protected_zone_latitude) extGroup(0)
                                // Real
                                
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016482\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                                }
                                
                                double _tmp_18591 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value;
                                _tmp_18591 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_18591);
                                _tmp_18591 -= -900000000;
                                uint32_t* _tmp_18590 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18590 = static_cast<uint32_t>(_tmp_18591);
                                
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
                                    logger->debug() << "|\033[38;5;94m016483\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << 
                                                 " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                                }
                                
                                double _tmp_18593 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value;
                                _tmp_18593 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_18593);
                                _tmp_18593 -= -1800000000;
                                uint32_t* _tmp_18592 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18592 = static_cast<uint32_t>(_tmp_18593);
                                
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
                                        logger->debug() << "|\033[38;5;94m016484\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_18594 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_18594 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value; 
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
                                
                                if(*_ext_flag_8229) {
                                }
                        }
                    
                    // Field:  type(MADControlModeState) name(mad_control_mode_state) extGroup(0)
                        // MADControlModeState  SEQUENCE
                            //  madControlMode       MADControlMode          
                            //  madDrivingMode       MADDrivingMode          
                            //  adviceTimeConsidered GenerationDeltaTime   OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_18596 = (char*) buffer++;
                        *_tmp_18596 = (ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016485\033[0m| Optional field advice_time_considered = " << *_tmp_18596;
                        
                        // Field:  type(MADControlMode) name(mad_control_mode) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(7) span(8) dataType(Int32)
                        uint8_t* _ext_flag_8233 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016486\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value);
                        }
                        
                        uint8_t* _tmp_18597 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18597 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value; 
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
                            logger->debug() << "|\033[38;5;94m016487\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value);
                        }
                        
                        uint8_t* _tmp_18598 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18598 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value; 
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
                                logger->debug() << "|\033[38;5;94m016488\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value: " << ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value;
                            }
                            
                            uint16_t* _tmp_18599 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18599 = ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value; 
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
            
                *_tmp_18543_openType = buffer - _tmp_18544_start;  // OpenType length  
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_415) << ") selected in CHOICE HighFrequencyContainer in 'cam.cam_parameters.high_frequency_container'; message dropped.";
                return -1;
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() != 0) {
                // Field:  type(LowFrequencyContainer) name(low_frequency_container) extGroup(0)
                // Choice
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency
                   // #1  madVehicleContainerLowFrequency   MADVehicleContainerLowFrequency
                uint8_t* _ext_flag_8236 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_8236 = 0; 
                
                uint8_t* _choice_416 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.size() != 0) {  // CHOICE 0  fieldType(LowFrequencyContainer) 
                    *_choice_416 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016489\033[0m| Choice selection: 0";
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        // Optional fields bytemap
                        
                        // Field:  type(VehicleRole) name(vehicle_role) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016490\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        uint8_t* _tmp_18600 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18600 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value; 
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
                            logger->debug() << "|\033[38;5;94m016491\033[0m| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size());
                        
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() < 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " is less than allowable (8); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size() > 8) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value' " << (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size()) << " exceeds max allowable (8); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18601 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.size();
                        if(__aux64__ > 8) __aux64__ = 8;
                        *_tmp_18601 = __aux64__ - 8;
                        buffer += 1;
                        
                        int __ifz = __aux64__;
                        for(int z = 0; z < __ifz; z++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values[z]? 1: 0);
                        }
                        
                        // Field:  type(PathHistory) name(path_history) extGroup(0)
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(0) max(40) span(41) ext(false)
                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements.size();
                        if(__aux64__ > 40) __aux64__ = 40;
                        uint16_t* _tmp_18602 = (uint16_t*)buffer;
                        buffer += 2;
                        *_tmp_18602 = __aux64__;
                        
                        int __ifa = __aux64__;
                        for(int a = 0; a < __ifa; a++) { 
                            
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                // Optional fields bytemap
                                char* _tmp_18603 = (char*) buffer++;
                                *_tmp_18603 = (ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016493\033[0m| Optional field path_delta_time = " << *_tmp_18603;
                                
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
                                        logger->debug() << "|\033[38;5;94m016494\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_latitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_latitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_latitude.value;
                                    }
                                    
                                    double _tmp_18605 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_latitude.value;
                                    _tmp_18605 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18605);
                                    _tmp_18605 -= -131071;
                                    uint32_t* _tmp_18604 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_18604 = static_cast<uint32_t>(_tmp_18605);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_latitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_latitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaLongitude) name(delta_longitude) extGroup(0)
                                    // Real
                                    
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016495\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_longitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_longitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_longitude.value;
                                    }
                                    
                                    double _tmp_18607 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_longitude.value;
                                    _tmp_18607 *= 1.0E7;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18607);
                                    _tmp_18607 -= -131071;
                                    uint32_t* _tmp_18606 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_18606 = static_cast<uint32_t>(_tmp_18607);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_longitude.value' (" << __aux64__ << ") less than (-131071); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_longitude.value' (" << __aux64__ << ") exceeds max allowable (131072); message dropped.";
                                        return -1;
                                    }
                                    
                                    // Field:  type(DeltaAltitude) name(delta_altitude) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016496\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_altitude.value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_altitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_altitude.value;
                                    }
                                    
                                    float _tmp_18609 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_altitude.value;
                                    _tmp_18609 *= 100.0;
                                    __aux64__ = static_cast<uint64_t>(_tmp_18609);
                                    _tmp_18609 -= -12700;
                                    uint16_t* _tmp_18608 = (uint16_t*) buffer; buffer += 2;
                                    *_tmp_18608 = static_cast<uint16_t>(_tmp_18609);
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_altitude.value' (" << __aux64__ << ") less than (-12700); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_position.delta_altitude.value' (" << __aux64__ << ") exceeds max allowable (12800); message dropped.";
                                        return -1;
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time.size() != 0) {
                                    // Field:  type(PathDeltaTime) name(path_delta_time) extGroup(0)
                                    // Real
                                    
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016497\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time[0].value) << 
                                                     " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time[0].value;
                                    }
                                    
                                    uint8_t* _ext_flag_8241 = (uint8_t*) buffer++; // Extension flag for ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time[0].
                                    float _tmp_18610 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time[0].value;
                                    _tmp_18610 *= 100.0;
                                    __aux64__ = static_cast<int64_t>(_tmp_18610);
                                    *_ext_flag_8241 = (__aux64__ >= 1 && __aux64__ <= 65535) ? 0 : 1;
                                    
                                    if(*_ext_flag_8241) {
                                        uint8_t* _tmp_18611 = (uint8_t*) buffer++; 
                                    
                                        if(__aux64__ >= INT32_MIN && __aux64__ <= INT32_MAX) {
                                            *_tmp_18611 = 0;
                                    
                                            float _tmp_18613 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time[0].value;
                                            _tmp_18613 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18613);
                                            _tmp_18613 -= INT32_MIN;
                                            uint32_t* _tmp_18612 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_18612 = static_cast<uint32_t>(_tmp_18613);
                                        }
                                        else
                                        {
                                            *_tmp_18611 = 1;
                                    
                                            float _tmp_18615 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time[0].value;
                                            _tmp_18615 *= 100.0;
                                            __aux64__ = static_cast<uint64_t>(_tmp_18615);
                                            _tmp_18615 -= INT64_MIN;
                                            uint32_t* _tmp_18614 = (uint32_t*) buffer; buffer += 4;
                                            *_tmp_18614 = static_cast<uint32_t>(_tmp_18615);
                                        }
                                    }
                                    else
                                    {
                                        float _tmp_18617 = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[a].path_delta_time[0].value;
                                        _tmp_18617 *= 100.0;
                                        __aux64__ = static_cast<uint64_t>(_tmp_18617);
                                        _tmp_18617 -= 1;
                                        uint16_t* _tmp_18616 = (uint16_t*) buffer; buffer += 2;
                                        *_tmp_18616 = static_cast<uint16_t>(_tmp_18617);
                                    }
                                }
                                
                        }
                
                }
                else if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency.size() != 0)  // CHOICE 1  fieldType(LowFrequencyContainer) 
                {
                    *_choice_416   = 1 - 1;  // Setting choice selection
                    *_ext_flag_8236 = 1;      // setting ext flag
                
                    uint16_t* _tmp_18618_openType = (uint16_t*) buffer;  // OpenType length variable 
                    buffer += 2;
                    const uint8_t *_tmp_18619_start = buffer; // Starting point
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016498\033[0m| Choice selection: 1";
                
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
                                logger->debug() << "|\033[38;5;94m016499\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value);
                            }
                            
                            float _tmp_18621 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value;
                            _tmp_18621 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18621);
                            _tmp_18621 -= 1;
                            uint8_t* _tmp_18620 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18620 = static_cast<uint8_t>(_tmp_18621);
                            
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
                                logger->debug() << "|\033[38;5;94m016500\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value);
                            }
                            
                            float _tmp_18623 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value;
                            _tmp_18623 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18623);
                            _tmp_18623 -= 1;
                            uint8_t* _tmp_18622 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18622 = static_cast<uint8_t>(_tmp_18623);
                            
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
                                logger->debug() << "|\033[38;5;94m016501\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value);
                            }
                            
                            float _tmp_18625 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value;
                            _tmp_18625 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18625);
                            _tmp_18625 -= 1;
                            uint8_t* _tmp_18624 = (uint8_t*) buffer; buffer += 1;
                            *_tmp_18624 = static_cast<uint8_t>(_tmp_18625);
                            
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
                            
                            // FLOAT  min(1) max(1024) span(1024) scaleDivisor(1.0E-5) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016502\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value;
                            }
                            
                            float _tmp_18627 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value;
                            _tmp_18627 *= 1.0E-5;
                            __aux64__ = static_cast<uint64_t>(_tmp_18627);
                            _tmp_18627 -= 1;
                            uint16_t* _tmp_18626 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18626 = static_cast<uint16_t>(_tmp_18627);
                            
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
                                logger->debug() << "|\033[38;5;94m016503\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value;
                            }
                            
                            uint16_t* _tmp_18628 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value - -1023;
                            *_tmp_18628 = __aux64__;
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
                                logger->debug() << "|\033[38;5;94m016504\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value;
                            }
                            
                            uint16_t* _tmp_18629 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value - -1023;
                            *_tmp_18629 = __aux64__;
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
                                logger->debug() << "|\033[38;5;94m016505\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value;
                            }
                            
                            float _tmp_18631 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value;
                            _tmp_18631 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18631);
                            _tmp_18631 -= -160;
                            uint16_t* _tmp_18630 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18630 = static_cast<uint16_t>(_tmp_18631);
                            
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
                                logger->debug() << "|\033[38;5;94m016506\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value) << 
                                             " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value;
                            }
                            
                            float _tmp_18633 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value;
                            _tmp_18633 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_18633);
                            _tmp_18633 -= -160;
                            uint16_t* _tmp_18632 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_18632 = static_cast<uint16_t>(_tmp_18633);
                            
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
                                logger->debug() << "|\033[38;5;94m016507\033[0m| cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size());
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size() < 3) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size()) << " is less than allowable (3); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size() > 3) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value' " << (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size()) << " exceeds max allowable (3); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _ext_flag_8250 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.
                            *_ext_flag_8250 = 0; 
                            
                            uint8_t* _tmp_18634 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.size();
                            if(__aux64__ > 3) __aux64__ = 3;
                            *_tmp_18634 = __aux64__ - 3;
                            buffer += 1;
                            
                            int __ifb = __aux64__;
                            for(int b = 0; b < __ifb; b++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values[b]? 1: 0);
                            }
                        
                        // Field:  type(LocalDestination) name(local_destination) extGroup(0)
                            // LocalDestination  SEQUENCE
                                //  deltaReferencePosition DeltaReferencePosition     
                                //  speedValue             SpeedValue               OPTIONAL  
                                //  headingValue           HeadingValue             OPTIONAL  
                            // Optional fields bytemap
                            char* _tmp_18635 = (char*) buffer++;
                            *_tmp_18635 = (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016508\033[0m| Optional field speed_value = " << *_tmp_18635;
                            char* _tmp_18636 = (char*) buffer++;
                            *_tmp_18636 = (ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016509\033[0m| Optional field heading_value = " << *_tmp_18636;
                            
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
                                    logger->debug() << "|\033[38;5;94m016510\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value;
                                }
                                
                                double _tmp_18638 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value;
                                _tmp_18638 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_18638);
                                _tmp_18638 -= -131071;
                                uint32_t* _tmp_18637 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18637 = static_cast<uint32_t>(_tmp_18638);
                                
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
                                    logger->debug() << "|\033[38;5;94m016511\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value;
                                }
                                
                                double _tmp_18640 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value;
                                _tmp_18640 *= 1.0E7;
                                __aux64__ = static_cast<uint64_t>(_tmp_18640);
                                _tmp_18640 -= -131071;
                                uint32_t* _tmp_18639 = (uint32_t*) buffer; buffer += 4;
                                *_tmp_18639 = static_cast<uint32_t>(_tmp_18640);
                                
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
                                    logger->debug() << "|\033[38;5;94m016512\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value;
                                }
                                
                                float _tmp_18642 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value;
                                _tmp_18642 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18642);
                                _tmp_18642 -= -12700;
                                uint16_t* _tmp_18641 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18641 = static_cast<uint16_t>(_tmp_18642);
                                
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
                                    logger->debug() << "|\033[38;5;94m016513\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value;
                                }
                                
                                float _tmp_18644 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value;
                                _tmp_18644 *= 100.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18644);
                                uint16_t* _tmp_18643 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18643 = static_cast<uint16_t>(_tmp_18644);
                                
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
                                    logger->debug() << "|\033[38;5;94m016514\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value) << 
                                                 " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value: " << ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value;
                                }
                                
                                float _tmp_18646 = ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value;
                                _tmp_18646 *= 10.0;
                                __aux64__ = static_cast<uint64_t>(_tmp_18646);
                                uint16_t* _tmp_18645 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_18645 = static_cast<uint16_t>(_tmp_18646);
                                
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
                
                    *_tmp_18618_openType = buffer - _tmp_18619_start;  // OpenType length  
                }
                else
                {
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_416) << ") selected in CHOICE LowFrequencyContainer in 'cam.cam_parameters.low_frequency_container[0]'; message dropped.";
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
                uint8_t* _ext_flag_8256 = (uint8_t*) buffer; 
                buffer++;
                *_ext_flag_8256 = 0; 
                
                uint8_t* _choice_417 = (uint8_t*) buffer;
                buffer++;
                
                if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.size() != 0) {  // CHOICE 0  fieldType(SpecialVehicleContainer) 
                    *_choice_417 = 0;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016515\033[0m| Choice selection: 0";
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_18647 = (char*) buffer++;
                        *_tmp_18647 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016516\033[0m| Optional field pt_activation = " << *_tmp_18647;
                        
                        // Field:  type(EmbarkationStatus) name(embarkation_status) extGroup(0)
                        // Value
                        // Boolean
                        uint8_t* _tmp_18648 = (uint8_t*)buffer++;
                        *_tmp_18648 = (ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016517\033[0m| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status: " << (*_tmp_18648);
                        
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
                                    logger->debug() << "|\033[38;5;94m016518\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value);
                                }
                                
                                uint8_t* _tmp_18649 = (uint8_t*) buffer++;
                                *_tmp_18649 = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value; 
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
                                    logger->debug() << "|\033[38;5;94m016519\033[0m| cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size(): cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data" << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size());
                                
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
                                uint8_t* _tmp_18650 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.size();
                                if(__aux64__ > 20) __aux64__ = 20;
                                *_tmp_18650 = __aux64__ - 1;
                                
                                int __ifc = __aux64__;
                                for(int c = 0; c < __ifc; c++) {
                                    int8_t* __m__ = (int8_t*)buffer++;
                                    *__m__ = ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values[c];
                                }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.size() != 0)  // CHOICE 1  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_417 = 1;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016520\033[0m| Choice selection: 1";
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        // Optional fields bytemap
                        
                        // Field:  type(SpecialTransportType) name(special_transport_type) extGroup(0)
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016521\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() < 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " is less than allowable (4); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size() > 4) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size()) << " exceeds max allowable (4); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18651 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.size();
                        if(__aux64__ > 4) __aux64__ = 4;
                        *_tmp_18651 = __aux64__ - 4;
                        buffer += 1;
                        
                        int __ifd = __aux64__;
                        for(int d = 0; d < __ifd; d++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values[d]? 1: 0);
                        }
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016522\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18652 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_18652 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ife = __aux64__;
                        for(int e = 0; e < __ife; e++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[e]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.size() != 0)  // CHOICE 2  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_417 = 2;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016523\033[0m| Choice selection: 2";
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        // Optional fields bytemap
                        
                        // Field:  type(DangerousGoodsBasic) name(dangerous_goods_basic) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(19) span(20) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016524\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                        
                        uint8_t* _tmp_18653 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_18653 = ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value; 
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
                    *_choice_417 = 3;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016525\033[0m| Choice selection: 3";
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_18654 = (char*) buffer++;
                        *_tmp_18654 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016526\033[0m| Optional field roadworks_sub_cause_code = " << *_tmp_18654;
                        char* _tmp_18655 = (char*) buffer++;
                        *_tmp_18655 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016527\033[0m| Optional field closed_lanes = " << *_tmp_18655;
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0) {
                            // Field:  type(RoadworksSubCauseCode) name(roadworks_sub_cause_code) extGroup(0)
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016528\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value);
                            }
                            
                            uint8_t* _tmp_18656 = (uint8_t*) buffer++;
                            *_tmp_18656 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value; 
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
                            logger->debug() << "|\033[38;5;94m016529\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18657 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_18657 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __iff = __aux64__;
                        for(int f = 0; f < __iff; f++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[f]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.size() != 0) {
                            // Field:  type(ClosedLanes) name(closed_lanes) extGroup(0)
                                // ClosedLanes  SEQUENCE
                                    //  innerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  outerhardShoulderStatus HardShoulderStatus   OPTIONAL  
                                    //  drivingLaneStatus       DrivingLaneStatus    OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_8260 = (uint8_t*) buffer++;  // Write extension flag for ClosedLanes
                                *_ext_flag_8260 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_18658 = (char*) buffer++;
                                *_tmp_18658 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016530\033[0m| Optional field innerhard_shoulder_status = " << *_tmp_18658;
                                char* _tmp_18659 = (char*) buffer++;
                                *_tmp_18659 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016531\033[0m| Optional field outerhard_shoulder_status = " << *_tmp_18659;
                                char* _tmp_18660 = (char*) buffer++;
                                *_tmp_18660 = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016532\033[0m| Optional field driving_lane_status = " << *_tmp_18660;
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0) {
                                    // Field:  type(HardShoulderStatus) name(innerhard_shoulder_status) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) dataType(Int32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016533\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_18661 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_18661 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value; 
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
                                        logger->debug() << "|\033[38;5;94m016534\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                    
                                    uint8_t* _tmp_18662 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_18662 = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value; 
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
                                        logger->debug() << "|\033[38;5;94m016535\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size());
                                    
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() < 1) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " is less than allowable (1); message dropped.";
                                        return -1;
                                    }
                                    if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size() > 13) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size()) << " exceeds max allowable (13); message dropped.";
                                        return -1;
                                    }
                                    
                                    uint8_t* _tmp_18663 = (uint8_t*)buffer;
                                    __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.size();
                                    if(__aux64__ > 13) __aux64__ = 13;
                                    *_tmp_18663 = __aux64__ - 1;
                                    buffer += 1;
                                    
                                    int __ifg = __aux64__;
                                    for(int g = 0; g < __ifg; g++) {
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[g]? 1: 0);
                                    }
                                }
                                
                                if(*_ext_flag_8260) {
                                }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.size() != 0)  // CHOICE 4  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_417 = 4;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016536\033[0m| Choice selection: 4";
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        // Optional fields bytemap
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016537\033[0m| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18665 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_18665 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifh = __aux64__;
                        for(int h = 0; h < __ifh; h++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[h]? 1: 0);
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.size() != 0)  // CHOICE 5  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_417 = 5;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016538\033[0m| Choice selection: 5";
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_18666 = (char*) buffer++;
                        *_tmp_18666 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016539\033[0m| Optional field incident_indication = " << *_tmp_18666;
                        char* _tmp_18667 = (char*) buffer++;
                        *_tmp_18667 = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016540\033[0m| Optional field emergency_priority = " << *_tmp_18667;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016541\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18668 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_18668 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifi = __aux64__;
                        for(int i = 0; i < __ifi; i++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[i]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.size() != 0) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_8263 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_8263 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016542\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_18669 = (uint8_t*) buffer++;
                                *_tmp_18669 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value; 
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
                                    logger->debug() << "|\033[38;5;94m016543\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_18670 = (uint8_t*) buffer++;
                                *_tmp_18670 = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value; 
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
                                
                                if(*_ext_flag_8263) {
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0) {
                            // Field:  type(EmergencyPriority) name(emergency_priority) extGroup(0)
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016544\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size());
                            
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() < 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " is less than allowable (2); message dropped.";
                                return -1;
                            }
                            if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size() > 2) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value' " << (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size()) << " exceeds max allowable (2); message dropped.";
                                return -1;
                            }
                            
                            uint8_t* _tmp_18672 = (uint8_t*)buffer;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.size();
                            if(__aux64__ > 2) __aux64__ = 2;
                            *_tmp_18672 = __aux64__ - 2;
                            buffer += 1;
                            
                            int __ifj = __aux64__;
                            for(int j = 0; j < __ifj; j++) {
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[j]? 1: 0);
                            }
                        }
                
                }
                else if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.size() != 0)  // CHOICE 6  fieldType(SpecialVehicleContainer) 
                {
                    *_choice_417 = 6;  // Setting choice selection
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016545\033[0m| Choice selection: 6";
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        // Optional fields bytemap
                        char* _tmp_18673 = (char*) buffer++;
                        *_tmp_18673 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016546\033[0m| Optional field incident_indication = " << *_tmp_18673;
                        char* _tmp_18674 = (char*) buffer++;
                        *_tmp_18674 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016547\033[0m| Optional field traffic_rule = " << *_tmp_18674;
                        char* _tmp_18675 = (char*) buffer++;
                        *_tmp_18675 = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016548\033[0m| Optional field speed_limit = " << *_tmp_18675;
                        
                        // Field:  type(LightBarSirenInUse) name(light_bar_siren_in_use) extGroup(0)
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016549\033[0m| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size());
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() < 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " is less than allowable (2); message dropped.";
                            return -1;
                        }
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size() > 2) {
                                logger->warning() << "Error: Value in 'cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value' " << (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size()) << " exceeds max allowable (2); message dropped.";
                            return -1;
                        }
                        
                        uint8_t* _tmp_18676 = (uint8_t*)buffer;
                        __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.size();
                        if(__aux64__ > 2) __aux64__ = 2;
                        *_tmp_18676 = __aux64__ - 2;
                        buffer += 1;
                        
                        int __ifk = __aux64__;
                        for(int k = 0; k < __ifk; k++) {
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            *__b__ = (ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[k]? 1: 0);
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.size() != 0) {
                            // Field:  type(CauseCode) name(incident_indication) extGroup(0)
                                // CauseCode  SEQUENCE
                                    //  causeCode    CauseCodeType        
                                    //  subCauseCode SubCauseCodeType     
                                    //  ...
                                uint8_t* _ext_flag_8266 = (uint8_t*) buffer++;  // Write extension flag for CauseCode
                                *_ext_flag_8266 = 0;  
                                
                                // Optional fields bytemap
                                
                                // Field:  type(CauseCodeType) name(cause_code) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016550\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value);
                                }
                                
                                uint8_t* _tmp_18677 = (uint8_t*) buffer++;
                                *_tmp_18677 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value; 
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
                                    logger->debug() << "|\033[38;5;94m016551\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
                                                 " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value);
                                }
                                
                                uint8_t* _tmp_18678 = (uint8_t*) buffer++;
                                *_tmp_18678 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value; 
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
                                
                                if(*_ext_flag_8266) {
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0) {
                            // Field:  type(TrafficRule) name(traffic_rule) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(3) span(4) dataType(Int32)
                            uint8_t* _ext_flag_8269 = (uint8_t*) buffer++; // Write extension flag for ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016552\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                            
                            uint8_t* _tmp_18680 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_18680 = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value; 
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
                                logger->debug() << "|\033[38;5;94m016553\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value);
                            }
                            
                            uint8_t* _tmp_18681 = (uint8_t*) buffer++;
                            __aux64__ = ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value - 1;
                            *_tmp_18681 = __aux64__;
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
                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_417) << ") selected in CHOICE SpecialVehicleContainer in 'cam.cam_parameters.special_vehicle_container[0]'; message dropped.";
                    return -1;
                }
            }
            
            if(*_ext_flag_8160) {
            }
    
	
            return buffer - start;
        }
    } 
}