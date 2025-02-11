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
