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
            logger->debug() << "|\033[38;5;94m006733\033[0m| " << tools::getTypeName(ros->hheader.protocol_version.value) << 
                         " hheader.protocol_version.value: " << static_cast<int>(ros->hheader.protocol_version.value);
        }
        
        uint8_t* _tmp_7497 = (uint8_t*) buffer++;
        *_tmp_7497 = ros->hheader.protocol_version.value; 
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
            logger->debug() << "|\033[38;5;94m006734\033[0m| " << tools::getTypeName(ros->hheader.message_id.value) << 
                         " hheader.message_id.value: " << static_cast<int>(ros->hheader.message_id.value);
        }
        
        uint8_t* _tmp_7498 = (uint8_t*) buffer++;
        *_tmp_7498 = ros->hheader.message_id.value; 
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
            logger->debug() << "|\033[38;5;94m006735\033[0m| " << tools::getTypeName(ros->hheader.station_id.value) << 
                         " hheader.station_id.value: " << ros->hheader.station_id.value;
        }
        
        uint32_t* _tmp_7499 = (uint32_t*) buffer; buffer += 4;
        *_tmp_7499 = ros->hheader.station_id.value; 
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
        uint8_t* _ext_flag_3389 = (uint8_t*) buffer++;  // Write extension flag for SignalRequestMessage
        *_ext_flag_3389 = 0;  
        
        // Optional fields bytemap
        char* _tmp_7500 = (char*) buffer++;
        *_tmp_7500 = (ros->srm.time_stamp.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006736\033[0m| Optional field time_stamp = " << *_tmp_7500;
        char* _tmp_7501 = (char*) buffer++;
        *_tmp_7501 = (ros->srm.sequence_number.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006737\033[0m| Optional field sequence_number = " << *_tmp_7501;
        char* _tmp_7502 = (char*) buffer++;
        *_tmp_7502 = (ros->srm.requests.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006738\033[0m| Optional field requests = " << *_tmp_7502;
        char* _tmp_7503 = (char*) buffer++;
        *_tmp_7503 = (ros->srm.regional.size() != 0 ? 1 : 0);
        if(debug)
            logger->debug() << "|\033[38;5;94m006739\033[0m| Optional field regional = " << *_tmp_7503;
        
        if(ros->srm.time_stamp.size() != 0) {
            // Field:  type(MinuteOfTheYear) name(time_stamp) extGroup(0)
            // Integer
            
            // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
            if(debug) {
                logger->debug() << "|\033[38;5;94m006740\033[0m| " << tools::getTypeName(ros->srm.time_stamp[0].value) << 
                             " srm.time_stamp[0].value: " << ros->srm.time_stamp[0].value;
            }
            
            uint32_t* _tmp_7504 = (uint32_t*) buffer; buffer += 4;
            *_tmp_7504 = ros->srm.time_stamp[0].value; 
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
            logger->debug() << "|\033[38;5;94m006741\033[0m| " << tools::getTypeName(ros->srm.second.value) << 
                         " srm.second.value: " << ros->srm.second.value;
        }
        
        uint16_t* _tmp_7505 = (uint16_t*) buffer; buffer += 2;
        *_tmp_7505 = ros->srm.second.value; 
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
                logger->debug() << "|\033[38;5;94m006742\033[0m| " << tools::getTypeName(ros->srm.sequence_number[0].value) << 
                             " srm.sequence_number[0].value: " << static_cast<int>(ros->srm.sequence_number[0].value);
            }
            
            uint8_t* _tmp_7506 = (uint8_t*) buffer++;
            *_tmp_7506 = ros->srm.sequence_number[0].value; 
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
            uint16_t* _tmp_7507 = (uint16_t*)buffer;
            buffer += 2;
            *_tmp_7507 = __aux64__ - 1;
            
            int __ifw = __aux64__;
            for(int w = 0; w < __ifw; w++) { 
                
                    // SignalRequestPackage  SEQUENCE
                        //  request    SignalRequest                     
                        //  minute     MinuteOfTheYear                 OPTIONAL  
                        //  second     DSecond                         OPTIONAL  
                        //  duration   DSecond                         OPTIONAL  
                        //  regional   SignalRequestPackage_regional   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_3393 = (uint8_t*) buffer++;  // Write extension flag for SignalRequestPackage
                    *_ext_flag_3393 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_7508 = (char*) buffer++;
                    *_tmp_7508 = (ros->srm.requests[0].elements[w].minute.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006744\033[0m| Optional field minute = " << *_tmp_7508;
                    char* _tmp_7509 = (char*) buffer++;
                    *_tmp_7509 = (ros->srm.requests[0].elements[w].second.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006745\033[0m| Optional field second = " << *_tmp_7509;
                    char* _tmp_7510 = (char*) buffer++;
                    *_tmp_7510 = (ros->srm.requests[0].elements[w].duration.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006746\033[0m| Optional field duration = " << *_tmp_7510;
                    char* _tmp_7511 = (char*) buffer++;
                    *_tmp_7511 = (ros->srm.requests[0].elements[w].regional.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006747\033[0m| Optional field regional = " << *_tmp_7511;
                    
                    // Field:  type(SignalRequest) name(request) extGroup(0)
                        // SignalRequest  SEQUENCE
                            //  id           IntersectionReferenceID     
                            //  requestID    RequestID                   
                            //  requestType  PriorityRequestType         
                            //  inBoundLane  IntersectionAccessPoint     
                            //  outBoundLane IntersectionAccessPoint   OPTIONAL  
                            //  regional     SignalRequest_regional    OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3394 = (uint8_t*) buffer++;  // Write extension flag for SignalRequest
                        *_ext_flag_3394 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_7512 = (char*) buffer++;
                        *_tmp_7512 = (ros->srm.requests[0].elements[w].request.out_bound_lane.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006748\033[0m| Optional field out_bound_lane = " << *_tmp_7512;
                        char* _tmp_7513 = (char*) buffer++;
                        *_tmp_7513 = (ros->srm.requests[0].elements[w].request.regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006749\033[0m| Optional field regional = " << *_tmp_7513;
                        
                        // Field:  type(IntersectionReferenceID) name(id) extGroup(0)
                            // IntersectionReferenceID  SEQUENCE
                                //  region     RoadRegulatorID   OPTIONAL  
                                //  id         IntersectionID      
                            // Optional fields bytemap
                            char* _tmp_7514 = (char*) buffer++;
                            *_tmp_7514 = (ros->srm.requests[0].elements[w].request.id.region.size() != 0 ? 1 : 0);
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006750\033[0m| Optional field region = " << *_tmp_7514;
                            
                            if(ros->srm.requests[0].elements[w].request.id.region.size() != 0) {
                                // Field:  type(RoadRegulatorID) name(region) extGroup(0)
                                // Integer
                                
                                // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006751\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.id.region[0].value) << 
                                                 " srm.requests[0].elements[w].request.id.region[0].value: " << ros->srm.requests[0].elements[w].request.id.region[0].value;
                                }
                                
                                uint16_t* _tmp_7515 = (uint16_t*) buffer; buffer += 2;
                                *_tmp_7515 = ros->srm.requests[0].elements[w].request.id.region[0].value; 
                                __aux64__ = ros->srm.requests[0].elements[w].request.id.region[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.id.region[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.id.region[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                    return -1;
                                }
                            }
                            
                            // Field:  type(IntersectionID) name(id) extGroup(0)
                            // Integer
                            
                            // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006752\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.id.id.value) << 
                                             " srm.requests[0].elements[w].request.id.id.value: " << ros->srm.requests[0].elements[w].request.id.id.value;
                            }
                            
                            uint16_t* _tmp_7516 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_7516 = ros->srm.requests[0].elements[w].request.id.id.value; 
                            __aux64__ = ros->srm.requests[0].elements[w].request.id.id.value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.id.id.value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.id.id.value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                                return -1;
                            }
                        
                        // Field:  type(RequestID) name(request_id) extGroup(0)
                        // Integer
                        
                        // UINT8  min(0) max(255) span(256) dataType(UInt8)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006753\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.request_id.value) << 
                                         " srm.requests[0].elements[w].request.request_id.value: " << static_cast<int>(ros->srm.requests[0].elements[w].request.request_id.value);
                        }
                        
                        uint8_t* _tmp_7517 = (uint8_t*) buffer++;
                        *_tmp_7517 = ros->srm.requests[0].elements[w].request.request_id.value; 
                        __aux64__ = ros->srm.requests[0].elements[w].request.request_id.value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.request_id.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 255) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.request_id.value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(PriorityRequestType) name(request_type) extGroup(0)
                        // Enumerated
                        // INT32  min(0) max(3) span(4) dataType(Int32)
                        uint8_t* _ext_flag_3398 = (uint8_t*) buffer++; // Write extension flag for ros->srm.requests[0].elements[w].request.request_type.
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006754\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.request_type.value) << 
                                         " srm.requests[0].elements[w].request.request_type.value: " << static_cast<int>(ros->srm.requests[0].elements[w].request.request_type.value);
                        }
                        
                        uint8_t* _tmp_7518 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_7518 = ros->srm.requests[0].elements[w].request.request_type.value; 
                        __aux64__ = ros->srm.requests[0].elements[w].request.request_type.value; 
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.request_type.value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 3) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.request_type.value' (" << __aux64__ << ") exceeds max allowable (3); message dropped.";
                            return -1;
                        }
                        
                        // Field:  type(IntersectionAccessPoint) name(in_bound_lane) extGroup(0)
                        // Choice
                           // #0  lane   LaneID
                           // #1  approach   ApproachID
                           // #2  connection   LaneConnectionID
                        uint8_t* _ext_flag_3399 = (uint8_t*) buffer; 
                        buffer++;
                        *_ext_flag_3399 = 0; 
                        
                        uint8_t* _choice_247 = (uint8_t*) buffer;
                        buffer++;
                        
                        if(ros->srm.requests[0].elements[w].request.in_bound_lane.lane.size() != 0) {  // CHOICE 0  fieldType(IntersectionAccessPoint) 
                            *_choice_247 = 0;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006755\033[0m| Choice selection: 0";
                        
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006756\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.in_bound_lane.lane[0].value) << 
                                             " srm.requests[0].elements[w].request.in_bound_lane.lane[0].value: " << static_cast<int>(ros->srm.requests[0].elements[w].request.in_bound_lane.lane[0].value);
                            }
                            
                            uint8_t* _tmp_7519 = (uint8_t*) buffer++;
                            *_tmp_7519 = ros->srm.requests[0].elements[w].request.in_bound_lane.lane[0].value; 
                            __aux64__ = ros->srm.requests[0].elements[w].request.in_bound_lane.lane[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.in_bound_lane.lane[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.in_bound_lane.lane[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        
                        }
                        else if(ros->srm.requests[0].elements[w].request.in_bound_lane.approach.size() != 0)  // CHOICE 1  fieldType(IntersectionAccessPoint) 
                        {
                            *_choice_247 = 1;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006757\033[0m| Choice selection: 1";
                        
                            // Integer
                            
                            // UINT8  min(0) max(15) span(16) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006758\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.in_bound_lane.approach[0].value) << 
                                             " srm.requests[0].elements[w].request.in_bound_lane.approach[0].value: " << static_cast<int>(ros->srm.requests[0].elements[w].request.in_bound_lane.approach[0].value);
                            }
                            
                            uint8_t* _tmp_7520 = (uint8_t*) buffer++;
                            *_tmp_7520 = ros->srm.requests[0].elements[w].request.in_bound_lane.approach[0].value; 
                            __aux64__ = ros->srm.requests[0].elements[w].request.in_bound_lane.approach[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.in_bound_lane.approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.in_bound_lane.approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                return -1;
                            }
                        
                        }
                        else if(ros->srm.requests[0].elements[w].request.in_bound_lane.connection.size() != 0)  // CHOICE 2  fieldType(IntersectionAccessPoint) 
                        {
                            *_choice_247 = 2;  // Setting choice selection
                        
                            if(debug)
                                logger->debug() << "|\033[38;5;94m006759\033[0m| Choice selection: 2";
                        
                            // Integer
                            
                            // UINT8  min(0) max(255) span(256) dataType(UInt8)
                            if(debug) {
                                logger->debug() << "|\033[38;5;94m006760\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.in_bound_lane.connection[0].value) << 
                                             " srm.requests[0].elements[w].request.in_bound_lane.connection[0].value: " << static_cast<int>(ros->srm.requests[0].elements[w].request.in_bound_lane.connection[0].value);
                            }
                            
                            uint8_t* _tmp_7521 = (uint8_t*) buffer++;
                            *_tmp_7521 = ros->srm.requests[0].elements[w].request.in_bound_lane.connection[0].value; 
                            __aux64__ = ros->srm.requests[0].elements[w].request.in_bound_lane.connection[0].value;
                            
                            // MIN validator
                            if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.in_bound_lane.connection[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                return -1;
                            }
                            // MAX validator
                            if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.in_bound_lane.connection[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                return -1;
                            }
                        
                        }
                        else
                        {
                            logger->warning() << "Wrong option (" << static_cast<int>(*_choice_247) << ") selected in CHOICE IntersectionAccessPoint in 'srm.requests[0].elements[w].request.in_bound_lane'; message dropped.";
                            return -1;
                        }
                        
                        if(ros->srm.requests[0].elements[w].request.out_bound_lane.size() != 0) {
                            // Field:  type(IntersectionAccessPoint) name(out_bound_lane) extGroup(0)
                            // Choice
                               // #0  lane   LaneID
                               // #1  approach   ApproachID
                               // #2  connection   LaneConnectionID
                            uint8_t* _ext_flag_3403 = (uint8_t*) buffer; 
                            buffer++;
                            *_ext_flag_3403 = 0; 
                            
                            uint8_t* _choice_248 = (uint8_t*) buffer;
                            buffer++;
                            
                            if(ros->srm.requests[0].elements[w].request.out_bound_lane[0].lane.size() != 0) {  // CHOICE 0  fieldType(IntersectionAccessPoint) 
                                *_choice_248 = 0;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006761\033[0m| Choice selection: 0";
                            
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006762\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.out_bound_lane[0].lane[0].value) << 
                                                 " srm.requests[0].elements[w].request.out_bound_lane[0].lane[0].value: " << static_cast<int>(ros->srm.requests[0].elements[w].request.out_bound_lane[0].lane[0].value);
                                }
                                
                                uint8_t* _tmp_7522 = (uint8_t*) buffer++;
                                *_tmp_7522 = ros->srm.requests[0].elements[w].request.out_bound_lane[0].lane[0].value; 
                                __aux64__ = ros->srm.requests[0].elements[w].request.out_bound_lane[0].lane[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.out_bound_lane[0].lane[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.out_bound_lane[0].lane[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else if(ros->srm.requests[0].elements[w].request.out_bound_lane[0].approach.size() != 0)  // CHOICE 1  fieldType(IntersectionAccessPoint) 
                            {
                                *_choice_248 = 1;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006763\033[0m| Choice selection: 1";
                            
                                // Integer
                                
                                // UINT8  min(0) max(15) span(16) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006764\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.out_bound_lane[0].approach[0].value) << 
                                                 " srm.requests[0].elements[w].request.out_bound_lane[0].approach[0].value: " << static_cast<int>(ros->srm.requests[0].elements[w].request.out_bound_lane[0].approach[0].value);
                                }
                                
                                uint8_t* _tmp_7523 = (uint8_t*) buffer++;
                                *_tmp_7523 = ros->srm.requests[0].elements[w].request.out_bound_lane[0].approach[0].value; 
                                __aux64__ = ros->srm.requests[0].elements[w].request.out_bound_lane[0].approach[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.out_bound_lane[0].approach[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 15) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.out_bound_lane[0].approach[0].value' (" << __aux64__ << ") exceeds max allowable (15); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else if(ros->srm.requests[0].elements[w].request.out_bound_lane[0].connection.size() != 0)  // CHOICE 2  fieldType(IntersectionAccessPoint) 
                            {
                                *_choice_248 = 2;  // Setting choice selection
                            
                                if(debug)
                                    logger->debug() << "|\033[38;5;94m006765\033[0m| Choice selection: 2";
                            
                                // Integer
                                
                                // UINT8  min(0) max(255) span(256) dataType(UInt8)
                                if(debug) {
                                    logger->debug() << "|\033[38;5;94m006766\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].request.out_bound_lane[0].connection[0].value) << 
                                                 " srm.requests[0].elements[w].request.out_bound_lane[0].connection[0].value: " << static_cast<int>(ros->srm.requests[0].elements[w].request.out_bound_lane[0].connection[0].value);
                                }
                                
                                uint8_t* _tmp_7524 = (uint8_t*) buffer++;
                                *_tmp_7524 = ros->srm.requests[0].elements[w].request.out_bound_lane[0].connection[0].value; 
                                __aux64__ = ros->srm.requests[0].elements[w].request.out_bound_lane[0].connection[0].value;
                                
                                // MIN validator
                                if (VALIDATORS_ENABLED && __aux64__ < 0) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.out_bound_lane[0].connection[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                                    return -1;
                                }
                                // MAX validator
                                if (VALIDATORS_ENABLED && __aux64__ > 255) {
                                    logger->warning() << "Error: Value in 'srm.requests[0].elements[w].request.out_bound_lane[0].connection[0].value' (" << __aux64__ << ") exceeds max allowable (255); message dropped.";
                                    return -1;
                                }
                            
                            }
                            else
                            {
                                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_248) << ") selected in CHOICE IntersectionAccessPoint in 'srm.requests[0].elements[w].request.out_bound_lane[0]'; message dropped.";
                                return -1;
                            }
                        }
                        
                        // Field name: regional  // avoided
                        if(*_ext_flag_3394) {
                        }
                    
                    if(ros->srm.requests[0].elements[w].minute.size() != 0) {
                        // Field:  type(MinuteOfTheYear) name(minute) extGroup(0)
                        // Integer
                        
                        // UINT32  min(0) max(527040) span(527041) dataType(UInt32)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006767\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].minute[0].value) << 
                                         " srm.requests[0].elements[w].minute[0].value: " << ros->srm.requests[0].elements[w].minute[0].value;
                        }
                        
                        uint32_t* _tmp_7526 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_7526 = ros->srm.requests[0].elements[w].minute[0].value; 
                        __aux64__ = ros->srm.requests[0].elements[w].minute[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].minute[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 527040) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].minute[0].value' (" << __aux64__ << ") exceeds max allowable (527040); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->srm.requests[0].elements[w].second.size() != 0) {
                        // Field:  type(DSecond) name(second) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006768\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].second[0].value) << 
                                         " srm.requests[0].elements[w].second[0].value: " << ros->srm.requests[0].elements[w].second[0].value;
                        }
                        
                        uint16_t* _tmp_7527 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_7527 = ros->srm.requests[0].elements[w].second[0].value; 
                        __aux64__ = ros->srm.requests[0].elements[w].second[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].second[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].second[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    }
                    
                    if(ros->srm.requests[0].elements[w].duration.size() != 0) {
                        // Field:  type(DSecond) name(duration) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(65535) span(65536) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006769\033[0m| " << tools::getTypeName(ros->srm.requests[0].elements[w].duration[0].value) << 
                                         " srm.requests[0].elements[w].duration[0].value: " << ros->srm.requests[0].elements[w].duration[0].value;
                        }
                        
                        uint16_t* _tmp_7528 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_7528 = ros->srm.requests[0].elements[w].duration[0].value; 
                        __aux64__ = ros->srm.requests[0].elements[w].duration[0].value;
                        
                        // MIN validator
                        if (VALIDATORS_ENABLED && __aux64__ < 0) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].duration[0].value' (" << __aux64__ << ") less than (0); message dropped.";
                            return -1;
                        }
                        // MAX validator
                        if (VALIDATORS_ENABLED && __aux64__ > 65535) {
                            logger->warning() << "Error: Value in 'srm.requests[0].elements[w].duration[0].value' (" << __aux64__ << ") exceeds max allowable (65535); message dropped.";
                            return -1;
                        }
                    }
                    
                    // Field name: regional  // avoided
                    if(*_ext_flag_3393) {
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
            uint8_t* _ext_flag_3410 = (uint8_t*) buffer++;  // Write extension flag for RequestorDescription
            *_ext_flag_3410 = 0;  
            
            // Optional fields bytemap
            char* _tmp_7530 = (char*) buffer++;
            *_tmp_7530 = (ros->srm.requestor.type.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m006770\033[0m| Optional field type = " << *_tmp_7530;
            char* _tmp_7531 = (char*) buffer++;
            *_tmp_7531 = (ros->srm.requestor.position.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m006771\033[0m| Optional field position = " << *_tmp_7531;
            char* _tmp_7532 = (char*) buffer++;
            *_tmp_7532 = (ros->srm.requestor.name.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m006772\033[0m| Optional field name = " << *_tmp_7532;
            char* _tmp_7533 = (char*) buffer++;
            *_tmp_7533 = (ros->srm.requestor.route_name.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m006773\033[0m| Optional field route_name = " << *_tmp_7533;
            char* _tmp_7534 = (char*) buffer++;
            *_tmp_7534 = (ros->srm.requestor.transit_status.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m006774\033[0m| Optional field transit_status = " << *_tmp_7534;
            char* _tmp_7535 = (char*) buffer++;
            *_tmp_7535 = (ros->srm.requestor.transit_occupancy.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m006775\033[0m| Optional field transit_occupancy = " << *_tmp_7535;
            char* _tmp_7536 = (char*) buffer++;
            *_tmp_7536 = (ros->srm.requestor.transit_schedule.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m006776\033[0m| Optional field transit_schedule = " << *_tmp_7536;
            char* _tmp_7537 = (char*) buffer++;
            *_tmp_7537 = (ros->srm.requestor.regional.size() != 0 ? 1 : 0);
            if(debug)
                logger->debug() << "|\033[38;5;94m006777\033[0m| Optional field regional = " << *_tmp_7537;
            
            // Field:  type(VehicleID) name(id) extGroup(0)
            // Choice
               // #0  entityID   TemporaryID
               // #1  stationID   StationID
            uint8_t* _choice_249 = (uint8_t*) buffer;
            buffer++;
            
            if(ros->srm.requestor.id.entity_id.size() != 0) {  // CHOICE 0  fieldType(VehicleID) 
                *_choice_249 = 0;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006778\033[0m| Choice selection: 0";
            
                // OctetString
                // OCTET_STRING  min(4) max(4) span(1)
                
                if(debug)
                    logger->debug() << "|\033[38;5;94m006779\033[0m| srm.requestor.id.entity_id[0].values.size(): srm.requestor.id.entity_id[0]" << static_cast<int>(ros->srm.requestor.id.entity_id[0].values.size());
                
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
                uint8_t* _tmp_7538 = (uint8_t*)buffer;
                buffer += 1;
                __aux64__ = ros->srm.requestor.id.entity_id[0].values.size();
                if(__aux64__ > 4) __aux64__ = 4;
                *_tmp_7538 = __aux64__ - 4;
                
                int __ifx = __aux64__;
                for(int x = 0; x < __ifx; x++) {
                    int8_t* __m__ = (int8_t*)buffer++;
                    *__m__ = ros->srm.requestor.id.entity_id[0].values[x];
                }
            
            }
            else if(ros->srm.requestor.id.station_id.size() != 0)  // CHOICE 1  fieldType(VehicleID) 
            {
                *_choice_249 = 1;  // Setting choice selection
            
                if(debug)
                    logger->debug() << "|\033[38;5;94m006780\033[0m| Choice selection: 1";
            
                // Integer
                
                // UINT32  min(0) max(4294967295) span(4294967296) dataType(UInt32)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m006781\033[0m| " << tools::getTypeName(ros->srm.requestor.id.station_id[0].value) << 
                                 " srm.requestor.id.station_id[0].value: " << ros->srm.requestor.id.station_id[0].value;
                }
                
                uint32_t* _tmp_7539 = (uint32_t*) buffer; buffer += 4;
                *_tmp_7539 = ros->srm.requestor.id.station_id[0].value; 
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
                logger->warning() << "Wrong option (" << static_cast<int>(*_choice_249) << ") selected in CHOICE VehicleID in 'srm.requestor.id'; message dropped.";
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
                    uint8_t* _ext_flag_3413 = (uint8_t*) buffer++;  // Write extension flag for RequestorType
                    *_ext_flag_3413 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_7540 = (char*) buffer++;
                    *_tmp_7540 = (ros->srm.requestor.type[0].subrole.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006782\033[0m| Optional field subrole = " << *_tmp_7540;
                    char* _tmp_7541 = (char*) buffer++;
                    *_tmp_7541 = (ros->srm.requestor.type[0].request.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006783\033[0m| Optional field request = " << *_tmp_7541;
                    char* _tmp_7542 = (char*) buffer++;
                    *_tmp_7542 = (ros->srm.requestor.type[0].iso3883.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006784\033[0m| Optional field iso3883 = " << *_tmp_7542;
                    char* _tmp_7543 = (char*) buffer++;
                    *_tmp_7543 = (ros->srm.requestor.type[0].hpms_type.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006785\033[0m| Optional field hpms_type = " << *_tmp_7543;
                    char* _tmp_7544 = (char*) buffer++;
                    *_tmp_7544 = (ros->srm.requestor.type[0].regional.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006786\033[0m| Optional field regional = " << *_tmp_7544;
                    
                    // Field:  type(BasicVehicleRole) name(role) extGroup(0)
                    // Enumerated
                    // INT32  min(0) max(22) span(23) dataType(Int32)
                    uint8_t* _ext_flag_3414 = (uint8_t*) buffer++; // Write extension flag for ros->srm.requestor.type[0].role.
                    if(debug) {
                        logger->debug() << "|\033[38;5;94m006787\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].role.value) << 
                                     " srm.requestor.type[0].role.value: " << static_cast<int>(ros->srm.requestor.type[0].role.value);
                    }
                    
                    uint8_t* _tmp_7545 = (uint8_t*)buffer;
                    buffer += 1;
                    *_tmp_7545 = ros->srm.requestor.type[0].role.value; 
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
                            logger->debug() << "|\033[38;5;94m006788\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].subrole[0].value) << 
                                         " srm.requestor.type[0].subrole[0].value: " << static_cast<int>(ros->srm.requestor.type[0].subrole[0].value);
                        }
                        
                        uint8_t* _tmp_7546 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_7546 = ros->srm.requestor.type[0].subrole[0].value; 
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
                            logger->debug() << "|\033[38;5;94m006789\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].request[0].value) << 
                                         " srm.requestor.type[0].request[0].value: " << static_cast<int>(ros->srm.requestor.type[0].request[0].value);
                        }
                        
                        uint8_t* _tmp_7547 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_7547 = ros->srm.requestor.type[0].request[0].value; 
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
                            logger->debug() << "|\033[38;5;94m006790\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].iso3883[0].value) << 
                                         " srm.requestor.type[0].iso3883[0].value: " << static_cast<int>(ros->srm.requestor.type[0].iso3883[0].value);
                        }
                        
                        uint8_t* _tmp_7548 = (uint8_t*) buffer++;
                        *_tmp_7548 = ros->srm.requestor.type[0].iso3883[0].value; 
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
                        uint8_t* _ext_flag_3418 = (uint8_t*) buffer++; // Write extension flag for ros->srm.requestor.type[0].hpms_type[0].
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006791\033[0m| " << tools::getTypeName(ros->srm.requestor.type[0].hpms_type[0].value) << 
                                         " srm.requestor.type[0].hpms_type[0].value: " << static_cast<int>(ros->srm.requestor.type[0].hpms_type[0].value);
                        }
                        
                        uint8_t* _tmp_7549 = (uint8_t*)buffer;
                        buffer += 1;
                        *_tmp_7549 = ros->srm.requestor.type[0].hpms_type[0].value; 
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
                    if(*_ext_flag_3413) {
                    }
            }
            
            if(ros->srm.requestor.position.size() != 0) {
                // Field:  type(RequestorPositionVector) name(position) extGroup(0)
                    // RequestorPositionVector  SEQUENCE
                        //  position   Position3D               
                        //  heading    Angle                  OPTIONAL  
                        //  speed      TransmissionAndSpeed   OPTIONAL  
                        //  ...
                    uint8_t* _ext_flag_3419 = (uint8_t*) buffer++;  // Write extension flag for RequestorPositionVector
                    *_ext_flag_3419 = 0;  
                    
                    // Optional fields bytemap
                    char* _tmp_7551 = (char*) buffer++;
                    *_tmp_7551 = (ros->srm.requestor.position[0].heading.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006792\033[0m| Optional field heading = " << *_tmp_7551;
                    char* _tmp_7552 = (char*) buffer++;
                    *_tmp_7552 = (ros->srm.requestor.position[0].speed.size() != 0 ? 1 : 0);
                    if(debug)
                        logger->debug() << "|\033[38;5;94m006793\033[0m| Optional field speed = " << *_tmp_7552;
                    
                    // Field:  type(Position3D) name(position) extGroup(0)
                        // Position3D  SEQUENCE
                            //  lat        Latitude                
                            //  longint    Longitude               
                            //  elevation  Elevation             OPTIONAL  
                            //  regional   Position3D_regional   OPTIONAL  
                            //  ...
                        uint8_t* _ext_flag_3420 = (uint8_t*) buffer++;  // Write extension flag for Position3D
                        *_ext_flag_3420 = 0;  
                        
                        // Optional fields bytemap
                        char* _tmp_7553 = (char*) buffer++;
                        *_tmp_7553 = (ros->srm.requestor.position[0].position.elevation.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006794\033[0m| Optional field elevation = " << *_tmp_7553;
                        char* _tmp_7554 = (char*) buffer++;
                        *_tmp_7554 = (ros->srm.requestor.position[0].position.regional.size() != 0 ? 1 : 0);
                        if(debug)
                            logger->debug() << "|\033[38;5;94m006795\033[0m| Optional field regional = " << *_tmp_7554;
                        
                        // Field:  type(Latitude) name(lat) extGroup(0)
                        // Real
                        
                        // DOUBLE  min(-900000000) max(900000001) span(1800000002) scaleDivisor(1.0E7) dataType(Double)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006796\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.lat.value) << 
                                         " srm.requestor.position[0].position.lat.value: " << ros->srm.requestor.position[0].position.lat.value;
                        }
                        
                        double _tmp_7556 = ros->srm.requestor.position[0].position.lat.value;
                        _tmp_7556 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_7556);
                        _tmp_7556 -= -900000000;
                        uint32_t* _tmp_7555 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_7555 = static_cast<uint32_t>(_tmp_7556);
                        
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
                            logger->debug() << "|\033[38;5;94m006797\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.longint.value) << 
                                         " srm.requestor.position[0].position.longint.value: " << ros->srm.requestor.position[0].position.longint.value;
                        }
                        
                        double _tmp_7558 = ros->srm.requestor.position[0].position.longint.value;
                        _tmp_7558 *= 1.0E7;
                        __aux64__ = static_cast<uint64_t>(_tmp_7558);
                        _tmp_7558 -= -1800000000;
                        uint32_t* _tmp_7557 = (uint32_t*) buffer; buffer += 4;
                        *_tmp_7557 = static_cast<uint32_t>(_tmp_7558);
                        
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
                                logger->debug() << "|\033[38;5;94m006798\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].position.elevation[0].value) << 
                                             " srm.requestor.position[0].position.elevation[0].value: " << ros->srm.requestor.position[0].position.elevation[0].value;
                            }
                            
                            float _tmp_7560 = ros->srm.requestor.position[0].position.elevation[0].value;
                            _tmp_7560 *= 10.0;
                            __aux64__ = static_cast<uint64_t>(_tmp_7560);
                            _tmp_7560 -= -4096;
                            uint16_t* _tmp_7559 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_7559 = static_cast<uint16_t>(_tmp_7560);
                            
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
                        if(*_ext_flag_3420) {
                        }
                    
                    if(ros->srm.requestor.position[0].heading.size() != 0) {
                        // Field:  type(Angle) name(heading) extGroup(0)
                        // Integer
                        
                        // UINT16  min(0) max(28800) span(28801) dataType(UInt16)
                        if(debug) {
                            logger->debug() << "|\033[38;5;94m006799\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].heading[0].value) << 
                                         " srm.requestor.position[0].heading[0].value: " << ros->srm.requestor.position[0].heading[0].value;
                        }
                        
                        uint16_t* _tmp_7562 = (uint16_t*) buffer; buffer += 2;
                        *_tmp_7562 = ros->srm.requestor.position[0].heading[0].value; 
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
                                logger->debug() << "|\033[38;5;94m006800\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].speed[0].transmisson.value) << 
                                             " srm.requestor.position[0].speed[0].transmisson.value: " << static_cast<int>(ros->srm.requestor.position[0].speed[0].transmisson.value);
                            }
                            
                            uint8_t* _tmp_7563 = (uint8_t*)buffer;
                            buffer += 1;
                            *_tmp_7563 = ros->srm.requestor.position[0].speed[0].transmisson.value; 
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
                                logger->debug() << "|\033[38;5;94m006801\033[0m| " << tools::getTypeName(ros->srm.requestor.position[0].speed[0].speed.value) << 
                                             " srm.requestor.position[0].speed[0].speed.value: " << ros->srm.requestor.position[0].speed[0].speed.value;
                            }
                            
                            uint16_t* _tmp_7564 = (uint16_t*) buffer; buffer += 2;
                            *_tmp_7564 = ros->srm.requestor.position[0].speed[0].speed.value; 
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
                    
                    if(*_ext_flag_3419) {
                    }
            }
            
            if(ros->srm.requestor.name.size() != 0) {
                // Field:  type(DescriptiveName) name(name) extGroup(0)
                // Text
                
                // TEXT  min(1) max(63) span(63)
                uint8_t* _tmp_7566 = (uint8_t*)buffer;
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
                    logger->debug() << "|\033[38;5;94m006802\033[0m| srm.requestor.name[0].value.size(): " << 
                                static_cast<int>(ros->srm.requestor.name[0].value.size());
                
                if(__aux64__ > 63) __aux64__ = 63;
                *_tmp_7566 = __aux64__ - 1;
                buffer += 1;
                
                int __ify = __aux64__;
                for(int y = 0; y < __ify; y++) {  // 63
                    char* __tmp__ = (char*)buffer++;
                    *__tmp__ = ros->srm.requestor.name[0].value.c_str()[y];
                }
            }
            
            if(ros->srm.requestor.route_name.size() != 0) {
                // Field:  type(DescriptiveName) name(route_name) extGroup(0)
                // Text
                
                // TEXT  min(1) max(63) span(63)
                uint8_t* _tmp_7567 = (uint8_t*)buffer;
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
                    logger->debug() << "|\033[38;5;94m006803\033[0m| srm.requestor.route_name[0].value.size(): " << 
                                static_cast<int>(ros->srm.requestor.route_name[0].value.size());
                
                if(__aux64__ > 63) __aux64__ = 63;
                *_tmp_7567 = __aux64__ - 1;
                buffer += 1;
                
                int __ifz = __aux64__;
                for(int z = 0; z < __ifz; z++) {  // 63
                    char* __tmp__ = (char*)buffer++;
                    *__tmp__ = ros->srm.requestor.route_name[0].value.c_str()[z];
                }
            }
            
            if(ros->srm.requestor.transit_status.size() != 0) {
                // Field:  type(TransitVehicleStatus) name(transit_status) extGroup(0)
                // BitString
                // BIT_STRING  min(8) max(8) span(1)
                if(debug)
                    logger->debug() << "|\033[38;5;94m006804\033[0m| srm.requestor.transit_status[0].value: " << static_cast<int>(ros->srm.requestor.transit_status[0].values.size());
                
                if(ros->srm.requestor.transit_status[0].values.size() < 8) {
                        logger->warning() << "Error: Value in 'srm.requestor.transit_status[0].value' " << (ros->srm.requestor.transit_status[0].values.size()) << " is less than allowable (8); message dropped.";
                    return -1;
                }
                if(ros->srm.requestor.transit_status[0].values.size() > 8) {
                        logger->warning() << "Error: Value in 'srm.requestor.transit_status[0].value' " << (ros->srm.requestor.transit_status[0].values.size()) << " exceeds max allowable (8); message dropped.";
                    return -1;
                }
                
                uint8_t* _tmp_7568 = (uint8_t*)buffer;
                __aux64__ = ros->srm.requestor.transit_status[0].values.size();
                if(__aux64__ > 8) __aux64__ = 8;
                *_tmp_7568 = __aux64__ - 8;
                buffer += 1;
                
                int __ifa = __aux64__;
                for(int a = 0; a < __ifa; a++) {
                    uint8_t* __b__ = (uint8_t*)buffer++;
                    *__b__ = (ros->srm.requestor.transit_status[0].values[a]? 1: 0);
                }
            }
            
            if(ros->srm.requestor.transit_occupancy.size() != 0) {
                // Field:  type(TransitVehicleOccupancy) name(transit_occupancy) extGroup(0)
                // Enumerated
                // INT32  min(0) max(7) span(8) dataType(Int32)
                if(debug) {
                    logger->debug() << "|\033[38;5;94m006805\033[0m| " << tools::getTypeName(ros->srm.requestor.transit_occupancy[0].value) << 
                                 " srm.requestor.transit_occupancy[0].value: " << static_cast<int>(ros->srm.requestor.transit_occupancy[0].value);
                }
                
                uint8_t* _tmp_7569 = (uint8_t*)buffer;
                buffer += 1;
                *_tmp_7569 = ros->srm.requestor.transit_occupancy[0].value; 
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
                    logger->debug() << "|\033[38;5;94m006806\033[0m| " << tools::getTypeName(ros->srm.requestor.transit_schedule[0].value) << 
                                 " srm.requestor.transit_schedule[0].value: " << static_cast<int>(ros->srm.requestor.transit_schedule[0].value);
                }
                
                uint8_t* _tmp_7570 = (uint8_t*) buffer++;
                __aux64__ = ros->srm.requestor.transit_schedule[0].value - -122;
                *_tmp_7570 = __aux64__;
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
            if(*_ext_flag_3410) {
            }
        
        // Field name: regional  // avoided
        if(*_ext_flag_3389) {
        }
    
	
            return buffer - start;
        }
    } 
}