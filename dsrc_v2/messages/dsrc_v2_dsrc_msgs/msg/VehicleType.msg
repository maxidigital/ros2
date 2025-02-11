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
# ENUMERATED { none(0), unknown(1), special(2), moto(3), car(4), carOther(5), bus(6), axleCnt2(7), axleCnt3(8), axleCnt4(9), axleCnt4Trailer(10), axleCnt5Trailer(11), axleCnt6Trailer(12), axleCnt5MultiTrailer(13), axleCnt6MultiTrailer(14), axleCnt7MultiTrailer(15), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of VehicleType **********
#

int32           value

int32           MIN                       = 0
int32           MAX                       = 15

int32           V_NONE                    = 0
int32           V_UNKNOWN                 = 1
int32           V_SPECIAL                 = 2
int32           V_MOTO                    = 3
int32           V_CAR                     = 4
int32           V_CAR_OTHER               = 5
int32           V_BUS                     = 6
int32           V_AXLE_CNT2               = 7
int32           V_AXLE_CNT3               = 8
int32           V_AXLE_CNT4               = 9
int32           V_AXLE_CNT4_TRAILER       = 10
int32           V_AXLE_CNT5_TRAILER       = 11
int32           V_AXLE_CNT6_TRAILER       = 12
int32           V_AXLE_CNT5_MULTI_TRAILER = 13
int32           V_AXLE_CNT6_MULTI_TRAILER = 14
int32           V_AXLE_CNT7_MULTI_TRAILER = 15

# ********** END of VehicleType   **********
