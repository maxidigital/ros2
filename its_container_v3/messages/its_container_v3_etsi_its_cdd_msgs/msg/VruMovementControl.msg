#*                                                                                 *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                 *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                   *
#*                                                                                 *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore        *
#*                                                                                 *
#* This program and the accompanying materials are made available under the        *
#* terms of the Eclipse Public License 2.0 which is available at                   *
#* http://www.eclipse.org/legal/epl-2.0.                                           *
#*                                                                                 *
#* SPDX-License-Identifier: EPL-2.0                                                *
#*                                                                                 *
#*                                                                                 *
#* File automatically generated with DLR Wind v2                                   *
#*                                                                                 *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:2.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#   This DE indicates the status of the possible human control over a VRU vehicle.
# 
#  The value shall be set to:
#  - 0 `unavailable`                 - to indicate that the information is unavailable,
#  - 1 `braking`                     - to indicate that the VRU is braking,
#  - 2 `hardBraking`                 - to indicate that the VRU is braking hard,
#  - 3 `stopPedaling`                - to indicate that the VRU stopped pedaling,
#  - 4 `brakingAndStopPedaling`      - to indicate that the VRU stopped pedaling an is braking,
#  - 5 `hardBrakingAndStopPedaling`  - to indicate that the VRU stopped pedaling an is braking hard,
#  - 6 `noReaction`                  - to indicate that the VRU is not changing its behavior.
#  - 7 to 255                        - are reserved for future usage. Value 255 is set to "max" in order to bound the size of the encoded field.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { unavailable(0), braking(1), hardBraking(2), stopPedaling(3), brakingAndStopPedaling(4), hardBrakingAndStopPedaling(5), noReaction(6), max(255) } 
# 
# Element type: ENUMERATED
#
# ********** START of VruMovementControl **********
#

int32           value

int32           MIN                              = 0
int32           MAX                              = 255
int32           UNAVAILABLE                      = 0

int32           V_UNAVAILABLE                    = 0
int32           V_BRAKING                        = 1
int32           V_HARD_BRAKING                   = 2
int32           V_STOP_PEDALING                  = 3
int32           V_BRAKING_AND_STOP_PEDALING      = 4
int32           V_HARD_BRAKING_AND_STOP_PEDALING = 5
int32           V_NO_REACTION                    = 6
int32           V_MAX                            = 255

# ********** END of VruMovementControl   **********
