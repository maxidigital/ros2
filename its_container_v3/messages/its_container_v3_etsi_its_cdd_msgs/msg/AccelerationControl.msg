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
#  This DE indicates the current controlling mechanism for longitudinal movement of the vehicle.
#  The data may be provided via the in-vehicle network. It indicates whether a specific in-vehicle
#  acceleration control system is engaged or not. Currently, this DE includes the information of the
#  vehicle brake pedal, gas pedal, emergency brake system, collision warning system, adaptive cruise
#  control system, cruise control system and speed limiter system.
# 
#  The corresponding bit shall be set to 1 under the following conditions:
#  - 0 - `brakePedalEngaged`      - Driver is stepping on the brake pedal,
#  - 1 - `gasPedalEngaged`        - Driver is stepping on the gas pedal,
#  - 2 - `emergencyBrakeEngaged`  - emergency brake system is engaged,
#  - 3 - `collisionWarningEngaged`- collision warning system is engaged,
#  - 4 - `accEngaged`             - ACC is engaged,
#  - 5 - `cruiseControlEngaged`   - cruise control is engaged,
#  - 6 - `speedLimiterEngaged`    - speed limiter is engaged.
# 
#  Otherwise (for example when the corresponding system is not available due to non equipped system
#  or information is unavailable), the corresponding bit shall be set to 0.
# 
#  @note: The system engagement condition is OEM specific and therefore out of scope of the present document.
#  @category: Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# BIT STRING { brakePedalEngaged(0), gasPedalEngaged(1), emergencyBrakeEngaged(2), collisionWarningEngaged(3), accEngaged(4), cruiseControlEngaged(5), speedLimiterEngaged(6) }(SIZE(7)) 
# 
# Element type: BIT STRING
#
# ********** START of AccelerationControl **********
#

bool[]          values

uint8           MIN                       = 7
uint8           MAX                       = 7

uint8           BRAKE_PEDAL_ENGAGED       = 0
uint8           GAS_PEDAL_ENGAGED         = 1
uint8           EMERGENCY_BRAKE_ENGAGED   = 2
uint8           COLLISION_WARNING_ENGAGED = 3
uint8           ACC_ENGAGED               = 4
uint8           CRUISE_CONTROL_ENGAGED    = 5
uint8           SPEED_LIMITER_ENGAGED     = 6

# ********** END of AccelerationControl   **********
