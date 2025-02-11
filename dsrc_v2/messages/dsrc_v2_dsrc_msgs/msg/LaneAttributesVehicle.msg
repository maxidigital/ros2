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
# BIT STRING { isVehicleRevocableLane(0), isVehicleFlyOverLane(1), hovLaneUseOnly(2), restrictedToBusUse(3), restrictedToTaxiUse(4), restrictedFromPublicUse(5), hasIRbeaconCoverage(6), permissionOnRequest(7) }(SIZE(8,...)) 
# 
# Element type: BIT STRING
#
# ********** START of LaneAttributesVehicle **********
#

bool[]          values

uint8           MIN                        = 8
uint8           MAX                        = 8

uint8           IS_VEHICLE_REVOCABLE_LANE  = 0
uint8           IS_VEHICLE_FLY_OVER_LANE   = 1
uint8           HOV_LANE_USE_ONLY          = 2
uint8           RESTRICTED_TO_BUS_USE      = 3
uint8           RESTRICTED_TO_TAXI_USE     = 4
uint8           RESTRICTED_FROM_PUBLIC_USE = 5
uint8           HAS_I_RBEACON_COVERAGE     = 6
uint8           PERMISSION_ON_REQUEST      = 7

# ********** END of LaneAttributesVehicle   **********
