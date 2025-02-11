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
#  This DE indicates the right of priority requested or assumed by an operating emergency vehicle.
#  The right-of-priority bit shall be set to `1` if the corresponding right is requested.
# 
#  The corresponding bit shall be set to 1 under the following conditions:
#  - 0 - `requestForRightOfWay`                  - when the vehicle is requesting/assuming the right of way,
#  - 1 - `requestForFreeCrossingAtATrafficLight` - when the vehicle is requesting/assuming the right to pass at a (red) traffic light.
# 
#  @category: Traffic information
#  @revision: description revised in V2.1.1
#   
# ASN.1 Definition:
# BIT STRING { requestForRightOfWay(0), requestForFreeCrossingAtATrafficLight(1) }(SIZE(2)) 
# 
# Element type: BIT STRING
#
# ********** START of EmergencyPriority **********
#

bool[]          values

uint8           MIN                                          = 2
uint8           MAX                                          = 2

uint8           REQUEST_FOR_RIGHT_OF_WAY                     = 0
uint8           REQUEST_FOR_FREE_CROSSING_AT_A_TRAFFIC_LIGHT = 1

# ********** END of EmergencyPriority   **********
