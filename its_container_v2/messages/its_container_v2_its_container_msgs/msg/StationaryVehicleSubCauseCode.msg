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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(2)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# INTEGER { unavailable(0), humanProblem(1), vehicleBreakdown(2), postCrash(3), publicTransportStop(4), carryingDangerousGoods(5) }(0..255) 
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

# ********** END of StationaryVehicleSubCauseCode   **********
