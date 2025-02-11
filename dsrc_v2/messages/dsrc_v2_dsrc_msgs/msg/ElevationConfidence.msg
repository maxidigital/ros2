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
# ENUMERATED { unavailable(0), elev-500-00(1), elev-200-00(2), elev-100-00(3), elev-050-00(4), elev-020-00(5), elev-010-00(6), elev-005-00(7), elev-002-00(8), elev-001-00(9), elev-000-50(10), elev-000-20(11), elev-000-10(12), elev-000-05(13), elev-000-02(14), elev-000-01(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of ElevationConfidence **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 15
int32           UNAVAILABLE     = 0

int32           V_UNAVAILABLE   = 0
int32           V_ELEV_500_00   = 1
int32           V_ELEV_200_00   = 2
int32           V_ELEV_100_00   = 3
int32           V_ELEV_050_00   = 4
int32           V_ELEV_020_00   = 5
int32           V_ELEV_010_00   = 6
int32           V_ELEV_005_00   = 7
int32           V_ELEV_002_00   = 8
int32           V_ELEV_001_00   = 9
int32           V_ELEV_000_50   = 10
int32           V_ELEV_000_20   = 11
int32           V_ELEV_000_10   = 12
int32           V_ELEV_000_05   = 13
int32           V_ELEV_000_02   = 14
int32           V_ELEV_000_01   = 15

# ********** END of ElevationConfidence   **********
