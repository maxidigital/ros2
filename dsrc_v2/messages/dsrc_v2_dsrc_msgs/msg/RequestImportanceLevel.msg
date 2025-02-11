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
# ENUMERATED { requestImportanceLevelUnKnown(0), requestImportanceLevel1(1), requestImportanceLevel2(2), requestImportanceLevel3(3), requestImportanceLevel4(4), requestImportanceLevel5(5), requestImportanceLevel6(6), requestImportanceLevel7(7), requestImportanceLevel8(8), requestImportanceLevel9(9), requestImportanceLevel10(10), requestImportanceLevel11(11), requestImportanceLevel12(12), requestImportanceLevel13(13), requestImportanceLevel14(14), requestImportanceReserved(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of RequestImportanceLevel **********
#

int32           value

int32           MIN                                 = 0
int32           MAX                                 = 15

int32           V_REQUEST_IMPORTANCE_LEVEL_UN_KNOWN = 0
int32           V_REQUEST_IMPORTANCE_LEVEL1         = 1
int32           V_REQUEST_IMPORTANCE_LEVEL2         = 2
int32           V_REQUEST_IMPORTANCE_LEVEL3         = 3
int32           V_REQUEST_IMPORTANCE_LEVEL4         = 4
int32           V_REQUEST_IMPORTANCE_LEVEL5         = 5
int32           V_REQUEST_IMPORTANCE_LEVEL6         = 6
int32           V_REQUEST_IMPORTANCE_LEVEL7         = 7
int32           V_REQUEST_IMPORTANCE_LEVEL8         = 8
int32           V_REQUEST_IMPORTANCE_LEVEL9         = 9
int32           V_REQUEST_IMPORTANCE_LEVEL10        = 10
int32           V_REQUEST_IMPORTANCE_LEVEL11        = 11
int32           V_REQUEST_IMPORTANCE_LEVEL12        = 12
int32           V_REQUEST_IMPORTANCE_LEVEL13        = 13
int32           V_REQUEST_IMPORTANCE_LEVEL14        = 14
int32           V_REQUEST_IMPORTANCE_RESERVED       = 15

# ********** END of RequestImportanceLevel   **********
