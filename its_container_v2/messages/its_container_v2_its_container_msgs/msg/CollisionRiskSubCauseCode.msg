#*                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                    *
#*                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore         *
#*                                                                                  *
#* This program and the accompanying materials are made available under the         *
#* terms of the Eclipse Public License 2.0 which is available at                    *
#* http://www.eclipse.org/legal/epl-2.0.                                            *
#*                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                 *
#*                                                                                  *
#*                                                                                  *
#* File automatically generated with DLR Wind v2                                    *
#*                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(2)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

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
