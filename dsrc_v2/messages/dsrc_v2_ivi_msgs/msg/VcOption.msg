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
# INTEGER { none(0), a(1), b(2), c(3), d(4), e(5), f(6), g(7) }(0..7) 
# 
# Element type: INTEGER
#
# ********** START of VcOption **********
#

uint8           value

uint8           MIN             = 0
uint8           MAX             = 7

uint8           V_NONE          = 0
uint8           V_A             = 1
uint8           V_B             = 2
uint8           V_C             = 3
uint8           V_D             = 4
uint8           V_E             = 5
uint8           V_F             = 6
uint8           V_G             = 7

# ********** END of VcOption   **********
