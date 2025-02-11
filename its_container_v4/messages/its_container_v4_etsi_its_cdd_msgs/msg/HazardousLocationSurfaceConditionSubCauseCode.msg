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
#  This DE represents the value of the sub cause code of the @ref CauseCode `hazardousLocation-SurfaceCondition`.
# 
# The value shall be set to:
#  - 0  - `unavailable`     - in case further detailed information on the road surface condition is unavailable,
#  - 1  - `rockfalls`       - in case rock falls are detected on the road surface,
#  - 2  - `earthquakeDamage`- in case the road surface is damaged by earthquake,
#  - 3  - `sewerCollapse`   - in case of sewer collapse on the road surface,
#  - 4  - `subsidence`      - in case road surface is damaged by subsidence,
#  - 5  - `snowDrifts`      - in case road surface is damaged due to snow drift,
#  - 6  - `stormDamage`     - in case road surface is damaged by strong storm,
#  - 7  - `burstPipe`       - in case road surface is damaged due to pipe burst,
#  - 8  - `volcanoEruption` - in case road surface is damaged due to volcano eruption,
#  - 9  - `fallingIce`      - in case road surface damage is due to falling ice,
#  - 10 - `fire`            - in case there is fire on or near to the road surface.
#  - 11-255                 - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), rockfalls(1), earthquakeDamage(2), sewerCollapse(3), subsidence(4), snowDrifts(5), stormDamage(6), burstPipe(7), volcanoEruption(8), fallingIce(9), fire(10) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of HazardousLocationSurfaceConditionSubCauseCode **********
#

uint8           value

uint8           MIN                 = 0
uint8           MAX                 = 255
uint8           UNAVAILABLE         = 0

uint8           V_UNAVAILABLE       = 0
uint8           V_ROCKFALLS         = 1
uint8           V_EARTHQUAKE_DAMAGE = 2
uint8           V_SEWER_COLLAPSE    = 3
uint8           V_SUBSIDENCE        = 4
uint8           V_SNOW_DRIFTS       = 5
uint8           V_STORM_DAMAGE      = 6
uint8           V_BURST_PIPE        = 7
uint8           V_VOLCANO_ERUPTION  = 8
uint8           V_FALLING_ICE       = 9
uint8           V_FIRE              = 10

# ********** END of HazardousLocationSurfaceConditionSubCauseCode   **********
