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
#  This DE indicates traffic rules that apply to vehicles at a certain position.
# 
#  The value shall be set to:
#  - `0` - if overtaking is prohibited for all vehicles,
#  - `1` - if overtaking is prohibited for trucks,
#  - `2` - if vehicles should pass to the right lane,
#  - `3` - if vehicles should pass to the left lane.
# 
#  @category: Infrastructure information, Traffic information
#  @revision: Editorial update in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { noPassing(0), noPassingForTrucks(1), passToRight(2), passToLeft(3), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of TrafficRule **********
#

int32           value

int32           MIN                     = 0
int32           MAX                     = 3

int32           V_NO_PASSING            = 0
int32           V_NO_PASSING_FOR_TRUCKS = 1
int32           V_PASS_TO_RIGHT         = 2
int32           V_PASS_TO_LEFT          = 3

# ********** END of TrafficRule   **********
