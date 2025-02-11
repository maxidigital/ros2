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
# INTEGER { reserved(0), trafficCondition(1), accident(2), roadworks(3), impassability(5), adverseWeatherCondition-Adhesion(6), aquaplannning(7), hazardousLocation-SurfaceCondition(9), hazardousLocation-ObstacleOnTheRoad(10), hazardousLocation-AnimalOnTheRoad(11), humanPresenceOnTheRoad(12), wrongWayDriving(14), rescueAndRecoveryWorkInProgress(15), adverseWeatherCondition-ExtremeWeatherCondition(17), adverseWeatherCondition-Visibility(18), adverseWeatherCondition-Precipitation(19), slowVehicle(26), dangerousEndOfQueue(27), vehicleBreakdown(91), postCrash(92), humanProblem(93), stationaryVehicle(94), emergencyVehicleApproaching(95), hazardousLocation-DangerousCurve(96), collisionRisk(97), signalViolation(98), dangerousSituation(99) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of CauseCodeType **********
#

uint8           value

uint8           MIN                                                   = 0
uint8           MAX                                                   = 255

uint8           V_RESERVED                                            = 0
uint8           V_TRAFFIC_CONDITION                                   = 1
uint8           V_ACCIDENT                                            = 2
uint8           V_ROADWORKS                                           = 3
uint8           V_IMPASSABILITY                                       = 5
uint8           V_ADVERSE_WEATHER_CONDITION_ADHESION                  = 6
uint8           V_AQUAPLANNNING                                       = 7
uint8           V_HAZARDOUS_LOCATION_SURFACE_CONDITION                = 9
uint8           V_HAZARDOUS_LOCATION_OBSTACLE_ON_THE_ROAD             = 10
uint8           V_HAZARDOUS_LOCATION_ANIMAL_ON_THE_ROAD               = 11
uint8           V_HUMAN_PRESENCE_ON_THE_ROAD                          = 12
uint8           V_WRONG_WAY_DRIVING                                   = 14
uint8           V_RESCUE_AND_RECOVERY_WORK_IN_PROGRESS                = 15
uint8           V_ADVERSE_WEATHER_CONDITION_EXTREME_WEATHER_CONDITION = 17
uint8           V_ADVERSE_WEATHER_CONDITION_VISIBILITY                = 18
uint8           V_ADVERSE_WEATHER_CONDITION_PRECIPITATION             = 19
uint8           V_SLOW_VEHICLE                                        = 26
uint8           V_DANGEROUS_END_OF_QUEUE                              = 27
uint8           V_VEHICLE_BREAKDOWN                                   = 91
uint8           V_POST_CRASH                                          = 92
uint8           V_HUMAN_PROBLEM                                       = 93
uint8           V_STATIONARY_VEHICLE                                  = 94
uint8           V_EMERGENCY_VEHICLE_APPROACHING                       = 95
uint8           V_HAZARDOUS_LOCATION_DANGEROUS_CURVE                  = 96
uint8           V_COLLISION_RISK                                      = 97
uint8           V_SIGNAL_VIOLATION                                    = 98
uint8           V_DANGEROUS_SITUATION                                 = 99

# ********** END of CauseCodeType   **********
