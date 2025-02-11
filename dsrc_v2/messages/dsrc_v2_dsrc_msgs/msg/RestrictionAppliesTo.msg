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
# ENUMERATED { none , equippedTransit , equippedTaxis , equippedOther , emissionCompliant , equippedBicycle , weightCompliant , heightCompliant , pedestrians , slowMovingPersons , wheelchairUsers , visualDisabilities , audioDisabilities , otherUnknownDisabilities , ... } 
# 
# Element type: ENUMERATED
#
# ********** START of RestrictionAppliesTo **********
#

int32           value

int32           MIN                          = 0
int32           MAX                          = 13

int32           V_NONE                       = 0
int32           V_EQUIPPED_TRANSIT           = 1
int32           V_EQUIPPED_TAXIS             = 2
int32           V_EQUIPPED_OTHER             = 3
int32           V_EMISSION_COMPLIANT         = 4
int32           V_EQUIPPED_BICYCLE           = 5
int32           V_WEIGHT_COMPLIANT           = 6
int32           V_HEIGHT_COMPLIANT           = 7
int32           V_PEDESTRIANS                = 8
int32           V_SLOW_MOVING_PERSONS        = 9
int32           V_WHEELCHAIR_USERS           = 10
int32           V_VISUAL_DISABILITIES        = 11
int32           V_AUDIO_DISABILITIES         = 12
int32           V_OTHER_UNKNOWN_DISABILITIES = 13

# ********** END of RestrictionAppliesTo   **********
