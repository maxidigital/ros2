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
#  This DE represents the vehicle type according to ISO 3833 [22].
#  A "term No" refers to the number of the corresponding term and its definition in ISO 3833.
# 
#  The value shall be set to:
#  - 0	- `passengerCar`              - term No 3.1.1
#  - 1	- `saloon`                    - term No 3.1.1.1 (sedan)
#  - 2	- `convertibleSaloon`         - term No 3.1.1.2
#  - 3	- `pullmanSaloon`             - term No 3.1.1.3
#  - 4	- `stationWagon`              - term No 3.1.1.4
#  - 5	- `truckStationWagon`         - term No 3.1.1.4.1
#  - 6	- `coupe`                     - term No 3.1.1.5 (coupe)
#  - 7	- `convertible`               - term No 3.1.1.6 (open tourer, roadstar, spider)
#  - 8	- `multipurposePassengerCar`  - term No 3.1.1.7
#  - 9	- `forwardControlPassengerCar`- term No 3.1.1.8
#  - 10	- `specialPassengerCar`       - term No 3.1.1.9
#  - 11	- `bus`                       - term No 3.1.2
#  - 12	- `minibus`                   - term No 3.1.2.1
#  - 13	- `urbanBus`                  - term No 3.1.2.2
#  - 14	- `interurbanCoach`           - term No 3.1.2.3
#  - 15	- `longDistanceCoach`         - term No 3.1.2.4
#  - 16	- `articulatedBus`            - term No 3.1.2.5
#  - 17	- `trolleyBus	`             - term No 3.1.2.6
#  - 18	- `specialBus`                - term No 3.1.2.7
#  - 19	- `commercialVehicle`         - term No 3.1.3
#  - 20	- `specialCommercialVehicle`  - term No 3.1.3.1
#  - 21	- `specialVehicle`            - term No 3.1.4
#  - 22	- `trailingTowingVehicle`     - term No 3.1.5 (draw-bar tractor)
#  - 23	- `semiTrailerTowingVehicle`  - term No 3.1.6 (fifth wheel tractor)
#  - 24	- `trailer`                   - term No 3.2.1
#  - 25	- `busTrailer`                - term No 3.2.1.1
#  - 26	- `generalPurposeTrailer`     - term No 3.2.1.2
#  - 27	- `caravan`                   - term No 3.2.1.3
#  - 28	- `specialTrailer`            - term No 3.2.1.4
#  - 29	- `semiTrailer`               - term No 3.2.2
#  - 30	- `busSemiTrailer`            - term No 3.2.2.1
#  - 31	- `generalPurposeSemiTrailer` - term No 3.2.2.2
#  - 32	- `specialSemiTrailer`        - term No 3.2.2.3
#  - 33	- `roadTrain`                 - term No 3.3.1
#  - 34	- `passengerRoadTrain`        - term No 3.3.2
#  - 35	- `articulatedRoadTrain`      - term No 3.3.3
#  - 36	- `doubleRoadTrain`           - term No 3.3.4
#  - 37	- `compositeRoadTrain`        - term No 3.3.5
#  - 38	- `specialRoadTrain`          - term No 3.3.6
#  - 39	- `moped`                     - term No 3.4
#  - 40	- `motorCycle`                - term No 3.5
#  - 41-255                           - reserved for future use
# 
#  @category: Vehicle information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { passengerCar(0), saloon(1), convertibleSaloon(2), pullmanSaloon(3), stationWagon(4), truckStationWagon(5), coupe(6), convertible(7), multipurposePassengerCar(8), forwardControlPassengerCar(9), specialPassengerCar(10), bus(11), minibus(12), urbanBus(13), interurbanCoach(14), longDistanceCoach(15), articulatedBus(16), trolleyBus(17), specialBus(18), commercialVehicle(19), specialCommercialVehicle(20), specialVehicle(21), trailingTowingVehicle(22), semiTrailerTowingVehicle(23), trailer(24), busTrailer(25), generalPurposeTrailer(26), caravan(27), specialTrailer(28), semiTrailer(29), busSemiTrailer(30), generalPurposeSemiTrailer(31), specialSemiTrailer(32), roadTrain(33), passengerRoadTrain(34), articulatedRoadTrain(35), doubleRoadTrain(36), compositeRoadTrain(37), specialRoadTrain(38), moped(39), motorCycle(40) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of Iso3833VehicleType **********
#

uint8           value

uint8           MIN                             = 0
uint8           MAX                             = 255

uint8           V_PASSENGER_CAR                 = 0
uint8           V_SALOON                        = 1
uint8           V_CONVERTIBLE_SALOON            = 2
uint8           V_PULLMAN_SALOON                = 3
uint8           V_STATION_WAGON                 = 4
uint8           V_TRUCK_STATION_WAGON           = 5
uint8           V_COUPE                         = 6
uint8           V_CONVERTIBLE                   = 7
uint8           V_MULTIPURPOSE_PASSENGER_CAR    = 8
uint8           V_FORWARD_CONTROL_PASSENGER_CAR = 9
uint8           V_SPECIAL_PASSENGER_CAR         = 10
uint8           V_BUS                           = 11
uint8           V_MINIBUS                       = 12
uint8           V_URBAN_BUS                     = 13
uint8           V_INTERURBAN_COACH              = 14
uint8           V_LONG_DISTANCE_COACH           = 15
uint8           V_ARTICULATED_BUS               = 16
uint8           V_TROLLEY_BUS                   = 17
uint8           V_SPECIAL_BUS                   = 18
uint8           V_COMMERCIAL_VEHICLE            = 19
uint8           V_SPECIAL_COMMERCIAL_VEHICLE    = 20
uint8           V_SPECIAL_VEHICLE               = 21
uint8           V_TRAILING_TOWING_VEHICLE       = 22
uint8           V_SEMI_TRAILER_TOWING_VEHICLE   = 23
uint8           V_TRAILER                       = 24
uint8           V_BUS_TRAILER                   = 25
uint8           V_GENERAL_PURPOSE_TRAILER       = 26
uint8           V_CARAVAN                       = 27
uint8           V_SPECIAL_TRAILER               = 28
uint8           V_SEMI_TRAILER                  = 29
uint8           V_BUS_SEMI_TRAILER              = 30
uint8           V_GENERAL_PURPOSE_SEMI_TRAILER  = 31
uint8           V_SPECIAL_SEMI_TRAILER          = 32
uint8           V_ROAD_TRAIN                    = 33
uint8           V_PASSENGER_ROAD_TRAIN          = 34
uint8           V_ARTICULATED_ROAD_TRAIN        = 35
uint8           V_DOUBLE_ROAD_TRAIN             = 36
uint8           V_COMPOSITE_ROAD_TRAIN          = 37
uint8           V_SPECIAL_ROAD_TRAIN            = 38
uint8           V_MOPED                         = 39
uint8           V_MOTOR_CYCLE                   = 40

# ********** END of Iso3833VehicleType   **********
