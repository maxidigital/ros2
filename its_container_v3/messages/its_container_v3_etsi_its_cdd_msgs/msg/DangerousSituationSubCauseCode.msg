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
#  This DE represents the value of the sub cause codes of the @ref CauseCode `dangerousSituation`
# 
#  The value shall be set to:
#  - 0 - `unavailable`                      - in case information on the type of dangerous situation is unavailable,
#  - 1 - `emergencyElectronicBrakeEngaged`  - in case emergency electronic brake is engaged,
#  - 2 - `preCrashSystemEngaged`            - in case pre-crash system is engaged,
#  - 3 - `espEngaged`                       - in case Electronic Stability Program (ESP) system is engaged,
#  - 4 - `absEngaged`                       - in case Anti-lock Braking System (ABS) is engaged,
#  - 5 - `aebEngaged`                       - in case Autonomous Emergency Braking (AEB) system is engaged,
#  - 6 - `brakeWarningEngaged`              - in case brake warning is engaged,
#  - 7 - `collisionRiskWarningEngaged`      - in case collision risk warning is engaged,
#  - 8-255                                  - reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), emergencyElectronicBrakeEngaged(1), preCrashSystemEngaged(2), espEngaged(3), absEngaged(4), ebEngaged(5), brakeWarningEngaged(6), collisionRiskWarningEngaged(7) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of DangerousSituationSubCauseCode **********
#

uint8           value

uint8           MIN                                  = 0
uint8           MAX                                  = 255
uint8           UNAVAILABLE                          = 0

uint8           V_UNAVAILABLE                        = 0
uint8           V_EMERGENCY_ELECTRONIC_BRAKE_ENGAGED = 1
uint8           V_PRE_CRASH_SYSTEM_ENGAGED           = 2
uint8           V_ESP_ENGAGED                        = 3
uint8           V_ABS_ENGAGED                        = 4
uint8           V_EB_ENGAGED                         = 5
uint8           V_BRAKE_WARNING_ENGAGED              = 6
uint8           V_COLLISION_RISK_WARNING_ENGAGED     = 7

# ********** END of DangerousSituationSubCauseCode   **********
