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
#  This DE represents the value of the sub cause codes of the @ref CauseCode `roadworks`.
# 
# The value shall be set to:
#  - 0 `unavailable`                 - in case further detailed information on roadworks is unavailable,
#  - 1 `majorRoadworks`              - in case a major roadworks is ongoing,
#  - 2 `roadMarkingWork`             - in case a road marking work is ongoing,
#  - 3 `slowMovingRoadMaintenance`   - in case slow moving road maintenance work is ongoing,
#  - 4 `shortTermStationaryRoadworks`- in case a short term stationary roadwork is ongoing,
#  - 5 `streetCleaning`              - in case a vehicle street cleaning work is ongoing,
#  - 6 `winterService`               - in case winter service work is ongoing.
#  - 7-255                           - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), majorRoadworks(1), roadMarkingWork(2), slowMovingRoadMaintenance(3), shortTermStationaryRoadworks(4), streetCleaning(5), winterService(6) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of RoadworksSubCauseCode **********
#

uint8           value

uint8           MIN                               = 0
uint8           MAX                               = 255
uint8           UNAVAILABLE                       = 0

uint8           V_UNAVAILABLE                     = 0
uint8           V_MAJOR_ROADWORKS                 = 1
uint8           V_ROAD_MARKING_WORK               = 2
uint8           V_SLOW_MOVING_ROAD_MAINTENANCE    = 3
uint8           V_SHORT_TERM_STATIONARY_ROADWORKS = 4
uint8           V_STREET_CLEANING                 = 5
uint8           V_WINTER_SERVICE                  = 6

# ********** END of RoadworksSubCauseCode   **********
