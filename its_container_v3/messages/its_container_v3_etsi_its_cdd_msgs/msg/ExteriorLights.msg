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
#  This DE describes the status of the exterior light switches of a vehicle incl. VRU vehicles.
# 
#  The corresponding bit shall be set to 1 under the following conditions:
#  - 0 - `lowBeamHeadlightsOn`    - when the low beam head light switch is on,
#  - 1 - `highBeamHeadlightsOn`   - when the high beam head light switch is on,
#  - 2 - `leftTurnSignalOn`       - when the left turnSignal switch is on,
#  - 3 - `rightTurnSignalOn`      - when the right turn signal switch is on,
#  - 4 - `daytimeRunningLightsOn` - when the daytime running light switch is on,
#  - 5 - `reverseLightOn`         - when the reverse light switch is on,
#  - 6 - `fogLightOn`             - when the tail fog light switch is on,
#  - 7 - `parkingLightsOn`        - when the parking light switch is on.
# 
#  @note: The value of each bit indicates the state of the switch, which commands the corresponding light.
#  The bit corresponding to a specific light is set to `1`, when the corresponding switch is turned on,
#  either manually by the driver or automatically by a vehicle system. The bit value does not indicate
#  if the corresponding lamps are alight or not.
# 
#  If a vehicle is not equipped with a certain light or if the light switch status information is not available,
#  the corresponding bit shall be set to `0`.
# 
#  As the bit value indicates only the state of the switch, the turn signal and hazard signal bit values shall not
#  alternate with the blinking interval.
# 
#  For hazard indicator, the `leftTurnSignalOn (2)` and `rightTurnSignalOn (3)` shall be both set to `1`.
# 
#  @category Vehicle information
#  @revision: Description revised in V2.1.1
#   
# ASN.1 Definition:
# BIT STRING { lowBeamHeadlightsOn(0), highBeamHeadlightsOn(1), leftTurnSignalOn(2), rightTurnSignalOn(3), daytimeRunningLightsOn(4), reverseLightOn(5), fogLightOn(6), parkingLightsOn(7) }(SIZE(8)) 
# 
# Element type: BIT STRING
#
# ********** START of ExteriorLights **********
#

bool[]          values

uint8           MIN                       = 8
uint8           MAX                       = 8

uint8           LOW_BEAM_HEADLIGHTS_ON    = 0
uint8           HIGH_BEAM_HEADLIGHTS_ON   = 1
uint8           LEFT_TURN_SIGNAL_ON       = 2
uint8           RIGHT_TURN_SIGNAL_ON      = 3
uint8           DAYTIME_RUNNING_LIGHTS_ON = 4
uint8           REVERSE_LIGHT_ON          = 5
uint8           FOG_LIGHT_ON              = 6
uint8           PARKING_LIGHTS_ON         = 7

# ********** END of ExteriorLights   **********
