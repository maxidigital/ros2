#*                                                                                *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                  *
#*                                                                                *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore       *
#*                                                                                *
#* This program and the accompanying materials are made available under the       *
#* terms of the Eclipse Public License 2.0 which is available at                  *
#* http://www.eclipse.org/legal/epl-2.0.                                          *
#*                                                                                *
#* SPDX-License-Identifier: EPL-2.0                                               *
#*                                                                                *
#*                                                                                *
#* File automatically generated with DLR Wind v2                                  *
#*                                                                                *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0            *
#*                                                                                *
#* Module: AddGrpC {iso(1) standard(0) signalizedIntersection(19091) profilec(2)  *
#*     addgrpc(0) version2(2)}                                                    *
#*                                                                                *
#* For support contact v2x-ts@dlr.de                                              *
#*                                                                                *

#
# ASN.1 Definition:
# ENUMERATED { euro1 , euro2 , euro3 , euro4 , euro5 , euro6 , ... } 
# 
# Element type: ENUMERATED
#
# ********** START of EmissionType **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 5

int32           V_EURO1         = 0
int32           V_EURO2         = 1
int32           V_EURO3         = 2
int32           V_EURO4         = 3
int32           V_EURO5         = 4
int32           V_EURO6         = 5

# ********** END of EmissionType   **********
