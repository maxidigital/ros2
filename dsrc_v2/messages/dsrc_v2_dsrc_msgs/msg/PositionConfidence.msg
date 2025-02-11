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
# ENUMERATED { unavailable(0), a500m(1), a200m(2), a100m(3), a50m(4), a20m(5), a10m(6), a5m(7), a2m(8), a1m(9), a50cm(10), a20cm(11), a10cm(12), a5cm(13), a2cm(14), a1cm(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of PositionConfidence **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 15
int32           UNAVAILABLE     = 0

int32           V_UNAVAILABLE   = 0
int32           V_A500M         = 1
int32           V_A200M         = 2
int32           V_A100M         = 3
int32           V_A50M          = 4
int32           V_A20M          = 5
int32           V_A10M          = 6
int32           V_A5M           = 7
int32           V_A2M           = 8
int32           V_A1M           = 9
int32           V_A50CM         = 10
int32           V_A20CM         = 11
int32           V_A10CM         = 12
int32           V_A5CM          = 13
int32           V_A2CM          = 14
int32           V_A1CM          = 15

# ********** END of PositionConfidence   **********
