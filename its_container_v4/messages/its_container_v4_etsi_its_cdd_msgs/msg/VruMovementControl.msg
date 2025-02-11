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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v4:1.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) cdd(2) major-version-4(4) minor-version-1(1)}                        *
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
#  - 7 to 15                         - are reserved for future usage.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1, type changed from ENUMERATED to INTEGER in V2.2.1 and range changed from 0..255 to 0..15
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), braking(1), hardBraking(2), stopPedaling(3), brakingAndStopPedaling(4), hardBrakingAndStopPedaling(5), noReaction(6) }(0..15) 
# 
# Element type: INTEGER
#
# ********** START of VruMovementControl **********
#

uint8           value

uint8           MIN                              = 0
uint8           MAX                              = 15
uint8           UNAVAILABLE                      = 0

uint8           V_UNAVAILABLE                    = 0
uint8           V_BRAKING                        = 1
uint8           V_HARD_BRAKING                   = 2
uint8           V_STOP_PEDALING                  = 3
uint8           V_BRAKING_AND_STOP_PEDALING      = 4
uint8           V_HARD_BRAKING_AND_STOP_PEDALING = 5
uint8           V_NO_REACTION                    = 6

# ********** END of VruMovementControl   **********
