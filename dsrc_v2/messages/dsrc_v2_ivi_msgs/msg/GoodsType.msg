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
# INTEGER { ammunition(0), chemicals(1), empty(2), fuel(3), glass(4), dangerous(5), liquid(6), liveStock(7), dangerousForPeople(8), dangerousForTheEnvironment(9), dangerousForWater(10), perishableProducts(11), pharmaceutical(12), vehicles(13) }(0..15,...) 
# 
# Element type: INTEGER
#
# ********** START of GoodsType **********
#

uint8           value

uint8           MIN                             = 0
uint8           MAX                             = 15

uint8           V_AMMUNITION                    = 0
uint8           V_CHEMICALS                     = 1
uint8           V_EMPTY                         = 2
uint8           V_FUEL                          = 3
uint8           V_GLASS                         = 4
uint8           V_DANGEROUS                     = 5
uint8           V_LIQUID                        = 6
uint8           V_LIVE_STOCK                    = 7
uint8           V_DANGEROUS_FOR_PEOPLE          = 8
uint8           V_DANGEROUS_FOR_THE_ENVIRONMENT = 9
uint8           V_DANGEROUS_FOR_WATER           = 10
uint8           V_PERISHABLE_PRODUCTS           = 11
uint8           V_PHARMACEUTICAL                = 12
uint8           V_VEHICLES                      = 13

# ********** END of GoodsType   **********
