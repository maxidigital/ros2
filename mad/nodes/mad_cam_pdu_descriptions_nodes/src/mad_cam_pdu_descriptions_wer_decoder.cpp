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
        uint8_t* _tmp_18683 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_18683;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016554\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
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
        uint8_t* _tmp_18684 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_18684;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016555\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
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
        uint32_t* _tmp_18685 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_18685;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016556\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
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
        uint16_t* _tmp_18686 = (uint16_t*) buffer; buffer += 2;
        __aux64__ = *_tmp_18686;
        ros->cam.generation_delta_time.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m016557\033[0m| " << tools::getTypeName(ros->cam.generation_delta_time.value) << 
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
            uint8_t* _ext_flag_8271 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m016558\033[0m| Reading ext flag from ros->cam.cam_parameters.: " << int(*_ext_flag_8271);
            }
            
            if(*(buffer++)) { 
                mad_cam_pdu_descriptions_msgs::msg::LowFrequencyContainer _tmp_18687;
                ros->cam.cam_parameters.low_frequency_container.push_back(_tmp_18687);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016559\033[0m| ros->cam.cam_parameters.low_frequency_container " << tools::green("present");
            }
            if(*(buffer++)) { 
                mad_cam_pdu_descriptions_msgs::msg::SpecialVehicleContainer _tmp_18688;
                ros->cam.cam_parameters.special_vehicle_container.push_back(_tmp_18688);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m016560\033[0m| ros->cam.cam_parameters.special_vehicle_container " << tools::green("present");
            }
            
            // Field name: basic_container
                // BasicContainer  SEQUENCE
                    //  stationType       StationType           
                    //  referencePosition ReferencePosition     
                    //  ...
                uint8_t* _ext_flag_8272 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.basic_container.
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016561\033[0m| Reading ext flag from ros->cam.cam_parameters.basic_container.: " << int(*_ext_flag_8272);
                }
                
                
                // Field name: station_type
                // Integer
                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                uint8_t* _tmp_18689 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_18689;
                ros->cam.cam_parameters.basic_container.station_type.value = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m016562\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.station_type.value) << 
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
                    uint32_t* _tmp_18690 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.latitude.value = *_tmp_18690;
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
                        logger->debug() << "|\033[38;5;94m016563\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.latitude.value) << " cam.cam_parameters.basic_container.reference_position.latitude: " <<
                                     ros->cam.cam_parameters.basic_container.reference_position.latitude.value << " (" << __aux64__ << ")";
                    }
                    
                    // Field name: longitude
                    // Real
                    // Double
                    // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                    uint32_t* _tmp_18691 = (uint32_t*) buffer; buffer += 4;
                    ros->cam.cam_parameters.basic_container.reference_position.longitude.value = *_tmp_18691;
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
                        logger->debug() << "|\033[38;5;94m016564\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.longitude.value) << " cam.cam_parameters.basic_container.reference_position.longitude: " <<
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
                        uint16_t* _tmp_18692 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value = *_tmp_18692;
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
                            logger->debug() << "|\033[38;5;94m016565\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_minor_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(4095) span(4096) scaleDivisor(100.0) dataType(Float)
                        uint16_t* _tmp_18693 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value = *_tmp_18693;
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
                            logger->debug() << "|\033[38;5;94m016566\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_minor_confidence.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: semi_major_orientation
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_18694 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value = *_tmp_18694;
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
                            logger->debug() << "|\033[38;5;94m016567\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation.value) << " cam.cam_parameters.basic_container.reference_position.position_confidence_ellipse.semi_major_orientation: " <<
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
                        uint32_t* _tmp_18695 = (uint32_t*) buffer; buffer += 4;
                        ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value = *_tmp_18695;
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
                            logger->debug() << "|\033[38;5;94m016568\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value) << " cam.cam_parameters.basic_container.reference_position.altitude.altitude_value: " <<
                                         ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: altitude_confidence
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_18696 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18696;
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
                            logger->debug() << "|\033[38;5;94m016569\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value) << 
                                         " cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.basic_container.reference_position.altitude.altitude_confidence.value);
                        }
                if(*_ext_flag_8272) { // from ros->cam.cam_parameters.basic_container. 
                    uint8_t* _tmp_18697 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_228[*_tmp_18697];
                    
                    if(debug)
                        logger->debug() << "|\033[38;5;94m016570\033[0m| Reading number of exts from ros->cam.cam_parameters.basic_container.: " << static_cast<unsigned int>(*_tmp_18697);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_18697; i++)
                        _array_228[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_18697; i++) {
                        uint16_t* _tmp_18698 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_18698; i++)
                            buffer++;
                    }
                    
                }
            
            // Field name: high_frequency_container
            // Choice
            uint8_t* _ext_flag_8280 = (uint8_t*)buffer++; // ext flag
            
               // #0  basicVehicleContainerHighFrequency   BasicVehicleContainerHighFrequency   
               // #1  rsuContainerHighFrequency   RSUContainerHighFrequency   
               // #2  madVehicleContainerHighFrequency   MADVehicleContainerHighFrequency   (ext field)
            uint8_t _choice_418 = *(buffer++);
            
            if(*_ext_flag_8280)
                _choice_418 += 1 + 1; // Ext addition
            
            if(_choice_418 == 0) {
                mad_cam_pdu_descriptions_msgs::msg::BasicVehicleContainerHighFrequency _tmp_18699;
                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency.push_back(_tmp_18699);
            
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
                        its_container_v2_its_container_msgs::msg::AccelerationControl _tmp_18700;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.push_back(_tmp_18700);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016571\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::LanePosition _tmp_18701;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position.push_back(_tmp_18701);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016572\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::SteeringWheelAngle _tmp_18702;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle.push_back(_tmp_18702);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016573\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::LateralAcceleration _tmp_18703;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration.push_back(_tmp_18703);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016574\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::VerticalAcceleration _tmp_18704;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration.push_back(_tmp_18704);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016575\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::PerformanceClass _tmp_18705;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.push_back(_tmp_18705);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016576\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::CenDsrcTollingZone _tmp_18706;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone.push_back(_tmp_18706);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016577\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone " << tools::green("present");
                    }
                    
                    // Field name: heading
                        // Heading  SEQUENCE
                            //  headingValue      HeadingValue          
                            //  headingConfidence HeadingConfidence     
                        
                        // Field name: heading_value
                        // Real
                        // Float
                        // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                        uint16_t* _tmp_18707 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value = *_tmp_18707;
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
                            logger->debug() << "|\033[38;5;94m016578\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: heading_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_18708 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value = *_tmp_18708;
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
                            logger->debug() << "|\033[38;5;94m016579\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].heading.heading_confidence: " <<
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
                        uint16_t* _tmp_18709 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value = *_tmp_18709;
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
                            logger->debug() << "|\033[38;5;94m016580\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: speed_confidence
                        // Real
                        // Float
                        // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                        uint8_t* _tmp_18710 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value = *_tmp_18710;
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
                            logger->debug() << "|\033[38;5;94m016581\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].speed.speed_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: drive_direction
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _tmp_18711 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_18711;
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
                        logger->debug() << "|\033[38;5;94m016582\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].drive_direction.value) << 
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
                        uint16_t* _tmp_18712 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value = *_tmp_18712;
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
                            logger->debug() << "|\033[38;5;94m016583\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: vehicle_length_confidence_indication
                        // Enumerated
                        // INT32  min(0) max(4) span(5) datatype(Int32)
                        uint8_t* _tmp_18713 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18713;
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
                            logger->debug() << "|\033[38;5;94m016584\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_length.vehicle_length_confidence_indication.value);
                        }
                    
                    // Field name: vehicle_width
                    // Real
                    // Float
                    // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                    uint8_t* _tmp_18714 = (uint8_t*) buffer++;
                    ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value = *_tmp_18714;
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
                        logger->debug() << "|\033[38;5;94m016585\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vehicle_width: " <<
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
                        uint16_t* _tmp_18715 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value = *_tmp_18715;
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
                            logger->debug() << "|\033[38;5;94m016586\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longitudinal_acceleration_confidence
                        // Real
                        // Float
                        // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_18716 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value = *_tmp_18716;
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
                            logger->debug() << "|\033[38;5;94m016587\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].longitudinal_acceleration.longitudinal_acceleration_confidence.value << " (" << __aux64__ << ")";
                        }
                    
                    // Field name: curvature
                        // Curvature  SEQUENCE
                            //  curvatureValue      CurvatureValue          
                            //  curvatureConfidence CurvatureConfidence     
                        
                        // Field name: curvature_value
                        // Integer
                        // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                        uint16_t* _tmp_18717 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_18717;
                        __aux64__ += -1023;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016588\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_value.value) << 
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
                        uint8_t* _tmp_18718 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18718;
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
                            logger->debug() << "|\033[38;5;94m016589\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature.curvature_confidence.value);
                        }
                    
                    // Field name: curvature_calculation_mode
                    // Enumerated
                    // INT32  min(0) max(2) span(3) datatype(Int32)
                    uint8_t* _ext_flag_8292 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016590\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.: " << int(*_ext_flag_8292);
                    }
                    
                    uint8_t* _tmp_18719 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_18719;
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
                        logger->debug() << "|\033[38;5;94m016591\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].curvature_calculation_mode.value) << 
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
                        uint16_t* _tmp_18720 = (uint16_t*) buffer; buffer += 2;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value = *_tmp_18720;
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
                            logger->debug() << "|\033[38;5;94m016592\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value: " <<
                                         ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_value.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: yaw_rate_confidence
                        // Enumerated
                        // INT32  min(0) max(8) span(9) datatype(Int32)
                        uint8_t* _tmp_18721 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18721;
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
                            logger->debug() << "|\033[38;5;94m016593\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value) << 
                                         " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].yaw_rate.yaw_rate_confidence.value);
                        }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control.size() != 0) {
                        // Field name: acceleration_control
                        // BitString
                        // BIT_STRING  min(7) max(7) span(1)
                        uint8_t* _tmp_18722 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18722 + 7;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016594\033[0m| cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].value: " << __aux64__;
                        
                        int _if__tmp_18722 = __aux64__;
                        for(int l = 0; l < _if__tmp_18722; l++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].acceleration_control[0].values[l] = (*__b__ == 1);
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
                        uint8_t* _tmp_18723 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18723;
                        __aux64__ += -1;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016595\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lane_position[0].value) << 
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
                            uint16_t* _tmp_18724 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_18724;
                            __aux64__ += -511;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016596\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_value.value) << 
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
                            uint8_t* _tmp_18725 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18725;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016597\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
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
                            uint16_t* _tmp_18726 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value = *_tmp_18726;
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
                                logger->debug() << "|\033[38;5;94m016598\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: lateral_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_18727 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value = *_tmp_18727;
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
                                logger->debug() << "|\033[38;5;94m016599\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].lateral_acceleration[0].lateral_acceleration_confidence: " <<
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
                            uint16_t* _tmp_18728 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value = *_tmp_18728;
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
                                logger->debug() << "|\033[38;5;94m016600\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vertical_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_18729 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value = *_tmp_18729;
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
                                logger->debug() << "|\033[38;5;94m016601\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].vertical_acceleration[0].vertical_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class.size() != 0) {
                        // Field name: performance_class
                        // Integer
                        // UINT8  min(0) max(7) span(8) datatype(UInt8)
                        uint8_t* _tmp_18730 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18730;
                        ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016602\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].performance_class[0].value) << 
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
                            uint8_t* _ext_flag_8299 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016603\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << int(*_ext_flag_8299);
                            }
                            
                            if(*(buffer++)) { 
                                its_container_v2_its_container_msgs::msg::CenDsrcTollingZoneID _tmp_18731;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.push_back(_tmp_18731);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016604\033[0m| ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id " << tools::green("present");
                            }
                            
                            // Field name: protected_zone_latitude
                            // Real
                            // Double
                            // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_18732 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value = *_tmp_18732;
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
                                logger->debug() << "|\033[38;5;94m016605\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_latitude.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: protected_zone_longitude
                            // Real
                            // Double
                            // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                            uint32_t* _tmp_18733 = (uint32_t*) buffer; buffer += 4;
                            ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value = *_tmp_18733;
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
                                logger->debug() << "|\033[38;5;94m016606\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude: " <<
                                             ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].protected_zone_longitude.value << " (" << __aux64__ << ")";
                            }
                            
                            if(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                // Field name: cen_dsrc_tolling_zone_id
                                // Integer
                                // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                uint32_t* _tmp_18734 = (uint32_t*) buffer; buffer += 4;
                                __aux64__ = *_tmp_18734;
                                ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016607\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
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
                            if(*_ext_flag_8299) { // from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0]. 
                                uint8_t* _tmp_18735 = (uint8_t*) buffer++;  // number of extensions
                                bool _array_229[*_tmp_18735];
                                
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016608\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.basic_vehicle_container_high_frequency[0].cen_dsrc_tolling_zone[0].: " << static_cast<unsigned int>(*_tmp_18735);
                                
                                // Extensions bytemap
                                for(int i = 0; i < *_tmp_18735; i++)
                                    _array_229[i] = (*buffer++) != 0;
                                
                                // Discarding unknown OpenType containers
                                for(int i = 0; i < *_tmp_18735; i++) {
                                    uint16_t* _tmp_18736 = (uint16_t*)buffer;  // OpenType length
                                    buffer += 2;
                                
                                    if(debug) {
                                    }
                                
                                    for(int i = 0; i < *_tmp_18736; i++)
                                        buffer++;
                                }
                                
                            }
                    }
            }
            else if(_choice_418 == 1)  // CHOICE HighFrequencyContainer  fieldName(rsu_container_high_frequency)
            {
                mad_cam_pdu_descriptions_msgs::msg::RSUContainerHighFrequency _tmp_18737;
                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency.push_back(_tmp_18737);
            
                    // RSUContainerHighFrequency  SEQUENCE
                        //  protectedCommunicationZonesRSU ProtectedCommunicationZonesRSU   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_8302 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m016609\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << int(*_ext_flag_8302);
                    }
                    
                    if(*(buffer++)) { 
                        its_container_v2_its_container_msgs::msg::ProtectedCommunicationZonesRSU _tmp_18738;
                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.push_back(_tmp_18738);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016610\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu " << tools::green("present");
                    }
                    
                    if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu.size() != 0) {
                        // Field name: protected_communication_zones_rsu
                        // SequenceOf
                        // Data Type UInt8
                        // SEQUENCE_OF  min(1) max(16) span(16)
                        int16_t* _tmp_18739 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_18739;
                        __aux64__ += 1;     // +min
                        
                        int _if__tmp_18739 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016611\033[0m| SequenceOf ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0]. size: " << int(*_tmp_18739);
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
                        
                        
                        for(int m = 0; m < _if__tmp_18739; m++) {
                            its_container_v2_its_container_msgs::msg::ProtectedCommunicationZone seqof_m;  // SEQUENCE
                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements.push_back(seqof_m);
                        
                                // ProtectedCommunicationZone  SEQUENCE
                                    //  protectedZoneType      ProtectedZoneType       
                                    //  expiryTime             TimestampIts          OPTIONAL  
                                    //  protectedZoneLatitude  Latitude                
                                    //  protectedZoneLongitude Longitude               
                                    //  protectedZoneRadius    ProtectedZoneRadius   OPTIONAL  
                                    //  protectedZoneID        ProtectedZoneID       OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_8303 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016612\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].: " << int(*_ext_flag_8303);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::TimestampIts _tmp_18740;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].expiry_time.push_back(_tmp_18740);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016613\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].expiry_time " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::ProtectedZoneRadius _tmp_18741;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius.push_back(_tmp_18741);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016614\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::ProtectedZoneID _tmp_18742;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_id.push_back(_tmp_18742);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016615\033[0m| ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_id " << tools::green("present");
                                }
                                
                                // Field name: protected_zone_type
                                // Enumerated
                                // INT32  min(0) max(1) span(2) datatype(Int32)
                                uint8_t* _ext_flag_8304 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_type.
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016616\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_type.: " << int(*_ext_flag_8304);
                                }
                                
                                uint8_t* _tmp_18743 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18743;
                                __aux64__ += 0;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_type.value = __aux64__;
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_type.value' " << (__aux64__) << " exceeds max allowable (1); message dropped.";
                                    return false;
                                }
                                
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016617\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_type.value) << 
                                                 " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_type.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_type.value);
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].expiry_time.size() != 0) {
                                    // Field name: expiry_time
                                    // Integer
                                    // INT64  min(0) max(4398046511103) span(4398046511104) datatype(Int64)
                                    uint64_t* _tmp_18744 = (uint64_t*)buffer; buffer += 8;
                                    __aux64__ = *_tmp_18744;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].expiry_time[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016618\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].expiry_time[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].expiry_time[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].expiry_time[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].expiry_time[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4398046511103) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].expiry_time[0].value' " << (__aux64__) << " exceeds max allowable (4398046511103); message dropped.";
                                        return false;
                                    }
                                }
                                
                                // Field name: protected_zone_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_18745 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_latitude.value = *_tmp_18745;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_latitude.value += -900000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_latitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_latitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_latitude.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_latitude.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016619\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_latitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: protected_zone_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_18746 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_longitude.value = *_tmp_18746;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_longitude.value += -1800000000;
                                __aux64__ = ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_longitude.value;
                                ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_longitude.value /= 1.0E7;
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_longitude.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                                    logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_longitude.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                                    return false;
                                }
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016620\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_longitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius.size() != 0) {
                                    // Field name: protected_zone_radius
                                    // Integer
                                    // UINT8  min(1) max(255) span(255) datatype(UInt8)
                                    uint8_t* _ext_flag_8307 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016621\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].: " << int(*_ext_flag_8307);
                                    }
                                    
                                    if(*_ext_flag_8307) {
                                        uint8_t* _tmp_18748 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_18748) {
                                            uint64_t* _tmp_18749 = (uint64_t*)buffer; buffer += 8;
                                            __aux64__ = *_tmp_18749;
                                            __aux64__ += INT64_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].value = __aux64__;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_18749 = (uint32_t*) buffer; buffer += 4;
                                            __aux64__ = *_tmp_18749;
                                            __aux64__ += INT32_MIN;
                                            ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].value = __aux64__;
                                        }
                                    }
                                    else
                                    {
                                        uint8_t* _tmp_18747 = (uint8_t*) buffer++;
                                        __aux64__ = *_tmp_18747;
                                        __aux64__ += 1;
                                        ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].value = __aux64__;
                                    
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m016622\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].value) << 
                                                         " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].value);
                                        }
                                        
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                            logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_radius[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                            return false;
                                        }
                                        
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_id.size() != 0) {
                                    // Field name: protected_zone_id
                                    // Integer
                                    // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                    uint32_t* _tmp_18750 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_18750;
                                    ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016623\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_id[0].value) << 
                                                     " cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_id[0].value: " << ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_id[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 134217727) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].protected_zone_id[0].value' " << (__aux64__) << " exceeds max allowable (134217727); message dropped.";
                                        return false;
                                    }
                                }
                                if(*_ext_flag_8303) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m]. 
                                    uint8_t* _tmp_18751 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_230[*_tmp_18751];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016624\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].protected_communication_zones_rsu[0].elements[m].: " << static_cast<unsigned int>(*_tmp_18751);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_18751; i++)
                                        _array_230[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_18751; i++) {
                                        uint16_t* _tmp_18752 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_18752; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                    }
                    if(*_ext_flag_8302) { // from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0]. 
                        uint8_t* _tmp_18753 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_231[*_tmp_18753];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016625\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.rsu_container_high_frequency[0].: " << static_cast<unsigned int>(*_tmp_18753);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_18753; i++)
                            _array_231[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_18753; i++) {
                            uint16_t* _tmp_18754 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_18754; i++)
                                buffer++;
                        }
                        
                    }
            }
            else if(_choice_418 == 2)  // CHOICE HighFrequencyContainer  fieldName(mad_vehicle_container_high_frequency)
            {
                mad_cam_pdu_descriptions_msgs::msg::MADVehicleContainerHighFrequency _tmp_18755;
                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency.push_back(_tmp_18755);
            
                uint16_t* _tmp_18756 = (uint16_t*)buffer;  // OpenType length
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
                            its_container_v2_its_container_msgs::msg::AccelerationControl _tmp_18757;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.push_back(_tmp_18757);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016626\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::LanePosition _tmp_18758;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position.push_back(_tmp_18758);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016627\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::SteeringWheelAngle _tmp_18759;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle.push_back(_tmp_18759);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016628\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::LateralAcceleration _tmp_18760;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration.push_back(_tmp_18760);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016629\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::VerticalAcceleration _tmp_18761;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration.push_back(_tmp_18761);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016630\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::PerformanceClass _tmp_18762;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.push_back(_tmp_18762);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016631\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::CenDsrcTollingZone _tmp_18763;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone.push_back(_tmp_18763);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016632\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone " << tools::green("present");
                        }
                        
                        // Field name: heading
                            // Heading  SEQUENCE
                                //  headingValue      HeadingValue          
                                //  headingConfidence HeadingConfidence     
                            
                            // Field name: heading_value
                            // Real
                            // Float
                            // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_18764 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value = *_tmp_18764;
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
                                logger->debug() << "|\033[38;5;94m016633\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: heading_confidence
                            // Real
                            // Float
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_18765 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value = *_tmp_18765;
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
                                logger->debug() << "|\033[38;5;94m016634\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.heading.heading_confidence: " <<
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
                            uint16_t* _tmp_18766 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value = *_tmp_18766;
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
                                logger->debug() << "|\033[38;5;94m016635\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: speed_confidence
                            // Real
                            // Float
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(100.0) dataType(Float)
                            uint8_t* _tmp_18767 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value = *_tmp_18767;
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
                                logger->debug() << "|\033[38;5;94m016636\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.speed.speed_confidence.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: drive_direction
                        // Enumerated
                        // INT32  min(0) max(2) span(3) datatype(Int32)
                        uint8_t* _tmp_18768 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18768;
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
                            logger->debug() << "|\033[38;5;94m016637\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.drive_direction.value) << 
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
                            uint16_t* _tmp_18769 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value = *_tmp_18769;
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
                                logger->debug() << "|\033[38;5;94m016638\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vehicle_length_confidence_indication
                            // Enumerated
                            // INT32  min(0) max(4) span(5) datatype(Int32)
                            uint8_t* _tmp_18770 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18770;
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
                                logger->debug() << "|\033[38;5;94m016639\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_length.vehicle_length_confidence_indication.value);
                            }
                        
                        // Field name: vehicle_width
                        // Real
                        // Float
                        // FLOAT  min(1) max(62) span(62) scaleDivisor(10.0) dataType(Float)
                        uint8_t* _tmp_18771 = (uint8_t*) buffer++;
                        ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value = *_tmp_18771;
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
                            logger->debug() << "|\033[38;5;94m016640\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vehicle_width: " <<
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
                            uint16_t* _tmp_18772 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value = *_tmp_18772;
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
                                logger->debug() << "|\033[38;5;94m016641\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: longitudinal_acceleration_confidence
                            // Real
                            // Float
                            // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_18773 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value = *_tmp_18773;
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
                                logger->debug() << "|\033[38;5;94m016642\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.longitudinal_acceleration.longitudinal_acceleration_confidence.value << " (" << __aux64__ << ")";
                            }
                        
                        // Field name: curvature
                            // Curvature  SEQUENCE
                                //  curvatureValue      CurvatureValue          
                                //  curvatureConfidence CurvatureConfidence     
                            
                            // Field name: curvature_value
                            // Integer
                            // INT16  min(-1023) max(1023) span(2047) datatype(Int16)
                            uint16_t* _tmp_18774 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_18774;
                            __aux64__ += -1023;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016643\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_value.value) << 
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
                            uint8_t* _tmp_18775 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18775;
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
                                logger->debug() << "|\033[38;5;94m016644\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature.curvature_confidence.value);
                            }
                        
                        // Field name: curvature_calculation_mode
                        // Enumerated
                        // INT32  min(0) max(2) span(3) datatype(Int32)
                        uint8_t* _ext_flag_8319 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016645\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.: " << int(*_ext_flag_8319);
                        }
                        
                        uint8_t* _tmp_18776 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18776;
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
                            logger->debug() << "|\033[38;5;94m016646\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.curvature_calculation_mode.value) << 
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
                            uint16_t* _tmp_18777 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value = *_tmp_18777;
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
                                logger->debug() << "|\033[38;5;94m016647\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value: " <<
                                             ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_value.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: yaw_rate_confidence
                            // Enumerated
                            // INT32  min(0) max(8) span(9) datatype(Int32)
                            uint8_t* _tmp_18778 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18778;
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
                                logger->debug() << "|\033[38;5;94m016648\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value) << 
                                             " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.yaw_rate.yaw_rate_confidence.value);
                            }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control.size() != 0) {
                            // Field name: acceleration_control
                            // BitString
                            // BIT_STRING  min(7) max(7) span(1)
                            uint8_t* _tmp_18779 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_18779 + 7;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016649\033[0m| cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].value: " << __aux64__;
                            
                            int _if__tmp_18779 = __aux64__;
                            for(int n = 0; n < _if__tmp_18779; n++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.acceleration_control[0].values[n] = (*__b__ == 1);
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
                            uint8_t* _tmp_18780 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18780;
                            __aux64__ += -1;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016650\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lane_position[0].value) << 
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
                                uint16_t* _tmp_18781 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_18781;
                                __aux64__ += -511;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016651\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_value.value) << 
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
                                uint8_t* _tmp_18782 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18782;
                                __aux64__ += 1;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016652\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.steering_wheel_angle[0].steering_wheel_angle_confidence.value) << 
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
                                uint16_t* _tmp_18783 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value = *_tmp_18783;
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
                                    logger->debug() << "|\033[38;5;94m016653\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_value.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: lateral_acceleration_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_18784 = (uint8_t*) buffer++;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value = *_tmp_18784;
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
                                    logger->debug() << "|\033[38;5;94m016654\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.lateral_acceleration[0].lateral_acceleration_confidence: " <<
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
                                uint16_t* _tmp_18785 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value = *_tmp_18785;
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
                                    logger->debug() << "|\033[38;5;94m016655\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_value.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: vertical_acceleration_confidence
                                // Real
                                // Float
                                // FLOAT  min(0) max(102) span(103) scaleDivisor(10.0) dataType(Float)
                                uint8_t* _tmp_18786 = (uint8_t*) buffer++;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value = *_tmp_18786;
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
                                    logger->debug() << "|\033[38;5;94m016656\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.vertical_acceleration[0].vertical_acceleration_confidence.value << " (" << __aux64__ << ")";
                                }
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class.size() != 0) {
                            // Field name: performance_class
                            // Integer
                            // UINT8  min(0) max(7) span(8) datatype(UInt8)
                            uint8_t* _tmp_18787 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18787;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016657\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.performance_class[0].value) << 
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
                                uint8_t* _ext_flag_8326 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016658\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].: " << int(*_ext_flag_8326);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::CenDsrcTollingZoneID _tmp_18788;
                                    ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.push_back(_tmp_18788);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016659\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id " << tools::green("present");
                                }
                                
                                // Field name: protected_zone_latitude
                                // Real
                                // Double
                                // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_18789 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value = *_tmp_18789;
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
                                    logger->debug() << "|\033[38;5;94m016660\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: protected_zone_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_18790 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value = *_tmp_18790;
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
                                    logger->debug() << "|\033[38;5;94m016661\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value) << " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude: " <<
                                                 ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].protected_zone_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id.size() != 0) {
                                    // Field name: cen_dsrc_tolling_zone_id
                                    // Integer
                                    // UINT32  min(0) max(134217727) span(134217728) datatype(UInt32)
                                    uint32_t* _tmp_18791 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_18791;
                                    ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016662\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].cen_dsrc_tolling_zone_id[0].value) << 
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
                                if(*_ext_flag_8326) { // from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0]. 
                                    uint8_t* _tmp_18792 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_232[*_tmp_18792];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016663\033[0m| Reading number of exts from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].basic_vehicle_container_high_frequency.cen_dsrc_tolling_zone[0].: " << static_cast<unsigned int>(*_tmp_18792);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_18792; i++)
                                        _array_232[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_18792; i++) {
                                        uint16_t* _tmp_18793 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_18793; i++)
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
                            mad_cam_pdu_descriptions_msgs::msg::GenerationDeltaTime _tmp_18794;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.push_back(_tmp_18794);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016664\033[0m| ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered " << tools::green("present");
                        }
                        
                        // Field name: mad_control_mode
                        // Enumerated
                        // INT32  min(0) max(7) span(8) datatype(Int32)
                        uint8_t* _ext_flag_8329 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016665\033[0m| Reading ext flag from ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.: " << int(*_ext_flag_8329);
                        }
                        
                        uint8_t* _tmp_18795 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18795;
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
                            logger->debug() << "|\033[38;5;94m016666\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_control_mode.value);
                        }
                        
                        // Field name: mad_driving_mode
                        // Enumerated
                        // INT32  min(0) max(3) span(4) datatype(Int32)
                        uint8_t* _tmp_18796 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18796;
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
                            logger->debug() << "|\033[38;5;94m016667\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value) << 
                                         " cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value: " << static_cast<int>(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.mad_driving_mode.value);
                        }
                        
                        if(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered.size() != 0) {
                            // Field name: advice_time_considered
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_18797 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_18797;
                            ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016668\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.high_frequency_container.mad_vehicle_container_high_frequency[0].mad_control_mode_state.advice_time_considered[0].value) << 
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
                uint16_t* _tmp_18798 = (uint16_t*)buffer;  // OpenType length
                buffer += 2 + int(*_tmp_18798);            // Ignoring opentype data
            }
            
            if(ros->cam.cam_parameters.low_frequency_container.size() != 0) {
                // Field name: low_frequency_container
                // Choice
                uint8_t* _ext_flag_8331 = (uint8_t*)buffer++; // ext flag
                
                   // #0  basicVehicleContainerLowFrequency   BasicVehicleContainerLowFrequency   
                   // #1  madVehicleContainerLowFrequency   MADVehicleContainerLowFrequency   (ext field)
                uint8_t _choice_419 = *(buffer++);
                
                if(*_ext_flag_8331)
                    _choice_419 += 0 + 1; // Ext addition
                
                if(_choice_419 == 0) {
                    mad_cam_pdu_descriptions_msgs::msg::BasicVehicleContainerLowFrequency _tmp_18799;
                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency.push_back(_tmp_18799);
                
                        // BasicVehicleContainerLowFrequency  SEQUENCE
                            //  vehicleRole    VehicleRole        
                            //  exteriorLights ExteriorLights     
                            //  pathHistory    PathHistory        
                        
                        // Field name: vehicle_role
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_18800 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18800;
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
                            logger->debug() << "|\033[38;5;94m016669\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value) << 
                                         " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value: " << static_cast<int>(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].vehicle_role.value);
                        }
                        
                        // Field name: exterior_lights
                        // BitString
                        // BIT_STRING  min(8) max(8) span(1)
                        uint8_t* _tmp_18801 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18801 + 8;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016670\033[0m| cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.value: " << __aux64__;
                        
                        int _if__tmp_18801 = __aux64__;
                        for(int o = 0; o < _if__tmp_18801; o++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].exterior_lights.values[o] = (*__b__ == 1);
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
                        int16_t* _tmp_18802 = (int16_t*)buffer;
                        buffer += 2;
                        __aux64__ = *_tmp_18802;
                        
                        int _if__tmp_18802 = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m016671\033[0m| SequenceOf ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history. size: " << int(*_tmp_18802);
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
                        
                        
                        for(int p = 0; p < _if__tmp_18802; p++) {
                            its_container_v2_its_container_msgs::msg::PathPoint seqof_p;  // SEQUENCE
                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements.push_back(seqof_p);
                        
                                // PathPoint  SEQUENCE
                                    //  pathPosition  DeltaReferencePosition     
                                    //  pathDeltaTime PathDeltaTime            OPTIONAL  
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::PathDeltaTime _tmp_18803;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time.push_back(_tmp_18803);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016672\033[0m| ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time " << tools::green("present");
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
                                    uint32_t* _tmp_18804 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_latitude.value = *_tmp_18804;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_latitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_latitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_latitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_latitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_latitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016673\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_latitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_latitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_latitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_longitude
                                    // Real
                                    // Double
                                    // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                    uint32_t* _tmp_18805 = (uint32_t*) buffer; buffer += 4;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_longitude.value = *_tmp_18805;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_longitude.value += -131071;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_longitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_longitude.value /= 1.0E7;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -131071) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_longitude.value' " << (__aux64__) << " is less than allowable (-131071); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 131072) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_longitude.value' " << (__aux64__) << " exceeds max allowable (131072); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016674\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_longitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_longitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_longitude.value << " (" << __aux64__ << ")";
                                    }
                                    
                                    // Field name: delta_altitude
                                    // Real
                                    // Float
                                    // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                    uint16_t* _tmp_18806 = (uint16_t*) buffer; buffer += 2;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_altitude.value = *_tmp_18806;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_altitude.value += -12700;
                                    __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_altitude.value;
                                    ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_altitude.value /= 100.0;
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < -12700) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_altitude.value' " << (__aux64__) << " is less than allowable (-12700); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 12800) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_altitude.value' " << (__aux64__) << " exceeds max allowable (12800); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016675\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_altitude.value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_altitude: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_position.delta_altitude.value << " (" << __aux64__ << ")";
                                    }
                                
                                if(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time.size() != 0) {
                                    // Field name: path_delta_time
                                    // Real
                                    // Float
                                    // FLOAT  min(1) max(65535) span(65535) scaleDivisor(100.0) dataType(Float)
                                    uint8_t* _ext_flag_8336 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016676\033[0m| Reading ext flag from ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].: " << int(*_ext_flag_8336);
                                    }
                                    
                                    if(*_ext_flag_8336) {
                                        uint8_t* _tmp_18808 = (uint8_t*) buffer++;
                                        
                                        if(*_tmp_18808) {
                                            uint64_t* _tmp_18809 = (uint64_t*)buffer; buffer += 8;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value = *_tmp_18809;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value += INT64_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value /= 100.0;
                                        }
                                        else
                                        {
                                            uint32_t* _tmp_18809 = (uint32_t*) buffer; buffer += 4;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value = *_tmp_18809;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value += INT32_MIN;
                                            __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value;
                                            ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value /= 100.0;
                                        }
                                    }
                                    else
                                    {
                                        uint16_t* _tmp_18807 = (uint16_t*) buffer; buffer += 2;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value = *_tmp_18807;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value += 1;
                                        __aux64__ = ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value;
                                        ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value /= 100.0;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 1) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                        logger->warning() << "Error: Value in 'cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                        return false;
                                    }
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m016677\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value) << " cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0]: " <<
                                                     ros->cam.cam_parameters.low_frequency_container[0].basic_vehicle_container_low_frequency[0].path_history.elements[p].path_delta_time[0].value << " (" << __aux64__ << ")";
                                    }
                                }
                        }
                }
                else if(_choice_419 == 1)  // CHOICE LowFrequencyContainer  fieldName(mad_vehicle_container_low_frequency)
                {
                    mad_cam_pdu_descriptions_msgs::msg::MADVehicleContainerLowFrequency _tmp_18810;
                    ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency.push_back(_tmp_18810);
                
                    uint16_t* _tmp_18811 = (uint16_t*)buffer;  // OpenType length
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
                            uint8_t* _tmp_18812 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value = *_tmp_18812;
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
                                logger->debug() << "|\033[38;5;94m016678\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_cent_mass.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: pos_front_ax
                            // Real
                            // Float
                            // FLOAT  min(1) max(20) span(20) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_18813 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value = *_tmp_18813;
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
                                logger->debug() << "|\033[38;5;94m016679\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.pos_front_ax.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: wheel_base
                            // Real
                            // Float
                            // FLOAT  min(1) max(127) span(127) scaleDivisor(10.0) dataType(Float)
                            uint8_t* _tmp_18814 = (uint8_t*) buffer++;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value = *_tmp_18814;
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
                                logger->debug() << "|\033[38;5;94m016680\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.wheel_base.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: vehicle_mass
                            // Real
                            // Float
                            // FLOAT  min(1) max(1024) span(1024) scaleDivisor(1.0E-5) dataType(Float)
                            uint16_t* _tmp_18815 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value = *_tmp_18815;
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
                                logger->debug() << "|\033[38;5;94m016681\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_dimensions.vehicle_mass: " <<
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
                            uint16_t* _tmp_18816 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_18816;
                            __aux64__ += -1023;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016682\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_min.value) << 
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
                            uint16_t* _tmp_18817 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_18817;
                            __aux64__ += -1023;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016683\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.curvature_value_max.value) << 
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
                            uint16_t* _tmp_18818 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value = *_tmp_18818;
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
                                logger->debug() << "|\033[38;5;94m016684\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_min.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: acceleration_value_max
                            // Real
                            // Float
                            // FLOAT  min(-160) max(161) span(322) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_18819 = (uint16_t*) buffer; buffer += 2;
                            ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value = *_tmp_18819;
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
                                logger->debug() << "|\033[38;5;94m016685\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max: " <<
                                             ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.acceleration_value_max.value << " (" << __aux64__ << ")";
                            }
                            
                            // Field name: possible_level_of_input
                            // BitString
                            // BIT_STRING  min(3) max(3) span(1)
                            uint8_t* _ext_flag_8343 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016686\033[0m| Reading ext flag from ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.: " << int(*_ext_flag_8343);
                            }
                            
                            uint8_t* _tmp_18820 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_18820 + 3;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016687\033[0m| cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.value: " << __aux64__;
                            
                            int _if__tmp_18820 = __aux64__;
                            for(int q = 0; q < _if__tmp_18820; q++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].vehicle_capabilities.possible_level_of_input.values[q] = (*__b__ == 1);
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
                                mad_cam_pdu_descriptions_msgs::msg::SpeedValue _tmp_18821;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.push_back(_tmp_18821);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016688\033[0m| ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value " << tools::green("present");
                            }
                            if(*(buffer++)) { 
                                mad_cam_pdu_descriptions_msgs::msg::HeadingValue _tmp_18822;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.push_back(_tmp_18822);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m016689\033[0m| ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value " << tools::green("present");
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
                                uint32_t* _tmp_18823 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value = *_tmp_18823;
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
                                    logger->debug() << "|\033[38;5;94m016690\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_latitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: delta_longitude
                                // Real
                                // Double
                                // DOUBLE  min(-131071) max(131072) span(262144) scaleDivisor(1.0E7) dataType(Double)
                                uint32_t* _tmp_18824 = (uint32_t*) buffer; buffer += 4;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value = *_tmp_18824;
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
                                    logger->debug() << "|\033[38;5;94m016691\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_longitude.value << " (" << __aux64__ << ")";
                                }
                                
                                // Field name: delta_altitude
                                // Real
                                // Float
                                // FLOAT  min(-12700) max(12800) span(25501) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18825 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value = *_tmp_18825;
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
                                    logger->debug() << "|\033[38;5;94m016692\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.delta_reference_position.delta_altitude.value << " (" << __aux64__ << ")";
                                }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value.size() != 0) {
                                // Field name: speed_value
                                // Real
                                // Float
                                // FLOAT  min(0) max(16383) span(16384) scaleDivisor(100.0) dataType(Float)
                                uint16_t* _tmp_18826 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value = *_tmp_18826;
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
                                    logger->debug() << "|\033[38;5;94m016693\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0]: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.speed_value[0].value << " (" << __aux64__ << ")";
                                }
                            }
                            
                            if(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value.size() != 0) {
                                // Field name: heading_value
                                // Real
                                // Float
                                // FLOAT  min(0) max(3601) span(3602) scaleDivisor(10.0) dataType(Float)
                                uint16_t* _tmp_18827 = (uint16_t*) buffer; buffer += 2;
                                ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value = *_tmp_18827;
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
                                    logger->debug() << "|\033[38;5;94m016694\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value) << " cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0]: " <<
                                                 ros->cam.cam_parameters.low_frequency_container[0].mad_vehicle_container_low_frequency[0].local_destination.heading_value[0].value << " (" << __aux64__ << ")";
                                }
                            }
                }
                else
                {
                    uint16_t* _tmp_18828 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_18828);            // Ignoring opentype data
                }
            }
            
            if(ros->cam.cam_parameters.special_vehicle_container.size() != 0) {
                // Field name: special_vehicle_container
                // Choice
                uint8_t* _ext_flag_8349 = (uint8_t*)buffer++; // ext flag
                
                   // #0  publicTransportContainer   PublicTransportContainer   
                   // #1  specialTransportContainer   SpecialTransportContainer   
                   // #2  dangerousGoodsContainer   DangerousGoodsContainer   
                   // #3  roadWorksContainerBasic   RoadWorksContainerBasic   
                   // #4  rescueContainer   RescueContainer   
                   // #5  emergencyContainer   EmergencyContainer   
                   // #6  safetyCarContainer   SafetyCarContainer   
                uint8_t _choice_420 = *(buffer++);
                
                if(*_ext_flag_8349)
                    _choice_420 += 6 + 1; // Ext addition
                
                if(_choice_420 == 0) {
                    mad_cam_pdu_descriptions_msgs::msg::PublicTransportContainer _tmp_18829;
                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container.push_back(_tmp_18829);
                
                        // PublicTransportContainer  SEQUENCE
                            //  embarkationStatus EmbarkationStatus     
                            //  ptActivation      PtActivation        OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::PtActivation _tmp_18830;
                            ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.push_back(_tmp_18830);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016695\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation " << tools::green("present");
                        }
                        
                        // Field name: embarkation_status
                        // Value
                        // Boolean
                        uint8_t* _tmp_18831 = (uint8_t*)buffer;
                        buffer++;
                        ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.value = (*_tmp_18831 == 1);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016696\033[0m| \033[37;1mbool  \033[0m ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].embarkation_status.: " << (*_tmp_18831);
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation.size() != 0) {
                            // Field name: pt_activation
                                // PtActivation  SEQUENCE
                                    //  ptActivationType PtActivationType     
                                    //  ptActivationData PtActivationData     
                                
                                // Field name: pt_activation_type
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_18832 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18832;
                                ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016697\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_type.value) << 
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
                                uint8_t* _tmp_18833 = (uint8_t*)buffer;
                                buffer += 1;
                                __aux64__ = *_tmp_18833 + 1;
                                
                                int _if__tmp_18833 = __aux64__;
                                for(int r = 0; r < _if__tmp_18833; r++) {
                                    int8_t* __n__ = (int8_t*)buffer++;
                                    ros->cam.cam_parameters.special_vehicle_container[0].public_transport_container[0].pt_activation[0].pt_activation_data.values.push_back(*__n__);
                                }
                        }
                }
                else if(_choice_420 == 1)  // CHOICE SpecialVehicleContainer  fieldName(special_transport_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::SpecialTransportContainer _tmp_18834;
                    ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container.push_back(_tmp_18834);
                
                        // SpecialTransportContainer  SEQUENCE
                            //  specialTransportType SpecialTransportType     
                            //  lightBarSirenInUse   LightBarSirenInUse       
                        
                        // Field name: special_transport_type
                        // BitString
                        // BIT_STRING  min(4) max(4) span(1)
                        uint8_t* _tmp_18835 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18835 + 4;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016698\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.value: " << __aux64__;
                        
                        int _if__tmp_18835 = __aux64__;
                        for(int s = 0; s < _if__tmp_18835; s++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].special_transport_type.values[s] = (*__b__ == 1);
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
                        uint8_t* _tmp_18836 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18836 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016699\033[0m| cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_18836 = __aux64__;
                        for(int t = 0; t < _if__tmp_18836; t++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].special_transport_container[0].light_bar_siren_in_use.values[t] = (*__b__ == 1);
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
                else if(_choice_420 == 2)  // CHOICE SpecialVehicleContainer  fieldName(dangerous_goods_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::DangerousGoodsContainer _tmp_18837;
                    ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container.push_back(_tmp_18837);
                
                        // DangerousGoodsContainer  SEQUENCE
                            //  dangerousGoodsBasic DangerousGoodsBasic     
                        
                        // Field name: dangerous_goods_basic
                        // Enumerated
                        // INT32  min(0) max(19) span(20) datatype(Int32)
                        uint8_t* _tmp_18838 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_18838;
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
                            logger->debug() << "|\033[38;5;94m016700\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value) << 
                                         " cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].dangerous_goods_container[0].dangerous_goods_basic.value);
                        }
                }
                else if(_choice_420 == 3)  // CHOICE SpecialVehicleContainer  fieldName(road_works_container_basic)
                {
                    mad_cam_pdu_descriptions_msgs::msg::RoadWorksContainerBasic _tmp_18839;
                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic.push_back(_tmp_18839);
                
                        // RoadWorksContainerBasic  SEQUENCE
                            //  roadworksSubCauseCode RoadworksSubCauseCode   OPTIONAL  
                            //  lightBarSirenInUse    LightBarSirenInUse        
                            //  closedLanes           ClosedLanes             OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::RoadworksSubCauseCode _tmp_18840;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.push_back(_tmp_18840);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016701\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::ClosedLanes _tmp_18841;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes.push_back(_tmp_18841);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016702\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes " << tools::green("present");
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code.size() != 0) {
                            // Field name: roadworks_sub_cause_code
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_18842 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18842;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016703\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].roadworks_sub_cause_code[0].value) << 
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
                        uint8_t* _tmp_18843 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18843 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016704\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_18843 = __aux64__;
                        for(int u = 0; u < _if__tmp_18843; u++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].light_bar_siren_in_use.values[u] = (*__b__ == 1);
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
                                uint8_t* _ext_flag_8351 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016705\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << int(*_ext_flag_8351);
                                }
                                
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::HardShoulderStatus _tmp_18844;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.push_back(_tmp_18844);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016706\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::HardShoulderStatus _tmp_18845;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.push_back(_tmp_18845);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016707\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    its_container_v2_its_container_msgs::msg::DrivingLaneStatus _tmp_18846;
                                    ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.push_back(_tmp_18846);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016708\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status " << tools::green("present");
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status.size() != 0) {
                                    // Field name: innerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_18847 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_18847;
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
                                        logger->debug() << "|\033[38;5;94m016709\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].innerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status.size() != 0) {
                                    // Field name: outerhard_shoulder_status
                                    // Enumerated
                                    // INT32  min(0) max(2) span(3) datatype(Int32)
                                    uint8_t* _tmp_18848 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_18848;
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
                                        logger->debug() << "|\033[38;5;94m016710\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value) << 
                                                     " cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].outerhard_shoulder_status[0].value);
                                    }
                                }
                                
                                if(ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status.size() != 0) {
                                    // Field name: driving_lane_status
                                    // BitString
                                    // BIT_STRING  min(1) max(13) span(13)
                                    uint8_t* _tmp_18849 = (uint8_t*)buffer;
                                    __aux64__ = *_tmp_18849 + 1;
                                    buffer += 1;
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016711\033[0m| cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].value: " << __aux64__;
                                    
                                    int _if__tmp_18849 = __aux64__;
                                    for(int v = 0; v < _if__tmp_18849; v++) {
                                        uint8_t __c__;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values.push_back(__c__);
                                        uint8_t* __b__ = (uint8_t*)buffer++;
                                        ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].driving_lane_status[0].values[v] = (*__b__ == 1);
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
                                if(*_ext_flag_8351) { // from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0]. 
                                    uint8_t* _tmp_18850 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_233[*_tmp_18850];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016712\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].road_works_container_basic[0].closed_lanes[0].: " << static_cast<unsigned int>(*_tmp_18850);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_18850; i++)
                                        _array_233[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_18850; i++) {
                                        uint16_t* _tmp_18851 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_18851; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                }
                else if(_choice_420 == 4)  // CHOICE SpecialVehicleContainer  fieldName(rescue_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::RescueContainer _tmp_18852;
                    ros->cam.cam_parameters.special_vehicle_container[0].rescue_container.push_back(_tmp_18852);
                
                        // RescueContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_18853 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18853 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016713\033[0m| cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_18853 = __aux64__;
                        for(int w = 0; w < _if__tmp_18853; w++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].rescue_container[0].light_bar_siren_in_use.values[w] = (*__b__ == 1);
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
                else if(_choice_420 == 5)  // CHOICE SpecialVehicleContainer  fieldName(emergency_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::EmergencyContainer _tmp_18854;
                    ros->cam.cam_parameters.special_vehicle_container[0].emergency_container.push_back(_tmp_18854);
                
                        // EmergencyContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  emergencyPriority  EmergencyPriority    OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::CauseCode _tmp_18855;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication.push_back(_tmp_18855);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016714\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::EmergencyPriority _tmp_18856;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.push_back(_tmp_18856);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016715\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_18857 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18857 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016716\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_18857 = __aux64__;
                        for(int x = 0; x < _if__tmp_18857; x++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].light_bar_siren_in_use.values[x] = (*__b__ == 1);
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
                                uint8_t* _ext_flag_8354 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016717\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << int(*_ext_flag_8354);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_18858 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18858;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016718\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].cause_code.value) << 
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
                                uint8_t* _tmp_18859 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18859;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016719\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].sub_cause_code.value) << 
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
                                if(*_ext_flag_8354) { // from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_18860 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_234[*_tmp_18860];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016720\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_18860);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_18860; i++)
                                        _array_234[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_18860; i++) {
                                        uint16_t* _tmp_18861 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_18861; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority.size() != 0) {
                            // Field name: emergency_priority
                            // BitString
                            // BIT_STRING  min(2) max(2) span(1)
                            uint8_t* _tmp_18862 = (uint8_t*)buffer;
                            __aux64__ = *_tmp_18862 + 2;
                            buffer += 1;
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016721\033[0m| cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].value: " << __aux64__;
                            
                            int _if__tmp_18862 = __aux64__;
                            for(int y = 0; y < _if__tmp_18862; y++) {
                                uint8_t __c__;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values.push_back(__c__);
                                uint8_t* __b__ = (uint8_t*)buffer++;
                                ros->cam.cam_parameters.special_vehicle_container[0].emergency_container[0].emergency_priority[0].values[y] = (*__b__ == 1);
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
                else if(_choice_420 == 6)  // CHOICE SpecialVehicleContainer  fieldName(safety_car_container)
                {
                    mad_cam_pdu_descriptions_msgs::msg::SafetyCarContainer _tmp_18863;
                    ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container.push_back(_tmp_18863);
                
                        // SafetyCarContainer  SEQUENCE
                            //  lightBarSirenInUse LightBarSirenInUse     
                            //  incidentIndication CauseCode            OPTIONAL  
                            //  trafficRule        TrafficRule          OPTIONAL  
                            //  speedLimit         SpeedLimit           OPTIONAL  
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::CauseCode _tmp_18864;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication.push_back(_tmp_18864);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016722\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::TrafficRule _tmp_18865;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.push_back(_tmp_18865);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016723\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            its_container_v2_its_container_msgs::msg::SpeedLimit _tmp_18866;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.push_back(_tmp_18866);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m016724\033[0m| ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit " << tools::green("present");
                        }
                        
                        // Field name: light_bar_siren_in_use
                        // BitString
                        // BIT_STRING  min(2) max(2) span(1)
                        uint8_t* _tmp_18867 = (uint8_t*)buffer;
                        __aux64__ = *_tmp_18867 + 2;
                        buffer += 1;
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m016725\033[0m| cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.value: " << __aux64__;
                        
                        int _if__tmp_18867 = __aux64__;
                        for(int z = 0; z < _if__tmp_18867; z++) {
                            uint8_t __c__;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values.push_back(__c__);
                            uint8_t* __b__ = (uint8_t*)buffer++;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].light_bar_siren_in_use.values[z] = (*__b__ == 1);
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
                                uint8_t* _ext_flag_8355 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016726\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << int(*_ext_flag_8355);
                                }
                                
                                
                                // Field name: cause_code
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_18868 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18868;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016727\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].cause_code.value) << 
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
                                uint8_t* _tmp_18869 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_18869;
                                ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m016728\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].sub_cause_code.value) << 
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
                                if(*_ext_flag_8355) { // from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0]. 
                                    uint8_t* _tmp_18870 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_235[*_tmp_18870];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m016729\033[0m| Reading number of exts from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].incident_indication[0].: " << static_cast<unsigned int>(*_tmp_18870);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_18870; i++)
                                        _array_235[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_18870; i++) {
                                        uint16_t* _tmp_18871 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_18871; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule.size() != 0) {
                            // Field name: traffic_rule
                            // Enumerated
                            // INT32  min(0) max(3) span(4) datatype(Int32)
                            uint8_t* _ext_flag_8356 = (uint8_t*) buffer++;  // Read ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016730\033[0m| Reading ext flag from ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].: " << int(*_ext_flag_8356);
                            }
                            
                            uint8_t* _tmp_18872 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18872;
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
                                logger->debug() << "|\033[38;5;94m016731\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value) << 
                                             " cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value: " << static_cast<int>(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].traffic_rule[0].value);
                            }
                        }
                        
                        if(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit.size() != 0) {
                            // Field name: speed_limit
                            // Integer
                            // UINT8  min(1) max(255) span(255) datatype(UInt8)
                            uint8_t* _tmp_18873 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_18873;
                            __aux64__ += 1;
                            ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m016732\033[0m| " << tools::getTypeName(ros->cam.cam_parameters.special_vehicle_container[0].safety_car_container[0].speed_limit[0].value) << 
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
                    uint16_t* _tmp_18874 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2 + int(*_tmp_18874);            // Ignoring opentype data
                }
            }
            if(*_ext_flag_8271) { // from ros->cam.cam_parameters. 
                uint8_t* _tmp_18875 = (uint8_t*) buffer++;  // number of extensions
                bool _array_236[*_tmp_18875];
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m016733\033[0m| Reading number of exts from ros->cam.cam_parameters.: " << static_cast<unsigned int>(*_tmp_18875);
                
                // Extensions bytemap
                for(int i = 0; i < *_tmp_18875; i++)
                    _array_236[i] = (*buffer++) != 0;
                
                // Discarding unknown OpenType containers
                for(int i = 0; i < *_tmp_18875; i++) {
                    uint16_t* _tmp_18876 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                    if(debug) {
                    }
                
                    for(int i = 0; i < *_tmp_18876; i++)
                        buffer++;
                }
                
            }
	
	        return true;
        }
    }
}