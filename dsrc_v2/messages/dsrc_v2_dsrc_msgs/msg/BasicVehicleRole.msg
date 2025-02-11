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
# ENUMERATED { basicVehicle(0), publicTransport(1), specialTransport(2), dangerousGoods(3), roadWork(4), roadRescue(5), emergency(6), safetyCar(7), none-unknown(8), truck(9), motorcycle(10), roadSideSource(11), police(12), fire(13), ambulance(14), dot(15), transit(16), slowMoving(17), stopNgo(18), cyclist(19), pedestrian(20), nonMotorized(21), military(22), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of BasicVehicleRole **********
#

int32           value

int32           MIN                 = 0
int32           MAX                 = 22

int32           V_BASIC_VEHICLE     = 0
int32           V_PUBLIC_TRANSPORT  = 1
int32           V_SPECIAL_TRANSPORT = 2
int32           V_DANGEROUS_GOODS   = 3
int32           V_ROAD_WORK         = 4
int32           V_ROAD_RESCUE       = 5
int32           V_EMERGENCY         = 6
int32           V_SAFETY_CAR        = 7
int32           V_NONE_UNKNOWN      = 8
int32           V_TRUCK             = 9
int32           V_MOTORCYCLE        = 10
int32           V_ROAD_SIDE_SOURCE  = 11
int32           V_POLICE            = 12
int32           V_FIRE              = 13
int32           V_AMBULANCE         = 14
int32           V_DOT               = 15
int32           V_TRANSIT           = 16
int32           V_SLOW_MOVING       = 17
int32           V_STOP_NGO          = 18
int32           V_CYCLIST           = 19
int32           V_PEDESTRIAN        = 20
int32           V_NON_MOTORIZED     = 21
int32           V_MILITARY          = 22

# ********** END of BasicVehicleRole   **********
