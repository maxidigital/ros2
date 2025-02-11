#*                                                                          *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)          *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)            *
#*                                                                          *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore *
#*                                                                          *
#* This program and the accompanying materials are made available under the *
#* terms of the Eclipse Public License 2.0 which is available at            *
#* http://www.eclipse.org/legal/epl-2.0.                                    *
#*                                                                          *
#* SPDX-License-Identifier: EPL-2.0                                         *
#*                                                                          *
#*                                                                          *
#* File automatically generated with DLR Wind v2                            *
#*                                                                          *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0      *
#*                                                                          *
#* Module: IVI {iso(1) standard(0) ivi(19321) version1(1)}                  *
#*                                                                          *
#* For support contact v2x-ts@dlr.de                                        *
#*                                                                          *

#
# ASN.1 Definition:
# INTEGER { traffic(0), through(1), reversible(2), acceleration(3), deceleration(4), leftHandTurning(5), rightHandTurning(6), dedicatedVehicle(7), bus(8), taxi(9), hov(10), hot(11), pedestrian(12), bikeLane(13), median(14), striping(15), trackedVehicle(16), parking(17), emergency(18), verge(19) }(0..31) 
# 
# Element type: INTEGER
#
# ********** START of LaneType **********
#

uint8           value

uint8           MIN                  = 0
uint8           MAX                  = 31

uint8           V_TRAFFIC            = 0
uint8           V_THROUGH            = 1
uint8           V_REVERSIBLE         = 2
uint8           V_ACCELERATION       = 3
uint8           V_DECELERATION       = 4
uint8           V_LEFT_HAND_TURNING  = 5
uint8           V_RIGHT_HAND_TURNING = 6
uint8           V_DEDICATED_VEHICLE  = 7
uint8           V_BUS                = 8
uint8           V_TAXI               = 9
uint8           V_HOV                = 10
uint8           V_HOT                = 11
uint8           V_PEDESTRIAN         = 12
uint8           V_BIKE_LANE          = 13
uint8           V_MEDIAN             = 14
uint8           V_STRIPING           = 15
uint8           V_TRACKED_VEHICLE    = 16
uint8           V_PARKING            = 17
uint8           V_EMERGENCY          = 18
uint8           V_VERGE              = 19

# ********** END of LaneType   **********
