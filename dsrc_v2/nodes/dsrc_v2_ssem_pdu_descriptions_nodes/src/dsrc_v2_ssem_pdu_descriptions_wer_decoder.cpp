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
        uint8_t* _tmp_7428 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_7428;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006671\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
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
        uint8_t* _tmp_7429 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_7429;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006672\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
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
        uint32_t* _tmp_7430 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_7430;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006673\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
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
        uint8_t* _ext_flag_3372 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006674\033[0m| Reading ext flag from ros->ssm.: " << int(*_ext_flag_3372);
        }
        
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_7431;
            ros->ssm.time_stamp.push_back(_tmp_7431);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m006675\033[0m| ros->ssm.time_stamp " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MsgCount _tmp_7432;
            ros->ssm.sequence_number.push_back(_tmp_7432);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m006676\033[0m| ros->ssm.sequence_number " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::SignalStatusMessageRegional _tmp_7433;
            ros->ssm.regional.push_back(_tmp_7433);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m006677\033[0m| ros->ssm.regional " << tools::green("present");
        }
        
        if(ros->ssm.time_stamp.size() != 0) {
            // Field name: time_stamp
            // Integer
            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
            uint32_t* _tmp_7434 = (uint32_t*) buffer; buffer += 4;
            __aux64__ = *_tmp_7434;
            ros->ssm.time_stamp[0].value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m006678\033[0m| " << tools::getTypeName(ros->ssm.time_stamp[0].value) << 
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
        uint16_t* _tmp_7435 = (uint16_t*) buffer; buffer += 2;
        __aux64__ = *_tmp_7435;
        ros->ssm.second.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006679\033[0m| " << tools::getTypeName(ros->ssm.second.value) << 
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
            uint8_t* _tmp_7436 = (uint8_t*) buffer++;
            __aux64__ = *_tmp_7436;
            ros->ssm.sequence_number[0].value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m006680\033[0m| " << tools::getTypeName(ros->ssm.sequence_number[0].value) << 
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
        int16_t* _tmp_7437 = (int16_t*)buffer;
        buffer += 2;
        __aux64__ = *_tmp_7437;
        __aux64__ += 1;     // +min
        
        int _if__tmp_7437 = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006681\033[0m| SequenceOf ros->ssm.status. size: " << int(*_tmp_7437);
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
        
        
        for(int t = 0; t < _if__tmp_7437; t++) {
            dsrc_v2_dsrc_msgs::msg::SignalStatus seqof_t;  // SEQUENCE
            ros->ssm.status.elements.push_back(seqof_t);
        
                // SignalStatus  SEQUENCE
                    //  sequenceNumber MsgCount                    
                    //  id             IntersectionReferenceID     
                    //  sigStatus      SignalStatusPackageList     
                    //  regional       SignalStatus_regional     OPTIONAL  
                    //  ...
                uint8_t* _ext_flag_3373 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[t].
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m006682\033[0m| Reading ext flag from ros->ssm.status.elements[t].: " << int(*_ext_flag_3373);
                }
                
                if(*(buffer++)) { 
                    dsrc_v2_dsrc_msgs::msg::SignalStatusRegional _tmp_7438;
                    ros->ssm.status.elements[t].regional.push_back(_tmp_7438);
                
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006683\033[0m| ros->ssm.status.elements[t].regional " << tools::green("present");
                }
                
                // Field name: sequence_number
                // Integer
                // UINT8  min(0) max(127) span(128) datatype(UInt8)
                uint8_t* _tmp_7439 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_7439;
                ros->ssm.status.elements[t].sequence_number.value = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m006684\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sequence_number.value) << 
                                 " ssm.status.elements[t].sequence_number.value: " << static_cast<int>(ros->ssm.status.elements[t].sequence_number.value);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sequence_number.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sequence_number.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                    return false;
                }
                
                // Field name: id
                    // IntersectionReferenceID  SEQUENCE
                        //  region     RoadRegulatorID   OPTIONAL  
                        //  id         IntersectionID      
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_7440;
                        ros->ssm.status.elements[t].id.region.push_back(_tmp_7440);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006685\033[0m| ros->ssm.status.elements[t].id.region " << tools::green("present");
                    }
                    
                    if(ros->ssm.status.elements[t].id.region.size() != 0) {
                        // Field name: region
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_7441 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_7441;
                        ros->ssm.status.elements[t].id.region[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006686\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].id.region[0].value) << 
                                         " ssm.status.elements[t].id.region[0].value: " << ros->ssm.status.elements[t].id.region[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[t].id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[t].id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    }
                    
                    // Field name: id
                    // Integer
                    // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                    uint16_t* _tmp_7442 = (uint16_t*) buffer; buffer += 2;
                    __aux64__ = *_tmp_7442;
                    ros->ssm.status.elements[t].id.id.value = __aux64__;
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m006687\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].id.id.value) << 
                                     " ssm.status.elements[t].id.id.value: " << ros->ssm.status.elements[t].id.id.value;
                    }
                    
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'ssm.status.elements[t].id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                        logger->warning() << "Error: Value in 'ssm.status.elements[t].id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                        return false;
                    }
                
                // Field name: sig_status
                // SequenceOf
                // Data Type UInt8
                // SEQUENCE_OF  min(1) max(32) span(32)
                int16_t* _tmp_7443 = (int16_t*)buffer;
                buffer += 2;
                __aux64__ = *_tmp_7443;
                __aux64__ += 1;     // +min
                
                int _if__tmp_7443 = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m006688\033[0m| SequenceOf ros->ssm.status.elements[t].sig_status. size: " << int(*_tmp_7443);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 1) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 32) {
                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.value' " << (__aux64__) << " exceeds max allowable (32); message dropped.";
                    return false;
                }
                
                
                for(int u = 0; u < _if__tmp_7443; u++) {
                    dsrc_v2_dsrc_msgs::msg::SignalStatusPackage seqof_u;  // SEQUENCE
                    ros->ssm.status.elements[t].sig_status.elements.push_back(seqof_u);
                
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
                        uint8_t* _ext_flag_3374 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[t].sig_status.elements[u].
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006689\033[0m| Reading ext flag from ros->ssm.status.elements[t].sig_status.elements[u].: " << int(*_ext_flag_3374);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::SignalRequesterInfo _tmp_7444;
                            ros->ssm.status.elements[t].sig_status.elements[u].requester.push_back(_tmp_7444);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006690\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].requester " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::IntersectionAccessPoint _tmp_7445;
                            ros->ssm.status.elements[t].sig_status.elements[u].outbound_on.push_back(_tmp_7445);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006691\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].outbound_on " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_7446;
                            ros->ssm.status.elements[t].sig_status.elements[u].minute.push_back(_tmp_7446);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006692\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].minute " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::DSecond _tmp_7447;
                            ros->ssm.status.elements[t].sig_status.elements[u].second.push_back(_tmp_7447);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006693\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].second " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::DSecond _tmp_7448;
                            ros->ssm.status.elements[t].sig_status.elements[u].duration.push_back(_tmp_7448);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006694\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].duration " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::SignalStatusPackageRegional _tmp_7449;
                            ros->ssm.status.elements[t].sig_status.elements[u].regional.push_back(_tmp_7449);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006695\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].regional " << tools::green("present");
                        }
                        
                        if(ros->ssm.status.elements[t].sig_status.elements[u].requester.size() != 0) {
                            // Field name: requester
                                // SignalRequesterInfo  SEQUENCE
                                    //  id             VehicleID            
                                    //  request        RequestID            
                                    //  sequenceNumber MsgCount             
                                    //  role           BasicVehicleRole   OPTIONAL  
                                    //  typeData       RequestorType      OPTIONAL  
                                    //  ...
                                uint8_t* _ext_flag_3375 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006696\033[0m| Reading ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].: " << int(*_ext_flag_3375);
                                }
                                
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::BasicVehicleRole _tmp_7450;
                                    ros->ssm.status.elements[t].sig_status.elements[u].requester[0].role.push_back(_tmp_7450);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006697\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].requester[0].role " << tools::green("present");
                                }
                                if(*(buffer++)) { 
                                    dsrc_v2_dsrc_msgs::msg::RequestorType _tmp_7451;
                                    ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data.push_back(_tmp_7451);
                                
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006698\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data " << tools::green("present");
                                }
                                
                                // Field name: id
                                // Choice
                                   // #0  entityID   TemporaryID   
                                   // #1  stationID   StationID   
                                uint8_t _choice_244 = *(buffer++);
                                
                                if(_choice_244 == 0) {
                                    dsrc_v2_dsrc_msgs::msg::TemporaryID _tmp_7452;
                                    ros->ssm.status.elements[t].sig_status.elements[u].requester[0].id.entity_id.push_back(_tmp_7452);
                                
                                    // OctetString
                                    // min(4) max(4) span(1)
                                    uint8_t* _tmp_7453 = (uint8_t*)buffer;
                                    buffer += 1;
                                    __aux64__ = *_tmp_7453 + 4;
                                    
                                    int _if__tmp_7453 = __aux64__;
                                    for(int v = 0; v < _if__tmp_7453; v++) {
                                        int8_t* __n__ = (int8_t*)buffer++;
                                        ros->ssm.status.elements[t].sig_status.elements[u].requester[0].id.entity_id[0].values.push_back(*__n__);
                                    }
                                }
                                else if(_choice_244 == 1)  // CHOICE VehicleID  fieldName(station_id)
                                {
                                    its_container_v2_its_container_msgs::msg::StationID _tmp_7454;
                                    ros->ssm.status.elements[t].sig_status.elements[u].requester[0].id.station_id.push_back(_tmp_7454);
                                
                                    // Integer
                                    // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
                                    uint32_t* _tmp_7455 = (uint32_t*) buffer; buffer += 4;
                                    __aux64__ = *_tmp_7455;
                                    ros->ssm.status.elements[t].sig_status.elements[u].requester[0].id.station_id[0].value = __aux64__;
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m006699\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].id.station_id[0].value) << 
                                                     " ssm.status.elements[t].sig_status.elements[u].requester[0].id.station_id[0].value: " << ros->ssm.status.elements[t].sig_status.elements[u].requester[0].id.station_id[0].value;
                                    }
                                    
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].id.station_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].id.station_id[0].value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
                                        return false;
                                    }
                                }
                                else
                                {
                                    logger->warning() << "Wrong option (" << static_cast<int>(_choice_244) << ") selected in CHOICE VehicleID in 'ssm.status.elements[t].sig_status.elements[u].requester[0].id'; message dropped.";
                                    return false;
                                }
                                
                                // Field name: request
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_7456 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_7456;
                                ros->ssm.status.elements[t].sig_status.elements[u].requester[0].request.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006700\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].request.value) << 
                                                 " ssm.status.elements[t].sig_status.elements[u].requester[0].request.value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].request.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].request.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].request.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                                
                                // Field name: sequence_number
                                // Integer
                                // UINT8  min(0) max(127) span(128) datatype(UInt8)
                                uint8_t* _tmp_7457 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_7457;
                                ros->ssm.status.elements[t].sig_status.elements[u].requester[0].sequence_number.value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006701\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].sequence_number.value) << 
                                                 " ssm.status.elements[t].sig_status.elements[u].requester[0].sequence_number.value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].sequence_number.value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].sequence_number.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 127) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].sequence_number.value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                                    return false;
                                }
                                
                                if(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].role.size() != 0) {
                                    // Field name: role
                                    // Enumerated
                                    // INT32  min(0) max(22) span(23) datatype(Int32)
                                    uint8_t* _ext_flag_3377 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].role[0].
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m006702\033[0m| Reading ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].role[0].: " << int(*_ext_flag_3377);
                                    }
                                    
                                    uint8_t* _tmp_7458 = (uint8_t*) buffer++;
                                    __aux64__ = *_tmp_7458;
                                    __aux64__ += 0;
                                    ros->ssm.status.elements[t].sig_status.elements[u].requester[0].role[0].value = __aux64__;
                                    // ******************* MIN validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].role[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                        return false;
                                    }
                                    // ******************* MAX validator *******************
                                    if(VALIDATORS_ENABLED && __aux64__ > 22) {
                                        logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].role[0].value' " << (__aux64__) << " exceeds max allowable (22); message dropped.";
                                        return false;
                                    }
                                    
                                    
                                    if(debug) {
                                        logger->debug() << "|\033[38;5;94m006703\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].role[0].value) << 
                                                     " ssm.status.elements[t].sig_status.elements[u].requester[0].role[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].role[0].value);
                                    }
                                }
                                
                                if(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data.size() != 0) {
                                    // Field name: type_data
                                        // RequestorType  SEQUENCE
                                            //  role       BasicVehicleRole           
                                            //  subrole    RequestSubRole           OPTIONAL  
                                            //  request    RequestImportanceLevel   OPTIONAL  
                                            //  iso3883    Iso3833VehicleType       OPTIONAL  
                                            //  hpmsType   VehicleType              OPTIONAL  
                                            //  regional   RegionalExtension        OPTIONAL  
                                            //  ...
                                        uint8_t* _ext_flag_3378 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m006704\033[0m| Reading ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].: " << int(*_ext_flag_3378);
                                        }
                                        
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RequestSubRole _tmp_7459;
                                            ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].subrole.push_back(_tmp_7459);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006705\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].subrole " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RequestImportanceLevel _tmp_7460;
                                            ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].request.push_back(_tmp_7460);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006706\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].request " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs::msg::Iso3833VehicleType _tmp_7461;
                                            ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].iso3883.push_back(_tmp_7461);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006707\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].iso3883 " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::VehicleType _tmp_7462;
                                            ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type.push_back(_tmp_7462);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006708\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type " << tools::green("present");
                                        }
                                        if(*(buffer++)) { 
                                            dsrc_v2_dsrc_msgs::msg::RegionalExtension _tmp_7463;
                                            ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].regional.push_back(_tmp_7463);
                                        
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006709\033[0m| ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].regional " << tools::green("present");
                                        }
                                        
                                        // Field name: role
                                        // Enumerated
                                        // INT32  min(0) max(22) span(23) datatype(Int32)
                                        uint8_t* _ext_flag_3379 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].role.
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m006710\033[0m| Reading ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].role.: " << int(*_ext_flag_3379);
                                        }
                                        
                                        uint8_t* _tmp_7464 = (uint8_t*) buffer++;
                                        __aux64__ = *_tmp_7464;
                                        __aux64__ += 0;
                                        ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].role.value = __aux64__;
                                        // ******************* MIN validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                            logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].role.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                            return false;
                                        }
                                        // ******************* MAX validator *******************
                                        if(VALIDATORS_ENABLED && __aux64__ > 22) {
                                            logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].role.value' " << (__aux64__) << " exceeds max allowable (22); message dropped.";
                                            return false;
                                        }
                                        
                                        
                                        if(debug) {
                                            logger->debug() << "|\033[38;5;94m006711\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].role.value) << 
                                                         " ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].role.value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].role.value);
                                        }
                                        
                                        if(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].subrole.size() != 0) {
                                            // Field name: subrole
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _tmp_7465 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_7465;
                                            __aux64__ += 0;
                                            ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].subrole[0].value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].subrole[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].subrole[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m006712\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].subrole[0].value) << 
                                                             " ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].subrole[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].subrole[0].value);
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].request.size() != 0) {
                                            // Field name: request
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _tmp_7466 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_7466;
                                            __aux64__ += 0;
                                            ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].request[0].value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].request[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].request[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m006713\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].request[0].value) << 
                                                             " ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].request[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].request[0].value);
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].iso3883.size() != 0) {
                                            // Field name: iso3883
                                            // Integer
                                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                            uint8_t* _tmp_7467 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_7467;
                                            ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].iso3883[0].value = __aux64__;
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m006714\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].iso3883[0].value) << 
                                                             " ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].iso3883[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].iso3883[0].value);
                                            }
                                            
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].iso3883[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].iso3883[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                                return false;
                                            }
                                        }
                                        
                                        if(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type.size() != 0) {
                                            // Field name: hpms_type
                                            // Enumerated
                                            // INT32  min(0) max(15) span(16) datatype(Int32)
                                            uint8_t* _ext_flag_3382 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type[0].
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m006715\033[0m| Reading ext flag from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type[0].: " << int(*_ext_flag_3382);
                                            }
                                            
                                            uint8_t* _tmp_7468 = (uint8_t*) buffer++;
                                            __aux64__ = *_tmp_7468;
                                            __aux64__ += 0;
                                            ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type[0].value = __aux64__;
                                            // ******************* MIN validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                                return false;
                                            }
                                            // ******************* MAX validator *******************
                                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                                return false;
                                            }
                                            
                                            
                                            if(debug) {
                                                logger->debug() << "|\033[38;5;94m006716\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type[0].value) << 
                                                             " ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].hpms_type[0].value);
                                            }
                                        }
                                        
                                        // Field name: regional  // avoided
                                        if(*_ext_flag_3378) { // from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0]. 
                                            uint8_t* _tmp_7469 = (uint8_t*) buffer++;  // number of extensions
                                            bool _array_79[*_tmp_7469];
                                            
                                            if(debug)
                                                logger->debug() << "|\033[38;5;94m006717\033[0m| Reading number of exts from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].type_data[0].: " << static_cast<unsigned int>(*_tmp_7469);
                                            
                                            // Extensions bytemap
                                            for(int i = 0; i < *_tmp_7469; i++)
                                                _array_79[i] = (*buffer++) != 0;
                                            
                                            // Discarding unknown OpenType containers
                                            for(int i = 0; i < *_tmp_7469; i++) {
                                                uint16_t* _tmp_7470 = (uint16_t*)buffer;  // OpenType length
                                                buffer += 2;
                                            
                                                if(debug) {
                                                }
                                            
                                                for(int i = 0; i < *_tmp_7470; i++)
                                                    buffer++;
                                            }
                                            
                                        }
                                }
                                if(*_ext_flag_3375) { // from ros->ssm.status.elements[t].sig_status.elements[u].requester[0]. 
                                    uint8_t* _tmp_7471 = (uint8_t*) buffer++;  // number of extensions
                                    bool _array_80[*_tmp_7471];
                                    
                                    if(debug)
                                        logger->debug() << "|\033[38;5;94m006718\033[0m| Reading number of exts from ros->ssm.status.elements[t].sig_status.elements[u].requester[0].: " << static_cast<unsigned int>(*_tmp_7471);
                                    
                                    // Extensions bytemap
                                    for(int i = 0; i < *_tmp_7471; i++)
                                        _array_80[i] = (*buffer++) != 0;
                                    
                                    // Discarding unknown OpenType containers
                                    for(int i = 0; i < *_tmp_7471; i++) {
                                        uint16_t* _tmp_7472 = (uint16_t*)buffer;  // OpenType length
                                        buffer += 2;
                                    
                                        if(debug) {
                                        }
                                    
                                        for(int i = 0; i < *_tmp_7472; i++)
                                            buffer++;
                                    }
                                    
                                }
                        }
                        
                        // Field name: inbound_on
                        // Choice
                        uint8_t* _ext_flag_3383 = (uint8_t*)buffer++; // ext flag
                        
                           // #0  lane   LaneID   
                           // #1  approach   ApproachID   
                           // #2  connection   LaneConnectionID   
                        uint8_t _choice_245 = *(buffer++);
                        
                        if(*_ext_flag_3383)
                            _choice_245 += 2 + 1; // Ext addition
                        
                        if(_choice_245 == 0) {
                            dsrc_v2_dsrc_msgs::msg::LaneID _tmp_7473;
                            ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.lane.push_back(_tmp_7473);
                        
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_7474 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_7474;
                            ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.lane[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006719\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.lane[0].value) << 
                                             " ssm.status.elements[t].sig_status.elements[u].inbound_on.lane[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.lane[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].inbound_on.lane[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].inbound_on.lane[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        else if(_choice_245 == 1)  // CHOICE IntersectionAccessPoint  fieldName(approach)
                        {
                            dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_7475;
                            ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.approach.push_back(_tmp_7475);
                        
                            // Integer
                            // UINT8  min(0) max(15) span(16) datatype(UInt8)
                            uint8_t* _tmp_7476 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_7476;
                            ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.approach[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006720\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.approach[0].value) << 
                                             " ssm.status.elements[t].sig_status.elements[u].inbound_on.approach[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.approach[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].inbound_on.approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].inbound_on.approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                return false;
                            }
                        }
                        else if(_choice_245 == 2)  // CHOICE IntersectionAccessPoint  fieldName(connection)
                        {
                            dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_7477;
                            ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.connection.push_back(_tmp_7477);
                        
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_7478 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_7478;
                            ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.connection[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006721\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.connection[0].value) << 
                                             " ssm.status.elements[t].sig_status.elements[u].inbound_on.connection[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].inbound_on.connection[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].inbound_on.connection[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].inbound_on.connection[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        else
                        {
                            uint16_t* _tmp_7479 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2 + int(*_tmp_7479);            // Ignoring opentype data
                        }
                        
                        if(ros->ssm.status.elements[t].sig_status.elements[u].outbound_on.size() != 0) {
                            // Field name: outbound_on
                            // Choice
                            uint8_t* _ext_flag_3384 = (uint8_t*)buffer++; // ext flag
                            
                               // #0  lane   LaneID   
                               // #1  approach   ApproachID   
                               // #2  connection   LaneConnectionID   
                            uint8_t _choice_246 = *(buffer++);
                            
                            if(*_ext_flag_3384)
                                _choice_246 += 2 + 1; // Ext addition
                            
                            if(_choice_246 == 0) {
                                dsrc_v2_dsrc_msgs::msg::LaneID _tmp_7480;
                                ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].lane.push_back(_tmp_7480);
                            
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_7481 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_7481;
                                ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].lane[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006722\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].lane[0].value) << 
                                                 " ssm.status.elements[t].sig_status.elements[u].outbound_on[0].lane[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].lane[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].outbound_on[0].lane[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].outbound_on[0].lane[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                            }
                            else if(_choice_246 == 1)  // CHOICE IntersectionAccessPoint  fieldName(approach)
                            {
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_7482;
                                ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].approach.push_back(_tmp_7482);
                            
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_7483 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_7483;
                                ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006723\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].approach[0].value) << 
                                                 " ssm.status.elements[t].sig_status.elements[u].outbound_on[0].approach[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].outbound_on[0].approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].outbound_on[0].approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            else if(_choice_246 == 2)  // CHOICE IntersectionAccessPoint  fieldName(connection)
                            {
                                dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_7484;
                                ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].connection.push_back(_tmp_7484);
                            
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_7485 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_7485;
                                ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].connection[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006724\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].connection[0].value) << 
                                                 " ssm.status.elements[t].sig_status.elements[u].outbound_on[0].connection[0].value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].outbound_on[0].connection[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].outbound_on[0].connection[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].outbound_on[0].connection[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                            }
                            else
                            {
                                uint16_t* _tmp_7486 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2 + int(*_tmp_7486);            // Ignoring opentype data
                            }
                        }
                        
                        if(ros->ssm.status.elements[t].sig_status.elements[u].minute.size() != 0) {
                            // Field name: minute
                            // Integer
                            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
                            uint32_t* _tmp_7487 = (uint32_t*) buffer; buffer += 4;
                            __aux64__ = *_tmp_7487;
                            ros->ssm.status.elements[t].sig_status.elements[u].minute[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006725\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].minute[0].value) << 
                                             " ssm.status.elements[t].sig_status.elements[u].minute[0].value: " << ros->ssm.status.elements[t].sig_status.elements[u].minute[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].minute[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].minute[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->ssm.status.elements[t].sig_status.elements[u].second.size() != 0) {
                            // Field name: second
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_7488 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_7488;
                            ros->ssm.status.elements[t].sig_status.elements[u].second[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006726\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].second[0].value) << 
                                             " ssm.status.elements[t].sig_status.elements[u].second[0].value: " << ros->ssm.status.elements[t].sig_status.elements[u].second[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].second[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].second[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
                        
                        if(ros->ssm.status.elements[t].sig_status.elements[u].duration.size() != 0) {
                            // Field name: duration
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_7489 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_7489;
                            ros->ssm.status.elements[t].sig_status.elements[u].duration[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006727\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].duration[0].value) << 
                                             " ssm.status.elements[t].sig_status.elements[u].duration[0].value: " << ros->ssm.status.elements[t].sig_status.elements[u].duration[0].value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].duration[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].duration[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        }
                        
                        // Field name: status
                        // Enumerated
                        // INT32  min(0) max(7) span(8) datatype(Int32)
                        uint8_t* _ext_flag_3385 = (uint8_t*) buffer++;  // Read ext flag from ros->ssm.status.elements[t].sig_status.elements[u].status.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006728\033[0m| Reading ext flag from ros->ssm.status.elements[t].sig_status.elements[u].status.: " << int(*_ext_flag_3385);
                        }
                        
                        uint8_t* _tmp_7490 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_7490;
                        __aux64__ += 0;
                        ros->ssm.status.elements[t].sig_status.elements[u].status.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].status.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 7) {
                            logger->warning() << "Error: Value in 'ssm.status.elements[t].sig_status.elements[u].status.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006729\033[0m| " << tools::getTypeName(ros->ssm.status.elements[t].sig_status.elements[u].status.value) << 
                                         " ssm.status.elements[t].sig_status.elements[u].status.value: " << static_cast<int>(ros->ssm.status.elements[t].sig_status.elements[u].status.value);
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3374) { // from ros->ssm.status.elements[t].sig_status.elements[u]. 
                            uint8_t* _tmp_7491 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_81[*_tmp_7491];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006730\033[0m| Reading number of exts from ros->ssm.status.elements[t].sig_status.elements[u].: " << static_cast<unsigned int>(*_tmp_7491);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_7491; i++)
                                _array_81[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_7491; i++) {
                                uint16_t* _tmp_7492 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_7492; i++)
                                    buffer++;
                            }
                            
                        }
                }
                
                // Field name: regional  // avoided
                if(*_ext_flag_3373) { // from ros->ssm.status.elements[t]. 
                    uint8_t* _tmp_7493 = (uint8_t*) buffer++;  // number of extensions
                    bool _array_82[*_tmp_7493];
                    
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006731\033[0m| Reading number of exts from ros->ssm.status.elements[t].: " << static_cast<unsigned int>(*_tmp_7493);
                    
                    // Extensions bytemap
                    for(int i = 0; i < *_tmp_7493; i++)
                        _array_82[i] = (*buffer++) != 0;
                    
                    // Discarding unknown OpenType containers
                    for(int i = 0; i < *_tmp_7493; i++) {
                        uint16_t* _tmp_7494 = (uint16_t*)buffer;  // OpenType length
                        buffer += 2;
                    
                        if(debug) {
                        }
                    
                        for(int i = 0; i < *_tmp_7494; i++)
                            buffer++;
                    }
                    
                }
        }
        
        // Field name: regional  // avoided
        if(*_ext_flag_3372) { // from ros->ssm. 
            uint8_t* _tmp_7495 = (uint8_t*) buffer++;  // number of extensions
            bool _array_83[*_tmp_7495];
            
            if(debug)
                logger->debug() << "|\033[38;5;94m006732\033[0m| Reading number of exts from ros->ssm.: " << static_cast<unsigned int>(*_tmp_7495);
            
            // Extensions bytemap
            for(int i = 0; i < *_tmp_7495; i++)
                _array_83[i] = (*buffer++) != 0;
            
            // Discarding unknown OpenType containers
            for(int i = 0; i < *_tmp_7495; i++) {
                uint16_t* _tmp_7496 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                if(debug) {
                }
            
                for(int i = 0; i < *_tmp_7496; i++)
                    buffer++;
            }
            
        }
	
	        return true;
        }
    }
}