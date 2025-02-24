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
#  This DE represents the value of the sub cause code of the @ref CauseCode `humanPresenceOnTheRoad`.
# 
#  The value shall be set to:
#  - 0 - `unavailable`          - in case further detailed information on human presence on the road is unavailable,
#  - 1 - `childrenOnRoadway`    - in case children are detected on the road,
#  - 2 - `cyclistOnRoadway`     - in case cyclist presence is detected on the road,
#  - 3 - `motorcyclistOnRoadway`- in case motorcyclist presence is detected on the road.
#  - 4-255                      - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: editorial revision in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), childrenOnRoadway(1), cyclistOnRoadway(2), motorcyclistOnRoadway(3) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of HumanPresenceOnTheRoadSubCauseCode **********
#

uint8           value

uint8           MIN                       = 0
uint8           MAX                       = 255
uint8           UNAVAILABLE               = 0

uint8           V_UNAVAILABLE             = 0
uint8           V_CHILDREN_ON_ROADWAY     = 1
uint8           V_CYCLIST_ON_ROADWAY      = 2
uint8           V_MOTORCYCLIST_ON_ROADWAY = 3

# ********** END of HumanPresenceOnTheRoadSubCauseCode   **********
