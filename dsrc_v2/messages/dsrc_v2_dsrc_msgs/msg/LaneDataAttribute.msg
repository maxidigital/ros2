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
# CHOICE {
#    pathEndPointAngle DeltaAngle,
#    laneCrownPointCenter RoadwayCrownAngle,
#    laneCrownPointLeft RoadwayCrownAngle,
#    laneCrownPointRight RoadwayCrownAngle,
#    laneAngle MergeDivergeNodeAngle,
#    speedLimits SpeedLimitList,
#    regional SEQUENCE(SIZE(1..4)) OF RegionalExtension AVOID,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of LaneDataAttribute **********
#

DeltaAngle[]                path_end_point_angle    #  choice = 0
RoadwayCrownAngle[]         lane_crown_point_center #  choice = 1
RoadwayCrownAngle[]         lane_crown_point_left   #  choice = 2
RoadwayCrownAngle[]         lane_crown_point_right  #  choice = 3
MergeDivergeNodeAngle[]     lane_angle              #  choice = 4
SpeedLimitList[]            speed_limits            #  choice = 5
LaneDataAttributeRegional[] regional                #  choice = 6

uint8                       LENGTH                  = 7

# ********** END of LaneDataAttribute   **********
