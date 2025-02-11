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
#  This DE represents the value of the sub cause codes of the @ref CauseCode `adverseWeatherCondition-ExtremeWeatherCondition`.
# 
#  The value shall be set to:
#  - 0 - `unavailable` - in case information on the type of extreme weather condition is unavailable,
#  - 1 - `strongWinds` - in case the type of extreme weather condition is strong wind,
#  - 2 - `damagingHail`- in case the type of extreme weather condition is damaging hail,
#  - 3 - `hurricane`   - in case the type of extreme weather condition is hurricane,
#  - 4 - `thunderstorm`- in case the type of extreme weather condition is thunderstorm,
#  - 5 - `tornado`     - in case the type of extreme weather condition is tornado,
#  - 6 - `blizzard`    - in case the type of extreme weather condition is blizzard.
#  - 7-255             - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), strongWinds(1), damagingHail(2), hurricane(3), thunderstorm(4), tornado(5), blizzard(6) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of AdverseWeatherConditionExtremeWeatherConditionSubCauseCode **********
#

uint8           value

uint8           MIN             = 0
uint8           MAX             = 255
uint8           UNAVAILABLE     = 0

uint8           V_UNAVAILABLE   = 0
uint8           V_STRONG_WINDS  = 1
uint8           V_DAMAGING_HAIL = 2
uint8           V_HURRICANE     = 3
uint8           V_THUNDERSTORM  = 4
uint8           V_TORNADO       = 5
uint8           V_BLIZZARD      = 6

# ********** END of AdverseWeatherConditionExtremeWeatherConditionSubCauseCode   **********
