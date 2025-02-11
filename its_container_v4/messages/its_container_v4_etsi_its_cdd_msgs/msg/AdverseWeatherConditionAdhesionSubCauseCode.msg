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
#  This DE represents the value of the sub cause code of the @ref CauseCode `adverseWeatherCondition-Adhesion`.
# 
#  The value shall be set to:
#  - 0 - `unavailable`     - in case information on the cause of the low road adhesion is unavailable,
#  - 1 - `heavyFrostOnRoad`- in case the low road adhesion is due to heavy frost on the road,
#  - 2 - `fuelOnRoad`      - in case the low road adhesion is due to fuel on the road,
#  - 3 - `mudOnRoad`       - in case the low road adhesion is due to mud on the road,
#  - 4 - `snowOnRoad`      - in case the low road adhesion is due to snow on the road,
#  - 5 - `iceOnRoad`       - in case the low road adhesion is due to ice on the road,
#  - 6 - `blackIceOnRoad`  - in case the low road adhesion is due to black ice on the road,
#  - 7 - `oilOnRoad`       - in case the low road adhesion is due to oil on the road,
#  - 8 - `looseChippings`  - in case the low road adhesion is due to loose gravel or stone fragments detached from a road surface or from a hazard,
#  - 9 - `instantBlackIce` - in case the low road adhesion is due to instant black ice on the road surface,
#  - 10 - `roadsSalted`    - when the low road adhesion is due to salted road,
#  - 11-255                - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), heavyFrostOnRoad(1), fuelOnRoad(2), mudOnRoad(3), snowOnRoad(4), iceOnRoad(5), blackIceOnRoad(6), oilOnRoad(7), looseChippings(8), instantBlackIce(9), roadsSalted(10) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of AdverseWeatherConditionAdhesionSubCauseCode **********
#

uint8           value

uint8           MIN                   = 0
uint8           MAX                   = 255
uint8           UNAVAILABLE           = 0

uint8           V_UNAVAILABLE         = 0
uint8           V_HEAVY_FROST_ON_ROAD = 1
uint8           V_FUEL_ON_ROAD        = 2
uint8           V_MUD_ON_ROAD         = 3
uint8           V_SNOW_ON_ROAD        = 4
uint8           V_ICE_ON_ROAD         = 5
uint8           V_BLACK_ICE_ON_ROAD   = 6
uint8           V_OIL_ON_ROAD         = 7
uint8           V_LOOSE_CHIPPINGS     = 8
uint8           V_INSTANT_BLACK_ICE   = 9
uint8           V_ROADS_SALTED        = 10

# ********** END of AdverseWeatherConditionAdhesionSubCauseCode   **********
