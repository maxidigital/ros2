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
#  This DE provides the value of the sub cause codes of the @ref CauseCode "stationaryVehicle".
# 
#  The value shall be set to:
#  - 0 `unavailable`           - in case further detailed information on stationary vehicle is unavailable,
#  - 1 `humanProblem`          - in case stationary vehicle is due to health problem of driver or passenger,
#  - 2 `vehicleBreakdown`      - in case stationary vehicle is due to vehicle break down,
#  - 3 `postCrash`             - in case stationary vehicle is caused by collision,
#  - 4 `publicTransportStop`   - in case public transport vehicle is stationary at bus stop,
#  - 5 `carryingDangerousGoods`- in case the stationary vehicle is carrying dangerous goods,
#  - 6 `vehicleOnFire`         - in case of vehicle on fire.
#  - 7-255 reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), humanProblem(1), vehicleBreakdown(2), postCrash(3), publicTransportStop(4), carryingDangerousGoods(5), vehicleOnFire(6) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of StationaryVehicleSubCauseCode **********
#

uint8           value

uint8           MIN                        = 0
uint8           MAX                        = 255
uint8           UNAVAILABLE                = 0

uint8           V_UNAVAILABLE              = 0
uint8           V_HUMAN_PROBLEM            = 1
uint8           V_VEHICLE_BREAKDOWN        = 2
uint8           V_POST_CRASH               = 3
uint8           V_PUBLIC_TRANSPORT_STOP    = 4
uint8           V_CARRYING_DANGEROUS_GOODS = 5
uint8           V_VEHICLE_ON_FIRE          = 6

# ********** END of StationaryVehicleSubCauseCode   **********
