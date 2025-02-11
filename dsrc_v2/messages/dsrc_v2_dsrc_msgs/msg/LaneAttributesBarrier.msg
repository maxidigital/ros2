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
# BIT STRING { median-RevocableLane(0), median(1), whiteLineHashing(2), stripedLines(3), doubleStripedLines(4), trafficCones(5), constructionBarrier(6), trafficChannels(7), lowCurbs(8), highCurbs(9) }(SIZE(16)) 
# 
# Element type: BIT STRING
#
# ********** START of LaneAttributesBarrier **********
#

bool[]          values

uint8           MIN                   = 16
uint8           MAX                   = 16

uint8           MEDIAN_REVOCABLE_LANE = 0
uint8           MEDIAN                = 1
uint8           WHITE_LINE_HASHING    = 2
uint8           STRIPED_LINES         = 3
uint8           DOUBLE_STRIPED_LINES  = 4
uint8           TRAFFIC_CONES         = 5
uint8           CONSTRUCTION_BARRIER  = 6
uint8           TRAFFIC_CHANNELS      = 7
uint8           LOW_CURBS             = 8
uint8           HIGH_CURBS            = 9

# ********** END of LaneAttributesBarrier   **********
