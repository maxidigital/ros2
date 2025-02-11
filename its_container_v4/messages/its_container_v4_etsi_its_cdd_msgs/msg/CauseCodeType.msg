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
# The DE represents the value of the cause code of an event.
# 
#  The value shall be set to:
#  - 0                                                     - reserved for future use,
#  - 1  - `trafficCondition`                               - in case the type of event is an abnormal traffic condition,
#  - 2  - `accident`                                       - in case the type of event is a road accident,
#  - 3  - `roadworks`                                      - in case the type of event is roadwork,
#  - 4                                                     - reserved for future usage,
#  - 5  - `impassability`                                  - in case the  type of event is unmanaged road blocking, referring to any
#                                                            blocking of a road, partial or total, which has not been adequately
#                                                            secured and signposted,
#  - 6  - `adverseWeatherCondition-Adhesion`               - in case the  type of event is low adhesion,
#  - 7  - `aquaplaning`                                    - danger of aquaplaning on the road,
#  - 8                                                     - reserved for future usage,
#  - 9  - `hazardousLocation-SurfaceCondition`             - in case the type of event is abnormal road surface condition,
#  - 10 - `hazardousLocation-ObstacleOnTheRoad`            - in case the type of event is obstacle on the road,
#  - 11 - `hazardousLocation-AnimalOnTheRoad`              - in case the type of event is animal on the road,
#  - 12 - `humanPresenceOnTheRoad`                         - in case the type of event is presence of human vulnerable road user on the road,
#  - 13                                                    - reserved for future usage,
#  - 14 - `wrongWayDriving`                                - in case the type of the event is vehicle driving in wrong way,
#  - 15 - `rescueAndRecoveryWorkInProgress`                - in case the type of event is rescue and recovery work for accident or for a road hazard in progress,
#  - 16                                                    - reserved for future usage,
#  - 17 - `adverseWeatherCondition-ExtremeWeatherCondition`- in case the type of event is extreme weather condition,
#  - 18 - `adverseWeatherCondition-Visibility`             - in case the type of event is low visibility,
#  - 19 - `adverseWeatherCondition-Precipitation`          - in case the type of event is precipitation,
#  - 20 - `violence`                                       - in case the the type of event is human violence on or near the road,
#  - 21-25                                                 - reserved for future usage,
#  - 26 - `slowVehicle`                                    - in case the type of event is slow vehicle driving on the road,
#  - 27 - `dangerousEndOfQueue`                            - in case the type of event is dangerous end of vehicle queue,
#  - 28 - `publicTransportVehicleApproaching               - in case the type of event is a public transport vehicle approaching, with a priority defined by applicable traffic regulations,
#  - 29-90                                                 - are reserved for future usage,
#  - 91 - `vehicleBreakdown`                               - in case the type of event is break down vehicle on the road,
#  - 92 - `postCrash`                                      - in case the type of event is a detected crash,
#  - 93 - `humanProblem`                                   - in case the type of event is human health problem in vehicles involved in traffic,
#  - 94 - `stationaryVehicle`                              - in case the type of event is stationary vehicle,
#  - 95 - `emergencyVehicleApproaching`                    - in case the type of event is an approaching vehicle operating on a mission for which the applicable
#                                                              traffic regulations provide it with defined priority rights in traffic. 
#  - 96 - `hazardousLocation-DangerousCurve`               - in case the type of event is dangerous curve,
#  - 97 - `collisionRisk`                                  - in case the type of event is a collision risk,
#  - 98 - `signalViolation`                                - in case the type of event is signal violation,
#  - 99 - `dangerousSituation`                             - in case the type of event is dangerous situation in which autonomous safety system in vehicle
#                                                              is activated,
#  - 100 - `railwayLevelCrossing`                          - in case the type of event is a railway level crossing.
#  - 101-255                                               - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1, value 28 added in V2.2.1, definition of values 12 and 95 changed on V2.2.1
#   
# ASN.1 Definition:
# INTEGER { trafficCondition(1), accident(2), roadworks(3), impassability(5), adverseWeatherCondition-Adhesion(6), aquaplaning(7), hazardousLocation-SurfaceCondition(9), hazardousLocation-ObstacleOnTheRoad(10), hazardousLocation-AnimalOnTheRoad(11), humanPresenceOnTheRoad(12), wrongWayDriving(14), rescueAndRecoveryWorkInProgress(15), adverseWeatherCondition-ExtremeWeatherCondition(17), adverseWeatherCondition-Visibility(18), adverseWeatherCondition-Precipitation(19), violence(20), slowVehicle(26), dangerousEndOfQueue(27), publicTransportVehicleApproaching(28), vehicleBreakdown(91), postCrash(92), humanProblem(93), stationaryVehicle(94), emergencyVehicleApproaching(95), hazardousLocation-DangerousCurve(96), collisionRisk(97), signalViolation(98), dangerousSituation(99), railwayLevelCrossing(100) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of CauseCodeType **********
#

uint8           value

uint8           MIN                                                   = 0
uint8           MAX                                                   = 255

uint8           V_TRAFFIC_CONDITION                                   = 1
uint8           V_ACCIDENT                                            = 2
uint8           V_ROADWORKS                                           = 3
uint8           V_IMPASSABILITY                                       = 5
uint8           V_ADVERSE_WEATHER_CONDITION_ADHESION                  = 6
uint8           V_AQUAPLANING                                         = 7
uint8           V_HAZARDOUS_LOCATION_SURFACE_CONDITION                = 9
uint8           V_HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD             = 10
uint8           V_HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD               = 11
uint8           V_HUMAN_PRESENCE_ON_THE_ROAD                          = 12
uint8           V_WRONG_WAY_DRIVING                                   = 14
uint8           V_RESCUE_AND_RECOVERY_WORK_IN_PROGRESS                = 15
uint8           V_ADVERSE_WEATHER_CONDITION_EXTREME_WEATHER_CONDITION = 17
uint8           V_ADVERSE_WEATHER_CONDITION_VISIBILITY                = 18
uint8           V_ADVERSE_WEATHER_CONDITION_PRECIPITATION             = 19
uint8           V_VIOLENCE                                            = 20
uint8           V_SLOW_VEHICLE                                        = 26
uint8           V_DANGEROUS_END_OF_QUEUE                              = 27
uint8           V_PUBLIC_TRANSPORT_VEHICLE_APPROACHING                = 28
uint8           V_VEHICLE_BREAKDOWN                                   = 91
uint8           V_POST_CRASH                                          = 92
uint8           V_HUMAN_PROBLEM                                       = 93
uint8           V_STATIONARY_VEHICLE                                  = 94
uint8           V_EMERGENCY_VEHICLE_APPROACHING                       = 95
uint8           V_HAZARDOUS_LOCATION_DANGEROUS_CURVE                  = 96
uint8           V_COLLISION_RISK                                      = 97
uint8           V_SIGNAL_VIOLATION                                    = 98
uint8           V_DANGEROUS_SITUATION                                 = 99
uint8           V_RAILWAY_LEVEL_CROSSING                              = 100

# ********** END of CauseCodeType   **********
