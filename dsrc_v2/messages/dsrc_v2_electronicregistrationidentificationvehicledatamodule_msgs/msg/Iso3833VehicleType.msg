#*                                                                                                                               *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                                                               *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                                                                 *
#*                                                                                                                               *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                                                      *
#*                                                                                                                               *
#* This program and the accompanying materials are made available under the                                                      *
#* terms of the Eclipse Public License 2.0 which is available at                                                                 *
#* http://www.eclipse.org/legal/epl-2.0.                                                                                         *
#*                                                                                                                               *
#* SPDX-License-Identifier: EPL-2.0                                                                                              *
#*                                                                                                                               *
#*                                                                                                                               *
#* File automatically generated with DLR Wind v2                                                                                 *
#*                                                                                                                               *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0                                                           *
#*                                                                                                                               *
#* Module: ElectronicRegistrationIdentificationVehicleDataModule {iso(1) standard(0) iso24534(24534) vehicleData(1) version1(1)} *
#*                                                                                                                               *
#* For support contact v2x-ts@dlr.de                                                                                             *
#*                                                                                                                               *

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
