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
# ENUMERATED { unavailable(0), time-100-000(1), time-050-000(2), time-020-000(3), time-010-000(4), time-002-000(5), time-001-000(6), time-000-500(7), time-000-200(8), time-000-100(9), time-000-050(10), time-000-020(11), time-000-010(12), time-000-005(13), time-000-002(14), time-000-001(15), time-000-000-5(16), time-000-000-2(17), time-000-000-1(18), time-000-000-05(19), time-000-000-02(20), time-000-000-01(21), time-000-000-005(22), time-000-000-002(23), time-000-000-001(24), time-000-000-000-5(25), time-000-000-000-2(26), time-000-000-000-1(27), time-000-000-000-05(28), time-000-000-000-02(29), time-000-000-000-01(30), time-000-000-000-005(31), time-000-000-000-002(32), time-000-000-000-001(33), time-000-000-000-000-5(34), time-000-000-000-000-2(35), time-000-000-000-000-1(36), time-000-000-000-000-05(37), time-000-000-000-000-02(38), time-000-000-000-000-01(39) } 
# 
# Element type: ENUMERATED
#
# ********** START of TimeConfidence **********
#

int32           value

int32           MIN                       = 0
int32           MAX                       = 39
int32           UNAVAILABLE               = 0

int32           V_UNAVAILABLE             = 0
int32           V_TIME_100_000            = 1
int32           V_TIME_050_000            = 2
int32           V_TIME_020_000            = 3
int32           V_TIME_010_000            = 4
int32           V_TIME_002_000            = 5
int32           V_TIME_001_000            = 6
int32           V_TIME_000_500            = 7
int32           V_TIME_000_200            = 8
int32           V_TIME_000_100            = 9
int32           V_TIME_000_050            = 10
int32           V_TIME_000_020            = 11
int32           V_TIME_000_010            = 12
int32           V_TIME_000_005            = 13
int32           V_TIME_000_002            = 14
int32           V_TIME_000_001            = 15
int32           V_TIME_000_000_5          = 16
int32           V_TIME_000_000_2          = 17
int32           V_TIME_000_000_1          = 18
int32           V_TIME_000_000_05         = 19
int32           V_TIME_000_000_02         = 20
int32           V_TIME_000_000_01         = 21
int32           V_TIME_000_000_005        = 22
int32           V_TIME_000_000_002        = 23
int32           V_TIME_000_000_001        = 24
int32           V_TIME_000_000_000_5      = 25
int32           V_TIME_000_000_000_2      = 26
int32           V_TIME_000_000_000_1      = 27
int32           V_TIME_000_000_000_05     = 28
int32           V_TIME_000_000_000_02     = 29
int32           V_TIME_000_000_000_01     = 30
int32           V_TIME_000_000_000_005    = 31
int32           V_TIME_000_000_000_002    = 32
int32           V_TIME_000_000_000_001    = 33
int32           V_TIME_000_000_000_000_5  = 34
int32           V_TIME_000_000_000_000_2  = 35
int32           V_TIME_000_000_000_000_1  = 36
int32           V_TIME_000_000_000_000_05 = 37
int32           V_TIME_000_000_000_000_02 = 38
int32           V_TIME_000_000_000_000_01 = 39

# ********** END of TimeConfidence   **********
