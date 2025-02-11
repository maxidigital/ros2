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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(2)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# ENUMERATED { alt-000-01(0), alt-000-02(1), alt-000-05(2), alt-000-10(3), alt-000-20(4), alt-000-50(5), alt-001-00(6), alt-002-00(7), alt-005-00(8), alt-010-00(9), alt-020-00(10), alt-050-00(11), alt-100-00(12), alt-200-00(13), outOfRange(14), unavailable(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of AltitudeConfidence **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 15
int32           UNAVAILABLE     = 15
int32           OUT_OF_RANGE    = 14

int32           V_ALT_000_01    = 0
int32           V_ALT_000_02    = 1
int32           V_ALT_000_05    = 2
int32           V_ALT_000_10    = 3
int32           V_ALT_000_20    = 4
int32           V_ALT_000_50    = 5
int32           V_ALT_001_00    = 6
int32           V_ALT_002_00    = 7
int32           V_ALT_005_00    = 8
int32           V_ALT_010_00    = 9
int32           V_ALT_020_00    = 10
int32           V_ALT_050_00    = 11
int32           V_ALT_100_00    = 12
int32           V_ALT_200_00    = 13
int32           V_OUT_OF_RANGE  = 14
int32           V_UNAVAILABLE   = 15

# ********** END of AltitudeConfidence   **********
