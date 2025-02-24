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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v2_23:1.0
 * 
 * Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#ifndef WIND_CONSTANTS_H
#define WIND_CONSTANTS_H

// V2X
#define MESSAGE_ID                   V2X_MESSAGE_ID
#define PROTOCOL_VERSION      V2X_PROTOCOL_VERSION

// Flags
#define WIND_DEBUG_ENABLED        0
#define VALIDATORS_ENABLED        1
#define SHOW_HEX                  0
#define LOG_TO_DISK               0

// Nodes names
#define RECEIVER_NODE_NAME       "cpm_v2_23_cpm_pdu_descriptions_receiver"
#define SENDER_NODE_NAME         "cpm_v2_23_cpm_pdu_descriptions_sender"

// Topics
#define RECEIVER_ROS_TOPIC        "/CollectivePerceptionMessage_in"
#define SENDER_ROS_TOPIC          "/CollectivePerceptionMessage_out"

// Network
#define DEFAULT_SENDER_IP          "127.0.0.1" 
#define DEFAULT_SENDER_UDP_PORT    1111          
#define DEFAULT_RECEIVER_UDP_PORT  2009

// Logging
#define LOG_DIRECTORY_PATH        "hex_log"


#endif //WIND_CONSTANTS_H