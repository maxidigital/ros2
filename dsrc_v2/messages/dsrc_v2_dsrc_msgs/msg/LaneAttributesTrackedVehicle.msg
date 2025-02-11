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
# BIT STRING { spec-RevocableLane(0), spec-commuterRailRoadTrack(1), spec-lightRailRoadTrack(2), spec-heavyRailRoadTrack(3), spec-otherRailType(4) }(SIZE(16)) 
# 
# Element type: BIT STRING
#
# ********** START of LaneAttributesTrackedVehicle **********
#

bool[]          values

uint8           MIN                           = 16
uint8           MAX                           = 16

uint8           SPEC_REVOCABLE_LANE           = 0
uint8           SPEC_COMMUTER_RAIL_ROAD_TRACK = 1
uint8           SPEC_LIGHT_RAIL_ROAD_TRACK    = 2
uint8           SPEC_HEAVY_RAIL_ROAD_TRACK    = 3
uint8           SPEC_OTHER_RAIL_TYPE          = 4

# ********** END of LaneAttributesTrackedVehicle   **********
