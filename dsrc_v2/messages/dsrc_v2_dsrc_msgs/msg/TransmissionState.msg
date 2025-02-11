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
# ENUMERATED { neutral(0), park(1), forwardGears(2), reverseGears(3), reserved1(4), reserved2(5), reserved3(6), unavailable(7) } 
# 
# Element type: ENUMERATED
#
# ********** START of TransmissionState **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 7
int32           UNAVAILABLE     = 7

int32           V_NEUTRAL       = 0
int32           V_PARK          = 1
int32           V_FORWARD_GEARS = 2
int32           V_REVERSE_GEARS = 3
int32           V_RESERVED1     = 4
int32           V_RESERVED2     = 5
int32           V_RESERVED3     = 6
int32           V_UNAVAILABLE   = 7

# ********** END of TransmissionState   **********
