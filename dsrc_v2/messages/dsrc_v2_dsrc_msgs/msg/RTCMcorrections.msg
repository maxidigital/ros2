#*                                                                             *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)             *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)               *
#*                                                                             *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore    *
#*                                                                             *
#* This program and the accompanying materials are made available under the    *
#* terms of the Eclipse Public License 2.0 which is available at               *
#* http://www.eclipse.org/legal/epl-2.0.                                       *
#*                                                                             *
#* SPDX-License-Identifier: EPL-2.0                                            *
#*                                                                             *
#*                                                                             *
#* File automatically generated with DLR Wind v2                               *
#*                                                                             *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0         *
#*                                                                             *
#* Module: DSRC {iso(1) standard(0) signalizedIntersection(19091) profilec(2)  *
#*     dsrc(2) version2(2)}                                                    *
#*                                                                             *
#* For support contact v2x-ts@dlr.de                                           *
#*                                                                             *

#
# ASN.1 Definition:
# SEQUENCE {
#    msgCnt MsgCount,
#    rev RTCM_Revision,
#    timeStamp MinuteOfTheYear OPTIONAL,
#    anchorPoint FullPositionVector OPTIONAL,
#    rtcmHeader RTCMheader OPTIONAL,
#    msgs RTCMmessageList,
#    regional SEQUENCE(SIZE(1..4)) OF RegionalExtension OPTIONAL AVOID,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RTCMcorrections **********
#

MsgCount                  msg_cnt
RTCMRevision              rev
MinuteOfTheYear[]         time_stamp      # OPTIONAL
FullPositionVector[]      anchor_point    # OPTIONAL
RTCMheader[]              rtcm_header     # OPTIONAL
RTCMmessageList           msgs
RTCMcorrectionsRegional[] regional        # OPTIONAL

# ********** END of RTCMcorrections   **********
