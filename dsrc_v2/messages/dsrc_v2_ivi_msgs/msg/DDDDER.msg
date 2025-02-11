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
# INTEGER { none(0), nationalHighway(1), localHighway(2), tollExpresswayMotorway(3), internationalHighway(4), highway(5), expressway(6), nationalRoad(7), regionalProvincialRoad(8), localRoad(9), motorwayJunction(10), diversion(11), rfu1(12), rfu2(13), rfu3(14), rfu4(15) }(0..15, ...) 
# 
# Element type: INTEGER
#
# ********** START of DDDDER **********
#

uint8           value

uint8           MIN                        = 0
uint8           MAX                        = 15

uint8           V_NONE                     = 0
uint8           V_NATIONAL_HIGHWAY         = 1
uint8           V_LOCAL_HIGHWAY            = 2
uint8           V_TOLL_EXPRESSWAY_MOTORWAY = 3
uint8           V_INTERNATIONAL_HIGHWAY    = 4
uint8           V_HIGHWAY                  = 5
uint8           V_EXPRESSWAY               = 6
uint8           V_NATIONAL_ROAD            = 7
uint8           V_REGIONAL_PROVINCIAL_ROAD = 8
uint8           V_LOCAL_ROAD               = 9
uint8           V_MOTORWAY_JUNCTION        = 10
uint8           V_DIVERSION                = 11
uint8           V_RFU1                     = 12
uint8           V_RFU2                     = 13
uint8           V_RFU3                     = 14
uint8           V_RFU4                     = 15

# ********** END of DDDDER   **********
