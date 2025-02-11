#*                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                    *
#*                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore         *
#*                                                                                  *
#* This program and the accompanying materials are made available under the         *
#* terms of the Eclipse Public License 2.0 which is available at                    *
#* http://www.eclipse.org/legal/epl-2.0.                                            *
#*                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                 *
#*                                                                                  *
#*                                                                                  *
#* File automatically generated with DLR Wind v2                                    *
#*                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v1:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(1)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# INTEGER { unavailable(0), fog(1), smoke(2), heavySnowfall(3), heavyRain(4), heavyHail(5), lowSunGlare(6), sandstorms(7), swarmsOfInsects(8) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of AdverseWeatherConditionVisibilitySubCauseCode **********
#

uint8           value

uint8           MIN                 = 0
uint8           MAX                 = 255
uint8           UNAVAILABLE         = 0

uint8           V_UNAVAILABLE       = 0
uint8           V_FOG               = 1
uint8           V_SMOKE             = 2
uint8           V_HEAVY_SNOWFALL    = 3
uint8           V_HEAVY_RAIN        = 4
uint8           V_HEAVY_HAIL        = 5
uint8           V_LOW_SUN_GLARE     = 6
uint8           V_SANDSTORMS        = 7
uint8           V_SWARMS_OF_INSECTS = 8

# ********** END of AdverseWeatherConditionVisibilitySubCauseCode   **********
