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
# ENUMERATED { unavailable(0), prec100ms(1), prec10ms(2), prec5ms(3), prec1ms(4), prec0-1ms(5), prec0-05ms(6), prec0-01ms(7) } 
# 
# Element type: ENUMERATED
#
# ********** START of SpeedConfidenceDSRC **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 7
int32           UNAVAILABLE     = 0

int32           V_UNAVAILABLE   = 0
int32           V_PREC100MS     = 1
int32           V_PREC10MS      = 2
int32           V_PREC5MS       = 3
int32           V_PREC1MS       = 4
int32           V_PREC0_1MS     = 5
int32           V_PREC0_05MS    = 6
int32           V_PREC0_01MS    = 7

# ********** END of SpeedConfidenceDSRC   **********
