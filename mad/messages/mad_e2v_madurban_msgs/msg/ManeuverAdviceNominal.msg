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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0             *
#*                                                                                 *
#* Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) e2v(1) version(3)}                                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# ASN.1 Definition:
# ENUMERATED { maneuverFollowLane(0), maneuverLaneChangeLeft(1), maneuverLaneChangeRight(2), maneuverApproachJunction(3), maneuverCrossJunctionStraight(4), maneuverTurnLeftAtJunction(5), maneuverTurnRightAtJunction(6), maneuverTurnUAtJunction(7), maneuverApproachCrosswalk(8), maneuverCrossCrosswalk(9), maneuverParkLeft(10), maneuverParkRight(11), maneuverStop(12), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of ManeuverAdviceNominal **********
#

int32           value

int32           MIN                                = 0
int32           MAX                                = 12

int32           V_MANEUVER_FOLLOW_LANE             = 0
int32           V_MANEUVER_LANE_CHANGE_LEFT        = 1
int32           V_MANEUVER_LANE_CHANGE_RIGHT       = 2
int32           V_MANEUVER_APPROACH_JUNCTION       = 3
int32           V_MANEUVER_CROSS_JUNCTION_STRAIGHT = 4
int32           V_MANEUVER_TURN_LEFT_AT_JUNCTION   = 5
int32           V_MANEUVER_TURN_RIGHT_AT_JUNCTION  = 6
int32           V_MANEUVER_TURN_U_AT_JUNCTION      = 7
int32           V_MANEUVER_APPROACH_CROSSWALK      = 8
int32           V_MANEUVER_CROSS_CROSSWALK         = 9
int32           V_MANEUVER_PARK_LEFT               = 10
int32           V_MANEUVER_PARK_RIGHT              = 11
int32           V_MANEUVER_STOP                    = 12

# ********** END of ManeuverAdviceNominal   **********
