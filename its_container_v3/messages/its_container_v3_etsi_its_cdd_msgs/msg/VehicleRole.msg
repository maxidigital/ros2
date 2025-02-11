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
#  This DE indicates the role played by a vehicle at a point in time.
# 
#  The value shall be set to:
#  - 0 `default`          - to indicate the default vehicle role as indicated by the vehicle type,
#  - 1 `publicTransport`  - to indicate that the vehicle is used to operate public transport service,
#  - 2 `specialTransport` - to indicate that the vehicle is used for special transport purpose, e.g. oversized trucks,
#  - 3 `dangerousGoods`   - to indicate that the vehicle is used for dangerous goods transportation,
#  - 4 `roadWork`         - to indicate that the vehicle is used to realize roadwork or road maintenance mission,
#  - 5 `rescue`           - to indicate that the vehicle is used for rescue purpose in case of an accident, e.g. as a towing service,
#  - 6 `emergency`        - to indicate that the vehicle is used for emergency mission, e.g. ambulance, fire brigade,
#  - 7 `safetyCar`        - to indicate that the vehicle is used for public safety, e.g. patrol,
#  - 8 `agriculture`      - to indicate that the vehicle is used for agriculture, e.g. farm tractor,
#  - 9 `commercial`       - to indicate that the vehicle is used for transportation of commercial goods,
#  - 10 `military`        - to indicate that the vehicle is used for military purpose,
#  - 11 `roadOperator`    - to indicate that the vehicle is used in road operator missions,
#  - 12 `taxi`            - to indicate that the vehicle is used to provide an authorized taxi service.
#  - 13 `reserved`        - is reserved for future usage.
#  - 14 `reserved`        - is reserved for future usage.
#  - 15 `reserved`        - is reserved for future usage.
# 
#  @category: Vehicle Information
#  @revision: Description updated in V2.1.1 (removed reference to CEN/TS 16157-3)
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
