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
# ENUMERATED { unavailable(0), dark(1), stop-Then-Proceed(2), stop-And-Remain(3), pre-Movement(4), permissive-Movement-Allowed(5), protected-Movement-Allowed(6), permissive-clearance(7), protected-clearance(8), caution-Conflicting-Traffic(9) } 
# 
# Element type: ENUMERATED
#
# ********** START of MovementPhaseState **********
#

int32           value

int32           MIN                           = 0
int32           MAX                           = 9
int32           UNAVAILABLE                   = 0

int32           V_UNAVAILABLE                 = 0
int32           V_DARK                        = 1
int32           V_STOP_THEN_PROCEED           = 2
int32           V_STOP_AND_REMAIN             = 3
int32           V_PRE_MOVEMENT                = 4
int32           V_PERMISSIVE_MOVEMENT_ALLOWED = 5
int32           V_PROTECTED_MOVEMENT_ALLOWED  = 6
int32           V_PERMISSIVE_CLEARANCE        = 7
int32           V_PROTECTED_CLEARANCE         = 8
int32           V_CAUTION_CONFLICTING_TRAFFIC = 9

# ********** END of MovementPhaseState   **********
