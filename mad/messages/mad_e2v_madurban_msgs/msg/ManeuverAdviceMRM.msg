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
# ENUMERATED { maneuverFollowLaneStopCenter(0), maneuverLaneChangeLeftAndStop(1), maneuverLaneChangeRightAndStop(2), maneuverStopMostLeftInCurrentLane(3), maneuverStopMostRightInCurrentLane(4), maneuverStopMostPossibleLeft(5), maneuverStopMostPossibleRight(6), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of ManeuverAdviceMRM **********
#

int32           value

int32           MIN                                        = 0
int32           MAX                                        = 6

int32           V_MANEUVER_FOLLOW_LANE_STOP_CENTER         = 0
int32           V_MANEUVER_LANE_CHANGE_LEFT_AND_STOP       = 1
int32           V_MANEUVER_LANE_CHANGE_RIGHT_AND_STOP      = 2
int32           V_MANEUVER_STOP_MOST_LEFT_IN_CURRENT_LANE  = 3
int32           V_MANEUVER_STOP_MOST_RIGHT_IN_CURRENT_LANE = 4
int32           V_MANEUVER_STOP_MOST_POSSIBLE_LEFT         = 5
int32           V_MANEUVER_STOP_MOST_POSSIBLE_RIGHT        = 6

# ********** END of ManeuverAdviceMRM   **********
