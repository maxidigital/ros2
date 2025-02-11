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
# ENUMERATED { unavailable(0), prec10deg(1), prec05deg(2), prec01deg(3), prec0-1deg(4), prec0-05deg(5), prec0-01deg(6), prec0-0125deg(7) } 
# 
# Element type: ENUMERATED
#
# ********** START of HeadingConfidenceDSRC **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 7
int32           UNAVAILABLE     = 0

int32           V_UNAVAILABLE   = 0
int32           V_PREC10DEG     = 1
int32           V_PREC05DEG     = 2
int32           V_PREC01DEG     = 3
int32           V_PREC0_1DEG    = 4
int32           V_PREC0_05DEG   = 5
int32           V_PREC0_01DEG   = 6
int32           V_PREC0_0125DEG = 7

# ********** END of HeadingConfidenceDSRC   **********
