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
#  This DE represents the value of the sub cause code of the @ref CauseCode `accident`.
# 
#  The value shall be set to:
#  - 0 - `unavailable`                        - in case the information on the sub cause of the accident is unavailable,
#  - 1 - `multiVehicleAccident`               - in case more than two vehicles are involved in accident,
#  - 2 - `heavyAccident`                      - in case the airbag of the vehicle involved in the accident is triggered,
#                                               the accident requires important rescue and/or recovery work,
#  - 3 - `accidentInvolvingLorry`             - in case the accident involves a lorry,
#  - 4 - `accidentInvolvingBus`               - in case the accident involves a bus,
#  - 5 - `accidentInvolvingHazardousMaterials`- in case the accident involves hazardous material,
#  - 6 - `accidentOnOppositeLane`             - in case the accident happens on opposite lanes,
#  - 7 - `unsecuredAccident`                  - in case the accident is not secured,
#  - 8 - `assistanceRequested`                - in case rescue and assistance are requested,
#  - 9-255                                    - reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), multiVehicleAccident(1), heavyAccident(2), accidentInvolvingLorry(3), accidentInvolvingBus(4), accidentInvolvingHazardousMaterials(5), accidentOnOppositeLane(6), unsecuredAccident(7), assistanceRequested(8) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of AccidentSubCauseCode **********
#

uint8           value

uint8           MIN                                      = 0
uint8           MAX                                      = 255
uint8           UNAVAILABLE                              = 0

uint8           V_UNAVAILABLE                            = 0
uint8           V_MULTI_VEHICLE_ACCIDENT                 = 1
uint8           V_HEAVY_ACCIDENT                         = 2
uint8           V_ACCIDENT_INVOLVING_LORRY               = 3
uint8           V_ACCIDENT_INVOLVING_BUS                 = 4
uint8           V_ACCIDENT_INVOLVING_HAZARDOUS_MATERIALS = 5
uint8           V_ACCIDENT_ON_OPPOSITE_LANE              = 6
uint8           V_UNSECURED_ACCIDENT                     = 7
uint8           V_ASSISTANCE_REQUESTED                   = 8

# ********** END of AccidentSubCauseCode   **********
