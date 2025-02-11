#*                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                    *
#*                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore         *
#*                                                                                  *
#* This program and the accompanying materials are made available under the         *
#* terms of the Eclipse Public License 2.0 which is available at                    *
#* http://www.eclipse.org/legal/epl-2.0.                                            *
#*                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                 *
#*                                                                                  *
#*                                                                                  *
#* File automatically generated with DLR Wind v2                                    *
#*                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v1:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(1)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# INTEGER { unknown(0), pedestrian(1), cyclist(2), moped(3), motorcycle(4), passengerCar(5), bus(6), lightTruck(7), heavyTruck(8), trailer(9), specialVehicles(10), tram(11), roadSideUnit(15) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of StationType **********
#

uint8           value

uint8           MIN                = 0
uint8           MAX                = 255

uint8           V_UNKNOWN          = 0
uint8           V_PEDESTRIAN       = 1
uint8           V_CYCLIST          = 2
uint8           V_MOPED            = 3
uint8           V_MOTORCYCLE       = 4
uint8           V_PASSENGER_CAR    = 5
uint8           V_BUS              = 6
uint8           V_LIGHT_TRUCK      = 7
uint8           V_HEAVY_TRUCK      = 8
uint8           V_TRAILER          = 9
uint8           V_SPECIAL_VEHICLES = 10
uint8           V_TRAM             = 11
uint8           V_ROAD_SIDE_UNIT   = 15

# ********** END of StationType   **********
