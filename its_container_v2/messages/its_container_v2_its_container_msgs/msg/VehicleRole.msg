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
# ENUMERATED { default(0), publicTransport(1), specialTransport(2), dangerousGoods(3), roadWork(4), rescue(5), emergency(6), safetyCar(7), agriculture(8), commercial(9), military(10), roadOperator(11), taxi(12), reserved1(13), reserved2(14), reserved3(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of VehicleRole **********
#

int32           value

int32           MIN                 = 0
int32           MAX                 = 15
int32           DEFAULT             = 0

int32           V_DEFAULT           = 0
int32           V_PUBLIC_TRANSPORT  = 1
int32           V_SPECIAL_TRANSPORT = 2
int32           V_DANGEROUS_GOODS   = 3
int32           V_ROAD_WORK         = 4
int32           V_RESCUE            = 5
int32           V_EMERGENCY         = 6
int32           V_SAFETY_CAR        = 7
int32           V_AGRICULTURE       = 8
int32           V_COMMERCIAL        = 9
int32           V_MILITARY          = 10
int32           V_ROAD_OPERATOR     = 11
int32           V_TAXI              = 12
int32           V_RESERVED1         = 13
int32           V_RESERVED2         = 14
int32           V_RESERVED3         = 15

# ********** END of VehicleRole   **********
