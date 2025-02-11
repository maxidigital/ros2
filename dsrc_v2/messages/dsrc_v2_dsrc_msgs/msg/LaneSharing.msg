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
# BIT STRING { overlappingLaneDescriptionProvided(0), multipleLanesTreatedAsOneLane(1), otherNonMotorizedTrafficTypes(2), individualMotorizedVehicleTraffic(3), busVehicleTraffic(4), taxiVehicleTraffic(5), pedestriansTraffic(6), cyclistVehicleTraffic(7), trackedVehicleTraffic(8), pedestrianTraffic(9) }(SIZE(10)) 
# 
# Element type: BIT STRING
#
# ********** START of LaneSharing **********
#

bool[]          values

uint8           MIN                                   = 10
uint8           MAX                                   = 10

uint8           OVERLAPPING_LANE_DESCRIPTION_PROVIDED = 0
uint8           MULTIPLE_LANES_TREATED_AS_ONE_LANE    = 1
uint8           OTHER_NON_MOTORIZED_TRAFFIC_TYPES     = 2
uint8           INDIVIDUAL_MOTORIZED_VEHICLE_TRAFFIC  = 3
uint8           BUS_VEHICLE_TRAFFIC                   = 4
uint8           TAXI_VEHICLE_TRAFFIC                  = 5
uint8           PEDESTRIANS_TRAFFIC                   = 6
uint8           CYCLIST_VEHICLE_TRAFFIC               = 7
uint8           TRACKED_VEHICLE_TRAFFIC               = 8
uint8           PEDESTRIAN_TRAFFIC                    = 9

# ********** END of LaneSharing   **********
