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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0
 * 
 * Module: SSEM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(103301) ssem(4) version2(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <dsrc_v2_ssem_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_dsrc_v2_ssem_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const dsrc_v2_ssem_pdu_descriptions_msgs::SSEM::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<dsrc_v2_ssem_pdu_descriptions_msgs::msg::SSEM>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const dsrc_v2_ssem_pdu_descriptions_msgs::msg::SSEM* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // SSEM  SEQUENCE
        //  header     ItsPduHeader            
        //  ssm        SignalStatusMessage     
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
            logger->debug() << "|\033[38;5;94m006614\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_7374 = (uint8_t*) buffer++;
        *_tmp_7374 = ros->hheader.protocol_version.value; 
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
            logger->debug() << "|\033[38;5;94m006615\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_7375 = (uint8_t*) buffer++;
        *_tmp_7375 = ros->hheader.message_id.value; 
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
            logger->debug() << "|\033[38;5;94m006616\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_7376 = (uint32_t*) buffer; buffer += 4;
        *_tmp_7376 = ros->hheader.station_id.value; 
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
    
    // Field:  type(SignalStatusMessage) name(ssm) extGroup(0)
        // SignalStatusMessage  SEQUENCE
            //  timeStamp      MinuteOfTheYear                OPTIONAL  
            //  second         DSecond                          
            //  sequenceNumber MsgCount                       OPTIONAL  
            //  status         SignalStatusList                 
            //  regional       SignalStatusMessage_regional   OPTIONAL  
            //  ...
        uint8_t* _ext_flag_3339 = (uint8_t*) buffer++;  // Write extension flag for SignalStatusMessage
        *_ext_flag_3339 = 0;  
        
        // Optional fields bytemap
        char* _tmp_7377 = (char*) buffer++;
        *_tmp_7377 = (ros->ssm.time_stamp.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006617\033[0m| Optional field time_stamp = " << *_tmp_7377;
        char* _tmp_7378 = (char*) buffer++;
        *_tmp_7378 = (ros->ssm.sequence_number.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006618\033[0m| Optional field sequence_number = " << *_tmp_7378;
        char* _tmp_7379 = (char*) buffer++;
        *_tmp_7379 = (ros->ssm.regional.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006619\033[0m| Optional field regional = " << *_tmp_7379;
        
        if(ros->ssm.time_stamp.size() != 0) {
            // Field:  type(MinuteOfTheYear) name(time_stamp) extGroup(0)
            // Integer
            
            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
            if(debug) {
                logger->debug() << "|\033[38;5;94m006620\033[0m| " << tools::getTypeName(ros->ssm.time_stamp[0].value) << 
                             " ssm.time_stamp[0].value: " << ros->ssm.time_stamp[0].value;
            }
            
            uint32_t* _tmp_7380 = (uint32_t*) buffer; buffer += 4;
            *_tmp_7380 = ros->ssm.time_stamp[0].value; 
            __aux64__ = ros->ssm.time_stamp[0].value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'ssm.time_stamp[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->warning() << "Error: Value in 'ssm.time_stamp[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                return -1;
            }
        }
        
        // Field:  type(DSecond) name(second) extGroup(0)
        // Integer
        
        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
        if(debug) {
            logger->debug() << "|\033[38;5;94m006621\033[0m| " << tools::getTypeName(ros->ssm.second.value) << 
                         " ssm.second.value: " << ros->ssm.second.value;
        }
        
        uint16_t* _tmp_7381 = (uint16_t*) buffer; buffer += 2;
        *_tmp_7381 = ros->ssm.second.value; 
        __aux64__ = ros->ssm.second.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'ssm.second.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->warning() << "Error: Value in 'ssm.second.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
            return -1;
        }
        
        if(ros->ssm.sequence_number.size() != 0) {
            // Field:  type(MsgCount) name(sequence_number) extGroup(0)
            // Integer
            
            // UINT8  min(0) max(127) span(128) dataType(UInt8)
            if(debug) {
                logger->debug() << "|\033[38;5;94m006622\033[0m| " << tools::getTypeName(ros->ssm.sequence_number[0].value) << 
                             " ssm.sequence_number[0].value: " << static_cast<int>(ros->ssm.sequence_number[0].value);
            }
            
            uint8_t* _tmp_7382 = (uint8_t*) buffer++;
            *_tmp_7382 = ros->ssm.sequence_number[0].value; 
            __aux64__ = ros->ssm.sequence_number[0].value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'ssm.sequence_number[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                logger->warning() << "Error: Value in 'ssm.sequence_number[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                return -1;
            }
        }
        
        // Field:  type(SignalStatusList) name(status) extGroup(0)
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(32) span(32) ext(false)
        __aux64__ = ros->ssm.status.elements.size();
        if(__aux64__ > 32) __aux64__ = 32;
        uint16_t* _tmp_7383 = (uint16_t*)buffer;
        buffer += 2;
        *_tmp_7383 = __aux64__ - 1;
        
        int __ifq = __aux64__;
        for(int q = 0; q < __ifq; q++) { 
            
                // SignalStatus  SEQUENCE
                    //  sequenceNumber MsgCount                    
                    //  id             IntersectionReferenceID     
                    //  sigStatus      SignalStatusPackageList     
                    //  regional       SignalStatus_regional     OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_3343 = (uint8_t*) buffer++;  // Write extension flag for SignalStatus
                *_ext_flag_3343 = 0;  
                
                // Optional fields bytemap
                char* _tmp_7384 = (char*) buffer++;
                *_tmp_7384 = (ros->ssm.status.elements[q].regional.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m006624\033[0m| Optional field regional = " << *_tmp_7384;
                
                // Field:  type(MsgCount) name(sequence_number) extGroup(0)
                // Integer
                
                // UINT8  min(0) max(127) span(128) dataType(UInt8)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m006625\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sequence_number.value) << 
                                 " ssm.status.elements[q].sequence_number.value: " << static_cast<int>(ros->ssm.status.elements[q].sequence_number.value);
                }
                
                uint8_t* _tmp_7385 = (uint8_t*) buffer++;
                *_tmp_7385 = ros->ssm.status.elements[q].sequence_number.value; 
                __aux64__ = ros->ssm.status.elements[q].sequence_number.value;
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sequence_number.value' (" << __aux64__ << ") less than (0); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sequence_number.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                    return -1;
                }
                
                // Field:  type(IntersectionReferenceID) name(id) extGroup(0)
                    // IntersectionReferenceID  SEQUENCE
                        //  region     RoadRegulatorID   OPTIONAL  
                        //  id         IntersectionID      
                    // Optional fields bytemap
                    char* _tmp_7386 = (char*) buffer++;
                    *_tmp_7386 = (ros->ssm.status.elements[q].id.region.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006626\033[0m| Optional field region = " << *_tmp_7386;
                    
                    if(ros->ssm.status.elements[q].id.region.size() != 0) {
                        // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006627\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].id.region[0].value) << 
                                         " ssm.status.elements[q].id.region[0].value: " << ros->ssm.status.elements[q].id.region[0].value;
                        }
                        
                        uint16_t* _tmp_7387 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_7387 = ros->ssm.status.elements[q].id.region[0].value; 
                        __aux64__ = ros->ssm.status.elements[q].id.region[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[q].id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[q].id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    }
                    
                    // Field:  type(IntersectionID) name(id) extGroup(0)
                    // Integer
                    
                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m006628\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].id.id.value) << 
                                     " ssm.status.elements[q].id.id.value: " << ros->ssm.status.elements[q].id.id.value;
                    }
                    
                    uint16_t* _tmp_7388 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_7388 = ros->ssm.status.elements[q].id.id.value; 
                    __aux64__ = ros->ssm.status.elements[q].id.id.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'ssm.status.elements[q].id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->warning() << "Error: Value in 'ssm.status.elements[q].id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                        return -1;
                    }
                
                // Field:  type(SignalStatusPackageList) name(sig_status) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(32) span(32) ext(false)
                __aux64__ = ros->ssm.status.elements[q].sig_status.elements.size();
                if(__aux64__ > 32) __aux64__ = 32;
                uint16_t* _tmp_7389 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_7389 = __aux64__ - 1;
                
                int __ifr = __aux64__;
                for(int r = 0; r < __ifr; r++) { 
                    
                        // SignalStatusPackage  SEQUENCE
                            //  requester  SignalRequesterInfo            OPTIONAL  
                            //  inboundOn  IntersectionAccessPoint          
                            //  outboundOn IntersectionAccessPoint        OPTIONAL  
                            //  minute     MinuteOfTheYear                OPTIONAL  
                            //  second     DSecond                        OPTIONAL  
                            //  duration   DSecond                        OPTIONAL  
                            //  status     PrioritizationResponseStatus     
                            //  regional   SignalStatusPackage_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3347 = (uint8_t*) buffer++;  // Write extension flag for SignalStatusPackage
                        *_ext_flag_3347 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_7390 = (char*) buffer++;
                        *_tmp_7390 = (ros->ssm.status.elements[q].sig_status.elements[r].requester.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006630\033[0m| Optional field requester = " << *_tmp_7390;
                        char* _tmp_7391 = (char*) buffer++;
                        *_tmp_7391 = (ros->ssm.status.elements[q].sig_status.elements[r].outbound_on.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006631\033[0m| Optional field outbound_on = " << *_tmp_7391;
                        char* _tmp_7392 = (char*) buffer++;
                        *_tmp_7392 = (ros->ssm.status.elements[q].sig_status.elements[r].minute.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006632\033[0m| Optional field minute = " << *_tmp_7392;
                        char* _tmp_7393 = (char*) buffer++;
                        *_tmp_7393 = (ros->ssm.status.elements[q].sig_status.elements[r].second.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006633\033[0m| Optional field second = " << *_tmp_7393;
                        char* _tmp_7394 = (char*) buffer++;
                        *_tmp_7394 = (ros->ssm.status.elements[q].sig_status.elements[r].duration.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006634\033[0m| Optional field duration = " << *_tmp_7394;
                        char* _tmp_7395 = (char*) buffer++;
                        *_tmp_7395 = (ros->ssm.status.elements[q].sig_status.elements[r].regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006635\033[0m| Optional field regional = " << *_tmp_7395;
                        
                        if(ros->ssm.status.elements[q].sig_status.elements[r].requester.size() != 0) {
                            // Field:  type(SignalRequesterInfo) name(requester) extGroup(0)
                                // SignalRequesterInfo  SEQUENCE
                                    //  id             VehicleID            
                                    //  request        RequestID            
                                    //  sequenceNumber MsgCount             
                                    //  role           BasicVehicleRole   OPTIONAL  
                                    //  typeData       RequestorType      OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_3348 = (uint8_t*) buffer++;  // Write extension flag for SignalRequesterInfo
                                *_ext_flag_3348 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_7396 = (char*) buffer++;
                                *_tmp_7396 = (ros->ssm.status.elements[q].sig_status.elements[r].requester[0].role.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006636\033[0m| Optional field role = " << *_tmp_7396;
                                char* _tmp_7397 = (char*) buffer++;
                                *_tmp_7397 = (ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006637\033[0m| Optional field type_data = " << *_tmp_7397;
                                
                                // Field:  type(VehicleID) name(id) extGroup(0)
                                // Choice
                                   // #0  entityID   TemporaryID
                                   // #1  stationID   StationID
                                uint8_t* _choice_241 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id.size() != 0) {  // CHOICE 0  fieldType(VehicleID) 
                                    *_choice_241 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006638\033[0m| Choice selection: 0";
                                
                                    // OctetString
                                    // OCTET_STRING  min(4) max(4) span(1)
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006639\033[0m| ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].values.size(): ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0]" << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].values.size());
                                    
                                    if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].values.size() < 4) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].value' (" << 
                                                    ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].values.size() << ") is less than allowable (4); message dropped.";
                                        return -1;
                                    }
                                    if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].values.size() > 4) {
                                        logger->warning() << "Error: Value in 'ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].value' (" << 
                                                    ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].values.size() << ") exceeds max allowable (4); message dropped.";
                                        return -1;
                                    }
                                    uint8_t* _tmp_7398 = (uint8_t*)buffer;
                                    buffer += 1;
                                    __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].values.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    *_tmp_7398 = __aux64__ - 4;
                                    
                                    int __ifs = __aux64__;
                                    for(int s = 0; s < __ifs; s++) {
                                        int8_t* __m__ = (int8_t*)buffer++;
                                        *__m__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.entity_id[0].values[s];
                                    }
                                
                                }
                                else if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.station_id.size() != 0)  // CHOICE 1  fieldType(VehicleID) 
                                {
                                    *_choice_241 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006640\033[0m| Choice selection: 1";
                                
                                    // Integer
                                    
                                    // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m006641\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.station_id[0].value) << 
                                                     " ssm.status.elements[q].sig_status.elements[r].requester[0].id.station_id[0].value: " << ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.station_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_7399 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_7399 = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.station_id[0].value; 
                                    __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].id.station_id[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].id.station_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].id.station_id[0].value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
                                        return -1;
                                    }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_241) << ") selected in CHOICE VehicleID in 'ssm.status.elements[q].sig_status.elements[r].requester[0].id'; message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(RequestID) name(request) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006642\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].request.value) << 
                                                 " ssm.status.elements[q].sig_status.elements[r].requester[0].request.value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].request.value);
                                }
                                
                                uint8_t* _tmp_7400 = (uint8_t*) buffer++;
                                *_tmp_7400 = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].request.value; 
                                __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].request.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].request.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].request.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(MsgCount) name(sequence_number) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(127) span(128) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006643\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].sequence_number.value) << 
                                                 " ssm.status.elements[q].sig_status.elements[r].requester[0].sequence_number.value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].sequence_number.value);
                                }
                                
                                uint8_t* _tmp_7401 = (uint8_t*) buffer++;
                                *_tmp_7401 = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].sequence_number.value; 
                                __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].sequence_number.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].sequence_number.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].sequence_number.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].role.size() != 0) {
                                    // Field:  type(BasicVehicleRole) name(role) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(22) span(23) dataType(Int32)
                                    uint8_t* _ext_flag_3353 = (uint8_t*) buffer++; // Write extension flag for ros->ssm.status.elements[q].sig_status.elements[r].requester[0].role[0].
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m006644\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].role[0].value) << 
                                                     " ssm.status.elements[q].sig_status.elements[r].requester[0].role[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].role[0].value);
                                    }
                                    
                                    uint8_t* _tmp_7402 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_7402 = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].role[0].value; 
                                    __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].role[0].value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].role[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 22) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].role[0].value' (" << __aux64__ << ") exceeds max allowable (22); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data.size() != 0) {
                                    // Field:  type(RequestorType) name(type_data) extGroup(0)
                                        // RequestorType  SEQUENCE
                                            //  role       BasicVehicleRole           
                                            //  subrole    RequestSubRole           OPTIONAL  
                                            //  request    RequestImportanceLevel   OPTIONAL  
                                            //  iso3883    Iso3833VehicleType       OPTIONAL  
                                            //  hpmsType   VehicleType              OPTIONAL  
                                            //  regional   RegionalExtension        OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_3354 = (uint8_t*) buffer++;  // Write extension flag for RequestorType
                                        *_ext_flag_3354 = 0;  
                                        
                                        // Optional fields bytemap
                                        char* _tmp_7403 = (char*) buffer++;
                                        *_tmp_7403 = (ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].subrole.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m006645\033[0m| Optional field subrole = " << *_tmp_7403;
                                        char* _tmp_7404 = (char*) buffer++;
                                        *_tmp_7404 = (ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].request.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m006646\033[0m| Optional field request = " << *_tmp_7404;
                                        char* _tmp_7405 = (char*) buffer++;
                                        *_tmp_7405 = (ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].iso3883.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m006647\033[0m| Optional field iso3883 = " << *_tmp_7405;
                                        char* _tmp_7406 = (char*) buffer++;
                                        *_tmp_7406 = (ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m006648\033[0m| Optional field hpms_type = " << *_tmp_7406;
                                        char* _tmp_7407 = (char*) buffer++;
                                        *_tmp_7407 = (ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].regional.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m006649\033[0m| Optional field regional = " << *_tmp_7407;
                                        
                                        // Field:  type(BasicVehicleRole) name(role) extGroup(0)
                                        // Enumerated
                                        // INT32  min(0) max(22) span(23) dataType(Int32)
                                        uint8_t* _ext_flag_3355 = (uint8_t*) buffer++; // Write extension flag for ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].role.
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m006650\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].role.value) << 
                                                         " ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].role.value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].role.value);
                                        }
                                        
                                        uint8_t* _tmp_7408 = (uint8_t*)buffer;
                                        buffer += 1;
                                        *_tmp_7408 = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].role.value; 
                                        __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].role.value; 
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].role.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 22) {
                                            logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].role.value' (" << __aux64__ << ") exceeds max allowable (22); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].subrole.size() != 0) {
                                            // Field:  type(RequestSubRole) name(subrole) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m006651\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].subrole[0].value) << 
                                                             " ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].subrole[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].subrole[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7409 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_7409 = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].subrole[0].value; 
                                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].subrole[0].value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].subrole[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].subrole[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].request.size() != 0) {
                                            // Field:  type(RequestImportanceLevel) name(request) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m006652\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].request[0].value) << 
                                                             " ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].request[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].request[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7410 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_7410 = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].request[0].value; 
                                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].request[0].value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].request[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].request[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].iso3883.size() != 0) {
                                            // Field:  type(Iso3833VehicleType) name(iso3883) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m006653\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].iso3883[0].value) << 
                                                             " ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].iso3883[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].iso3883[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7411 = (uint8_t*) buffer++;
                                            *_tmp_7411 = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].iso3883[0].value; 
                                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].iso3883[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].iso3883[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].iso3883[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type.size() != 0) {
                                            // Field:  type(VehicleType) name(hpms_type) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            uint8_t* _ext_flag_3359 = (uint8_t*) buffer++; // Write extension flag for ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type[0].
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m006654\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type[0].value) << 
                                                             " ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type[0].value);
                                            }
                                            
                                            uint8_t* _tmp_7412 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_7412 = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type[0].value; 
                                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type[0].value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].requester[0].type_data[0].hpms_type[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        // Field name: regional  // avoided
                                        if(*_ext_flag_3354) {
                                        }
                                }
                                
                                if(*_ext_flag_3348) {
                                }
                        }
                        
                        // Field:  type(IntersectionAccessPoint) name(inbound_on) extGroup(0)
                        // Choice
                           // #0  lane   LaneID
                           // #1  approach   ApproachID
                           // #2  connection   LaneConnectionID
                        uint8_t* _ext_flag_3360 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_3360 = 0; 
                        
                        uint8_t* _choice_242 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.lane.size() != 0) {  // CHOICE 0  fieldType(IntersectionAccessPoint) 
                            *_choice_242 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006655\033[0m| Choice selection: 0";
                        
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006656\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.lane[0].value) << 
                                             " ssm.status.elements[q].sig_status.elements[r].inbound_on.lane[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.lane[0].value);
                            }
                            
                            uint8_t* _tmp_7415 = (uint8_t*) buffer++;
                            *_tmp_7415 = ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.lane[0].value; 
                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.lane[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].inbound_on.lane[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].inbound_on.lane[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        
                        }
                        else if(ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.approach.size() != 0)  // CHOICE 1  fieldType(IntersectionAccessPoint) 
                        {
                            *_choice_242 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006657\033[0m| Choice selection: 1";
                        
                            // Integer
                            
                            // UINT8  min(0) max(15) span(16) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006658\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.approach[0].value) << 
                                             " ssm.status.elements[q].sig_status.elements[r].inbound_on.approach[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.approach[0].value);
                            }
                            
                            uint8_t* _tmp_7416 = (uint8_t*) buffer++;
                            *_tmp_7416 = ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.approach[0].value; 
                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.approach[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].inbound_on.approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].inbound_on.approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                return -1;
                            }
                        
                        }
                        else if(ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.connection.size() != 0)  // CHOICE 2  fieldType(IntersectionAccessPoint) 
                        {
                            *_choice_242 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006659\033[0m| Choice selection: 2";
                        
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006660\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.connection[0].value) << 
                                             " ssm.status.elements[q].sig_status.elements[r].inbound_on.connection[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.connection[0].value);
                            }
                            
                            uint8_t* _tmp_7417 = (uint8_t*) buffer++;
                            *_tmp_7417 = ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.connection[0].value; 
                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].inbound_on.connection[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].inbound_on.connection[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].inbound_on.connection[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_242) << ") selected in CHOICE IntersectionAccessPoint in 'ssm.status.elements[q].sig_status.elements[r].inbound_on'; message dropped.";
                            return -1;
                        }
                        
                        if(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on.size() != 0) {
                            // Field:  type(IntersectionAccessPoint) name(outbound_on) extGroup(0)
                            // Choice
                               // #0  lane   LaneID
                               // #1  approach   ApproachID
                               // #2  connection   LaneConnectionID
                            uint8_t* _ext_flag_3364 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_3364 = 0; 
                            
                            uint8_t* _choice_243 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].lane.size() != 0) {  // CHOICE 0  fieldType(IntersectionAccessPoint) 
                                *_choice_243 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006661\033[0m| Choice selection: 0";
                            
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006662\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].lane[0].value) << 
                                                 " ssm.status.elements[q].sig_status.elements[r].outbound_on[0].lane[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].lane[0].value);
                                }
                                
                                uint8_t* _tmp_7418 = (uint8_t*) buffer++;
                                *_tmp_7418 = ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].lane[0].value; 
                                __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].lane[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].outbound_on[0].lane[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].outbound_on[0].lane[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else if(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].approach.size() != 0)  // CHOICE 1  fieldType(IntersectionAccessPoint) 
                            {
                                *_choice_243 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006663\033[0m| Choice selection: 1";
                            
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006664\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].approach[0].value) << 
                                                 " ssm.status.elements[q].sig_status.elements[r].outbound_on[0].approach[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].approach[0].value);
                                }
                                
                                uint8_t* _tmp_7419 = (uint8_t*) buffer++;
                                *_tmp_7419 = ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].approach[0].value; 
                                __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].outbound_on[0].approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].outbound_on[0].approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else if(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].connection.size() != 0)  // CHOICE 2  fieldType(IntersectionAccessPoint) 
                            {
                                *_choice_243 = 2;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006665\033[0m| Choice selection: 2";
                            
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006666\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].connection[0].value) << 
                                                 " ssm.status.elements[q].sig_status.elements[r].outbound_on[0].connection[0].value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].connection[0].value);
                                }
                                
                                uint8_t* _tmp_7420 = (uint8_t*) buffer++;
                                *_tmp_7420 = ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].connection[0].value; 
                                __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].outbound_on[0].connection[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].outbound_on[0].connection[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].outbound_on[0].connection[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_243) << ") selected in CHOICE IntersectionAccessPoint in 'ssm.status.elements[q].sig_status.elements[r].outbound_on[0]'; message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->ssm.status.elements[q].sig_status.elements[r].minute.size() != 0) {
                            // Field:  type(MinuteOfTheYear) name(minute) extGroup(0)
                            // Integer
                            
                            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006667\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].minute[0].value) << 
                                             " ssm.status.elements[q].sig_status.elements[r].minute[0].value: " << ros->ssm.status.elements[q].sig_status.elements[r].minute[0].value;
                            }
                            
                            uint32_t* _tmp_7421 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_7421 = ros->ssm.status.elements[q].sig_status.elements[r].minute[0].value; 
                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].minute[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].minute[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].minute[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->ssm.status.elements[q].sig_status.elements[r].second.size() != 0) {
                            // Field:  type(DSecond) name(second) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006668\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].second[0].value) << 
                                             " ssm.status.elements[q].sig_status.elements[r].second[0].value: " << ros->ssm.status.elements[q].sig_status.elements[r].second[0].value;
                            }
                            
                            uint16_t* _tmp_7422 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_7422 = ros->ssm.status.elements[q].sig_status.elements[r].second[0].value; 
                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].second[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].second[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].second[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->ssm.status.elements[q].sig_status.elements[r].duration.size() != 0) {
                            // Field:  type(DSecond) name(duration) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006669\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].duration[0].value) << 
                                             " ssm.status.elements[q].sig_status.elements[r].duration[0].value: " << ros->ssm.status.elements[q].sig_status.elements[r].duration[0].value;
                            }
                            
                            uint16_t* _tmp_7423 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_7423 = ros->ssm.status.elements[q].sig_status.elements[r].duration[0].value; 
                            __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].duration[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].duration[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].duration[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(PrioritizationResponseStatus) name(status) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(7) span(8) dataType(Int32)
                        uint8_t* _ext_flag_3371 = (uint8_t*) buffer++; // Write extension flag for ros->ssm.status.elements[q].sig_status.elements[r].status.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006670\033[0m| " << tools::getTypeName(ros->ssm.status.elements[q].sig_status.elements[r].status.value) << 
                                         " ssm.status.elements[q].sig_status.elements[r].status.value: " << static_cast<int>(ros->ssm.status.elements[q].sig_status.elements[r].status.value);
                        }
                        
                        uint8_t* _tmp_7424 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_7424 = ros->ssm.status.elements[q].sig_status.elements[r].status.value; 
                        __aux64__ = ros->ssm.status.elements[q].sig_status.elements[r].status.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].status.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[q].sig_status.elements[r].status.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3347) {
                        }
                }
                
                // Field name: regional  // avoided
                if(*_ext_flag_3343) {
                }
        }
        
        // Field name: regional  // avoided
        if(*_ext_flag_3339) {
        }
    
	
            return buffer - start;
        }
    } 
}