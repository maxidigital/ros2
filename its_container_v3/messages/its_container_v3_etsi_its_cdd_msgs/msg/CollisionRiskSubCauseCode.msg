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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE represents the sub cause codes of the @ref CauseCode `collisionRisk`.
# 
#  The value shall be set to:
#  - 0 - `unavailable`              - in case information on the type of collision risk is unavailable,
#  - 1 - `longitudinalCollisionRisk`- in case the type of detected collision risk is longitudinal collision risk,
#                                        e.g. forward collision or face to face collision,
#  - 2 - `crossingCollisionRisk`    - in case the type of detected collision risk is crossing collision risk,
#  - 3 - `lateralCollisionRisk`     - in case the type of detected collision risk is lateral collision risk,
#  - 4 - `vulnerableRoadUser`       - in case the type of detected collision risk involves vulnerable road users
#                                        e.g. pedestrians or bicycles.
#  - 5-255                          - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), longitudinalCollisionRisk(1), crossingCollisionRisk(2), lateralCollisionRisk(3), vulnerableRoadUser(4) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of CollisionRiskSubCauseCode **********
#

uint8           value

uint8           MIN                           = 0
uint8           MAX                           = 255
uint8           UNAVAILABLE                   = 0

uint8           V_UNAVAILABLE                 = 0
uint8           V_LONGITUDINAL_COLLISION_RISK = 1
uint8           V_CROSSING_COLLISION_RISK     = 2
uint8           V_LATERAL_COLLISION_RISK      = 3
uint8           V_VULNERABLE_ROAD_USER        = 4

# ********** END of CollisionRiskSubCauseCode   **********
