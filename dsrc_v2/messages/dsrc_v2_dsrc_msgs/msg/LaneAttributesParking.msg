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
# BIT STRING { parkingRevocableLane(0), parallelParkingInUse(1), headInParkingInUse(2), doNotParkZone(3), parkingForBusUse(4), parkingForTaxiUse(5), noPublicParkingUse(6) }(SIZE(16)) 
# 
# Element type: BIT STRING
#
# ********** START of LaneAttributesParking **********
#

bool[]          values

uint8           MIN                     = 16
uint8           MAX                     = 16

uint8           PARKING_REVOCABLE_LANE  = 0
uint8           PARALLEL_PARKING_IN_USE = 1
uint8           HEAD_IN_PARKING_IN_USE  = 2
uint8           DO_NOT_PARK_ZONE        = 3
uint8           PARKING_FOR_BUS_USE     = 4
uint8           PARKING_FOR_TAXI_USE    = 5
uint8           NO_PUBLIC_PARKING_USE   = 6

# ********** END of LaneAttributesParking   **********
