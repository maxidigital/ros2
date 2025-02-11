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
#  This DE represents the type of a traffic participant.
# 
#  The value shall be set to:
#  - 0 `unknown`          - information about traffic participant is not provided,
#  - 1 `pedestrian`       - human being not using a mechanical device for their trip (VRU profile 1),
#  - 2 `cyclist`          - non-motorized unicycles, bicycles , tricycles, quadracycles (VRU profile 2),
#  - 3 `moped`            - light motor vehicles with less than four wheels as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class L1, L2 (VRU Profile 3),
#  - 4 `motorcycles`      - motor vehicles with less than four wheels as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class L3, L4, L5, L6, L7 (VRU Profile 3),
#  - 5 `passengerCar`     - small passenger vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class M1,
#  - 6 `bus`              - large passenger vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class M2, M3,
#  - 7 `lightTruck`       - light Goods Vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class N1,
#  - 8 `heavyTruck`       - Heavy Goods Vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class N2 and N3,
#  - 9 `trailer`          - unpowered vehicle that is intended to be towed by a powered vehicle as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class O,
#  - 10 `specialVehicles` - vehicles which have special purposes other than the above (e.g. moving road works vehicle),
#  - 11 `tram`            - vehicle which runs on tracks along public streets,
#  - 12 `lightVruVehicle` - human being traveling on light vehicle, incl. possible use of roller skates or skateboards (VRU profile 2),
#  - 13 `animal`          - animal presenting a safety risk to other road users e.g. domesticated dog in a city or horse (VRU Profile 4),
#  - 14 `agricultural`    - agricultural and forestry vehicles as defined in UNECE/TRANS/WP.29/78/Rev.4 [16] class T,
#  - 15 `roadSideUnit`    - infrastructure typically positioned outside of the drivable roadway (e.g. on a gantry, on a pole,
#                             on a stationary road works trailer); the infrastructure is static during the entire operation period of the ITS-S (e.g. no stop and go activity),
#  - 16-255               - are reserved for future usage.
# 
#  @category: Communication information.
#  @revision: Created in V2.1.1 based on StationType
#   
# ASN.1 Definition:
# INTEGER { unknown(0), pedestrian(1), cyclist(2), moped(3), motorcycle(4), passengerCar(5), bus(6), lightTruck(7), heavyTruck(8), trailer(9), specialVehicle(10), tram(11), lightVruVehicle(12), animal(13), agricultural(14), roadSideUnit(15) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of TrafficParticipantType **********
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
uint8           V_AGRICULTURAL      = 14
uint8           V_ROAD_SIDE_UNIT    = 15

# ********** END of TrafficParticipantType   **********
