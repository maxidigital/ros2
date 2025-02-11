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
        uint8_t* _tmp_7573 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_7573;
        ros->hheader.protocol_version.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006807\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
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
        uint8_t* _tmp_7574 = (uint8_t*) buffer++;
        __aux64__ = *_tmp_7574;
        ros->hheader.message_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006808\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
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
        uint32_t* _tmp_7575 = (uint32_t*) buffer; buffer += 4;
        __aux64__ = *_tmp_7575;
        ros->hheader.station_id.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006809\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
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
        uint8_t* _ext_flag_3429 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006810\033[0m| Reading ext flag from ros->srm.: " << int(*_ext_flag_3429);
        }
        
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_7576;
            ros->srm.time_stamp.push_back(_tmp_7576);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m006811\033[0m| ros->srm.time_stamp " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::MsgCount _tmp_7577;
            ros->srm.sequence_number.push_back(_tmp_7577);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m006812\033[0m| ros->srm.sequence_number " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::SignalRequestList _tmp_7578;
            ros->srm.requests.push_back(_tmp_7578);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m006813\033[0m| ros->srm.requests " << tools::green("present");
        }
        if(*(buffer++)) { 
            dsrc_v2_dsrc_msgs::msg::SignalRequestMessageRegional _tmp_7579;
            ros->srm.regional.push_back(_tmp_7579);
        
            if(debug)
                logger->debug() << "|\033[38;5;94m006814\033[0m| ros->srm.regional " << tools::green("present");
        }
        
        if(ros->srm.time_stamp.size() != 0) {
            // Field name: time_stamp
            // Integer
            // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
            uint32_t* _tmp_7580 = (uint32_t*) buffer; buffer += 4;
            __aux64__ = *_tmp_7580;
            ros->srm.time_stamp[0].value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m006815\033[0m| " << tools::getTypeName(ros->srm.time_stamp[0].value) << 
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
        uint16_t* _tmp_7581 = (uint16_t*) buffer; buffer += 2;
        __aux64__ = *_tmp_7581;
        ros->srm.second.value = __aux64__;
        
        if(debug) {
            logger->debug() << "|\033[38;5;94m006816\033[0m| " << tools::getTypeName(ros->srm.second.value) << 
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
            uint8_t* _tmp_7582 = (uint8_t*) buffer++;
            __aux64__ = *_tmp_7582;
            ros->srm.sequence_number[0].value = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m006817\033[0m| " << tools::getTypeName(ros->srm.sequence_number[0].value) << 
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
            int16_t* _tmp_7583 = (int16_t*)buffer;
            buffer += 2;
            __aux64__ = *_tmp_7583;
            __aux64__ += 1;     // +min
            
            int _if__tmp_7583 = __aux64__;
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m006818\033[0m| SequenceOf ros->srm.requests[0]. size: " << int(*_tmp_7583);
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
            
            
            for(int b = 0; b < _if__tmp_7583; b++) {
                dsrc_v2_dsrc_msgs::msg::SignalRequestPackage seqof_b;  // SEQUENCE
                ros->srm.requests[0].elements.push_back(seqof_b);
            
                    // SignalRequestPackage  SEQUENCE
                        //  request    SignalRequest                     
                        //  minute     MinuteOfTheYear                 OPTIONAL  
                        //  second     DSecond                         OPTIONAL  
                        //  duration   DSecond                         OPTIONAL  
                        //  regional   SignalRequestPackage_regional   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_3430 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requests[0].elements[b].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m006819\033[0m| Reading ext flag from ros->srm.requests[0].elements[b].: " << int(*_ext_flag_3430);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::MinuteOfTheYear _tmp_7584;
                        ros->srm.requests[0].elements[b].minute.push_back(_tmp_7584);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006820\033[0m| ros->srm.requests[0].elements[b].minute " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::DSecond _tmp_7585;
                        ros->srm.requests[0].elements[b].second.push_back(_tmp_7585);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006821\033[0m| ros->srm.requests[0].elements[b].second " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::DSecond _tmp_7586;
                        ros->srm.requests[0].elements[b].duration.push_back(_tmp_7586);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006822\033[0m| ros->srm.requests[0].elements[b].duration " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::SignalRequestPackageRegional _tmp_7587;
                        ros->srm.requests[0].elements[b].regional.push_back(_tmp_7587);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006823\033[0m| ros->srm.requests[0].elements[b].regional " << tools::green("present");
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
                        uint8_t* _ext_flag_3431 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requests[0].elements[b].request.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006824\033[0m| Reading ext flag from ros->srm.requests[0].elements[b].request.: " << int(*_ext_flag_3431);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::IntersectionAccessPoint _tmp_7588;
                            ros->srm.requests[0].elements[b].request.out_bound_lane.push_back(_tmp_7588);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006825\033[0m| ros->srm.requests[0].elements[b].request.out_bound_lane " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::SignalRequestRegional _tmp_7589;
                            ros->srm.requests[0].elements[b].request.regional.push_back(_tmp_7589);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006826\033[0m| ros->srm.requests[0].elements[b].request.regional " << tools::green("present");
                        }
                        
                        // Field name: id
                            // IntersectionReferenceID  SEQUENCE
                                //  region     RoadRegulatorID   OPTIONAL  
                                //  id         IntersectionID      
                            if(*(buffer++)) { 
                                dsrc_v2_dsrc_msgs::msg::RoadRegulatorID _tmp_7590;
                                ros->srm.requests[0].elements[b].request.id.region.push_back(_tmp_7590);
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006827\033[0m| ros->srm.requests[0].elements[b].request.id.region " << tools::green("present");
                            }
                            
                            if(ros->srm.requests[0].elements[b].request.id.region.size() != 0) {
                                // Field name: region
                                // Integer
                                // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                                uint16_t* _tmp_7591 = (uint16_t*) buffer; buffer += 2;
                                __aux64__ = *_tmp_7591;
                                ros->srm.requests[0].elements[b].request.id.region[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006828\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.id.region[0].value) << 
                                                 " srm.requests[0].elements[b].request.id.region[0].value: " << ros->srm.requests[0].elements[b].request.id.region[0].value;
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.id.region[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.id.region[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                    return false;
                                }
                            }
                            
                            // Field name: id
                            // Integer
                            // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                            uint16_t* _tmp_7592 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_7592;
                            ros->srm.requests[0].elements[b].request.id.id.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006829\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.id.id.value) << 
                                             " srm.requests[0].elements[b].request.id.id.value: " << ros->srm.requests[0].elements[b].request.id.id.value;
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.id.id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.id.id.value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                                return false;
                            }
                        
                        // Field name: request_id
                        // Integer
                        // UINT8  min(0) max(255) span(256) datatype(UInt8)
                        uint8_t* _tmp_7593 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_7593;
                        ros->srm.requests[0].elements[b].request.request_id.value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006830\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.request_id.value) << 
                                         " srm.requests[0].elements[b].request.request_id.value: " << static_cast<int>(ros->srm.requests[0].elements[b].request.request_id.value);
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.request_id.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.request_id.value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                            return false;
                        }
                        
                        // Field name: request_type
                        // Enumerated
                        // INT32  min(0) max(3) span(4) datatype(Int32)
                        uint8_t* _ext_flag_3432 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requests[0].elements[b].request.request_type.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006831\033[0m| Reading ext flag from ros->srm.requests[0].elements[b].request.request_type.: " << int(*_ext_flag_3432);
                        }
                        
                        uint8_t* _tmp_7594 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_7594;
                        __aux64__ += 0;
                        ros->srm.requests[0].elements[b].request.request_type.value = __aux64__;
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.request_type.value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 3) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.request_type.value' " << (__aux64__) << " exceeds max allowable (3); message dropped.";
                            return false;
                        }
                        
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006832\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.request_type.value) << 
                                         " srm.requests[0].elements[b].request.request_type.value: " << static_cast<int>(ros->srm.requests[0].elements[b].request.request_type.value);
                        }
                        
                        // Field name: in_bound_lane
                        // Choice
                        uint8_t* _ext_flag_3433 = (uint8_t*)buffer++; // ext flag
                        
                           // #0  lane   LaneID   
                           // #1  approach   ApproachID   
                           // #2  connection   LaneConnectionID   
                        uint8_t _choice_250 = *(buffer++);
                        
                        if(*_ext_flag_3433)
                            _choice_250 += 2 + 1; // Ext addition
                        
                        if(_choice_250 == 0) {
                            dsrc_v2_dsrc_msgs::msg::LaneID _tmp_7595;
                            ros->srm.requests[0].elements[b].request.in_bound_lane.lane.push_back(_tmp_7595);
                        
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_7596 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_7596;
                            ros->srm.requests[0].elements[b].request.in_bound_lane.lane[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006833\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.in_bound_lane.lane[0].value) << 
                                             " srm.requests[0].elements[b].request.in_bound_lane.lane[0].value: " << static_cast<int>(ros->srm.requests[0].elements[b].request.in_bound_lane.lane[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.in_bound_lane.lane[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.in_bound_lane.lane[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        else if(_choice_250 == 1)  // CHOICE IntersectionAccessPoint  fieldName(approach)
                        {
                            dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_7597;
                            ros->srm.requests[0].elements[b].request.in_bound_lane.approach.push_back(_tmp_7597);
                        
                            // Integer
                            // UINT8  min(0) max(15) span(16) datatype(UInt8)
                            uint8_t* _tmp_7598 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_7598;
                            ros->srm.requests[0].elements[b].request.in_bound_lane.approach[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006834\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.in_bound_lane.approach[0].value) << 
                                             " srm.requests[0].elements[b].request.in_bound_lane.approach[0].value: " << static_cast<int>(ros->srm.requests[0].elements[b].request.in_bound_lane.approach[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.in_bound_lane.approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.in_bound_lane.approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                return false;
                            }
                        }
                        else if(_choice_250 == 2)  // CHOICE IntersectionAccessPoint  fieldName(connection)
                        {
                            dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_7599;
                            ros->srm.requests[0].elements[b].request.in_bound_lane.connection.push_back(_tmp_7599);
                        
                            // Integer
                            // UINT8  min(0) max(255) span(256) datatype(UInt8)
                            uint8_t* _tmp_7600 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_7600;
                            ros->srm.requests[0].elements[b].request.in_bound_lane.connection[0].value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006835\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.in_bound_lane.connection[0].value) << 
                                             " srm.requests[0].elements[b].request.in_bound_lane.connection[0].value: " << static_cast<int>(ros->srm.requests[0].elements[b].request.in_bound_lane.connection[0].value);
                            }
                            
                            // ******************* MIN validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.in_bound_lane.connection[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                return false;
                            }
                            // ******************* MAX validator *******************
                            if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.in_bound_lane.connection[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                return false;
                            }
                        }
                        else
                        {
                            uint16_t* _tmp_7601 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2 + int(*_tmp_7601);            // Ignoring opentype data
                        }
                        
                        if(ros->srm.requests[0].elements[b].request.out_bound_lane.size() != 0) {
                            // Field name: out_bound_lane
                            // Choice
                            uint8_t* _ext_flag_3434 = (uint8_t*)buffer++; // ext flag
                            
                               // #0  lane   LaneID   
                               // #1  approach   ApproachID   
                               // #2  connection   LaneConnectionID   
                            uint8_t _choice_251 = *(buffer++);
                            
                            if(*_ext_flag_3434)
                                _choice_251 += 2 + 1; // Ext addition
                            
                            if(_choice_251 == 0) {
                                dsrc_v2_dsrc_msgs::msg::LaneID _tmp_7602;
                                ros->srm.requests[0].elements[b].request.out_bound_lane[0].lane.push_back(_tmp_7602);
                            
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_7603 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_7603;
                                ros->srm.requests[0].elements[b].request.out_bound_lane[0].lane[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006836\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.out_bound_lane[0].lane[0].value) << 
                                                 " srm.requests[0].elements[b].request.out_bound_lane[0].lane[0].value: " << static_cast<int>(ros->srm.requests[0].elements[b].request.out_bound_lane[0].lane[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.out_bound_lane[0].lane[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.out_bound_lane[0].lane[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                            }
                            else if(_choice_251 == 1)  // CHOICE IntersectionAccessPoint  fieldName(approach)
                            {
                                dsrc_v2_dsrc_msgs::msg::ApproachID _tmp_7604;
                                ros->srm.requests[0].elements[b].request.out_bound_lane[0].approach.push_back(_tmp_7604);
                            
                                // Integer
                                // UINT8  min(0) max(15) span(16) datatype(UInt8)
                                uint8_t* _tmp_7605 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_7605;
                                ros->srm.requests[0].elements[b].request.out_bound_lane[0].approach[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006837\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.out_bound_lane[0].approach[0].value) << 
                                                 " srm.requests[0].elements[b].request.out_bound_lane[0].approach[0].value: " << static_cast<int>(ros->srm.requests[0].elements[b].request.out_bound_lane[0].approach[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.out_bound_lane[0].approach[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.out_bound_lane[0].approach[0].value' " << (__aux64__) << " exceeds max allowable (15); message dropped.";
                                    return false;
                                }
                            }
                            else if(_choice_251 == 2)  // CHOICE IntersectionAccessPoint  fieldName(connection)
                            {
                                dsrc_v2_dsrc_msgs::msg::LaneConnectionID _tmp_7606;
                                ros->srm.requests[0].elements[b].request.out_bound_lane[0].connection.push_back(_tmp_7606);
                            
                                // Integer
                                // UINT8  min(0) max(255) span(256) datatype(UInt8)
                                uint8_t* _tmp_7607 = (uint8_t*) buffer++;
                                __aux64__ = *_tmp_7607;
                                ros->srm.requests[0].elements[b].request.out_bound_lane[0].connection[0].value = __aux64__;
                                
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006838\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].request.out_bound_lane[0].connection[0].value) << 
                                                 " srm.requests[0].elements[b].request.out_bound_lane[0].connection[0].value: " << static_cast<int>(ros->srm.requests[0].elements[b].request.out_bound_lane[0].connection[0].value);
                                }
                                
                                // ******************* MIN validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.out_bound_lane[0].connection[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                                    return false;
                                }
                                // ******************* MAX validator *******************
                                if(VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[b].request.out_bound_lane[0].connection[0].value' " << (__aux64__) << " exceeds max allowable (255); message dropped.";
                                    return false;
                                }
                            }
                            else
                            {
                                uint16_t* _tmp_7608 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2 + int(*_tmp_7608);            // Ignoring opentype data
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3431) { // from ros->srm.requests[0].elements[b].request. 
                            uint8_t* _tmp_7609 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_84[*_tmp_7609];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006839\033[0m| Reading number of exts from ros->srm.requests[0].elements[b].request.: " << static_cast<unsigned int>(*_tmp_7609);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_7609; i++)
                                _array_84[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_7609; i++) {
                                uint16_t* _tmp_7610 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_7610; i++)
                                    buffer++;
                            }
                            
                        }
                    
                    if(ros->srm.requests[0].elements[b].minute.size() != 0) {
                        // Field name: minute
                        // Integer
                        // UINT32  min(0) max(527040) span(527041) datatype(UInt32)
                        uint32_t* _tmp_7611 = (uint32_t*) buffer; buffer += 4;
                        __aux64__ = *_tmp_7611;
                        ros->srm.requests[0].elements[b].minute[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006840\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].minute[0].value) << 
                                         " srm.requests[0].elements[b].minute[0].value: " << ros->srm.requests[0].elements[b].minute[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].minute[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 527040) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].minute[0].value' " << (__aux64__) << " exceeds max allowable (527040); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->srm.requests[0].elements[b].second.size() != 0) {
                        // Field name: second
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_7612 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_7612;
                        ros->srm.requests[0].elements[b].second[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006841\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].second[0].value) << 
                                         " srm.requests[0].elements[b].second[0].value: " << ros->srm.requests[0].elements[b].second[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].second[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].second[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    }
                    
                    if(ros->srm.requests[0].elements[b].duration.size() != 0) {
                        // Field name: duration
                        // Integer
                        // UINT16  min(0) max(65535) span(65536) datatype(UInt16)
                        uint16_t* _tmp_7613 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_7613;
                        ros->srm.requests[0].elements[b].duration[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006842\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[b].duration[0].value) << 
                                         " srm.requests[0].elements[b].duration[0].value: " << ros->srm.requests[0].elements[b].duration[0].value;
                        }
                        
                        // ******************* MIN validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].duration[0].value' " << (__aux64__) << " is less than allowable (0); message dropped.";
                            return false;
                        }
                        // ******************* MAX validator *******************
                        if(VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[b].duration[0].value' " << (__aux64__) << " exceeds max allowable (65535); message dropped.";
                            return false;
                        }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_3430) { // from ros->srm.requests[0].elements[b]. 
                        uint8_t* _tmp_7614 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_85[*_tmp_7614];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006843\033[0m| Reading number of exts from ros->srm.requests[0].elements[b].: " << static_cast<unsigned int>(*_tmp_7614);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_7614; i++)
                            _array_85[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_7614; i++) {
                            uint16_t* _tmp_7615 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_7615; i++)
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
            uint8_t* _ext_flag_3435 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.
            
            if(debug) {
                logger->debug() << "|\033[38;5;94m006844\033[0m| Reading ext flag from ros->srm.requestor.: " << int(*_ext_flag_3435);
            }
            
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::RequestorType _tmp_7616;
                ros->srm.requestor.type.push_back(_tmp_7616);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006845\033[0m| ros->srm.requestor.type " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::RequestorPositionVector _tmp_7617;
                ros->srm.requestor.position.push_back(_tmp_7617);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006846\033[0m| ros->srm.requestor.position " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_7618;
                ros->srm.requestor.name.push_back(_tmp_7618);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006847\033[0m| ros->srm.requestor.name " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::DescriptiveName _tmp_7619;
                ros->srm.requestor.route_name.push_back(_tmp_7619);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006848\033[0m| ros->srm.requestor.route_name " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::TransitVehicleStatus _tmp_7620;
                ros->srm.requestor.transit_status.push_back(_tmp_7620);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006849\033[0m| ros->srm.requestor.transit_status " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::TransitVehicleOccupancy _tmp_7621;
                ros->srm.requestor.transit_occupancy.push_back(_tmp_7621);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006850\033[0m| ros->srm.requestor.transit_occupancy " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::DeltaTime _tmp_7622;
                ros->srm.requestor.transit_schedule.push_back(_tmp_7622);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006851\033[0m| ros->srm.requestor.transit_schedule " << tools::green("present");
            }
            if(*(buffer++)) { 
                dsrc_v2_dsrc_msgs::msg::RequestorDescriptionRegional _tmp_7623;
                ros->srm.requestor.regional.push_back(_tmp_7623);
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006852\033[0m| ros->srm.requestor.regional " << tools::green("present");
            }
            
            // Field name: id
            // Choice
               // #0  entityID   TemporaryID   
               // #1  stationID   StationID   
            uint8_t _choice_252 = *(buffer++);
            
            if(_choice_252 == 0) {
                dsrc_v2_dsrc_msgs::msg::TemporaryID _tmp_7624;
                ros->srm.requestor.id.entity_id.push_back(_tmp_7624);
            
                // OctetString
                // min(4) max(4) span(1)
                uint8_t* _tmp_7625 = (uint8_t*)buffer;
                buffer += 1;
                __aux64__ = *_tmp_7625 + 4;
                
                int _if__tmp_7625 = __aux64__;
                for(int c = 0; c < _if__tmp_7625; c++) {
                    int8_t* __n__ = (int8_t*)buffer++;
                    ros->srm.requestor.id.entity_id[0].values.push_back(*__n__);
                }
            }
            else if(_choice_252 == 1)  // CHOICE VehicleID  fieldName(station_id)
            {
                its_container_v2_its_container_msgs::msg::StationID _tmp_7626;
                ros->srm.requestor.id.station_id.push_back(_tmp_7626);
            
                // Integer
                // UINT32  min(0) max(4294967295) span(4294967296) datatype(UInt32)
                uint32_t* _tmp_7627 = (uint32_t*) buffer; buffer += 4;
                __aux64__ = *_tmp_7627;
                ros->srm.requestor.id.station_id[0].value = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m006853\033[0m| " << tools::getTypeName(ros->srm.requestor.id.station_id[0].value) << 
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
                logger->warning() << "Wrong option (" << static_cast<int>(_choice_252) << ") selected in CHOICE VehicleID in 'srm.requestor.id'; message dropped.";
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
                    uint8_t* _ext_flag_3437 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.type[0].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m006854\033[0m| Reading ext flag from ros->srm.requestor.type[0].: " << int(*_ext_flag_3437);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RequestSubRole _tmp_7628;
                        ros->srm.requestor.type[0].subrole.push_back(_tmp_7628);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006855\033[0m| ros->srm.requestor.type[0].subrole " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RequestImportanceLevel _tmp_7629;
                        ros->srm.requestor.type[0].request.push_back(_tmp_7629);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006856\033[0m| ros->srm.requestor.type[0].request " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs::msg::Iso3833VehicleType _tmp_7630;
                        ros->srm.requestor.type[0].iso3883.push_back(_tmp_7630);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006857\033[0m| ros->srm.requestor.type[0].iso3883 " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::VehicleType _tmp_7631;
                        ros->srm.requestor.type[0].hpms_type.push_back(_tmp_7631);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006858\033[0m| ros->srm.requestor.type[0].hpms_type " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::RegionalExtension _tmp_7632;
                        ros->srm.requestor.type[0].regional.push_back(_tmp_7632);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006859\033[0m| ros->srm.requestor.type[0].regional " << tools::green("present");
                    }
                    
                    // Field name: role
                    // Enumerated
                    // INT32  min(0) max(22) span(23) datatype(Int32)
                    uint8_t* _ext_flag_3438 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.type[0].role.
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m006860\033[0m| Reading ext flag from ros->srm.requestor.type[0].role.: " << int(*_ext_flag_3438);
                    }
                    
                    uint8_t* _tmp_7633 = (uint8_t*) buffer++;
                    __aux64__ = *_tmp_7633;
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
                        logger->debug() << "|\033[38;5;94m006861\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].role.value) << 
                                     " srm.requestor.type[0].role.value: " << static_cast<int>(ros->srm.requestor.type[0].role.value);
                    }
                    
                    if(ros->srm.requestor.type[0].subrole.size() != 0) {
                        // Field name: subrole
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_7634 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_7634;
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
                            logger->debug() << "|\033[38;5;94m006862\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].subrole[0].value) << 
                                         " srm.requestor.type[0].subrole[0].value: " << static_cast<int>(ros->srm.requestor.type[0].subrole[0].value);
                        }
                    }
                    
                    if(ros->srm.requestor.type[0].request.size() != 0) {
                        // Field name: request
                        // Enumerated
                        // INT32  min(0) max(15) span(16) datatype(Int32)
                        uint8_t* _tmp_7635 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_7635;
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
                            logger->debug() << "|\033[38;5;94m006863\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].request[0].value) << 
                                         " srm.requestor.type[0].request[0].value: " << static_cast<int>(ros->srm.requestor.type[0].request[0].value);
                        }
                    }
                    
                    if(ros->srm.requestor.type[0].iso3883.size() != 0) {
                        // Field name: iso3883
                        // Integer
                        // UINT8  min(0) max(255) span(256) datatype(UInt8)
                        uint8_t* _tmp_7636 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_7636;
                        ros->srm.requestor.type[0].iso3883[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006864\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].iso3883[0].value) << 
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
                        uint8_t* _ext_flag_3441 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.type[0].hpms_type[0].
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006865\033[0m| Reading ext flag from ros->srm.requestor.type[0].hpms_type[0].: " << int(*_ext_flag_3441);
                        }
                        
                        uint8_t* _tmp_7637 = (uint8_t*) buffer++;
                        __aux64__ = *_tmp_7637;
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
                            logger->debug() << "|\033[38;5;94m006866\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].hpms_type[0].value) << 
                                         " srm.requestor.type[0].hpms_type[0].value: " << static_cast<int>(ros->srm.requestor.type[0].hpms_type[0].value);
                        }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_3437) { // from ros->srm.requestor.type[0]. 
                        uint8_t* _tmp_7638 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_86[*_tmp_7638];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006867\033[0m| Reading number of exts from ros->srm.requestor.type[0].: " << static_cast<unsigned int>(*_tmp_7638);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_7638; i++)
                            _array_86[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_7638; i++) {
                            uint16_t* _tmp_7639 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_7639; i++)
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
                    uint8_t* _ext_flag_3442 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.position[0].
                    
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m006868\033[0m| Reading ext flag from ros->srm.requestor.position[0].: " << int(*_ext_flag_3442);
                    }
                    
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::Angle _tmp_7640;
                        ros->srm.requestor.position[0].heading.push_back(_tmp_7640);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006869\033[0m| ros->srm.requestor.position[0].heading " << tools::green("present");
                    }
                    if(*(buffer++)) { 
                        dsrc_v2_dsrc_msgs::msg::TransmissionAndSpeed _tmp_7641;
                        ros->srm.requestor.position[0].speed.push_back(_tmp_7641);
                    
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006870\033[0m| ros->srm.requestor.position[0].speed " << tools::green("present");
                    }
                    
                    // Field name: position
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3443 = (uint8_t*) buffer++;  // Read ext flag from ros->srm.requestor.position[0].position.
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006871\033[0m| Reading ext flag from ros->srm.requestor.position[0].position.: " << int(*_ext_flag_3443);
                        }
                        
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Elevation _tmp_7642;
                            ros->srm.requestor.position[0].position.elevation.push_back(_tmp_7642);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006872\033[0m| ros->srm.requestor.position[0].position.elevation " << tools::green("present");
                        }
                        if(*(buffer++)) { 
                            dsrc_v2_dsrc_msgs::msg::Position3DRegional _tmp_7643;
                            ros->srm.requestor.position[0].position.regional.push_back(_tmp_7643);
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006873\033[0m| ros->srm.requestor.position[0].position.regional " << tools::green("present");
                        }
                        
                        // Field name: lat
                        // Real
                        // Double
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_7644 = (uint32_t*) buffer; buffer += 4;
                        ros->srm.requestor.position[0].position.lat.value = *_tmp_7644;
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
                            logger->debug() << "|\033[38;5;94m006874\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.lat.value) << " srm.requestor.position[0].position.lat: " <<
                                         ros->srm.requestor.position[0].position.lat.value << " (" << __aux64__ << ")";
                        }
                        
                        // Field name: longint
                        // Real
                        // Double
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        uint32_t* _tmp_7645 = (uint32_t*) buffer; buffer += 4;
                        ros->srm.requestor.position[0].position.longint.value = *_tmp_7645;
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
                            logger->debug() << "|\033[38;5;94m006875\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.longint.value) << " srm.requestor.position[0].position.longint: " <<
                                         ros->srm.requestor.position[0].position.longint.value << " (" << __aux64__ << ")";
                        }
                        
                        if(ros->srm.requestor.position[0].position.elevation.size() != 0) {
                            // Field name: elevation
                            // Real
                            // Float
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            uint16_t* _tmp_7646 = (uint16_t*) buffer; buffer += 2;
                            ros->srm.requestor.position[0].position.elevation[0].value = *_tmp_7646;
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
                                logger->debug() << "|\033[38;5;94m006876\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.elevation[0].value) << " srm.requestor.position[0].position.elevation[0]: " <<
                                             ros->srm.requestor.position[0].position.elevation[0].value << " (" << __aux64__ << ")";
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3443) { // from ros->srm.requestor.position[0].position. 
                            uint8_t* _tmp_7647 = (uint8_t*) buffer++;  // number of extensions
                            bool _array_87[*_tmp_7647];
                            
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006877\033[0m| Reading number of exts from ros->srm.requestor.position[0].position.: " << static_cast<unsigned int>(*_tmp_7647);
                            
                            // Extensions bytemap
                            for(int i = 0; i < *_tmp_7647; i++)
                                _array_87[i] = (*buffer++) != 0;
                            
                            // Discarding unknown OpenType containers
                            for(int i = 0; i < *_tmp_7647; i++) {
                                uint16_t* _tmp_7648 = (uint16_t*)buffer;  // OpenType length
                                buffer += 2;
                            
                                if(debug) {
                                }
                            
                                for(int i = 0; i < *_tmp_7648; i++)
                                    buffer++;
                            }
                            
                        }
                    
                    if(ros->srm.requestor.position[0].heading.size() != 0) {
                        // Field name: heading
                        // Integer
                        // UINT16  min(0) max(28800) span(28801) datatype(UInt16)
                        uint16_t* _tmp_7649 = (uint16_t*) buffer; buffer += 2;
                        __aux64__ = *_tmp_7649;
                        ros->srm.requestor.position[0].heading[0].value = __aux64__;
                        
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006878\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].heading[0].value) << 
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
                            uint8_t* _tmp_7650 = (uint8_t*) buffer++;
                            __aux64__ = *_tmp_7650;
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
                                logger->debug() << "|\033[38;5;94m006879\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].speed[0].transmisson.value) << 
                                             " srm.requestor.position[0].speed[0].transmisson.value: " << static_cast<int>(ros->srm.requestor.position[0].speed[0].transmisson.value);
                            }
                            
                            // Field name: speed
                            // Integer
                            // UINT16  min(0) max(8191) span(8192) datatype(UInt16)
                            uint16_t* _tmp_7651 = (uint16_t*) buffer; buffer += 2;
                            __aux64__ = *_tmp_7651;
                            ros->srm.requestor.position[0].speed[0].speed.value = __aux64__;
                            
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006880\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].speed[0].speed.value) << 
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
                    if(*_ext_flag_3442) { // from ros->srm.requestor.position[0]. 
                        uint8_t* _tmp_7652 = (uint8_t*) buffer++;  // number of extensions
                        bool _array_88[*_tmp_7652];
                        
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006881\033[0m| Reading number of exts from ros->srm.requestor.position[0].: " << static_cast<unsigned int>(*_tmp_7652);
                        
                        // Extensions bytemap
                        for(int i = 0; i < *_tmp_7652; i++)
                            _array_88[i] = (*buffer++) != 0;
                        
                        // Discarding unknown OpenType containers
                        for(int i = 0; i < *_tmp_7652; i++) {
                            uint16_t* _tmp_7653 = (uint16_t*)buffer;  // OpenType length
                            buffer += 2;
                        
                            if(debug) {
                            }
                        
                            for(int i = 0; i < *_tmp_7653; i++)
                                buffer++;
                        }
                        
                    }
            }
            
            if(ros->srm.requestor.name.size() != 0) {
                // Field name: name
                // Text
                
                // TEXT  min(1) max(63) span(63)
                uint8_t* _tmp_7654 = (uint8_t*)buffer;
                __aux64__ = *_tmp_7654 + 1;
                buffer += 1;
                
                int _if__tmp_7654 = __aux64__;
                for(int d = 0; d < _if__tmp_7654; d++) {  // DescriptiveName
                    char* __tmp__ = (char*)buffer++;
                    ros->srm.requestor.name[0].value += *__tmp__;
                }
            }
            
            if(ros->srm.requestor.route_name.size() != 0) {
                // Field name: route_name
                // Text
                
                // TEXT  min(1) max(63) span(63)
                uint8_t* _tmp_7655 = (uint8_t*)buffer;
                __aux64__ = *_tmp_7655 + 1;
                buffer += 1;
                
                int _if__tmp_7655 = __aux64__;
                for(int e = 0; e < _if__tmp_7655; e++) {  // DescriptiveName
                    char* __tmp__ = (char*)buffer++;
                    ros->srm.requestor.route_name[0].value += *__tmp__;
                }
            }
            
            if(ros->srm.requestor.transit_status.size() != 0) {
                // Field name: transit_status
                // BitString
                // BIT_STRING  min(8) max(8) span(1)
                uint8_t* _tmp_7656 = (uint8_t*)buffer;
                __aux64__ = *_tmp_7656 + 8;
                buffer += 1;
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m006882\033[0m| srm.requestor.transit_status[0].value: " << __aux64__;
                
                int _if__tmp_7656 = __aux64__;
                for(int f = 0; f < _if__tmp_7656; f++) {
                    uint8_t __c__;
                    ros->srm.requestor.transit_status[0].values.push_back(__c__);
                    uint8_t* __b__ = (uint8_t*)buffer++;
                    ros->srm.requestor.transit_status[0].values[f] = (*__b__ == 1);
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
                uint8_t* _tmp_7657 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_7657;
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
                    logger->debug() << "|\033[38;5;94m006883\033[0m| " << tools::getTypeName(ros->srm.requestor.transit_occupancy[0].value) << 
                                 " srm.requestor.transit_occupancy[0].value: " << static_cast<int>(ros->srm.requestor.transit_occupancy[0].value);
                }
            }
            
            if(ros->srm.requestor.transit_schedule.size() != 0) {
                // Field name: transit_schedule
                // Integer
                // INT8  min(-122) max(121) span(244) datatype(Int8)
                uint8_t* _tmp_7658 = (uint8_t*) buffer++;
                __aux64__ = *_tmp_7658;
                __aux64__ += -122;
                ros->srm.requestor.transit_schedule[0].value = __aux64__;
                
                if(debug) {
                    logger->debug() << "|\033[38;5;94m006884\033[0m| " << tools::getTypeName(ros->srm.requestor.transit_schedule[0].value) << 
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
            if(*_ext_flag_3435) { // from ros->srm.requestor. 
                uint8_t* _tmp_7659 = (uint8_t*) buffer++;  // number of extensions
                bool _array_89[*_tmp_7659];
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m006885\033[0m| Reading number of exts from ros->srm.requestor.: " << static_cast<unsigned int>(*_tmp_7659);
                
                // Extensions bytemap
                for(int i = 0; i < *_tmp_7659; i++)
                    _array_89[i] = (*buffer++) != 0;
                
                // Discarding unknown OpenType containers
                for(int i = 0; i < *_tmp_7659; i++) {
                    uint16_t* _tmp_7660 = (uint16_t*)buffer;  // OpenType length
                    buffer += 2;
                
                    if(debug) {
                    }
                
                    for(int i = 0; i < *_tmp_7660; i++)
                        buffer++;
                }
                
            }
        
        // Field name: regional  // avoided
        if(*_ext_flag_3429) { // from ros->srm. 
            uint8_t* _tmp_7661 = (uint8_t*) buffer++;  // number of extensions
            bool _array_90[*_tmp_7661];
            
            if(debug)
                logger->debug() << "|\033[38;5;94m006886\033[0m| Reading number of exts from ros->srm.: " << static_cast<unsigned int>(*_tmp_7661);
            
            // Extensions bytemap
            for(int i = 0; i < *_tmp_7661; i++)
                _array_90[i] = (*buffer++) != 0;
            
            // Discarding unknown OpenType containers
            for(int i = 0; i < *_tmp_7661; i++) {
                uint16_t* _tmp_7662 = (uint16_t*)buffer;  // OpenType length
                buffer += 2;
            
                if(debug) {
                }
            
                for(int i = 0; i < *_tmp_7662; i++)
                    buffer++;
            }
            
        }
	
	        return true;
        }
    }
}