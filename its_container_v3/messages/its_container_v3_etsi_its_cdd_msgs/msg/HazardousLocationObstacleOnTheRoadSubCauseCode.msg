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
#  This DE represents the value of the sub cause code of the @ref CauseCode `hazardousLocation-ObstacleOnTheRoad`.
# 
#  The value shall be set to:
#  - 0 - `unavailable`    - in case further detailed information on the detected obstacle is unavailable,
#  - 1 - `shedLoad`       - in case detected obstacle is large amount of obstacles (shedload),
#  - 2 - `partsOfVehicles`- in case detected obstacles are parts of vehicles,
#  - 3 - `partsOfTyres`   - in case the detected obstacles are parts of tyres,
#  - 4 - `bigObjects`     - in case the detected obstacles are big objects,
#  - 5 - `fallenTrees`    - in case the detected obstacles are fallen trees,
#  - 6 - `hubCaps`        - in case the detected obstacles are hub caps,
#  - 7 - `waitingVehicles`- in case the detected obstacles are waiting vehicles.
#  - 8-255                - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), shedLoad(1), partsOfVehicles(2), partsOfTyres(3), bigObjects(4), fallenTrees(5), hubCaps(6), waitingVehicles(7) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of HazardousLocationObstacleOnTheRoadSubCauseCode **********
#

uint8           value

uint8           MIN                 = 0
uint8           MAX                 = 255
uint8           UNAVAILABLE         = 0

uint8           V_UNAVAILABLE       = 0
uint8           V_SHED_LOAD         = 1
uint8           V_PARTS_OF_VEHICLES = 2
uint8           V_PARTS_OF_TYRES    = 3
uint8           V_BIG_OBJECTS       = 4
uint8           V_FALLEN_TREES      = 5
uint8           V_HUB_CAPS          = 6
uint8           V_WAITING_VEHICLES  = 7

# ********** END of HazardousLocationObstacleOnTheRoadSubCauseCode   **********
