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
#include <dsrc_v2_ssem_pdu_descriptions_wer_decoder.h>


/**
 *
 */
namespace wind
{
    namespace decoder_dsrc_v2_ssem_pdu_descriptions
    {        
        
        #if WIND_ROS_VERSION == 1
          bool WerDecoder::decode(dsrc_v2_ssem_pdu_descriptions_msgs::SSEM* ros, const uint8_t *buffer)
        #else
          bool WerDecoder::decode(dsrc_v2_ssem_pdu_descriptions_msgs::msg::SSEM* ros, const uint8_t *buffer)
        #endif
        {
            const uint8_t *start = buffer;
            int64_t __aux64__;
	
    // SSEM  SEQUENCE
        //  header     ItsPduHeader            
        //  ssm        SignalStatusMessage     
    
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
    
    // Field name: ssm
        // SignalStatusMessage  SEQUENCE
            //  timeStamp      MinuteOfTheYear                OPTIONAL  
            //  second         DSecond                          
            //  sequenceNumber MsgCount                       OPTIONAL  
            //  status         SignalStatusList                 
            //  regional       SignalStatusMessage_regional   OPTIONAL  
            //  ...
        uint8_t* _ext_flag_1 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.
        
        if(debug) {
            logger->print() << "|\033[38;5;94m000003\033[0m| Reading ext flag from ros->ssm.: " << int(*_ext_flag_1);
        }
        
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_4;
            ros->ssm.time_stamp.push_back(_tmp_4);
        
            if(debug)
                logger->print() << "|\033[38;5;94m000004\033[0m| ros->ssm.time_stamp " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MsgCount _tmp_5;
            ros->ssm.sequence_number.push_back(_tmp_5);
        
            if(debug)
                logger->print() << "|\033[38;5;94m000005\033[0m| ros->ssm.sequence_number " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::SignalStatusMessageRegional _tmp_6;
            ros->ssm.regional.push_back(_tmp_6);
        
            if(debug)
                logger->print() << "|\033[38;5;94m000006\033[0m| ros->ssm.regional " << tools::green("present");
        }
        
        if(ros->ssm.time_stamp.size() != 0) {
            // Field name: time_stamp
            // Integer
            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
            uint32_t* _tmp_7 = (uint32_t*) buffer; buffer += 4;
            __aux64__ = *_tmp_7;
            ros->ssm.time_stamp[0].value = __aux64__;
            
            if(debug) {
                logger->print() << "|\033[38;5;94m000007\033[0m| " << tools::getTypeName(ros->ssm.time_stamp[0].value) << 
                             " ssm.time_stamp[0].value: " << ros->ssm.time_stamp[0].value;
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'ssm.time_stamp[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->warning() << "Error: Value in 'ssm.time_stamp[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                return false;
            }
        }
        
        // Field name: second
        // Integer
        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
        uint16_t* _tmp_8 = (uint16_t*) buffer; buffer += 2;
        __aux64__ = *_tmp_8;
        ros->ssm.second.value = __aux64__;
        
        if(debug) {
            logger->print() << "|\033[38;5;94m000008\033[0m| " << tools::getTypeName(ros->ssm.second.value) << 
                         " ssm.second.value: " << ros->ssm.second.value;
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'ssm.second.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->warning() << "Error: Value in 'ssm.second.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
            return false;
        }
        
        if(ros->ssm.sequence_number.size() != 0) {
            // Field name: sequence_number
            // Integer
            // UINT8  min(0) max(127) span(128) datatype(UInt8)
            uint8_t* _tmp_9 = (uint8_t*) buffer++;
            __aux64__ = *_tmp_9;
            ros->ssm.sequence_number[0].value = __aux64__;
            
            if(debug) {
                logger->print() << "|\033[38;5;94m000009\033[0m| " << tools::getTypeName(ros->ssm.sequence_number[0].value) << 
                             " ssm.sequence_number[0].value: " << static_cast<int>(ros->ssm.sequence_number[0].value);
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'ssm.sequence_number[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                logger->warning() << "Error: Value in 'ssm.sequence_number[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                return false;
            }
        }
        
        // Field name: status
        // SequenceOf
        // Data Type UInt8
        // SEQUENCE_OF  min(1) max(32) span(32)
        int16_t* _tmp_10 = (int16_t*)buffer;
        buffer += 2;
        __aux64__ = *_tmp_10;
        __aux64__ += 1;     // +min
        
        int _if__tmp_10 = __aux64__;
        
        if(debug) {
            logger->print() << "|\033[38;5;94m000010\033[0m| SequenceOf ros->ssm.status. size: " << int(__aux64__);
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 1) {
            logger->warning() << "Error: Value in 'ssm.status.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 32) {
            logger->warning() << "Error: Value in 'ssm.status.value' " << (__aux64__) << " exceeds max allowable (32); message dropped.";
            return false;
        }
        
        
        for(int a = 0; a < _if__tmp_10; a++) {
            dsrc_v2_dsrc_msgs::msg::SignalStatus seqof_a;  // SEQUENCE
            ros->ssm.status.elements.push_back(seqof_a);
        
                // SignalStatus  SEQUENCE
                    //  sequenceNumber MsgCount                    
                    //  id             IntersectionReferenceID     
                    //  sigStatus      SignalStatusPackageList     
                    //  regional       SignalStatus_regional     OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_2 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[a].
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000011\033[0m| Reading ext flag from ros->ssm.status.elements[a].: " << int(*_ext_flag_2);
                }
                
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::SignalStatusRegional _tmp_11;
                    ros->ssm.status.elements[a].regional.push_back(_tmp_11);
                
                    if(debug)
                        logger->print() << "|\033[38;5;94m000012\033[0m| ros->ssm.status.elements[a].regional " << tools::green("present");
                }
                
                // Field name: sequence_number
                // Integer
                // UINT8  min(0) max(127) span(128) datatype(UInt8)
                uint8_t* _tmp_12 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_12;
                ros->ssm.status.elements[a].sequence_number.value = __aux64__;
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000013\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sequence_number.value) << 
                                 " ssm.status.elements[a].sequence_number.value: " << static_cast<int>(ros->ssm.status.elements[a].sequence_number.value);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sequence_number.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sequence_number.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                    return false;
                }
                
                // Field name: id
                    // IntersectionReferenceID  SEQUENCE
                        //  region     RoadRegulatorID   OPTIONAL  
                        //  id         IntersectionID      
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_13;
                        ros->ssm.status.elements[a].id.region.push_back(_tmp_13);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000014\033[0m| ros->ssm.status.elements[a].id.region " << tools::green("present");
                    }
                    
                    if(ros->ssm.status.elements[a].id.region.size() != 0) {
                        // Field name: region
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_14 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_14;
                        ros->ssm.status.elements[a].id.region[0].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000015\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].id.region[0].value) << 
                                         " ssm.status.elements[a].id.region[0].value: " << ros->ssm.status.elements[a].id.region[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[a].id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[a].id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    }
                    
                    // Field name: id
                    // Integer
                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                    uint16_t* _tmp_15 = (uint16_t*) buffer; buffer += 2;
                    __aux64__ = *_tmp_15;
                    ros->ssm.status.elements[a].id.id.value = __aux64__;
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000016\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].id.id.value) << 
                                     " ssm.status.elements[a].id.id.value: " << ros->ssm.status.elements[a].id.id.value;
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'ssm.status.elements[a].id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->warning() << "Error: Value in 'ssm.status.elements[a].id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                        return false;
                    }
                
                // Field name: sig_status
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(32) span(32)
                int16_t* _tmp_16 = (int16_t*)buffer;
                buffer += 2;
                __aux64__ = *_tmp_16;
                __aux64__ += 1;     // +min
                
                int _if__tmp_16 = __aux64__;
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000017\033[0m| SequenceOf ros->ssm.status.elements[a].sig_status. size: " << int(__aux64__);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 32) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.value' " << (__aux64__) << " exceeds max allowable (32); message dropped.";
                    return false;
                }
                
                
                for(int b = 0; b < _if__tmp_16; b++) {
                    dsrc_v2_dsrc_msgs::msg::SignalStatusPackage seqof_b;  // SEQUENCE
                    ros->ssm.status.elements[a].sig_status.elements.push_back(seqof_b);
                
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
                        uint8_t* _ext_flag_3 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[a].sig_status.elements[b].
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000018\033[0m| Reading ext flag from ros->ssm.status.elements[a].sig_status.elements[b].: " << int(*_ext_flag_3);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::SignalRequesterInfo _tmp_17;
                            ros->ssm.status.elements[a].sig_status.elements[b].requester.push_back(_tmp_17);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000019\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].requester " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::IntersectionAccessPoint _tmp_18;
                            ros->ssm.status.elements[a].sig_status.elements[b].outbound_on.push_back(_tmp_18);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000020\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].outbound_on " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_19;
                            ros->ssm.status.elements[a].sig_status.elements[b].minute.push_back(_tmp_19);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000021\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].minute " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::DSecond _tmp_20;
                            ros->ssm.status.elements[a].sig_status.elements[b].second.push_back(_tmp_20);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000022\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].second " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::DSecond _tmp_21;
                            ros->ssm.status.elements[a].sig_status.elements[b].duration.push_back(_tmp_21);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000023\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].duration " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::SignalStatusPackageRegional _tmp_22;
                            ros->ssm.status.elements[a].sig_status.elements[b].regional.push_back(_tmp_22);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000024\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].regional " << tools::green("present");
                        }
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester.size() != 0) {
                            // Field name: requester
                                // SignalRequesterInfo  SEQUENCE
                                    //  id             VehicleID            
                                    //  request        RequestID            
                                    //  sequenceNumber MsgCount             
                                    //  role           BasicVehicleRole   OPTIONAL  
                                    //  typeData       RequestorType      OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000025\033[0m| Reading ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].: " << int(*_ext_flag_4);
                                }
                                
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::BasicVehicleRole _tmp_23;
                                    ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role.push_back(_tmp_23);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000026\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::RequestorType _tmp_24;
                                    ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data.push_back(_tmp_24);
                                
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000027\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data " << tools::green("present");
                                }
                                
                                // Field name: id
                                // Choice
                                   // #0  entityID   TemporaryID   
                                   // #1  stationID   StationID   
                                uint8_t _choice_1 = *(buffer++);
                                
                                if(_choice_1 == 0) {
                                    dsrc_v2_dsrc_msgs::msg::TemporaryID _tmp_25;
                                    ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id.push_back(_tmp_25);
                                
                                    // OctetString
                                    // min(4) max(4) span(1)
                                    uint8_t* _tmp_26 = (uint8_t*)buffer;
                                    buffer += 1;
                                    __aux64__ = *_tmp_26 + 4;
                                    
                                    int _if__tmp_26 = __aux64__;
                                    for(int c = 0; c < _if__tmp_26; c++) {
                                        int8_t* __n__ = (int8_t*)buffer++;
                                        ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.entity_id[0].values.push_back(*__n__);
                                    }
                                }
                                else if(_choice_1 == 1)  // CHOICE VehicleID  fieldName(station_id)
                                {
                                    its_container_v2_its_container_msgs::msg::StationID _tmp_27;
                                    ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id.push_back(_tmp_27);
                                
                                    // Integer
                                    // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
                                    uint32_t* _tmp_28 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_28;
                                    ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000028\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value) << 
                                                     " ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value: " << ros->ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].id.station_id[0].value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
                                        return false;
                                    }
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(_choice_1) << ") selected in CHOICE VehicleID in 'ssm.status.elements[a].sig_status.elements[b].requester[0].id'; message dropped.";
                                    return false;
                                }
                                
                                // Field name: request
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_29 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_29;
                                ros->ssm.status.elements[a].sig_status.elements[b].requester[0].request.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000029\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].request.value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].requester[0].request.value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].request.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].request.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].request.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: sequence_number
                                // Integer
                                // UINT8  min(0) max(127) span(128) datatype(UInt8)
                                uint8_t* _tmp_30 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_30;
                                ros->ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000030\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].sequence_number.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                    return false;
                                }
                                
                                if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role.size() != 0) {
                                    // Field name: role
                                    // Enumerated
                                    // INT32  min(0) max(22) span(23) datatype(Int32)
                                    uint8_t* _ext_flag_6 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000031\033[0m| Reading ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].: " << int(*_ext_flag_6);
                                    }
                                    
                                    uint8_t* _tmp_31 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_31;
                                    __aux64__ += 0;
                                    ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 22) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value' " << (__aux64__) << " exceeds max allowable (22); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->print() << "|\033[38;5;94m000032\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value) << 
                                                     " ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].role[0].value);
                                    }
                                }
                                
                                if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data.size() != 0) {
                                    // Field name: type_data
                                        // RequestorType  SEQUENCE
                                            //  role       BasicVehicleRole           
                                            //  subrole    RequestSubRole           OPTIONAL  
                                            //  request    RequestImportanceLevel   OPTIONAL  
                                            //  iso3883    Iso3833VehicleType       OPTIONAL  
                                            //  hpmsType   VehicleType              OPTIONAL  
                                            //  regional   RegionalExtension        OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_7 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000033\033[0m| Reading ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].: " << int(*_ext_flag_7);
                                        }
                                        
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RequestSubRole _tmp_32;
                                            ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole.push_back(_tmp_32);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000034\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RequestImportanceLevel _tmp_33;
                                            ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request.push_back(_tmp_33);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000035\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs::msg::Iso3833VehicleType _tmp_34;
                                            ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883.push_back(_tmp_34);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000036\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883 " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::VehicleType _tmp_35;
                                            ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type.push_back(_tmp_35);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000037\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RegionalExtension _tmp_36;
                                            ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].regional.push_back(_tmp_36);
                                        
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000038\033[0m| ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].regional " << tools::green("present");
                                        }
                                        
                                        // Field name: role
                                        // Enumerated
                                        // INT32  min(0) max(22) span(23) datatype(Int32)
                                        uint8_t* _ext_flag_8 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000039\033[0m| Reading ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.: " << int(*_ext_flag_8);
                                        }
                                        
                                        uint8_t* _tmp_37 = (uint8_t*) buffer++;
                                        __aux64__ = *_tmp_37;
                                        __aux64__ += 0;
                                        ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value = __aux64__;
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 22) {
                                            logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value' " << (__aux64__) << " exceeds max allowable (22); message dropped.";
                                            return false;
                                        }
                                        
                                        
                                        if(debug) {
                                            logger->print() << "|\033[38;5;94m000040\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value) << 
                                                         " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].role.value);
                                        }
                                        
                                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole.size() != 0) {
                                            // Field name: subrole
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _tmp_38 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_38;
                                            __aux64__ += 0;
                                            ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000041\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value) << 
                                                             " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].subrole[0].value);
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request.size() != 0) {
                                            // Field name: request
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _tmp_39 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_39;
                                            __aux64__ += 0;
                                            ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000042\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value) << 
                                                             " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].request[0].value);
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883.size() != 0) {
                                            // Field name: iso3883
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_40 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_40;
                                            ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000043\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value) << 
                                                             " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].iso3883[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type.size() != 0) {
                                            // Field name: hpms_type
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _ext_flag_11 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000044\033[0m| Reading ext flag from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].: " << int(*_ext_flag_11);
                                            }
                                            
                                            uint8_t* _tmp_41 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_41;
                                            __aux64__ += 0;
                                            ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->print() << "|\033[38;5;94m000045\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value) << 
                                                             " ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].hpms_type[0].value);
                                            }
                                        }
                                        
                                        // Field name: regional  // avoided
                                        if(*_ext_flag_7) { // from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0]. 
                                            uint8_t* _tmp_42 = (uint8_t*) buffer++;  // number of extensions
                                            bool _array_1[*_tmp_42];
                                            
                                            if(debug)
                                                logger->print() << "|\033[38;5;94m000046\033[0m| Reading number of exts from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].type_data[0].: " << static_cast<unsigned int>(*_tmp_42);
                                            
                                            // Extensions bytemap
                                            for(int i = 0; i < *_tmp_42; i++)
                                                _array_1[i] = (*buffer++) != 0;
                                            
                                            // Discarding unknown OpenType containers
                                            for(int i = 0; i < *_tmp_42; i++) {
                                                uint16_t* _tmp_43 = (uint16_t*)buffer;  // OpenType length
                                                buffer += 2;
                                            
                                                if(debug) {
                                                }
                                            
                                                for(int i = 0; i < *_tmp_43; i++)
                                                    buffer++;
                                            }
                                            
                                        }
                                }
                                if(*_ext_flag_4) { // from ros->ssm.status.elements[a].sig_status.elements[b].requester[0]. 
                                    uint8_t* _tmp_44 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_2[*_tmp_44];
                                    
                                    if(debug)
                                        logger->print() << "|\033[38;5;94m000047\033[0m| Reading number of exts from ros->ssm.status.elements[a].sig_status.elements[b].requester[0].: " << static_cast<unsigned int>(*_tmp_44);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_44; i++)
                                        _array_2[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_44; i++) {
                                        uint16_t* _tmp_45 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_45; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        // Field name: inbound_on
                        // Choice
                        uint8_t* _ext_flag_12 = (uint8_t*)buffer++; // ext flag
                        
                           // #0  lane   LaneID   
                           // #1  approach   ApproachID   
                           // #2  connection   LaneConnectionID   
                        uint8_t _choice_2 = *(buffer++);
                        
                        if(*_ext_flag_12)
                            _choice_2 += 2 + 1; // Ext addition
                        
                        if(_choice_2 == 0) {
                            dsrc_v2_dsrc_msgs::msg::LaneID _tmp_46;
                            ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.lane.push_back(_tmp_46);
                        
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_47 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_47;
                            ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000048\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.lane[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        else if(_choice_2 == 1)  // CHOICE IntersectionAccessPoint  fieldName(approach)
                        {
                            dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_48;
                            ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.approach.push_back(_tmp_48);
                        
                            // Integer
                            // UINT8  min(0) max(15) span(16) datatype(UInt8)
                            uint8_t* _tmp_49 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_49;
                            ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000049\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                return false;
                            }
                        }
                        else if(_choice_2 == 2)  // CHOICE IntersectionAccessPoint  fieldName(connection)
                        {
                            dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_50;
                            ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.connection.push_back(_tmp_50);
                        
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_51 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_51;
                            ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000050\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].inbound_on.connection[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        else
                        {
                            uint16_t* _tmp_52 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2 + int(*_tmp_52);            // Ignoring opentype data
                        }
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on.size() != 0) {
                            // Field name: outbound_on
                            // Choice
                            uint8_t* _ext_flag_13 = (uint8_t*)buffer++; // ext flag
                            
                               // #0  lane   LaneID   
                               // #1  approach   ApproachID   
                               // #2  connection   LaneConnectionID   
                            uint8_t _choice_3 = *(buffer++);
                            
                            if(*_ext_flag_13)
                                _choice_3 += 2 + 1; // Ext addition
                            
                            if(_choice_3 == 0) {
                                dsrc_v2_dsrc_msgs::msg::LaneID _tmp_53;
                                ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane.push_back(_tmp_53);
                            
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_54 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_54;
                                ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000051\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].lane[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                            }
                            else if(_choice_3 == 1)  // CHOICE IntersectionAccessPoint  fieldName(approach)
                            {
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_55;
                                ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach.push_back(_tmp_55);
                            
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_56 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_56;
                                ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000052\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            else if(_choice_3 == 2)  // CHOICE IntersectionAccessPoint  fieldName(connection)
                            {
                                dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_57;
                                ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection.push_back(_tmp_57);
                            
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_58 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_58;
                                ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000053\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value) << 
                                                 " ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].outbound_on[0].connection[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                            }
                            else
                            {
                                uint16_t* _tmp_59 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2 + int(*_tmp_59);            // Ignoring opentype data
                            }
                        }
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].minute.size() != 0) {
                            // Field name: minute
                            // Integer
                            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
                            uint32_t* _tmp_60 = (uint32_t*) buffer; buffer += 4;
                            __aux64__ = *_tmp_60;
                            ros->ssm.status.elements[a].sig_status.elements[b].minute[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000054\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].minute[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].minute[0].value: " << ros->ssm.status.elements[a].sig_status.elements[b].minute[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].minute[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].minute[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].second.size() != 0) {
                            // Field name: second
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_61 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_61;
                            ros->ssm.status.elements[a].sig_status.elements[b].second[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000055\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].second[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].second[0].value: " << ros->ssm.status.elements[a].sig_status.elements[b].second[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].second[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].second[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->ssm.status.elements[a].sig_status.elements[b].duration.size() != 0) {
                            // Field name: duration
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_62 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_62;
                            ros->ssm.status.elements[a].sig_status.elements[b].duration[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000056\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].duration[0].value) << 
                                             " ssm.status.elements[a].sig_status.elements[b].duration[0].value: " << ros->ssm.status.elements[a].sig_status.elements[b].duration[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].duration[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].duration[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
                        
                        // Field name: status
                        // Enumerated
                        // INT32  min(0) max(7) span(8) datatype(Int32)
                        uint8_t* _ext_flag_14 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[a].sig_status.elements[b].status.
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000057\033[0m| Reading ext flag from ros->ssm.status.elements[a].sig_status.elements[b].status.: " << int(*_ext_flag_14);
                        }
                        
                        uint8_t* _tmp_63 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_63;
                        __aux64__ += 0;
                        ros->ssm.status.elements[a].sig_status.elements[b].status.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].status.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[a].sig_status.elements[b].status.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000058\033[0m| " << tools::getTypeName(ros->ssm.status.elements[a].sig_status.elements[b].status.value) << 
                                         " ssm.status.elements[a].sig_status.elements[b].status.value: " << static_cast<int>(ros->ssm.status.elements[a].sig_status.elements[b].status.value);
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3) { // from ros->ssm.status.elements[a].sig_status.elements[b]. 
                            uint8_t* _tmp_64 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_3[*_tmp_64];
                            
                            if(debug)
                                logger->print() << "|\033[38;5;94m000059\033[0m| Reading number of exts from ros->ssm.status.elements[a].sig_status.elements[b].: " << static_cast<unsigned int>(*_tmp_64);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_64; i++)
                                _array_3[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_64; i++) {
                                uint16_t* _tmp_65 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_65; i++)
                                    buffer++;
                            }
                            
                        }
                }
                
                // Field name: regional  // avoided
                if(*_ext_flag_2) { // from ros->ssm.status.elements[a]. 
                    uint8_t* _tmp_66 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_4[*_tmp_66];
                    
                    if(debug)
                        logger->print() << "|\033[38;5;94m000060\033[0m| Reading number of exts from ros->ssm.status.elements[a].: " << static_cast<unsigned int>(*_tmp_66);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_66; i++)
                        _array_4[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_66; i++) {
                        uint16_t* _tmp_67 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_67; i++)
                            buffer++;
                    }
                    
                }
        }
        
        // Field name: regional  // avoided
        if(*_ext_flag_1) { // from ros->ssm. 
            uint8_t* _tmp_68 = (uint8_t*) buffer++;  // number of extensions
            bool _array_5[*_tmp_68];
            
            if(debug)
                logger->print() << "|\033[38;5;94m000061\033[0m| Reading number of exts from ros->ssm.: " << static_cast<unsigned int>(*_tmp_68);
            
            // Extensions bytemap
            for(int i = 0; i < *_tmp_68; i++)
                _array_5[i] = (*buffer++) != 0;
            
            // Discarding unknown OpenType containers
            for(int i = 0; i < *_tmp_68; i++) {
                uint16_t* _tmp_69 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                if(debug) {
                }
            
                for(int i = 0; i < *_tmp_69; i++)
                    buffer++;
            }
            
        }
	
	        return true;
        }
    }
}