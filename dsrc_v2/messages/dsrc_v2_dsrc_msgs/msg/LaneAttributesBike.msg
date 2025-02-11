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
# BIT STRING { bikeRevocableLane(0), pedestrianUseAllowed(1), isBikeFlyOverLane(2), fixedCycleTime(3), biDirectionalCycleTimes(4), isolatedByBarrier(5), unsignalizedSegmentsPresent(6) }(SIZE(16)) 
# 
# Element type: BIT STRING
#
# ********** START of LaneAttributesBike **********
#

bool[]          values

uint8           MIN                           = 16
uint8           MAX                           = 16

uint8           BIKE_REVOCABLE_LANE           = 0
uint8           PEDESTRIAN_USE_ALLOWED        = 1
uint8           IS_BIKE_FLY_OVER_LANE         = 2
uint8           FIXED_CYCLE_TIME              = 3
uint8           BI_DIRECTIONAL_CYCLE_TIMES    = 4
uint8           ISOLATED_BY_BARRIER           = 5
uint8           UNSIGNALIZED_SEGMENTS_PRESENT = 6

# ********** END of LaneAttributesBike   **********
