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
#  This DE represents the value of the sub cause codes of the @ref CauseCode `trafficCondition`.
# 
#  The value shall be set to:
#  - 0 `unavailable`                  - in case further detailed information on the traffic condition is unavailable,
#  - 1 `increasedVolumeOfTraffic`     - in case the type of traffic condition is increased traffic volume,
#  - 2 `trafficJamSlowlyIncreasing`   - in case the type of traffic condition is a traffic jam which volume is increasing slowly,
#  - 3 `trafficJamIncreasing`         - in case the type of traffic condition is a traffic jam which volume is increasing,
#  - 4 `trafficJamStronglyIncreasing` - in case the type of traffic condition is a traffic jam which volume is strongly increasing,
#  - 5 `trafficJam`         `         - in case the type of traffic condition is a traffic jam and no further detailed information about its volume is available,
#  - 6 `trafficJamSlightlyDecreasing` - in case the type of traffic condition is a traffic jam which volume is decreasing slowly,
#  - 7 `trafficJamDecreasing`         - in case the type of traffic condition is a traffic jam which volume is decreasing,
#  - 8 `trafficJamStronglyDecreasing` - in case the type of traffic condition is a traffic jam which volume is decreasing rapidly,
#  - 9 `trafficJamStable`             - in case the traffic condition is a traffic jam with stable volume,
#  - 10-255: reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1, definition of value 0 and 1 changed in V2.2.1, name and definition of value 5 changed in V2.2.1, value 9 added in V2.2.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), increasedVolumeOfTraffic(1), trafficJamSlowlyIncreasing(2), trafficJamIncreasing(3), trafficJamStronglyIncreasing(4), trafficjamStationary(5), trafficJamSlightlyDecreasing(6), trafficJamDecreasing(7), trafficJamStronglyDecreasing(8), trafficJamStable(9) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of TrafficConditionSubCauseCode **********
#

uint8           value

uint8           MIN                               = 0
uint8           MAX                               = 255
uint8           UNAVAILABLE                       = 0

uint8           V_UNAVAILABLE                     = 0
uint8           V_INCREASED_VOLUME_OF_TRAFFIC     = 1
uint8           V_TRAFFIC_JAM_SLOWLY_INCREASING   = 2
uint8           V_TRAFFIC_JAM_INCREASING          = 3
uint8           V_TRAFFIC_JAM_STRONGLY_INCREASING = 4
uint8           V_TRAFFICJAM_STATIONARY           = 5
uint8           V_TRAFFIC_JAM_SLIGHTLY_DECREASING = 6
uint8           V_TRAFFIC_JAM_DECREASING          = 7
uint8           V_TRAFFIC_JAM_STRONGLY_DECREASING = 8
uint8           V_TRAFFIC_JAM_STABLE              = 9

# ********** END of TrafficConditionSubCauseCode   **********
