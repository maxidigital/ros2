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
# INTEGER(0..15) { unknownFuel(0), gasoline(1), ethanol(2), diesel(3), electric(4), hybrid(5), hydrogen(6), natGasLiquid(7), natGasComp(8), propane(9) } 
# 
# Element type: INTEGER
#
# ********** START of FuelType **********
#

uint8           value

uint8           MIN              = 0
uint8           MAX              = 15

uint8           V_UNKNOWN_FUEL   = 0
uint8           V_GASOLINE       = 1
uint8           V_ETHANOL        = 2
uint8           V_DIESEL         = 3
uint8           V_ELECTRIC       = 4
uint8           V_HYBRID         = 5
uint8           V_HYDROGEN       = 6
uint8           V_NAT_GAS_LIQUID = 7
uint8           V_NAT_GAS_COMP   = 8
uint8           V_PROPANE        = 9

# ********** END of FuelType   **********
