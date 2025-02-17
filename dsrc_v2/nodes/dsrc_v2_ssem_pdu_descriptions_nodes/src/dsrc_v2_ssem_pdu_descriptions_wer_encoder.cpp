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
    
    // Field:  type(SignalStatusMessage) name(ssm) extGroup(0)
        // SignalStatusMessage  SEQUENCE
            //  timeStamp      MinuteOfTheYear                OPTIONAL  
            //  second         DSecond                          
            //  sequenceNumber MsgCount                       OPTIONAL  
            //  status         SignalStatusList                 
            //  regional       SignalStatusMessage_regional   OPTIONAL  
            //  ...
        uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Write extension flag for SignalStatusMessage
        *_ext_flag_4 = 0;  
        
        // Optional fields bytemap
        char* _tmp_4 = (char*) buffer++;
        *_tmp_4 = (ros->ssm.time_stamp.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000003\033[0m| Optional field time_stamp = " << *_tmp_4;
        char* _tmp_5 = (char*) buffer++;
        *_tmp_5 = (ros->ssm.sequence_number.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000004\033[0m| Optional field sequence_number = " << *_tmp_5;
        char* _tmp_6 = (char*) buffer++;
        *_tmp_6 = (ros->ssm.regional.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000005\033[0m| Optional field regional = " << *_tmp_6;
        
        if(ros->ssm.time_stamp.size() != 0) {
            // Field:  type(MinuteOfTheYear) name(time_stamp) extGroup(0)
            // Integer
            
            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
            if(debug) {
                logger->debug() << "|\033[38;5;94m000006\033[0m| " << tools::getTypeName(ros->ssm.time_stamp[0].value) << 
                             " ssm.time_stamp[0].value: " << ros->ssm.time_stamp[0].value;
            }
            
            uint32_t* _tmp_7 = (uint32_t*) buffer; buffer += 4;
            *_tmp_7 = ros->ssm.time_stamp[0].value; 
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
            logger->debug() << "|\033[38;5;94m000007\033[0m| " << tools::getTypeName(ros->ssm.second.value) << 
                         " ssm.second.value: " << ros->ssm.second.value;
        }
        
        uint16_t* _tmp_8 = (uint16_t*) buffer; buffer += 2;
        *_tmp_8 = ros->ssm.second.value; 
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
                logger->debug() << "|\033[38;5;94m000008\033[0m| " << tools::getTypeName(ros->ssm.sequence_number[0].value) << 
                             " ssm.sequence_number[0].value: " << static_cast<int>(ros->ssm.sequence_number[0].value);
            }
            
            uint8_t* _tmp_9 = (uint8_t*) buffer++;
            *_tmp_9 = ros->ssm.sequence_number[0].value; 
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
        uint16_t* _tmp_10 = (uint16_t*)buffer;
        buffer += 2;
        *_tmp_10 = __aux64__ - 1;
        
        int __ifa = __aux64__;
        for(int a = 0; a < __ifa; a++) { 
            
                // SignalStatus  SEQUENCE
                    //  sequenceNumber MsgCount                    
                    //  id             IntersectionReferenceID     
                    //  sigStatus      SignalStatusPackageList     
                    //  regional       SignalStatus_regional     OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_8 = (uint8_t*) buffer++;  // Write extension flag for SignalStatus
                *_ext_flag_8 = 0;  
                
                // Optional fields bytemap
                char* _tmp_11 = (char*) buffer++;
                *_tmp_11 = (ros->ssm.status.elements[a].regional.size() != 0 ? 1 : 0);
                if(debug)
                    logger->debug() << "|\033[38;5;94m000010\033[0m| Optional field regional = " << *_tmp_11;
                
                // Field:  type(MsgCount) name(sequence_number) extGroup(0)
                // Integer
                
                // UINT8  min(0) max(127) span(128) dataType(UInt8)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000011\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sequence_number.value) << 
                                 " ssm.status.elements[a].sequence_number.value: " << static_cast<int>(ros->ssm.status.elements[a].sequence_number.value);
                }
                
                uint8_t* _tmp_12 = (uint8_t*) buffer++;
                *_tmp_12 = ros->ssm.status.elements[a].sequence_number.value; 
                __aux64__ = ros->ssm.status.elements[a].sequence_number.value;
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sequence_number.value' (" << __aux64__ << ") less than (0); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sequence_number.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                    return -1;
                }
                
                // Field:  type(IntersectionReferenceID) name(id) extGroup(0)
                    // IntersectionReferenceID  SEQUENCE
                        //  region     RoadRegulatorID   OPTIONAL  
                        //  id         IntersectionID      
                    // Optional fields bytemap
                    char* _tmp_13 = (char*) buffer++;
                    *_tmp_13 = (ros->ssm.status.elements[a].id.region.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000012\033[0m| Optional field region = " << *_tmp_13;
                    
                    if(ros->ssm.status.elements[a].id.region.size() != 0) {
                        // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000013\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].id.region[0].value) << 
                                         " ssm.status.elements[a].id.region[0].value: " << ros->ssm.status.elements[a].id.region[0].value;
                        }
                        
                        uint16_t* _tmp_14 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_14 = ros->ssm.status.elements[a].id.region[0].value; 
                        __aux64__ = ros->ssm.status.elements[a].id.region[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[a].id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[a].id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    }
                    
                    // Field:  type(IntersectionID) name(id) extGroup(0)
                    // Integer
                    
                    // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000014\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].id.id.value) << 
                                     " ssm.status.elements[a].id.id.value: " << ros->ssm.status.elements[a].id.id.value;
                    }
                    
                    uint16_t* _tmp_15 = (uint16_t*) buffer; buffer += 2;
                    *_tmp_15 = ros->ssm.status.elements[a].id.id.value; 
                    __aux64__ = ros->ssm.status.elements[a].id.id.value;
                    
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'ssm.status.elements[a].id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->warning() << "Error: Value in 'ssm.status.elements[a].id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                        return -1;
                    }
                
                // Field:  type(SignalStatusPackageList) name(sig_status) extGroup(0)
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(32) span(32) ext(false)
                __aux64__ = ros->ssm.status.elements[a].sig_status.elements.size();
                if(__aux64__ > 32) __aux64__ = 32;
                uint16_t* _tmp_16 = (uint16_t*)buffer;
                buffer += 2;
                *_tmp_16 = __aux64__ - 1;
                
                int __ifb = __aux64__;
                for(int b = 0; b < __ifb; b++) { 
                    
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
                        uint8_t* _ext_flag_12 = (uint8_t*) buffer++;  // Write extension flag for SignalStatusPackage
                        *_ext_flag_12 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_17 = (char*) buffer++;
                        *_tmp_17 = (ros->ssm.status.elements[a].sig_status.elements[b].requester.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000016\033[0m| Optional field requester = " << *_tmp_17;
                        char* _tmp_18 = (char*) buffer++;
                        *_tmp_18 = (ros->ssm.status.elements[a].sig_status.elements[b].outbound_on.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000017\033[0m| Optional field outbound_on = " << *_tmp_18;
                        char* _tmp_19 = (char*) buffer++;
                        *_tmp_19 = (ros->ssm.status.elements[a].sig_status.elements[b].minute.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000018\033[0m| Optional field minute = " << *_tmp_19;
                        char* _tmp_20 = (char*) buffer++;
                        *_tmp_20 = (ros->ssm.status.elements[a].sig_status.elements[b].second.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000019\033[0m| Optional field second = " << *_tmp_20;
                        char* _tmp_21 = (char*) buffer++;
                        *_tmp_21 = (ros->ssm.status.elements[a].sig_status.elements[b].duration.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000020\033[0m| Optional field duration = " << *_tmp_21;
                        char* _tmp_22 = (char*) buffer++;
                        *_tmp_22 = (ros->ssm.status.elements[a].sig_status.elements[b].regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000021\033[0m| Optional field regional = " << *_tmp_22;
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester.size() != 0) {
                            // Field:  type(SignalRequesterInfo) name(requester) extGroup(0)
                                // SignalRequesterInfo  SEQUENCE
                                    //  id             VehicleID            
                                    //  request        RequestID            
                                    //  sequenceNumber MsgCount             
                                    //  role           BasicVehicleRole   OPTIONAL  
                                    //  typeData       RequestorType      OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_13 = (uint8_t*) buffer++;  // Write extension flag for SignalRequesterInfo
                                *_ext_flag_13 = 0;  
                                
                                // Optional fields bytemap
                                char* _tmp_23 = (char*) buffer++;
                                *_tmp_23 = (ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000022\033[0m| Optional field role = " << *_tmp_23;
                                char* _tmp_24 = (char*) buffer++;
                                *_tmp_24 = (ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data.size() != 0 ? 1 : 0);
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000023\033[0m| Optional field type_data = " << *_tmp_24;
                                
                                // Field:  type(VehicleID) name(id) extGroup(0)
                                // Choice
                                   // #0  entityID   TemporaryID
                                   // #1  stationID   StationID
                                uint8_t* _choice_1 = (uint8_t*) buffer;
                                buffer++;
                                
                                if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id.size() != 0) {  // CHOICE 0  fieldType(VehicleID) 
                                    *_choice_1 = 0;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000024\033[0m| Choice selection: 0";
                                
                                    // OctetString
                                    // OCTET_STRING  min(4) max(4) span(1)
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000025\033[0m| ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].values.size(): ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0]" << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].values.size());
                                    
                                    if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].values.size() < 4) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].value' (" << 
                                                    ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].values.size() << ") is less than allowable (4); message dropped.";
                                        return -1;
                                    }
                                    if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].values.size() > 4) {
                                        logger->warning() << "Error: Value in 'ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].value' (" << 
                                                    ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].values.size() << ") exceeds max allowable (4); message dropped.";
                                        return -1;
                                    }
                                    uint8_t* _tmp_25 = (uint8_t*)buffer;
                                    buffer += 1;
                                    __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].values.size();
                                    if(__aux64__ > 4) __aux64__ = 4;
                                    *_tmp_25 = __aux64__ - 4;
                                    
                                    int __ifc = __aux64__;
                                    for(int c = 0; c < __ifc; c++) {
                                        int8_t* __m__ = (int8_t*)buffer++;
                                        *__m__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].values[c];
                                    }
                                
                                }
                                else if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id.size() != 0)  // CHOICE 1  fieldType(VehicleID) 
                                {
                                    *_choice_1 = 1;  // Setting choice selection
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m000026\033[0m| Choice selection: 1";
                                
                                    // Integer
                                    
                                    // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000027\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value) << 
                                                     " ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value: " << ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value;
                                    }
                                    
                                    uint32_t* _tmp_26 = (uint32_t*) buffer; buffer += 4;
                                    *_tmp_26 = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value; 
                                    __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value;
                                    
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
                                        return -1;
                                    }
                                
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(*_choice_1) << ") selected in CHOICE VehicleID in 'ssm.status.elements[a].sig_status.elements[b].requester[0].id'; message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(RequestID) name(request) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000028\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].request.value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].requester[0].request.value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].request.value);
                                }
                                
                                uint8_t* _tmp_27 = (uint8_t*) buffer++;
                                *_tmp_27 = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].request.value; 
                                __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].request.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].request.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].request.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                                
                                // Field:  type(MsgCount) name(sequence_number) extGroup(0)
                                // Integer
                                
                                // UINT8  min(0) max(127) span(128) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000029\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value);
                                }
                                
                                uint8_t* _tmp_28 = (uint8_t*) buffer++;
                                *_tmp_28 = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value; 
                                __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                                    return -1;
                                }
                                
                                if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role.size() != 0) {
                                    // Field:  type(BasicVehicleRole) name(role) extGroup(0)
                                    // Enumerated
                                    // INT32  min(0) max(22) span(23) dataType(Int32)
                                    uint8_t* _ext_flag_18 = (uint8_t*) buffer++; // Write extension flag for ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m000030\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value) << 
                                                     " ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value);
                                    }
                                    
                                    uint8_t* _tmp_29 = (uint8_t*)buffer;
                                    buffer += 1;
                                    *_tmp_29 = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value; 
                                    __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value; 
                                    // MIN validator
                                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                        return -1;
                                    }
                                    // MAX validator
                                    if (VALIDATORS_ENABLED && __aux64__ > 22) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value' (" << __aux64__ << ") exceeds max allowable (22); message dropped.";
                                        return -1;
                                    }
                                }
                                
                                if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data.size() != 0) {
                                    // Field:  type(RequestorType) name(type_data) extGroup(0)
                                        // RequestorType  SEQUENCE
                                            //  role       BasicVehicleRole           
                                            //  subrole    RequestSubRole           OPTIONAL  
                                            //  request    RequestImportanceLevel   OPTIONAL  
                                            //  iso3883    Iso3833VehicleType       OPTIONAL  
                                            //  hpmsType   VehicleType              OPTIONAL  
                                            //  regional   RegionalExtension        OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_19 = (uint8_t*) buffer++;  // Write extension flag for RequestorType
                                        *_ext_flag_19 = 0;  
                                        
                                        // Optional fields bytemap
                                        char* _tmp_30 = (char*) buffer++;
                                        *_tmp_30 = (ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000031\033[0m| Optional field subrole = " << *_tmp_30;
                                        char* _tmp_31 = (char*) buffer++;
                                        *_tmp_31 = (ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000032\033[0m| Optional field request = " << *_tmp_31;
                                        char* _tmp_32 = (char*) buffer++;
                                        *_tmp_32 = (ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000033\033[0m| Optional field iso3883 = " << *_tmp_32;
                                        char* _tmp_33 = (char*) buffer++;
                                        *_tmp_33 = (ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000034\033[0m| Optional field hpms_type = " << *_tmp_33;
                                        char* _tmp_34 = (char*) buffer++;
                                        *_tmp_34 = (ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].regional.size() != 0 ? 1 : 0);
                                        if(debug)
                                            logger->debug() << "|\033[38;5;94m000035\033[0m| Optional field regional = " << *_tmp_34;
                                        
                                        // Field:  type(BasicVehicleRole) name(role) extGroup(0)
                                        // Enumerated
                                        // INT32  min(0) max(22) span(23) dataType(Int32)
                                        uint8_t* _ext_flag_20 = (uint8_t*) buffer++; // Write extension flag for ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m000036\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value) << 
                                                         " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value);
                                        }
                                        
                                        uint8_t* _tmp_35 = (uint8_t*)buffer;
                                        buffer += 1;
                                        *_tmp_35 = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value; 
                                        __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value; 
                                        // MIN validator
                                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value' (" << __aux64__ << ") less than (0); message dropped.";
                                            return -1;
                                        }
                                        // MAX validator
                                        if (VALIDATORS_ENABLED && __aux64__ > 22) {
                                            logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value' (" << __aux64__ << ") exceeds max allowable (22); message dropped.";
                                            return -1;
                                        }
                                        
                                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole.size() != 0) {
                                            // Field:  type(RequestSubRole) name(subrole) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000037\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value) << 
                                                             " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value);
                                            }
                                            
                                            uint8_t* _tmp_36 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_36 = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value; 
                                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request.size() != 0) {
                                            // Field:  type(RequestImportanceLevel) name(request) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000038\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value) << 
                                                             " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value);
                                            }
                                            
                                            uint8_t* _tmp_37 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_37 = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value; 
                                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883.size() != 0) {
                                            // Field:  type(Iso3833VehicleType) name(iso3883) extGroup(0)
                                            // Integer
                                            
                                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000039\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value) << 
                                                             " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value);
                                            }
                                            
                                            uint8_t* _tmp_38 = (uint8_t*) buffer++;
                                            *_tmp_38 = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value; 
                                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value;
                                            
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type.size() != 0) {
                                            // Field:  type(VehicleType) name(hpms_type) extGroup(0)
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) dataType(Int32)
                                            uint8_t* _ext_flag_24 = (uint8_t*) buffer++; // Write extension flag for ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m000040\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value) << 
                                                             " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value);
                                            }
                                            
                                            uint8_t* _tmp_39 = (uint8_t*)buffer;
                                            buffer += 1;
                                            *_tmp_39 = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value; 
                                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value; 
                                            // MIN validator
                                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                                return -1;
                                            }
                                            // MAX validator
                                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                                return -1;
                                            }
                                        }
                                        
                                        // Field name: regional  // avoided
                                        if(*_ext_flag_19) {
                                        }
                                }
                                
                                if(*_ext_flag_13) {
                                }
                        }
                        
                        // Field:  type(IntersectionAccessPoint) name(inbound_on) extGroup(0)
                        // Choice
                           // #0  lane   LaneID
                           // #1  approach   ApproachID
                           // #2  connection   LaneConnectionID
                        uint8_t* _ext_flag_25 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_25 = 0; 
                        
                        uint8_t* _choice_2 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.lane.size() != 0) {  // CHOICE 0  fieldType(IntersectionAccessPoint) 
                            *_choice_2 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000041\033[0m| Choice selection: 0";
                        
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000042\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value);
                            }
                            
                            uint8_t* _tmp_42 = (uint8_t*) buffer++;
                            *_tmp_42 = ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value; 
                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        
                        }
                        else if(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.approach.size() != 0)  // CHOICE 1  fieldType(IntersectionAccessPoint) 
                        {
                            *_choice_2 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000043\033[0m| Choice selection: 1";
                        
                            // Integer
                            
                            // UINT8  min(0) max(15) span(16) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000044\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value);
                            }
                            
                            uint8_t* _tmp_43 = (uint8_t*) buffer++;
                            *_tmp_43 = ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value; 
                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                return -1;
                            }
                        
                        }
                        else if(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.connection.size() != 0)  // CHOICE 2  fieldType(IntersectionAccessPoint) 
                        {
                            *_choice_2 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000045\033[0m| Choice selection: 2";
                        
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000046\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value);
                            }
                            
                            uint8_t* _tmp_44 = (uint8_t*) buffer++;
                            *_tmp_44 = ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value; 
                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_2) << ") selected in CHOICE IntersectionAccessPoint in 'ssm.status.elements[a].sig_status.elements[b].inbound_on'; message dropped.";
                            return -1;
                        }
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on.size() != 0) {
                            // Field:  type(IntersectionAccessPoint) name(outbound_on) extGroup(0)
                            // Choice
                               // #0  lane   LaneID
                               // #1  approach   ApproachID
                               // #2  connection   LaneConnectionID
                            uint8_t* _ext_flag_29 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_29 = 0; 
                            
                            uint8_t* _choice_3 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane.size() != 0) {  // CHOICE 0  fieldType(IntersectionAccessPoint) 
                                *_choice_3 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000047\033[0m| Choice selection: 0";
                            
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000048\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value);
                                }
                                
                                uint8_t* _tmp_45 = (uint8_t*) buffer++;
                                *_tmp_45 = ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value; 
                                __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else if(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach.size() != 0)  // CHOICE 1  fieldType(IntersectionAccessPoint) 
                            {
                                *_choice_3 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000049\033[0m| Choice selection: 1";
                            
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000050\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value);
                                }
                                
                                uint8_t* _tmp_46 = (uint8_t*) buffer++;
                                *_tmp_46 = ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value; 
                                __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else if(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection.size() != 0)  // CHOICE 2  fieldType(IntersectionAccessPoint) 
                            {
                                *_choice_3 = 2;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000051\033[0m| Choice selection: 2";
                            
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000052\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value);
                                }
                                
                                uint8_t* _tmp_47 = (uint8_t*) buffer++;
                                *_tmp_47 = ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value; 
                                __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_3) << ") selected in CHOICE IntersectionAccessPoint in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0]'; message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].minute.size() != 0) {
                            // Field:  type(MinuteOfTheYear) name(minute) extGroup(0)
                            // Integer
                            
                            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000053\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].minute[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].minute[0].value: " << ros->ssm.status.elements[a].sig_status.elements[b].minute[0].value;
                            }
                            
                            uint32_t* _tmp_48 = (uint32_t*) buffer; buffer += 4;
                            *_tmp_48 = ros->ssm.status.elements[a].sig_status.elements[b].minute[0].value; 
                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].minute[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].minute[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].minute[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].second.size() != 0) {
                            // Field:  type(DSecond) name(second) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000054\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].second[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].second[0].value: " << ros->ssm.status.elements[a].sig_status.elements[b].second[0].value;
                            }
                            
                            uint16_t* _tmp_49 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_49 = ros->ssm.status.elements[a].sig_status.elements[b].second[0].value; 
                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].second[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].second[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].second[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].duration.size() != 0) {
                            // Field:  type(DSecond) name(duration) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000055\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].duration[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].duration[0].value: " << ros->ssm.status.elements[a].sig_status.elements[b].duration[0].value;
                            }
                            
                            uint16_t* _tmp_50 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_50 = ros->ssm.status.elements[a].sig_status.elements[b].duration[0].value; 
                            __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].duration[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].duration[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].duration[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field:  type(PrioritizationResponseStatus) name(status) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(7) span(8) dataType(Int32)
                        uint8_t* _ext_flag_36 = (uint8_t*) buffer++; // Write extension flag for ros->ssm.status.elements[a].sig_status.elements[b].status.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000056\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].status.value) << 
                                         " ssm.status.elements[a].sig_status.elements[b].status.value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].status.value);
                        }
                        
                        uint8_t* _tmp_51 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_51 = ros->ssm.status.elements[a].sig_status.elements[b].status.value; 
                        __aux64__ = ros->ssm.status.elements[a].sig_status.elements[b].status.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].status.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].status.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                            return -1;
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_12) {
                        }
                }
                
                // Field name: regional  // avoided
                if(*_ext_flag_8) {
                }
        }
        
        // Field name: regional  // avoided
        if(*_ext_flag_4) {
        }
    
	
            return buffer - start;
        }
    } 
}