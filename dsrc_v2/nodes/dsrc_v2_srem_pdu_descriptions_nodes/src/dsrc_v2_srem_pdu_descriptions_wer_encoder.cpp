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
#include <dsrc_v2_srem_pdu_descriptions_wer_encoder.h>

namespace wind
{
    namespace encoder_dsrc_v2_srem_pdu_descriptions
    {
        WerEncoder::WerEncoder(ScreenLogger* logger, bool debug) 
            : logger(logger), debug(debug) {
        }

        WerEncoder::~WerEncoder() {            
        }
        

        #if WIND_ROS_VERSION == 1
          int WerEncoder::encode(const dsrc_v2_srem_pdu_descriptions_msgs::SREM::ConstPtr& ros, const uint8_t *buffer)
		#else
		  int WerEncoder::encode(const std::shared_ptr<dsrc_v2_srem_pdu_descriptions_msgs::msg::SREM>& ros, const uint8_t *buffer)
          //int WerEncoder::encode(const dsrc_v2_srem_pdu_descriptions_msgs::msg::SREM* ros, const uint8_t *buffer)
		#endif
		{
            const uint8_t *start = buffer;
            int64_t __aux64__;

    // SREM  SEQUENCE
        //  header     ItsPduHeader             
        //  srm        SignalRequestMessage     
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
    
    // Field:  type(SignalRequestMessage) name(srm) extGroup(0)
        // SignalRequestMessage  SEQUENCE
            //  timeStamp      MinuteOfTheYear                 OPTIONAL  
            //  second         DSecond                           
            //  sequenceNumber MsgCount                        OPTIONAL  
            //  requests       SignalRequestList               OPTIONAL  
            //  requestor      RequestorDescription              
            //  regional       SignalRequestMessage_regional   OPTIONAL  
            //  ...
        uint8_t* _ext_flag_4 = (uint8_t*) buffer++;  // Write extension flag for SignalRequestMessage
        *_ext_flag_4 = 0;  
        
        // Optional fields bytemap
        char* _tmp_4 = (char*) buffer++;
        *_tmp_4 = (ros->srm.time_stamp.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000003\033[0m| Optional field time_stamp = " << *_tmp_4;
        char* _tmp_5 = (char*) buffer++;
        *_tmp_5 = (ros->srm.sequence_number.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000004\033[0m| Optional field sequence_number = " << *_tmp_5;
        char* _tmp_6 = (char*) buffer++;
        *_tmp_6 = (ros->srm.requests.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000005\033[0m| Optional field requests = " << *_tmp_6;
        char* _tmp_7 = (char*) buffer++;
        *_tmp_7 = (ros->srm.regional.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m000006\033[0m| Optional field regional = " << *_tmp_7;
        
        if(ros->srm.time_stamp.size() != 0) {
            // Field:  type(MinuteOfTheYear) name(time_stamp) extGroup(0)
            // Integer
            
            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
            if(debug) {
                logger->debug() << "|\033[38;5;94m000007\033[0m| " << tools::getTypeName(ros->srm.time_stamp[0].value) << 
                             " srm.time_stamp[0].value: " << ros->srm.time_stamp[0].value;
            }
            
            uint32_t* _tmp_8 = (uint32_t*) buffer; buffer += 4;
            *_tmp_8 = ros->srm.time_stamp[0].value; 
            __aux64__ = ros->srm.time_stamp[0].value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'srm.time_stamp[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                logger->warning() << "Error: Value in 'srm.time_stamp[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                return -1;
            }
        }
        
        // Field:  type(DSecond) name(second) extGroup(0)
        // Integer
        
        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
        if(debug) {
            logger->debug() << "|\033[38;5;94m000008\033[0m| " << tools::getTypeName(ros->srm.second.value) << 
                         " srm.second.value: " << ros->srm.second.value;
        }
        
        uint16_t* _tmp_9 = (uint16_t*) buffer; buffer += 2;
        *_tmp_9 = ros->srm.second.value; 
        __aux64__ = ros->srm.second.value;
        
        // MIN validator
        if (VALIDATORS_ENABLED && __aux64__ < 0) {
            logger->warning() << "Error: Value in 'srm.second.value' (" << __aux64__ << ") less than (0); message dropped.";
            return -1;
        }
        // MAX validator
        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
            logger->warning() << "Error: Value in 'srm.second.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
            return -1;
        }
        
        if(ros->srm.sequence_number.size() != 0) {
            // Field:  type(MsgCount) name(sequence_number) extGroup(0)
            // Integer
            
            // UINT8  min(0) max(127) span(128) dataType(UInt8)
            if(debug) {
                logger->debug() << "|\033[38;5;94m000009\033[0m| " << tools::getTypeName(ros->srm.sequence_number[0].value) << 
                             " srm.sequence_number[0].value: " << static_cast<int>(ros->srm.sequence_number[0].value);
            }
            
            uint8_t* _tmp_10 = (uint8_t*) buffer++;
            *_tmp_10 = ros->srm.sequence_number[0].value; 
            __aux64__ = ros->srm.sequence_number[0].value;
            
            // MIN validator
            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                logger->warning() << "Error: Value in 'srm.sequence_number[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                return -1;
            }
            // MAX validator
            if (VALIDATORS_ENABLED && __aux64__ > 127) {
                logger->warning() << "Error: Value in 'srm.sequence_number[0].value' (" << __aux64__ << ") exceeds max allowable (127); message dropped.";
                return -1;
            }
        }
        
        if(ros->srm.requests.size() != 0) {
            // Field:  type(SignalRequestList) name(requests) extGroup(0)
            // SequenceOf
            // Data Type UInt8
            // SEQUENCE_OF  min(1) max(32) span(32) ext(false)
            __aux64__ = ros->srm.requests[0].elements.size();
            if(__aux64__ > 32) __aux64__ = 32;
            uint16_t* _tmp_11 = (uint16_t*)buffer;
            buffer += 2;
            *_tmp_11 = __aux64__ - 1;
            
            int __ifa = __aux64__;
            for(int a = 0; a < __ifa; a++) { 
                
                    // SignalRequestPackage  SEQUENCE
                        //  request    SignalRequest                     
                        //  minute     MinuteOfTheYear                 OPTIONAL  
                        //  second     DSecond                         OPTIONAL  
                        //  duration   DSecond                         OPTIONAL  
                        //  regional   SignalRequestPackage_regional   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_8 = (uint8_t*) buffer++;  // Write extension flag for SignalRequestPackage
                    *_ext_flag_8 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_12 = (char*) buffer++;
                    *_tmp_12 = (ros->srm.requests[0].elements[a].minute.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000011\033[0m| Optional field minute = " << *_tmp_12;
                    char* _tmp_13 = (char*) buffer++;
                    *_tmp_13 = (ros->srm.requests[0].elements[a].second.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000012\033[0m| Optional field second = " << *_tmp_13;
                    char* _tmp_14 = (char*) buffer++;
                    *_tmp_14 = (ros->srm.requests[0].elements[a].duration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000013\033[0m| Optional field duration = " << *_tmp_14;
                    char* _tmp_15 = (char*) buffer++;
                    *_tmp_15 = (ros->srm.requests[0].elements[a].regional.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000014\033[0m| Optional field regional = " << *_tmp_15;
                    
                    // Field:  type(SignalRequest) name(request) extGroup(0)
                        // SignalRequest  SEQUENCE
                            //  id           IntersectionReferenceID     
                            //  requestID    RequestID                   
                            //  requestType  PriorityRequestType         
                            //  inBoundLane  IntersectionAccessPoint     
                            //  outBoundLane IntersectionAccessPoint   OPTIONAL  
                            //  regional     SignalRequest_regional    OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_9 = (uint8_t*) buffer++;  // Write extension flag for SignalRequest
                        *_ext_flag_9 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_16 = (char*) buffer++;
                        *_tmp_16 = (ros->srm.requests[0].elements[a].request.out_bound_lane.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000015\033[0m| Optional field out_bound_lane = " << *_tmp_16;
                        char* _tmp_17 = (char*) buffer++;
                        *_tmp_17 = (ros->srm.requests[0].elements[a].request.regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000016\033[0m| Optional field regional = " << *_tmp_17;
                        
                        // Field:  type(IntersectionReferenceID) name(id) extGroup(0)
                            // IntersectionReferenceID  SEQUENCE
                                //  region     RoadRegulatorID   OPTIONAL  
                                //  id         IntersectionID      
                            // Optional fields bytemap
                            char* _tmp_18 = (char*) buffer++;
                            *_tmp_18 = (ros->srm.requests[0].elements[a].request.id.region.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000017\033[0m| Optional field region = " << *_tmp_18;
                            
                            if(ros->srm.requests[0].elements[a].request.id.region.size() != 0) {
                                // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000018\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.id.region[0].value) << 
                                                 " srm.requests[0].elements[a].request.id.region[0].value: " << ros->srm.requests[0].elements[a].request.id.region[0].value;
                                }
                                
                                uint16_t* _tmp_19 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_19 = ros->srm.requests[0].elements[a].request.id.region[0].value; 
                                __aux64__ = ros->srm.requests[0].elements[a].request.id.region[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                            }
                            
                            // Field:  type(IntersectionID) name(id) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000019\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.id.id.value) << 
                                             " srm.requests[0].elements[a].request.id.id.value: " << ros->srm.requests[0].elements[a].request.id.id.value;
                            }
                            
                            uint16_t* _tmp_20 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_20 = ros->srm.requests[0].elements[a].request.id.id.value; 
                            __aux64__ = ros->srm.requests[0].elements[a].request.id.id.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(RequestID) name(request_id) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000020\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.request_id.value) << 
                                         " srm.requests[0].elements[a].request.request_id.value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.request_id.value);
                        }
                        
                        uint8_t* _tmp_21 = (uint8_t*) buffer++;
                        *_tmp_21 = ros->srm.requests[0].elements[a].request.request_id.value; 
                        __aux64__ = ros->srm.requests[0].elements[a].request.request_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.request_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.request_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(PriorityRequestType) name(request_type) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(3) span(4) dataType(Int32)
                        uint8_t* _ext_flag_13 = (uint8_t*) buffer++; // Write extension flag for ros->srm.requests[0].elements[a].request.request_type.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000021\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.request_type.value) << 
                                         " srm.requests[0].elements[a].request.request_type.value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.request_type.value);
                        }
                        
                        uint8_t* _tmp_22 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_22 = ros->srm.requests[0].elements[a].request.request_type.value; 
                        __aux64__ = ros->srm.requests[0].elements[a].request.request_type.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.request_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.request_type.value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(IntersectionAccessPoint) name(in_bound_lane) extGroup(0)
                        // Choice
                           // #0  lane   LaneID
                           // #1  approach   ApproachID
                           // #2  connection   LaneConnectionID
                        uint8_t* _ext_flag_14 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_14 = 0; 
                        
                        uint8_t* _choice_1 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->srm.requests[0].elements[a].request.in_bound_lane.lane.size() != 0) {  // CHOICE 0  fieldType(IntersectionAccessPoint) 
                            *_choice_1 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000022\033[0m| Choice selection: 0";
                        
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000023\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.in_bound_lane.lane[0].value) << 
                                             " srm.requests[0].elements[a].request.in_bound_lane.lane[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.in_bound_lane.lane[0].value);
                            }
                            
                            uint8_t* _tmp_23 = (uint8_t*) buffer++;
                            *_tmp_23 = ros->srm.requests[0].elements[a].request.in_bound_lane.lane[0].value; 
                            __aux64__ = ros->srm.requests[0].elements[a].request.in_bound_lane.lane[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.lane[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.lane[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        
                        }
                        else if(ros->srm.requests[0].elements[a].request.in_bound_lane.approach.size() != 0)  // CHOICE 1  fieldType(IntersectionAccessPoint) 
                        {
                            *_choice_1 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000024\033[0m| Choice selection: 1";
                        
                            // Integer
                            
                            // UINT8  min(0) max(15) span(16) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000025\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.in_bound_lane.approach[0].value) << 
                                             " srm.requests[0].elements[a].request.in_bound_lane.approach[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.in_bound_lane.approach[0].value);
                            }
                            
                            uint8_t* _tmp_24 = (uint8_t*) buffer++;
                            *_tmp_24 = ros->srm.requests[0].elements[a].request.in_bound_lane.approach[0].value; 
                            __aux64__ = ros->srm.requests[0].elements[a].request.in_bound_lane.approach[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                return -1;
                            }
                        
                        }
                        else if(ros->srm.requests[0].elements[a].request.in_bound_lane.connection.size() != 0)  // CHOICE 2  fieldType(IntersectionAccessPoint) 
                        {
                            *_choice_1 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m000026\033[0m| Choice selection: 2";
                        
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000027\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.in_bound_lane.connection[0].value) << 
                                             " srm.requests[0].elements[a].request.in_bound_lane.connection[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.in_bound_lane.connection[0].value);
                            }
                            
                            uint8_t* _tmp_25 = (uint8_t*) buffer++;
                            *_tmp_25 = ros->srm.requests[0].elements[a].request.in_bound_lane.connection[0].value; 
                            __aux64__ = ros->srm.requests[0].elements[a].request.in_bound_lane.connection[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.connection[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.in_bound_lane.connection[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_1) << ") selected in CHOICE IntersectionAccessPoint in 'srm.requests[0].elements[a].request.in_bound_lane'; message dropped.";
                            return -1;
                        }
                        
                        if(ros->srm.requests[0].elements[a].request.out_bound_lane.size() != 0) {
                            // Field:  type(IntersectionAccessPoint) name(out_bound_lane) extGroup(0)
                            // Choice
                               // #0  lane   LaneID
                               // #1  approach   ApproachID
                               // #2  connection   LaneConnectionID
                            uint8_t* _ext_flag_18 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_18 = 0; 
                            
                            uint8_t* _choice_2 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->srm.requests[0].elements[a].request.out_bound_lane[0].lane.size() != 0) {  // CHOICE 0  fieldType(IntersectionAccessPoint) 
                                *_choice_2 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000028\033[0m| Choice selection: 0";
                            
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000029\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value) << 
                                                 " srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value);
                                }
                                
                                uint8_t* _tmp_26 = (uint8_t*) buffer++;
                                *_tmp_26 = ros->srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value; 
                                __aux64__ = ros->srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].lane[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else if(ros->srm.requests[0].elements[a].request.out_bound_lane[0].approach.size() != 0)  // CHOICE 1  fieldType(IntersectionAccessPoint) 
                            {
                                *_choice_2 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000030\033[0m| Choice selection: 1";
                            
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000031\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value) << 
                                                 " srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value);
                                }
                                
                                uint8_t* _tmp_27 = (uint8_t*) buffer++;
                                *_tmp_27 = ros->srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value; 
                                __aux64__ = ros->srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else if(ros->srm.requests[0].elements[a].request.out_bound_lane[0].connection.size() != 0)  // CHOICE 2  fieldType(IntersectionAccessPoint) 
                            {
                                *_choice_2 = 2;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m000032\033[0m| Choice selection: 2";
                            
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m000033\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value) << 
                                                 " srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value: " << static_cast<int>(ros->srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value);
                                }
                                
                                uint8_t* _tmp_28 = (uint8_t*) buffer++;
                                *_tmp_28 = ros->srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value; 
                                __aux64__ = ros->srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[a].request.out_bound_lane[0].connection[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_2) << ") selected in CHOICE IntersectionAccessPoint in 'srm.requests[0].elements[a].request.out_bound_lane[0]'; message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_9) {
                        }
                    
                    if(ros->srm.requests[0].elements[a].minute.size() != 0) {
                        // Field:  type(MinuteOfTheYear) name(minute) extGroup(0)
                        // Integer
                        
                        // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000034\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].minute[0].value) << 
                                         " srm.requests[0].elements[a].minute[0].value: " << ros->srm.requests[0].elements[a].minute[0].value;
                        }
                        
                        uint32_t* _tmp_30 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_30 = ros->srm.requests[0].elements[a].minute[0].value; 
                        __aux64__ = ros->srm.requests[0].elements[a].minute[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].minute[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].minute[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->srm.requests[0].elements[a].second.size() != 0) {
                        // Field:  type(DSecond) name(second) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000035\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].second[0].value) << 
                                         " srm.requests[0].elements[a].second[0].value: " << ros->srm.requests[0].elements[a].second[0].value;
                        }
                        
                        uint16_t* _tmp_31 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_31 = ros->srm.requests[0].elements[a].second[0].value; 
                        __aux64__ = ros->srm.requests[0].elements[a].second[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].second[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].second[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->srm.requests[0].elements[a].duration.size() != 0) {
                        // Field:  type(DSecond) name(duration) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000036\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[a].duration[0].value) << 
                                         " srm.requests[0].elements[a].duration[0].value: " << ros->srm.requests[0].elements[a].duration[0].value;
                        }
                        
                        uint16_t* _tmp_32 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_32 = ros->srm.requests[0].elements[a].duration[0].value; 
                        __aux64__ = ros->srm.requests[0].elements[a].duration[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].duration[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[a].duration[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_8) {
                    }
            }
        }
        
        // Field:  type(RequestorDescription) name(requestor) extGroup(0)
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
            uint8_t* _ext_flag_25 = (uint8_t*) buffer++;  // Write extension flag for RequestorDescription
            *_ext_flag_25 = 0;  
            
            // Optional fields bytemap
            char* _tmp_34 = (char*) buffer++;
            *_tmp_34 = (ros->srm.requestor.type.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000037\033[0m| Optional field type = " << *_tmp_34;
            char* _tmp_35 = (char*) buffer++;
            *_tmp_35 = (ros->srm.requestor.position.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000038\033[0m| Optional field position = " << *_tmp_35;
            char* _tmp_36 = (char*) buffer++;
            *_tmp_36 = (ros->srm.requestor.name.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000039\033[0m| Optional field name = " << *_tmp_36;
            char* _tmp_37 = (char*) buffer++;
            *_tmp_37 = (ros->srm.requestor.route_name.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000040\033[0m| Optional field route_name = " << *_tmp_37;
            char* _tmp_38 = (char*) buffer++;
            *_tmp_38 = (ros->srm.requestor.transit_status.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000041\033[0m| Optional field transit_status = " << *_tmp_38;
            char* _tmp_39 = (char*) buffer++;
            *_tmp_39 = (ros->srm.requestor.transit_occupancy.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000042\033[0m| Optional field transit_occupancy = " << *_tmp_39;
            char* _tmp_40 = (char*) buffer++;
            *_tmp_40 = (ros->srm.requestor.transit_schedule.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000043\033[0m| Optional field transit_schedule = " << *_tmp_40;
            char* _tmp_41 = (char*) buffer++;
            *_tmp_41 = (ros->srm.requestor.regional.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m000044\033[0m| Optional field regional = " << *_tmp_41;
            
            // Field:  type(VehicleID) name(id) extGroup(0)
            // Choice
               // #0  entityID   TemporaryID
               // #1  stationID   StationID
            uint8_t* _choice_3 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->srm.requestor.id.entity_id.size() != 0) {  // CHOICE 0  fieldType(VehicleID) 
                *_choice_3 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000045\033[0m| Choice selection: 0";
            
                // OctetString
                // OCTET_STRING  min(4) max(4) span(1)
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m000046\033[0m| srm.requestor.id.entity_id[0].values.size(): srm.requestor.id.entity_id[0]" << static_cast<int>(ros->srm.requestor.id.entity_id[0].values.size());
                
                if(ros->srm.requestor.id.entity_id[0].values.size() < 4) {
                    logger->warning() << "Error: Value in 'srm.requestor.id.entity_id[0].value' (" << 
                                ros->srm.requestor.id.entity_id[0].values.size() << ") is less than allowable (4); message dropped.";
                    return -1;
                }
                if(ros->srm.requestor.id.entity_id[0].values.size() > 4) {
                    logger->warning() << "Error: Value in 'ros->srm.requestor.id.entity_id[0].value' (" << 
                                ros->srm.requestor.id.entity_id[0].values.size() << ") exceeds max allowable (4); message dropped.";
                    return -1;
                }
                uint8_t* _tmp_42 = (uint8_t*)buffer;
                buffer += 1;
                __aux64__ = ros->srm.requestor.id.entity_id[0].values.size();
                if(__aux64__ > 4) __aux64__ = 4;
                *_tmp_42 = __aux64__ - 4;
                
                int __ifb = __aux64__;
                for(int b = 0; b < __ifb; b++) {
                    int8_t* __m__ = (int8_t*)buffer++;
                    *__m__ = ros->srm.requestor.id.entity_id[0].values[b];
                }
            
            }
            else if(ros->srm.requestor.id.station_id.size() != 0)  // CHOICE 1  fieldType(VehicleID) 
            {
                *_choice_3 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m000047\033[0m| Choice selection: 1";
            
                // Integer
                
                // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000048\033[0m| " << tools::getTypeName(ros->srm.requestor.id.station_id[0].value) << 
                                 " srm.requestor.id.station_id[0].value: " << ros->srm.requestor.id.station_id[0].value;
                }
                
                uint32_t* _tmp_43 = (uint32_t*) buffer; buffer += 4;
                *_tmp_43 = ros->srm.requestor.id.station_id[0].value; 
                __aux64__ = ros->srm.requestor.id.station_id[0].value;
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'srm.requestor.id.station_id[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 4294967295) {
                    logger->warning() << "Error: Value in 'srm.requestor.id.station_id[0].value' (" << __aux64__ << ") exceeds max allowable (4294967295); message dropped.";
                    return -1;
                }
            
            }
            else
            {
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_3) << ") selected in CHOICE VehicleID in 'srm.requestor.id'; message dropped.";
                return -1;
            }
            
            if(ros->srm.requestor.type.size() != 0) {
                // Field:  type(RequestorType) name(type) extGroup(0)
                    // RequestorType  SEQUENCE
                        //  role       BasicVehicleRole           
                        //  subrole    RequestSubRole           OPTIONAL  
                        //  request    RequestImportanceLevel   OPTIONAL  
                        //  iso3883    Iso3833VehicleType       OPTIONAL  
                        //  hpmsType   VehicleType              OPTIONAL  
                        //  regional   RegionalExtension        OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_28 = (uint8_t*) buffer++;  // Write extension flag for RequestorType
                    *_ext_flag_28 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_44 = (char*) buffer++;
                    *_tmp_44 = (ros->srm.requestor.type[0].subrole.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000049\033[0m| Optional field subrole = " << *_tmp_44;
                    char* _tmp_45 = (char*) buffer++;
                    *_tmp_45 = (ros->srm.requestor.type[0].request.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000050\033[0m| Optional field request = " << *_tmp_45;
                    char* _tmp_46 = (char*) buffer++;
                    *_tmp_46 = (ros->srm.requestor.type[0].iso3883.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000051\033[0m| Optional field iso3883 = " << *_tmp_46;
                    char* _tmp_47 = (char*) buffer++;
                    *_tmp_47 = (ros->srm.requestor.type[0].hpms_type.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000052\033[0m| Optional field hpms_type = " << *_tmp_47;
                    char* _tmp_48 = (char*) buffer++;
                    *_tmp_48 = (ros->srm.requestor.type[0].regional.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000053\033[0m| Optional field regional = " << *_tmp_48;
                    
                    // Field:  type(BasicVehicleRole) name(role) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(22) span(23) dataType(Int32)
                    uint8_t* _ext_flag_29 = (uint8_t*) buffer++; // Write extension flag for ros->srm.requestor.type[0].role.
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m000054\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].role.value) << 
                                     " srm.requestor.type[0].role.value: " << static_cast<int>(ros->srm.requestor.type[0].role.value);
                    }
                    
                    uint8_t* _tmp_49 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_49 = ros->srm.requestor.type[0].role.value; 
                    __aux64__ = ros->srm.requestor.type[0].role.value; 
                    // MIN validator
                    if (VALIDATORS_ENABLED && __aux64__ < 0) {
                        logger->warning() << "Error: Value in 'srm.requestor.type[0].role.value' (" << __aux64__ << ") less than (0); message dropped.";
                        return -1;
                    }
                    // MAX validator
                    if (VALIDATORS_ENABLED && __aux64__ > 22) {
                        logger->warning() << "Error: Value in 'srm.requestor.type[0].role.value' (" << __aux64__ << ") exceeds max allowable (22); message dropped.";
                        return -1;
                    }
                    
                    if(ros->srm.requestor.type[0].subrole.size() != 0) {
                        // Field:  type(RequestSubRole) name(subrole) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000055\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].subrole[0].value) << 
                                         " srm.requestor.type[0].subrole[0].value: " << static_cast<int>(ros->srm.requestor.type[0].subrole[0].value);
                        }
                        
                        uint8_t* _tmp_50 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_50 = ros->srm.requestor.type[0].subrole[0].value; 
                        __aux64__ = ros->srm.requestor.type[0].subrole[0].value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].subrole[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].subrole[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->srm.requestor.type[0].request.size() != 0) {
                        // Field:  type(RequestImportanceLevel) name(request) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000056\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].request[0].value) << 
                                         " srm.requestor.type[0].request[0].value: " << static_cast<int>(ros->srm.requestor.type[0].request[0].value);
                        }
                        
                        uint8_t* _tmp_51 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_51 = ros->srm.requestor.type[0].request[0].value; 
                        __aux64__ = ros->srm.requestor.type[0].request[0].value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].request[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].request[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->srm.requestor.type[0].iso3883.size() != 0) {
                        // Field:  type(Iso3833VehicleType) name(iso3883) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000057\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].iso3883[0].value) << 
                                         " srm.requestor.type[0].iso3883[0].value: " << static_cast<int>(ros->srm.requestor.type[0].iso3883[0].value);
                        }
                        
                        uint8_t* _tmp_52 = (uint8_t*) buffer++;
                        *_tmp_52 = ros->srm.requestor.type[0].iso3883[0].value; 
                        __aux64__ = ros->srm.requestor.type[0].iso3883[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].iso3883[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].iso3883[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->srm.requestor.type[0].hpms_type.size() != 0) {
                        // Field:  type(VehicleType) name(hpms_type) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(15) span(16) dataType(Int32)
                        uint8_t* _ext_flag_33 = (uint8_t*) buffer++; // Write extension flag for ros->srm.requestor.type[0].hpms_type[0].
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000058\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].hpms_type[0].value) << 
                                         " srm.requestor.type[0].hpms_type[0].value: " << static_cast<int>(ros->srm.requestor.type[0].hpms_type[0].value);
                        }
                        
                        uint8_t* _tmp_53 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_53 = ros->srm.requestor.type[0].hpms_type[0].value; 
                        __aux64__ = ros->srm.requestor.type[0].hpms_type[0].value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].hpms_type[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 15) {
                            logger->warning() << "Error: Value in 'srm.requestor.type[0].hpms_type[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                            return -1;
                        }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_28) {
                    }
            }
            
            if(ros->srm.requestor.position.size() != 0) {
                // Field:  type(RequestorPositionVector) name(position) extGroup(0)
                    // RequestorPositionVector  SEQUENCE
                        //  position   Position3D               
                        //  heading    Angle                  OPTIONAL  
                        //  speed      TransmissionAndSpeed   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_34 = (uint8_t*) buffer++;  // Write extension flag for RequestorPositionVector
                    *_ext_flag_34 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_55 = (char*) buffer++;
                    *_tmp_55 = (ros->srm.requestor.position[0].heading.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000059\033[0m| Optional field heading = " << *_tmp_55;
                    char* _tmp_56 = (char*) buffer++;
                    *_tmp_56 = (ros->srm.requestor.position[0].speed.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m000060\033[0m| Optional field speed = " << *_tmp_56;
                    
                    // Field:  type(Position3D) name(position) extGroup(0)
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_35 = (uint8_t*) buffer++;  // Write extension flag for Position3D
                        *_ext_flag_35 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_57 = (char*) buffer++;
                        *_tmp_57 = (ros->srm.requestor.position[0].position.elevation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000061\033[0m| Optional field elevation = " << *_tmp_57;
                        char* _tmp_58 = (char*) buffer++;
                        *_tmp_58 = (ros->srm.requestor.position[0].position.regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m000062\033[0m| Optional field regional = " << *_tmp_58;
                        
                        // Field:  type(Latitude) name(lat) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000063\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.lat.value) << 
                                         " srm.requestor.position[0].position.lat.value: " << ros->srm.requestor.position[0].position.lat.value;
                        }
                        
                        double _tmp_60 = ros->srm.requestor.position[0].position.lat.value;
                        _tmp_60 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_60);
                        _tmp_60 -= -900000000;
                        uint32_t* _tmp_59 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_59 = static_cast<uint32_t>(_tmp_60);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -900000000) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].position.lat.value' (" << __aux64__ << ") less than (-900000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 900000001) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].position.lat.value' (" << __aux64__ << ") exceeds max allowable (900000001); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(Longitude) name(longint) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-1800000000) max(1800000001) span(3600000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000064\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.longint.value) << 
                                         " srm.requestor.position[0].position.longint.value: " << ros->srm.requestor.position[0].position.longint.value;
                        }
                        
                        double _tmp_62 = ros->srm.requestor.position[0].position.longint.value;
                        _tmp_62 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_62);
                        _tmp_62 -= -1800000000;
                        uint32_t* _tmp_61 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_61 = static_cast<uint32_t>(_tmp_62);
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < -1800000000) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].position.longint.value' (" << __aux64__ << ") less than (-1800000000); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 1800000001) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].position.longint.value' (" << __aux64__ << ") exceeds max allowable (1800000001); message dropped.";
                            return -1;
                        }
                        
                        if(ros->srm.requestor.position[0].position.elevation.size() != 0) {
                            // Field:  type(Elevation) name(elevation) extGroup(0)
                            // Real
                            
                            // FLOAT  min(-4096) max(61439) span(65536) scaleDivisor(10.0) dataType(Float)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000065\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.elevation[0].value) << 
                                             " srm.requestor.position[0].position.elevation[0].value: " << ros->srm.requestor.position[0].position.elevation[0].value;
                            }
                            
                            float _tmp_64 = ros->srm.requestor.position[0].position.elevation[0].value;
                            _tmp_64 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_64);
                            _tmp_64 -= -4096;
                            uint16_t* _tmp_63 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_63 = static_cast<uint16_t>(_tmp_64);
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < -4096) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].position.elevation[0].value' (" << __aux64__ << ") less than (-4096); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 61439) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].position.elevation[0].value' (" << __aux64__ << ") exceeds max allowable (61439); message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_35) {
                        }
                    
                    if(ros->srm.requestor.position[0].heading.size() != 0) {
                        // Field:  type(Angle) name(heading) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(28800) span(28801) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m000066\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].heading[0].value) << 
                                         " srm.requestor.position[0].heading[0].value: " << ros->srm.requestor.position[0].heading[0].value;
                        }
                        
                        uint16_t* _tmp_66 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_66 = ros->srm.requestor.position[0].heading[0].value; 
                        __aux64__ = ros->srm.requestor.position[0].heading[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].heading[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 28800) {
                            logger->warning() << "Error: Value in 'srm.requestor.position[0].heading[0].value' (" << __aux64__ << ") exceeds max allowable (28800); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->srm.requestor.position[0].speed.size() != 0) {
                        // Field:  type(TransmissionAndSpeed) name(speed) extGroup(0)
                            // TransmissionAndSpeed  SEQUENCE
                                //  transmisson TransmissionState     
                                //  speed       Velocity              
                            // Optional fields bytemap
                            
                            // Field:  type(TransmissionState) name(transmisson) extGroup(0)
                            // Enumerated
                            // INT32  min(0) max(7) span(8) dataType(Int32)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000067\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].speed[0].transmisson.value) << 
                                             " srm.requestor.position[0].speed[0].transmisson.value: " << static_cast<int>(ros->srm.requestor.position[0].speed[0].transmisson.value);
                            }
                            
                            uint8_t* _tmp_67 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_67 = ros->srm.requestor.position[0].speed[0].transmisson.value; 
                            __aux64__ = ros->srm.requestor.position[0].speed[0].transmisson.value; 
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].speed[0].transmisson.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 7) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].speed[0].transmisson.value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                                return -1;
                            }
                            
                            // Field:  type(Velocity) name(speed) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(8191) span(8192) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m000068\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].speed[0].speed.value) << 
                                             " srm.requestor.position[0].speed[0].speed.value: " << ros->srm.requestor.position[0].speed[0].speed.value;
                            }
                            
                            uint16_t* _tmp_68 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_68 = ros->srm.requestor.position[0].speed[0].speed.value; 
                            __aux64__ = ros->srm.requestor.position[0].speed[0].speed.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].speed[0].speed.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 8191) {
                                logger->warning() << "Error: Value in 'srm.requestor.position[0].speed[0].speed.value' (" << __aux64__ << ") exceeds max allowable (8191); message dropped.";
                                return -1;
                            }
                    }
                    
                    if(*_ext_flag_34) {
                    }
            }
            
            if(ros->srm.requestor.name.size() != 0) {
                // Field:  type(DescriptiveName) name(name) extGroup(0)
                // Text
                
                // TEXT  min(1) max(63) span(63)
                uint8_t* _tmp_70 = (uint8_t*)buffer;
                __aux64__ = ros->srm.requestor.name[0].value.size();
                
                if(ros->srm.requestor.name[0].value.size() < 1) {
                    logger->warning() << "Error: Length of 'srm.requestor.name[0].value' " << (ros->srm.requestor.name[0].value) << " is less than allowable (1); message dropped.";
                    return -1;
                }
                if(ros->srm.requestor.name[0].value.size() > 63) {
                    logger->warning() << "Error: Value in 'srm.requestor.name[0].value' " << (ros->srm.requestor.name[0].value) << " exceeds max allowable (63); message dropped.";
                    return -1;
                }
                if(debug)
                    logger->debug() << "|\033[38;5;94m000069\033[0m| srm.requestor.name[0].value.size(): " << 
                                static_cast<int>(ros->srm.requestor.name[0].value.size());
                
                if(__aux64__ > 63) __aux64__ = 63;
                *_tmp_70 = __aux64__ - 1;
                buffer += 1;
                
                int __ifc = __aux64__;
                for(int c = 0; c < __ifc; c++) {  // 63
                    char* __tmp__ = (char*)buffer++;
                    *__tmp__ = ros->srm.requestor.name[0].value.c_str()[c];
                }
            }
            
            if(ros->srm.requestor.route_name.size() != 0) {
                // Field:  type(DescriptiveName) name(route_name) extGroup(0)
                // Text
                
                // TEXT  min(1) max(63) span(63)
                uint8_t* _tmp_71 = (uint8_t*)buffer;
                __aux64__ = ros->srm.requestor.route_name[0].value.size();
                
                if(ros->srm.requestor.route_name[0].value.size() < 1) {
                    logger->warning() << "Error: Length of 'srm.requestor.route_name[0].value' " << (ros->srm.requestor.route_name[0].value) << " is less than allowable (1); message dropped.";
                    return -1;
                }
                if(ros->srm.requestor.route_name[0].value.size() > 63) {
                    logger->warning() << "Error: Value in 'srm.requestor.route_name[0].value' " << (ros->srm.requestor.route_name[0].value) << " exceeds max allowable (63); message dropped.";
                    return -1;
                }
                if(debug)
                    logger->debug() << "|\033[38;5;94m000070\033[0m| srm.requestor.route_name[0].value.size(): " << 
                                static_cast<int>(ros->srm.requestor.route_name[0].value.size());
                
                if(__aux64__ > 63) __aux64__ = 63;
                *_tmp_71 = __aux64__ - 1;
                buffer += 1;
                
                int __ifd = __aux64__;
                for(int d = 0; d < __ifd; d++) {  // 63
                    char* __tmp__ = (char*)buffer++;
                    *__tmp__ = ros->srm.requestor.route_name[0].value.c_str()[d];
                }
            }
            
            if(ros->srm.requestor.transit_status.size() != 0) {
                // Field:  type(TransitVehicleStatus) name(transit_status) extGroup(0)
                // BitString
                // BIT_STRING  min(8) max(8) span(1)
                if(debug)
                    logger->debug() << "|\033[38;5;94m000071\033[0m| srm.requestor.transit_status[0].value: " << static_cast<int>(ros->srm.requestor.transit_status[0].values.size());
                
                if(ros->srm.requestor.transit_status[0].values.size() < 8) {
                        logger->warning() << "Error: Value in 'srm.requestor.transit_status[0].value' " << (ros->srm.requestor.transit_status[0].values.size()) << " is less than allowable (8); message dropped.";
                    return -1;
                }
                if(ros->srm.requestor.transit_status[0].values.size() > 8) {
                        logger->warning() << "Error: Value in 'srm.requestor.transit_status[0].value' " << (ros->srm.requestor.transit_status[0].values.size()) << " exceeds max allowable (8); message dropped.";
                    return -1;
                }
                
                uint8_t* _tmp_72 = (uint8_t*)buffer;
                __aux64__ = ros->srm.requestor.transit_status[0].values.size();
                if(__aux64__ > 8) __aux64__ = 8;
                *_tmp_72 = __aux64__ - 8;
                buffer += 1;
                
                int __ife = __aux64__;
                for(int e = 0; e < __ife; e++) {
                    uint8_t* __b__ = (uint8_t*)buffer++;
                    *__b__ = (ros->srm.requestor.transit_status[0].values[e]? 1: 0);
                }
            }
            
            if(ros->srm.requestor.transit_occupancy.size() != 0) {
                // Field:  type(TransitVehicleOccupancy) name(transit_occupancy) extGroup(0)
                // Enumerated
                // INT32  min(0) max(7) span(8) dataType(Int32)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000072\033[0m| " << tools::getTypeName(ros->srm.requestor.transit_occupancy[0].value) << 
                                 " srm.requestor.transit_occupancy[0].value: " << static_cast<int>(ros->srm.requestor.transit_occupancy[0].value);
                }
                
                uint8_t* _tmp_73 = (uint8_t*)buffer;
                buffer += 1;
                *_tmp_73 = ros->srm.requestor.transit_occupancy[0].value; 
                __aux64__ = ros->srm.requestor.transit_occupancy[0].value; 
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_occupancy[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 7) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_occupancy[0].value' (" << __aux64__ << ") exceeds max allowable (7); message dropped.";
                    return -1;
                }
            }
            
            if(ros->srm.requestor.transit_schedule.size() != 0) {
                // Field:  type(DeltaTime) name(transit_schedule) extGroup(0)
                // Integer
                
                // INT8  min(-122) max(121) span(244) dataType(Int8)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m000073\033[0m| " << tools::getTypeName(ros->srm.requestor.transit_schedule[0].value) << 
                                 " srm.requestor.transit_schedule[0].value: " << static_cast<int>(ros->srm.requestor.transit_schedule[0].value);
                }
                
                uint8_t* _tmp_74 = (uint8_t*) buffer++;
                __aux64__ = ros->srm.requestor.transit_schedule[0].value - -122;
                *_tmp_74 = __aux64__;
                __aux64__ = ros->srm.requestor.transit_schedule[0].value;
                
                // MIN validator
                if (VALIDATORS_ENABLED && __aux64__ < -122) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_schedule[0].value' (" << __aux64__ << ") less than (-122); message dropped.";
                    return -1;
                }
                // MAX validator
                if (VALIDATORS_ENABLED && __aux64__ > 121) {
                    logger->warning() << "Error: Value in 'srm.requestor.transit_schedule[0].value' (" << __aux64__ << ") exceeds max allowable (121); message dropped.";
                    return -1;
                }
            }
            
            // Field name: regional  // avoided
            if(*_ext_flag_25) {
            }
        
        // Field name: regional  // avoided
        if(*_ext_flag_4) {
        }
    
	
            return buffer - start;
        }
    } 
}