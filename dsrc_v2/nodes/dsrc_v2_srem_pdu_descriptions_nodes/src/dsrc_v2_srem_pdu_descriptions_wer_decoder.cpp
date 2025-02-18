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
 * Module: SREM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(103301) srem(3) version2(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#include <dsrc_v2_srem_pdu_descriptions_wer_decoder.h>


/**
 *
 */
namespace wind
{
    namespace decoder_dsrc_v2_srem_pdu_descriptions
    {        
        
        #if WIND_ROS_VERSION == 1
          bool WerDecoder::decode(dsrc_v2_srem_pdu_descriptions_msgs::SREM* ros, const uint8_t *buffer)
        #else
          bool WerDecoder::decode(dsrc_v2_srem_pdu_descriptions_msgs::msg::SREM* ros, const uint8_t *buffer)
        #endif
        {
            const uint8_t *start = buffer;
            int64_t __aux64__;
	
    // SREM  SEQUENCE
        //  header     ItsPduHeader             
        //  srm        SignalRequestMessage     
    
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
    
    // Field name: srm
        // SignalRequestMessage  SEQUENCE
            //  timeStamp      MinuteOfTheYear                 OPTIONAL  
            //  second         DSecond                           
            //  sequenceNumber MsgCount                        OPTIONAL  
            //  requests       SignalRequestList               OPTIONAL  
            //  requestor      RequestorDescription              
            //  regional       SignalRequestMessage_regional   OPTIONAL  
            //  ...
        uint8_t* _ext_flag_1 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.
        
        if(debug) {
            logger->print() << "|\033[38;5;94m000003\033[0m| Reading ext flag from ros->srm.: " << int(*_ext_flag_1);
        }
        
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_4;
            ros->srm.time_stamp.push_back(_tmp_4);
        
            if(debug)
                logger->print() << "|\033[38;5;94m000004\033[0m| ros->srm.time_stamp " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MsgCount _tmp_5;
            ros->srm.sequence_number.push_back(_tmp_5);
        
            if(debug)
                logger->print() << "|\033[38;5;94m000005\033[0m| ros->srm.sequence_number " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::SignalRequestList _tmp_6;
            ros->srm.requests.push_back(_tmp_6);
        
            if(debug)
                logger->print() << "|\033[38;5;94m000006\033[0m| ros->srm.requests " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::SignalRequestMessageRegional _tmp_7;
            ros->srm.regional.push_back(_tmp_7);
        
            if(debug)
                logger->print() << "|\033[38;5;94m000007\033[0m| ros->srm.regional " << tools::green("present");
        }
        
        if(ros->srm.time_stamp.size() != 0) {
            // Field name: time_stamp
            // Integer
            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
            uint32_t* _tmp_8 = (uint32_t*) buffer; buffer += 4;
            __aux64__ = *_tmp_8;
            ros->srm.time_stamp[0].value = __aux64__;
            
            if(debug) {
                logger->print() << "|\033[38;5;94m000008\033[0m| " << tools::getTypeName(ros->srm.time_stamp[0].value) << 
                             " srm.time_stamp[0].value: " << ros->srm.time_stamp[0].value;
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'srm.time_stamp[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->warning() << "Error: Value in 'srm.time_stamp[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                return false;
            }
        }
        
        // Field name: second
        // Integer
        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
        uint16_t* _tmp_9 = (uint16_t*) buffer; buffer += 2;
        __aux64__ = *_tmp_9;
        ros->srm.second.value = __aux64__;
        
        if(debug) {
            logger->print() << "|\033[38;5;94m000009\033[0m| " << tools::getTypeName(ros->srm.second.value) << 
                         " srm.second.value: " << ros->srm.second.value;
        }
        
        // ******************* MIN validator *******************
        if(VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'srm.second.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
            return false;
        }
        // ******************* MAX validator *******************
        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->warning() << "Error: Value in 'srm.second.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
            return false;
        }
        
        if(ros->srm.sequence_number.size() != 0) {
            // Field name: sequence_number
            // Integer
            // UINT8  min(0) max(127) span(128) datatype(UInt8)
            uint8_t* _tmp_10 = (uint8_t*) buffer++;
            __aux64__ = *_tmp_10;
            ros->srm.sequence_number[0].value = __aux64__;
            
            if(debug) {
                logger->print() << "|\033[38;5;94m000010\033[0m| " << tools::getTypeName(ros->srm.sequence_number[0].value) << 
                             " srm.sequence_number[0].value: " << static_cast<int>(ros->srm.sequence_number[0].value);
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'srm.sequence_number[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 127) {
                logger->warning() << "Error: Value in 'srm.sequence_number[0].value' " << (__aux64__) << " exceeds max allowable (127); message dropped.";
                return false;
            }
        }
        
        if(ros->srm.requests.size() != 0) {
            // Field name: requests
            // SequenceOf
            // Data Type UInt8
            // SEQUENCE_OF  min(1) max(32) span(32)
            int16_t* _tmp_11 = (int16_t*)buffer;
            buffer += 2;
            __aux64__ = *_tmp_11;
            __aux64__ += 1;     // +min
            
            int _if__tmp_11 = __aux64__;
            
            if(debug) {
                logger->print() << "|\033[38;5;94m000011\033[0m| SequenceOf ros->srm.requests[0]. size: " << int(__aux64__);
            }
            
            // ******************* MIN validator *******************
            if(VALIDATORS_ENABLED && __aux64__ < 1) {
                logger->warning() << "Error: Value in 'srm.requests[0].value' " << (__aux64__) << " is less than allowable (1); message dropped.";
                return false;
            }
            // ******************* MAX validator *******************
            if(VALIDATORS_ENABLED && __aux64__ > 32) {
                logger->warning() << "Error: Value in 'srm.requests[0].value' " << (__aux64__) << " exceeds max allowable (32); message dropped.";
                return false;
            }
            
            
            for(int a = 0; a < _if__tmp_11; a++) {
                dsrc_v2_dsrc_msgs::msg::SignalRequestPackage seqof_a;  // SEQUENCE
                ros->srm.requests[0].elements.push_back(seqof_a);
            
                    // SignalRequestPackage  SEQUENCE
                        //  request    SignalRequest                     
                        //  minute     MinuteOfTheYear                 OPTIONAL  
                        //  second     DSecond                         OPTIONAL  
                        //  duration   DSecond                         OPTIONAL  
                        //  regional   SignalRequestPackage_regional   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_2 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requests[0].elements[a].
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000012\033[0m| Reading ext flag from ros->srm.requests[0].elements[a].: " << int(*_ext_flag_2);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_12;
                        ros->srm.requests[0].elements[a].minute.push_back(_tmp_12);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000013\033[0m| ros->srm.requests[0].elements[a].minute " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::DSecond _tmp_13;
                        ros->srm.requests[0].elements[a].second.push_back(_tmp_13);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000014\033[0m| ros->srm.requests[0].elements[a].second " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::DSecond _tmp_14;
                        ros->srm.requests[0].elements[a].duration.push_back(_tmp_14);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000015\033[0m| ros->srm.requests[0].elements[a].duration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::SignalRequestPackageRegional _tmp_15;
                        ros->srm.requests[0].elements[a].regional.push_back(_tmp_15);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000016\033[0m| ros->srm.requests[0].elements[a].regional " << tools::green("present");
                    }
                    
                    // Field name: request
                        // SignalRequest  SEQUENCE
                            //  id           IntersectionReferenceID     
                            //  requestID    RequestID                   
                            //  requestType  PriorityRequestType         
                            //  inBoundLane  IntersectionAccessPoint     
                            //  outBoundLane IntersectionAccessPoint   OPTIONAL  
                            //  regional     SignalRequest_regional    OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requests[0].elements[a].request.
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000017\033[0m| Reading ext flag from ros->srm.requests[0].elements[a].request.: " << int(*_ext_flag_3);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::IntersectionAccessPoint _tmp_16;
                            ros->srm.requests[0].elements[a].request.out_bound_lane.push_back(_tmp_16);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000018\033[0m| ros->srm.requests[0].elements[a].request.out_bound_lane " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::SignalRequestRegional _tmp_17;
                            ros->srm.requests[0].elements[a].request.regional.push_back(_tmp_17);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000019\033[0m| ros->srm.requests[0].elements[a].request.regional " << tools::green("present");
                        }
                        
                        // Field name: id
                            // IntersectionReferenceID  SEQUENCE
                                //  region     RoadRegulatorID   OPTIONAL  
                                //  id         IntersectionID      
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_18;
                                ros->srm.requests[0].elements[a].request.id.region.push_back(_tmp_18);
                            
                                if(debug)
                                    logger->print() << "|\033[38;5;94m000020\033[0m| ros->srm.requests[0].elements[a].request.id.region " << tools::green("present");
                            }
                            
                            if(ros->srm.requests[0].elements[a].request.id.region.size() != 0) {
                                // Field name: region
                                // Integer
                                // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                uint16_t* _tmp_19 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_19;
                                ros->srm.requests[0].elements[a].request.id.region[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000021\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.id.region[0].value) << 
                                                 " srm.requests[0].elements[a].request.id.region[0].value: " << ros->srm.requests[0].elements[a].request.id.region[0].value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                    return false;
                                }
                            }
                            
                            // Field name: id
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_20 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_20;
                            ros->srm.requests[0].elements[a].request.id.id.value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000022\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.id.id.value) << 
                                             " srm.requests[0].elements[a].request.id.id.value: " << ros->srm.requests[0].elements[a].request.id.id.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        
                        // Field name: request_id
                        // Integer
                        // UINT8  min(0) max(255) span(256) datatype(UInt8)
                        uint8_t* _tmp_21 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_21;
                        ros->srm.requests[0].elements[a].request.request_id.value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000023\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.request_id.value) << 
                                         " srm.requests[0].elements[a].request.request_id.value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.request_id.value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.request_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.request_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                            return false;
                        }
                        
                        // Field name: request_type
                        // Enumerated
                        // INT32  min(0) max(3) span(4) datatype(Int32)
                        uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requests[0].elements[a].request.request_type.
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000024\033[0m| Reading ext flag from ros->srm.requests[0].elements[a].request.request_type.: " << int(*_ext_flag_4);
                        }
                        
                        uint8_t* _tmp_22 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_22;
                        __aux64__ += 0;
                        ros->srm.requests[0].elements[a].request.request_type.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.request_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.request_type.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000025\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.request_type.value) << 
                                         " srm.requests[0].elements[a].request.request_type.value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.request_type.value);
                        }
                        
                        // Field name: in_bound_lane
                        // Choice
                        uint8_t* _ext_flag_5 = (uint8_t*)buffer++; // ext flag
                        
                           // #0  lane   LaneID   
                           // #1  approach   ApproachID   
                           // #2  connection   LaneConnectionID   
                        uint8_t _choice_1 = *(buffer++);
                        
                        if(*_ext_flag_5)
                            _choice_1 += 2 + 1; // Ext addition
                        
                        if(_choice_1 == 0) {
                            dsrc_v2_dsrc_msgs::msg::LaneID _tmp_23;
                            ros->srm.requests[0].elements[a].request.in_bound_lane.lane.push_back(_tmp_23);
                        
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_24 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_24;
                            ros->srm.requests[0].elements[a].request.in_bound_lane.lane[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000026\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.in_bound_lane.lane[0].value) << 
                                             " srm.requests[0].elements[a].request.in_bound_lane.lane[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.in_bound_lane.lane[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.lane[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.lane[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        else if(_choice_1 == 1)  // CHOICE IntersectionAccessPoint  fieldName(approach)
                        {
                            dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_25;
                            ros->srm.requests[0].elements[a].request.in_bound_lane.approach.push_back(_tmp_25);
                        
                            // Integer
                            // UINT8  min(0) max(15) span(16) datatype(UInt8)
                            uint8_t* _tmp_26 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_26;
                            ros->srm.requests[0].elements[a].request.in_bound_lane.approach[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000027\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.in_bound_lane.approach[0].value) << 
                                             " srm.requests[0].elements[a].request.in_bound_lane.approach[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.in_bound_lane.approach[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                return false;
                            }
                        }
                        else if(_choice_1 == 2)  // CHOICE IntersectionAccessPoint  fieldName(connection)
                        {
                            dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_27;
                            ros->srm.requests[0].elements[a].request.in_bound_lane.connection.push_back(_tmp_27);
                        
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_28 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_28;
                            ros->srm.requests[0].elements[a].request.in_bound_lane.connection[0].value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000028\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.in_bound_lane.connection[0].value) << 
                                             " srm.requests[0].elements[a].request.in_bound_lane.connection[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.in_bound_lane.connection[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.connection[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.connection[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        else
                        {
                            uint16_t* _tmp_29 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2 + int(*_tmp_29);            // Ignoring opentype data
                        }
                        
                        if(ros->srm.requests[0].elements[a].request.out_bound_lane.size() != 0) {
                            // Field name: out_bound_lane
                            // Choice
                            uint8_t* _ext_flag_6 = (uint8_t*)buffer++; // ext flag
                            
                               // #0  lane   LaneID   
                               // #1  approach   ApproachID   
                               // #2  connection   LaneConnectionID   
                            uint8_t _choice_2 = *(buffer++);
                            
                            if(*_ext_flag_6)
                                _choice_2 += 2 + 1; // Ext addition
                            
                            if(_choice_2 == 0) {
                                dsrc_v2_dsrc_msgs::msg::LaneID _tmp_30;
                                ros->srm.requests[0].elements[a].request.out_bound_lane[0].lane.push_back(_tmp_30);
                            
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_31 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_31;
                                ros->srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000029\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value) << 
                                                 " srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                            }
                            else if(_choice_2 == 1)  // CHOICE IntersectionAccessPoint  fieldName(approach)
                            {
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_32;
                                ros->srm.requests[0].elements[a].request.out_bound_lane[0].approach.push_back(_tmp_32);
                            
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_33 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_33;
                                ros->srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000030\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value) << 
                                                 " srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            else if(_choice_2 == 2)  // CHOICE IntersectionAccessPoint  fieldName(connection)
                            {
                                dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_34;
                                ros->srm.requests[0].elements[a].request.out_bound_lane[0].connection.push_back(_tmp_34);
                            
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_35 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_35;
                                ros->srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->print() << "|\033[38;5;94m000031\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value) << 
                                                 " srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                            }
                            else
                            {
                                uint16_t* _tmp_36 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2 + int(*_tmp_36);            // Ignoring opentype data
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3) { // from ros->srm.requests[0].elements[a].request. 
                            uint8_t* _tmp_37 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_1[*_tmp_37];
                            
                            if(debug)
                                logger->print() << "|\033[38;5;94m000032\033[0m| Reading number of exts from ros->srm.requests[0].elements[a].request.: " << static_cast<unsigned int>(*_tmp_37);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_37; i++)
                                _array_1[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_37; i++) {
                                uint16_t* _tmp_38 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_38; i++)
                                    buffer++;
                            }
                            
                        }
                    
                    if(ros->srm.requests[0].elements[a].minute.size() != 0) {
                        // Field name: minute
                        // Integer
                        // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
                        uint32_t* _tmp_39 = (uint32_t*) buffer; buffer += 4;
                        __aux64__ = *_tmp_39;
                        ros->srm.requests[0].elements[a].minute[0].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000033\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].minute[0].value) << 
                                         " srm.requests[0].elements[a].minute[0].value: " << ros->srm.requests[0].elements[a].minute[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].minute[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].minute[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->srm.requests[0].elements[a].second.size() != 0) {
                        // Field name: second
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_40 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_40;
                        ros->srm.requests[0].elements[a].second[0].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000034\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].second[0].value) << 
                                         " srm.requests[0].elements[a].second[0].value: " << ros->srm.requests[0].elements[a].second[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].second[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].second[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->srm.requests[0].elements[a].duration.size() != 0) {
                        // Field name: duration
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_41 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_41;
                        ros->srm.requests[0].elements[a].duration[0].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000035\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].duration[0].value) << 
                                         " srm.requests[0].elements[a].duration[0].value: " << ros->srm.requests[0].elements[a].duration[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].duration[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].duration[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_2) { // from ros->srm.requests[0].elements[a]. 
                        uint8_t* _tmp_42 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_2[*_tmp_42];
                        
                        if(debug)
                            logger->print() << "|\033[38;5;94m000036\033[0m| Reading number of exts from ros->srm.requests[0].elements[a].: " << static_cast<unsigned int>(*_tmp_42);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_42; i++)
                            _array_2[i] = (*buffer++) != 0;
                        
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
        }
        
        // Field name: requestor
            // RequestorDescription  SEQUENCE
                //  id               VehicleID                         
                //  type             RequestorType                   OPTIONAL  
                //  position         RequestorPositionVector         OPTIONAL  
                //  name             DescriptiveName                 OPTIONAL  
                //  routeName        DescriptiveName                 OPTIONAL  
                //  transitStatus    TransitVehicleStatus            OPTIONAL  
                //  transitOccupancy TransitVehicleOccupancy         OPTIONAL  
                //  transitSchedule  DeltaTime                       OPTIONAL  
                //  regional         RequestorDescription_regional   OPTIONAL  
                //  ...
            uint8_t* _ext_flag_7 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.
            
            if(debug) {
                logger->print() << "|\033[38;5;94m000037\033[0m| Reading ext flag from ros->srm.requestor.: " << int(*_ext_flag_7);
            }
            
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::RequestorType _tmp_44;
                ros->srm.requestor.type.push_back(_tmp_44);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000038\033[0m| ros->srm.requestor.type " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::RequestorPositionVector _tmp_45;
                ros->srm.requestor.position.push_back(_tmp_45);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000039\033[0m| ros->srm.requestor.position " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_46;
                ros->srm.requestor.name.push_back(_tmp_46);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000040\033[0m| ros->srm.requestor.name " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_47;
                ros->srm.requestor.route_name.push_back(_tmp_47);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000041\033[0m| ros->srm.requestor.route_name " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::TransitVehicleStatus _tmp_48;
                ros->srm.requestor.transit_status.push_back(_tmp_48);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000042\033[0m| ros->srm.requestor.transit_status " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::TransitVehicleOccupancy _tmp_49;
                ros->srm.requestor.transit_occupancy.push_back(_tmp_49);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000043\033[0m| ros->srm.requestor.transit_occupancy " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::DeltaTime _tmp_50;
                ros->srm.requestor.transit_schedule.push_back(_tmp_50);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000044\033[0m| ros->srm.requestor.transit_schedule " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::RequestorDescriptionRegional _tmp_51;
                ros->srm.requestor.regional.push_back(_tmp_51);
            
                if(debug)
                    logger->print() << "|\033[38;5;94m000045\033[0m| ros->srm.requestor.regional " << tools::green("present");
            }
            
            // Field name: id
            // Choice
               // #0  entityID   TemporaryID   
               // #1  stationID   StationID   
            uint8_t _choice_3 = *(buffer++);
            
            if(_choice_3 == 0) {
                dsrc_v2_dsrc_msgs::msg::TemporaryID _tmp_52;
                ros->srm.requestor.id.entity_id.push_back(_tmp_52);
            
                // OctetString
                // min(4) max(4) span(1)
                uint8_t* _tmp_53 = (uint8_t*)buffer;
                buffer += 1;
                __aux64__ = *_tmp_53 + 4;
                
                int _if__tmp_53 = __aux64__;
                for(int b = 0; b < _if__tmp_53; b++) {
                    int8_t* __n__ = (int8_t*)buffer++;
                    ros->srm.requestor.id.entity_id[0].values.push_back(*__n__);
                }
            }
            else if(_choice_3 == 1)  // CHOICE VehicleID  fieldName(station_id)
            {
                its_container_v2_its_container_msgs::msg::StationID _tmp_54;
                ros->srm.requestor.id.station_id.push_back(_tmp_54);
            
                // Integer
                // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
                uint32_t* _tmp_55 = (uint32_t*) buffer; buffer += 4;
                __aux64__ = *_tmp_55;
                ros->srm.requestor.id.station_id[0].value = __aux64__;
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000046\033[0m| " << tools::getTypeName(ros->srm.requestor.id.station_id[0].value) << 
                                 " srm.requestor.id.station_id[0].value: " << ros->srm.requestor.id.station_id[0].value;
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'srm.requestor.id.station_id[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                    logger->warning() << "Error: Value in 'srm.requestor.id.station_id[0].value' " << (__aux64__) << " exceeds max allowable (4294967295); message dropped.";
                    return false;
                }
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(_choice_3) << ") selected in CHOICE VehicleID in 'srm.requestor.id'; message dropped.";
                return false;
            }
            
            if(ros->srm.requestor.type.size() != 0) {
                // Field name: type
                    // RequestorType  SEQUENCE
                        //  role       BasicVehicleRole           
                        //  subrole    RequestSubRole           OPTIONAL  
                        //  request    RequestImportanceLevel   OPTIONAL  
                        //  iso3883    Iso3833VehicleType       OPTIONAL  
                        //  hpmsType   VehicleType              OPTIONAL  
                        //  regional   RegionalExtension        OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_9 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.type[0].
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000047\033[0m| Reading ext flag from ros->srm.requestor.type[0].: " << int(*_ext_flag_9);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RequestSubRole _tmp_56;
                        ros->srm.requestor.type[0].subrole.push_back(_tmp_56);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000048\033[0m| ros->srm.requestor.type[0].subrole " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RequestImportanceLevel _tmp_57;
                        ros->srm.requestor.type[0].request.push_back(_tmp_57);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000049\033[0m| ros->srm.requestor.type[0].request " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs::msg::Iso3833VehicleType _tmp_58;
                        ros->srm.requestor.type[0].iso3883.push_back(_tmp_58);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000050\033[0m| ros->srm.requestor.type[0].iso3883 " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::VehicleType _tmp_59;
                        ros->srm.requestor.type[0].hpms_type.push_back(_tmp_59);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000051\033[0m| ros->srm.requestor.type[0].hpms_type " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RegionalExtension _tmp_60;
                        ros->srm.requestor.type[0].regional.push_back(_tmp_60);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000052\033[0m| ros->srm.requestor.type[0].regional " << tools::green("present");
                    }
                    
                    // Field name: role
                    // Enumerated
                    // INT32  min(0) max(22) span(23) datatype(Int32)
                    uint8_t* _ext_flag_10 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.type[0].role.
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000053\033[0m| Reading ext flag from ros->srm.requestor.type[0].role.: " << int(*_ext_flag_10);
                    }
                    
                    uint8_t* _tmp_61 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_61;
                    __aux64__ += 0;
                    ros->srm.requestor.type[0].role.value = __aux64__;
                    // ******************* MIN validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'srm.requestor.type[0].role.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                        return false;
                    }
                    // ******************* MAX validator *******************
                    if(VALIDATORS_ENABLED && __aux64__ > 22) {
                        logger->warning() << "Error: Value in 'srm.requestor.type[0].role.value' " << (__aux64__) << " exceeds max allowable (22); message dropped.";
                        return false;
                    }
                    
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000054\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].role.value) << 
                                     " srm.requestor.type[0].role.value: " << static_cast<int>(ros->srm.requestor.type[0].role.value);
                    }
                    
                    if(ros->srm.requestor.type[0].subrole.size() != 0) {
                        // Field name: subrole
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_62 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_62;
                        __aux64__ += 0;
                        ros->srm.requestor.type[0].subrole[0].value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].subrole[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].subrole[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000055\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].subrole[0].value) << 
                                         " srm.requestor.type[0].subrole[0].value: " << static_cast<int>(ros->srm.requestor.type[0].subrole[0].value);
                        }
                    }
                    
                    if(ros->srm.requestor.type[0].request.size() != 0) {
                        // Field name: request
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_63 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_63;
                        __aux64__ += 0;
                        ros->srm.requestor.type[0].request[0].value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].request[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].request[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000056\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].request[0].value) << 
                                         " srm.requestor.type[0].request[0].value: " << static_cast<int>(ros->srm.requestor.type[0].request[0].value);
                        }
                    }
                    
                    if(ros->srm.requestor.type[0].iso3883.size() != 0) {
                        // Field name: iso3883
                        // Integer
                        // UINT8  min(0) max(255) span(256) datatype(UInt8)
                        uint8_t* _tmp_64 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_64;
                        ros->srm.requestor.type[0].iso3883[0].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000057\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].iso3883[0].value) << 
                                         " srm.requestor.type[0].iso3883[0].value: " << static_cast<int>(ros->srm.requestor.type[0].iso3883[0].value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].iso3883[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].iso3883[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->srm.requestor.type[0].hpms_type.size() != 0) {
                        // Field name: hpms_type
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _ext_flag_13 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.type[0].hpms_type[0].
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000058\033[0m| Reading ext flag from ros->srm.requestor.type[0].hpms_type[0].: " << int(*_ext_flag_13);
                        }
                        
                        uint8_t* _tmp_65 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_65;
                        __aux64__ += 0;
                        ros->srm.requestor.type[0].hpms_type[0].value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].hpms_type[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].hpms_type[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000059\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].hpms_type[0].value) << 
                                         " srm.requestor.type[0].hpms_type[0].value: " << static_cast<int>(ros->srm.requestor.type[0].hpms_type[0].value);
                        }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_9) { // from ros->srm.requestor.type[0]. 
                        uint8_t* _tmp_66 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_3[*_tmp_66];
                        
                        if(debug)
                            logger->print() << "|\033[38;5;94m000060\033[0m| Reading number of exts from ros->srm.requestor.type[0].: " << static_cast<unsigned int>(*_tmp_66);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_66; i++)
                            _array_3[i] = (*buffer++) != 0;
                        
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
            
            if(ros->srm.requestor.position.size() != 0) {
                // Field name: position
                    // RequestorPositionVector  SEQUENCE
                        //  position   Position3D               
                        //  heading    Angle                  OPTIONAL  
                        //  speed      TransmissionAndSpeed   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_14 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.position[0].
                    
                    if(debug) {
                        logger->print() << "|\033[38;5;94m000061\033[0m| Reading ext flag from ros->srm.requestor.position[0].: " << int(*_ext_flag_14);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::Angle _tmp_68;
                        ros->srm.requestor.position[0].heading.push_back(_tmp_68);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000062\033[0m| ros->srm.requestor.position[0].heading " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::TransmissionAndSpeed _tmp_69;
                        ros->srm.requestor.position[0].speed.push_back(_tmp_69);
                    
                        if(debug)
                            logger->print() << "|\033[38;5;94m000063\033[0m| ros->srm.requestor.position[0].speed " << tools::green("present");
                    }
                    
                    // Field name: position
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_15 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.position[0].position.
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000064\033[0m| Reading ext flag from ros->srm.requestor.position[0].position.: " << int(*_ext_flag_15);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Elevation _tmp_70;
                            ros->srm.requestor.position[0].position.elevation.push_back(_tmp_70);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000065\033[0m| ros->srm.requestor.position[0].position.elevation " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Position3DRegional _tmp_71;
                            ros->srm.requestor.position[0].position.regional.push_back(_tmp_71);
                        
                            if(debug)
                                logger->print() << "|\033[38;5;94m000066\033[0m| ros->srm.requestor.position[0].position.regional " << tools::green("present");
                        }
                        
                        // Field name: lat
                        // Real
                        // Double
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_72 = (uint32_t*) buffer; buffer += 4;
                        ros->srm.requestor.position[0].position.lat.value = *_tmp_72;
                        ros->srm.requestor.position[0].position.lat.value += -900000000;
                        __aux64__ = ros->srm.requestor.position[0].position.lat.value;
                        ros->srm.requestor.position[0].position.lat.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].position.lat.value' " << (__aux64__) << " is less than allowable (-900000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].position.lat.value' " << (__aux64__) << " exceeds max allowable (900000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000067\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.lat.value) << " srm.requestor.position[0].position.lat: " <<
                                         ros->srm.requestor.position[0].position.lat.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longint
                        // Real
                        // Double
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_73 = (uint32_t*) buffer; buffer += 4;
                        ros->srm.requestor.position[0].position.longint.value = *_tmp_73;
                        ros->srm.requestor.position[0].position.longint.value += -1800000000;
                        __aux64__ = ros->srm.requestor.position[0].position.longint.value;
                        ros->srm.requestor.position[0].position.longint.value /= 1.0E7;
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].position.longint.value' " << (__aux64__) << " is less than allowable (-1800000000); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].position.longint.value' " << (__aux64__) << " exceeds max allowable (1800000001); message dropped.";
                            return false;
                        }
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000068\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.longint.value) << " srm.requestor.position[0].position.longint: " <<
                                         ros->srm.requestor.position[0].position.longint.value << " (" << __aux64__ << ")";
                        }
                        
                        if(ros->srm.requestor.position[0].position.elevation.size() != 0) {
                            // Field name: elevation
                            // Real
                            // Float
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_74 = (uint16_t*) buffer; buffer += 2;
                            ros->srm.requestor.position[0].position.elevation[0].value = *_tmp_74;
                            ros->srm.requestor.position[0].position.elevation[0].value += -4096;
                            __aux64__ = ros->srm.requestor.position[0].position.elevation[0].value;
                            ros->srm.requestor.position[0].position.elevation[0].value /= 10.0;
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].position.elevation[0].value' " << (__aux64__) << " is less than allowable (-4096); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].position.elevation[0].value' " << (__aux64__) << " exceeds max allowable (61439); message dropped.";
                                return false;
                            }
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000069\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.elevation[0].value) << " srm.requestor.position[0].position.elevation[0]: " <<
                                             ros->srm.requestor.position[0].position.elevation[0].value << " (" << __aux64__ << ")";
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_15) { // from ros->srm.requestor.position[0].position. 
                            uint8_t* _tmp_75 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_4[*_tmp_75];
                            
                            if(debug)
                                logger->print() << "|\033[38;5;94m000070\033[0m| Reading number of exts from ros->srm.requestor.position[0].position.: " << static_cast<unsigned int>(*_tmp_75);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_75; i++)
                                _array_4[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_75; i++) {
                                uint16_t* _tmp_76 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_76; i++)
                                    buffer++;
                            }
                            
                        }
                    
                    if(ros->srm.requestor.position[0].heading.size() != 0) {
                        // Field name: heading
                        // Integer
                        // UINT16  min(0) max(28800) span(28801) datatype(UInt16)
                        uint16_t* _tmp_77 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_77;
                        ros->srm.requestor.position[0].heading[0].value = __aux64__;
                        
                        if(debug) {
                            logger->print() << "|\033[38;5;94m000071\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].heading[0].value) << 
                                         " srm.requestor.position[0].heading[0].value: " << ros->srm.requestor.position[0].heading[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].heading[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 28800) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].heading[0].value' " << (__aux64__) << " exceeds max allowable (28800); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->srm.requestor.position[0].speed.size() != 0) {
                        // Field name: speed
                            // TransmissionAndSpeed  SEQUENCE
                                //  transmisson TransmissionState     
                                //  speed       Velocity              
                            
                            // Field name: transmisson
                            // Enumerated
                            // INT32  min(0) max(7) span(8) datatype(Int32)
                            uint8_t* _tmp_78 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_78;
                            __aux64__ += 0;
                            ros->srm.requestor.position[0].speed[0].transmisson.value = __aux64__;
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].speed[0].transmisson.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].speed[0].transmisson.value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                                return false;
                            }
                            
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000072\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].speed[0].transmisson.value) << 
                                             " srm.requestor.position[0].speed[0].transmisson.value: " << static_cast<int>(ros->srm.requestor.position[0].speed[0].transmisson.value);
                            }
                            
                            // Field name: speed
                            // Integer
                            // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                            uint16_t* _tmp_79 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_79;
                            ros->srm.requestor.position[0].speed[0].speed.value = __aux64__;
                            
                            if(debug) {
                                logger->print() << "|\033[38;5;94m000073\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].speed[0].speed.value) << 
                                             " srm.requestor.position[0].speed[0].speed.value: " << ros->srm.requestor.position[0].speed[0].speed.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].speed[0].speed.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 8191) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].speed[0].speed.value' " << (__aux64__) << " exceeds max allowable (8191); message dropped.";
                                return false;
                            }
                    }
                    if(*_ext_flag_14) { // from ros->srm.requestor.position[0]. 
                        uint8_t* _tmp_80 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_5[*_tmp_80];
                        
                        if(debug)
                            logger->print() << "|\033[38;5;94m000074\033[0m| Reading number of exts from ros->srm.requestor.position[0].: " << static_cast<unsigned int>(*_tmp_80);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_80; i++)
                            _array_5[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_80; i++) {
                            uint16_t* _tmp_81 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_81; i++)
                                buffer++;
                        }
                        
                    }
            }
            
            if(ros->srm.requestor.name.size() != 0) {
                // Field name: name
                // Text
                
                // TEXT  min(1) max(63) span(63)
                uint8_t* _tmp_82 = (uint8_t*)buffer;
                __aux64__ = *_tmp_82 + 1;
                buffer += 1;
                
                int _if__tmp_82 = __aux64__;
                for(int c = 0; c < _if__tmp_82; c++) {  // DescriptiveName
                    char* __tmp__ = (char*)buffer++;
                    ros->srm.requestor.name[0].value += *__tmp__;
                }
            }
            
            if(ros->srm.requestor.route_name.size() != 0) {
                // Field name: route_name
                // Text
                
                // TEXT  min(1) max(63) span(63)
                uint8_t* _tmp_83 = (uint8_t*)buffer;
                __aux64__ = *_tmp_83 + 1;
                buffer += 1;
                
                int _if__tmp_83 = __aux64__;
                for(int d = 0; d < _if__tmp_83; d++) {  // DescriptiveName
                    char* __tmp__ = (char*)buffer++;
                    ros->srm.requestor.route_name[0].value += *__tmp__;
                }
            }
            
            if(ros->srm.requestor.transit_status.size() != 0) {
                // Field name: transit_status
                // BitString
                // BIT_STRING  min(8) max(8) span(1)
                uint8_t* _tmp_84 = (uint8_t*)buffer;
                __aux64__ = *_tmp_84 + 8;
                buffer += 1;
                
                if(debug)
                    logger->print() << "|\033[38;5;94m000075\033[0m| srm.requestor.transit_status[0].value: " << __aux64__;
                
                int _if__tmp_84 = __aux64__;
                for(int e = 0; e < _if__tmp_84; e++) {
                    uint8_t __c__;
                    ros->srm.requestor.transit_status[0].values.push_back(__c__);
                    uint8_t* __b__ = (uint8_t*)buffer++;
                    ros->srm.requestor.transit_status[0].values[e] = (*__b__ == 1);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 8) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_status[0].value' " << (__aux64__) << " is less than allowable (8); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 8) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_status[0].value' " << (__aux64__) << " exceeds max allowable (8); message dropped.";
                    return false;
                }
            }
            
            if(ros->srm.requestor.transit_occupancy.size() != 0) {
                // Field name: transit_occupancy
                // Enumerated
                // INT32  min(0) max(7) span(8) datatype(Int32)
                uint8_t* _tmp_85 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_85;
                __aux64__ += 0;
                ros->srm.requestor.transit_occupancy[0].value = __aux64__;
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_occupancy[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 7) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_occupancy[0].value' " << (__aux64__) << " exceeds max allowable (7); message dropped.";
                    return false;
                }
                
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000076\033[0m| " << tools::getTypeName(ros->srm.requestor.transit_occupancy[0].value) << 
                                 " srm.requestor.transit_occupancy[0].value: " << static_cast<int>(ros->srm.requestor.transit_occupancy[0].value);
                }
            }
            
            if(ros->srm.requestor.transit_schedule.size() != 0) {
                // Field name: transit_schedule
                // Integer
                // INT8  min(-122) max(121) span(244) datatype(Int8)
                uint8_t* _tmp_86 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_86;
                __aux64__ += -122;
                ros->srm.requestor.transit_schedule[0].value = __aux64__;
                
                if(debug) {
                    logger->print() << "|\033[38;5;94m000077\033[0m| " << tools::getTypeName(ros->srm.requestor.transit_schedule[0].value) << 
                                 " srm.requestor.transit_schedule[0].value: " << static_cast<int>(ros->srm.requestor.transit_schedule[0].value);
                }
                
                // ******************* MIN validator *******************
                if(VALIDATORS_ENABLED && __aux64__ < -122) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_schedule[0].value' " << (__aux64__) << " is less than allowable (-122); message dropped.";
                    return false;
                }
                // ******************* MAX validator *******************
                if(VALIDATORS_ENABLED && __aux64__ > 121) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_schedule[0].value' " << (__aux64__) << " exceeds max allowable (121); message dropped.";
                    return false;
                }
            }
            
            // Field name: regional  // avoided
            if(*_ext_flag_7) { // from ros->srm.requestor. 
                uint8_t* _tmp_87 = (uint8_t*) buffer++;  // number of extensions
                bool _array_6[*_tmp_87];
                
                if(debug)
                    logger->print() << "|\033[38;5;94m000078\033[0m| Reading number of exts from ros->srm.requestor.: " << static_cast<unsigned int>(*_tmp_87);
                
                // Extensions bytemap
                for(int i = 0; i < *_tmp_87; i++)
                    _array_6[i] = (*buffer++) != 0;
                
                // Discarding unknown OpenType containers
                for(int i = 0; i < *_tmp_87; i++) {
                    uint16_t* _tmp_88 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                    if(debug) {
                    }
                
                    for(int i = 0; i < *_tmp_88; i++)
                        buffer++;
                }
                
            }
        
        // Field name: regional  // avoided
        if(*_ext_flag_1) { // from ros->srm. 
            uint8_t* _tmp_89 = (uint8_t*) buffer++;  // number of extensions
            bool _array_7[*_tmp_89];
            
            if(debug)
                logger->print() << "|\033[38;5;94m000079\033[0m| Reading number of exts from ros->srm.: " << static_cast<unsigned int>(*_tmp_89);
            
            // Extensions bytemap
            for(int i = 0; i < *_tmp_89; i++)
                _array_7[i] = (*buffer++) != 0;
            
            // Discarding unknown OpenType containers
            for(int i = 0; i < *_tmp_89; i++) {
                uint16_t* _tmp_90 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                if(debug) {
                }
            
                for(int i = 0; i < *_tmp_90; i++)
                    buffer++;
            }
            
        }
	
	        return true;
        }
    }
}