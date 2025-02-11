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
#  This DE represents the value of the sub cause code of the @ref CauseCode `humanPresenceOnTheRoad`.
# 
#  The value shall be set to:
#  - 0 - `unavailable`                    - in case further detailed information abou the human presence on the road is unavailable,
#  - 1 - `childrenOnRoadway`              - in case children are present on the road,
#  - 2 - `cyclistOnRoadway`               - in case cyclist(s) are present on the road,
#  - 3 - `motorcyclistOnRoadway`          - in case motorcyclist(s) are present on the road,
#  - 4 - `pedestrian`                     - in case pedestrian(s) of any type are present on the road,
#  - 5 - `ordinary-pedestrian`            - in case pedestrian(s) to which no more-specific profile applies are present on the road,
#  - 6 - `road-worker`                    - in case pedestrian(s) with the role of a road worker applies are present on the road,
#  - 7 - `first-responder`                - in case pedestrian(s) with the role of a first responder applies are present on the road,
#  - 8 - `lightVruVehicle                 - in case light vru vehicle(s) of any type are present on the road,
#  - 9 - `bicyclist `                     - in case cycle(s) and their bicyclist(s) are present on the road,
#  - 10 - `wheelchair-user`               - in case wheelchair(s) and their user(s) are present on the road,
#  - 11 - `horse-and-rider`               - in case horse(s) and rider(s) are present on the road,
#  - 12 - `rollerskater`                  - in case rolleskater(s) and skater(s) are present on the road,
#  - 13 - `e-scooter`                     - in case e-scooter(s) and rider(s) are present on the road,
#  - 14 - `personal-transporter`          - in case personal-transporter(s) and rider(s) are present on the road,
#  - 15 - `pedelec`                       - in case pedelec(s) and rider(s) are present on the road,
#  - 16 - `speed-pedelec`                 - in case speed-pedelec(s) and rider(s) are present on the road,
#  - 17 - `ptw`                           - in case powered-two-wheeler(s) of any type are present on the road,
#  - 18 - `moped`                         - in case moped(s) and rider(s) are present on the road,
#  - 19 - `motorcycle`                    - in case motorcycle(s) and rider(s) are present on the road,
#  - 20 - `motorcycle-and-sidecar-right`  - in case motorcycle(s) with sidecar(s) on the right and rider are present on the road,
#  - 21 - `motorcycle-and-sidecar-left`   - in case motorcycle(s) with sidecar(s) on the left and rider are present on the road.
#  - 22-255                               - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: editorial revision in V2.1.1, named values 4-21 added in V2.2.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), childrenOnRoadway(1), cyclistOnRoadway(2), motorcyclistOnRoadway(3), pedestrian(4), ordinary-pedestrian(5), road-worker(6), first-responder(7), lightVruVehicle(8), bicyclist(9), wheelchair-user(10), horse-and-rider(11), rollerskater(12), e-scooter(13), personal-transporter(14), pedelec(15), speed-pedelec(16), ptw(17), moped(18), motorcycle(19), motorcycle-and-sidecar-right(20), motorcycle-and-sidecar-left(21) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of HumanPresenceOnTheRoadSubCauseCode **********
#

uint8           value

uint8           MIN                            = 0
uint8           MAX                            = 255
uint8           UNAVAILABLE                    = 0

uint8           V_UNAVAILABLE                  = 0
uint8           V_CHILDREN_ON_ROADWAY          = 1
uint8           V_CYCLIST_ON_ROADWAY           = 2
uint8           V_MOTORCYCLIST_ON_ROADWAY      = 3
uint8           V_PEDESTRIAN                   = 4
uint8           V_ORDINARY_PEDESTRIAN          = 5
uint8           V_ROAD_WORKER                  = 6
uint8           V_FIRST_RESPONDER              = 7
uint8           V_LIGHT_VRU_VEHICLE            = 8
uint8           V_BICYCLIST                    = 9
uint8           V_WHEELCHAIR_USER              = 10
uint8           V_HORSE_AND_RIDER              = 11
uint8           V_ROLLERSKATER                 = 12
uint8           V_E_SCOOTER                    = 13
uint8           V_PERSONAL_TRANSPORTER         = 14
uint8           V_PEDELEC                      = 15
uint8           V_SPEED_PEDELEC                = 16
uint8           V_PTW                          = 17
uint8           V_MOPED                        = 18
uint8           V_MOTORCYCLE                   = 19
uint8           V_MOTORCYCLE_AND_SIDECAR_RIGHT = 20
uint8           V_MOTORCYCLE_AND_SIDECAR_LEFT  = 21

# ********** END of HumanPresenceOnTheRoadSubCauseCode   **********
