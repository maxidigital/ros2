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
# INTEGER { sDL(1), sLT(2), sRT(3), lTO(4), rTO(5), cLL(6), cRI(7), oVL(8) }(1..8) 
# 
# Element type: INTEGER
#
# ********** START of DFL **********
#

uint8           value

uint8           MIN             = 1
uint8           MAX             = 8

uint8           V_S_DL          = 1
uint8           V_S_LT          = 2
uint8           V_S_RT          = 3
uint8           V_L_TO          = 4
uint8           V_R_TO          = 5
uint8           V_C_LL          = 6
uint8           V_C_RI          = 7
uint8           V_O_VL          = 8

# ********** END of DFL   **********
