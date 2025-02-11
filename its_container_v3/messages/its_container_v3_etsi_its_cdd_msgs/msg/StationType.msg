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
#  This DE represents the type of technical context the ITS-S is integrated in.
#  The station type depends on the integration environment of ITS-S into vehicle, mobile devices or at infrastructure.
# 
#  The value shall be set to:
#  - 0 `unknown`          - information about the ITS-S context is not provided,
#  - 1 `pedestrian`       - ITS-S carried by human being not using a mechanical device for their trip (VRU profile 1),
#  - 2 `cyclist`          - ITS-S mounted on non-motorized unicycles, bicycles , tricycles, quadracycles (VRU profile 2),
#  - 3 `moped`            - ITS-S mounted on light motor vehicles with less than four wheels as defined in UNECE/TRANS/WP.29/78/Rev.4 [16]
#                             class L1, L2 (VRU Profile 3),
#  - 4 `motorcycles`      - ITS-S mounted on motor vehicles with less than four wheels as defined in UNECE/TRANS/WP.29/78/Rev.4 [16]
#                             class L3, L4, L5, L6, L7 (VRU Profile 3),
#  - 5 `passengerCar`     - ITS-S mounted on small passenger vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class M1,
#  - 6 `bus`              - ITS-S mounted on large passenger vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class M2, M3,
#  - 7 `lightTruck`       - ITS-S mounted on light Goods Vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class N1,
#  - 8 `heavyTruck`       - ITS-S mounted on Heavy Goods Vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class N2 and N3,
#  - 9 `trailer`          - ITS-S mounted on an unpowered vehicle that is intended to be towed by a powered vehicle as defined in
#                             UNECE/TRANS/WP.29/78/Rev.4 [16] class O,
#  - 10 `specialVehicles` - ITS-S mounted on vehicles which have special purposes other than the above (e.g. moving road works vehicle),
#  - 11 `tram`            - ITS-S mounted on a vehicle which runs on tracks along public streets,
#  - 12 `lightVruVehicle` - ITS-S carried by a human being traveling on light vehicle , incl. possible use of roller skates or skateboards (VRU profile 2),
#  - 13 `animal`          - ITS-S carried by an animal presenting a safety risk to other road users e.g. domesticated dog in a city or horse (VRU Profile 4),
#  - 14                   - reserved for future usage,
#  - 15 `roadSideUnit`    - ITS-S mounted on an infrastructure typically positioned outside of the drivable roadway (e.g. on a gantry, on a pole,
#                             on a stationary road works trailer); the infrastructure is static during the entire operation period of the ITS-S (e.g. no stop and go activity),
#  - 16-255               - are reserved for future usage.
# 
#  @note: this DE is kept for backwards compatibility reasons only. It is recommended to use the @ref TrafficParticipantType instead.
#  @category: Communication information.
#  @revision: revised in V2.1.1 (named values 12 and 13 added and note to value 9 deleted)
#   
# ASN.1 Definition:
# INTEGER { unknown(0), pedestrian(1), cyclist(2), moped(3), motorcycle(4), passengerCar(5), bus(6), lightTruck(7), heavyTruck(8), trailer(9), specialVehicle(10), tram(11), lightVruVehicle(12), animal(13), roadSideUnit(15) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of StationType **********
#

uint8           value

uint8           MIN                 = 0
uint8           MAX                 = 255

uint8           V_UNKNOWN           = 0
uint8           V_PEDESTRIAN        = 1
uint8           V_CYCLIST           = 2
uint8           V_MOPED             = 3
uint8           V_MOTORCYCLE        = 4
uint8           V_PASSENGER_CAR     = 5
uint8           V_BUS               = 6
uint8           V_LIGHT_TRUCK       = 7
uint8           V_HEAVY_TRUCK       = 8
uint8           V_TRAILER           = 9
uint8           V_SPECIAL_VEHICLE   = 10
uint8           V_TRAM              = 11
uint8           V_LIGHT_VRU_VEHICLE = 12
uint8           V_ANIMAL            = 13
uint8           V_ROAD_SIDE_UNIT    = 15

# ********** END of StationType   **********
