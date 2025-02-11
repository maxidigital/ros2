#*                                                                            *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)            *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)              *
#*                                                                            *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore   *
#*                                                                            *
#* This program and the accompanying materials are made available under the   *
#* terms of the Eclipse Public License 2.0 which is available at              *
#* http://www.eclipse.org/legal/epl-2.0.                                      *
#*                                                                            *
#* SPDX-License-Identifier: EPL-2.0                                           *
#*                                                                            *
#*                                                                            *
#* File automatically generated with DLR Wind v2                              *
#*                                                                            *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0        *
#*                                                                            *
#* Module: EfcDsrcApplication {iso(1) standard(0) application(0) version5(5)} *
#*                                                                            *
#* For support contact v2x-ts@dlr.de                                          *
#*                                                                            *

#
# ASN.1 Definition:
# ENUMERATED { noEntry(0), co2class1(1), co2class2(2), co2class3(3), co2class4(4), co2class5(5), co2class6(6), co2class7(7), reservedforUse(8) } 
# 
# Element type: ENUMERATED
#
# ********** START of CopValue **********
#

int32           value

int32           MIN               = 0
int32           MAX               = 8

int32           V_NO_ENTRY        = 0
int32           V_CO2CLASS1       = 1
int32           V_CO2CLASS2       = 2
int32           V_CO2CLASS3       = 3
int32           V_CO2CLASS4       = 4
int32           V_CO2CLASS5       = 5
int32           V_CO2CLASS6       = 6
int32           V_CO2CLASS7       = 7
int32           V_RESERVEDFOR_USE = 8

# ********** END of CopValue   **********
