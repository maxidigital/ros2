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
#  This DE represents the value of the sub cause codes of the @ref CauseCode `vehicleBreakdown`.
# 
#  The value shall be set to:
#  - 0 `unavailable`         - in case further detailed information on cause of vehicle break down is unavailable,
#  - 1 `lackOfFuel`          - in case vehicle break down is due to lack of fuel,
#  - 2 `lackOfBatteryPower`  - in case vehicle break down is caused by lack of battery power,
#  - 3 `engineProblem`       - in case vehicle break down is caused by an engine problem,
#  - 4 `transmissionProblem` - in case vehicle break down is caused by transmission problem,
#  - 5 `engineCoolingProblem`- in case vehicle break down is caused by an engine cooling problem,
#  - 6 `brakingSystemProblem`- in case vehicle break down is caused by a braking system problem,
#  - 7 `steeringProblem`     - in case vehicle break down is caused by a steering problem,
#  - 8 `tyrePuncture`        - in case vehicle break down is caused by tyre puncture,
#  - 9 `tyrePressureProblem` - in case low tyre pressure in detected,
#  - 10 `vehicleOnFire`      - in case the vehicle is on fire.
#  - 11-255                  - are reserved for future usage.
# 
#  @category: Traffic information
# 
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), lackOfFuel(1), lackOfBatteryPower(2), engineProblem(3), transmissionProblem(4), engineCoolingProblem(5), brakingSystemProblem(6), steeringProblem(7), tyrePuncture(8), tyrePressureProblem(9), vehicleOnFire(10) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of VehicleBreakdownSubCauseCode **********
#

uint8           value

uint8           MIN                      = 0
uint8           MAX                      = 255
uint8           UNAVAILABLE              = 0

uint8           V_UNAVAILABLE            = 0
uint8           V_LACK_OF_FUEL           = 1
uint8           V_LACK_OF_BATTERY_POWER  = 2
uint8           V_ENGINE_PROBLEM         = 3
uint8           V_TRANSMISSION_PROBLEM   = 4
uint8           V_ENGINE_COOLING_PROBLEM = 5
uint8           V_BRAKING_SYSTEM_PROBLEM = 6
uint8           V_STEERING_PROBLEM       = 7
uint8           V_TYRE_PUNCTURE          = 8
uint8           V_TYRE_PRESSURE_PROBLEM  = 9
uint8           V_VEHICLE_ON_FIRE        = 10

# ********** END of VehicleBreakdownSubCauseCode   **********
