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
#  This DF is a representation of the cause code value and associated sub cause code value of a traffic event.
# 
#  The following options are available:
#  - 0                                                        - reserved for future use,
#  - 1  - `trafficCondition1`                                 - in case the type of event is an abnormal traffic condition,
#  - 2  - `accident2`                                         - in case the type of event is a road accident,
#  - 3  - `roadworks3`                                        - in case the type of event is roadwork,
#  - 4                                                        - reserved for future usage,
#  - 5  - `impassability5`                                    - in case the  type of event is unmanaged road blocking, referring to any
#                                                               blocking of a road, partial or total, which has not been adequately secured and signposted,
#  - 6  - `adverseWeatherCondition-Adhesion6`                 - in case the  type of event is low adhesion,
#  - 7  - `aquaplaning7`                                      - danger of aquaplaning on the road,
#  - 8                                                        - reserved for future usage,
#  - 9  - `hazardousLocation-SurfaceCondition9`               - in case the type of event is abnormal road surface condition,
#  - 10 - `hazardousLocation-ObstacleOnTheRoad10`             - in case the type of event is obstacle on the road,
#  - 11 - `hazardousLocation-AnimalOnTheRoad11`               - in case the type of event is animal on the road,
#  - 12 - `humanPresenceOnTheRoad`                            - in case the type of event is presence of human vulnerable road user on the road,
#  - 13                                                       - reserved for future usage,
#  - 14 - `wrongWayDriving14`                                 - in case the type of the event is vehicle driving in wrong way,
#  - 15 - `rescueAndRecoveryWorkInProgress15`                 - in case the type of event is rescue and recovery work for accident or for a road hazard in progress,
#  - 16                                                       - reserved for future usage,
#  - 17 - `adverseWeatherCondition-ExtremeWeatherCondition17` - in case the type of event is extreme weather condition,
#  - 18 - `adverseWeatherCondition-Visibility18`              - in case the type of event is low visibility,
#  - 19 - `adverseWeatherCondition-Precipitation19`           - in case the type of event is precipitation,
#  - 20 - `violence20`                                        - in case the the type of event is human violence on or near the road,
#  - 21-25                                                    - reserved for future usage,
#  - 26 - `slowVehicle26`                                     - in case the type of event is slow vehicle driving on the road,
#  - 27 - `dangerousEndOfQueue27`                             - in case the type of event is dangerous end of vehicle queue,
#  - 28 - `publicTransportVehicleApproaching                  - in case the type of event is a public transport vehicle approaching, with a priority defined by applicable traffic regulations,
#  - 29-90                                                    - are reserved for future usage,
#  - 91 - `vehicleBreakdown91`                                - in case the type of event is break down vehicle on the road,
#  - 92 - `postCrash92`                                       - in case the type of event is a detected crash,
#  - 93 - `humanProblem93`                                    - in case the type of event is human health problem in vehicles involved in traffic,
#  - 94 - `stationaryVehicle94`                               - in case the type of event is stationary vehicle,
#  - 95 - `emergencyVehicleApproaching95`                     - in case the type of event is an approaching vehicle operating on a mission for which the
#                                                                 applicable traffic regulations provide it with defined priority rights in traffic. 
#  - 96 - `hazardousLocation-DangerousCurve96`                - in case the type of event is dangerous curve,
#  - 97 - `collisionRisk97`                                   - in case the type of event is a collision risk,
#  - 98 - `signalViolation98`                                 - in case the type of event is signal violation,
#  - 99 - `dangerousSituation99`                              - in case the type of event is dangerous situation in which autonomous safety system in vehicle
#                                                               is activated,
#  - 100 - `railwayLevelCrossing100`                          - in case the type of event is a railway level crossing.
#  - 101-255                                                  - are reserved for future usage.
# 
#  @note: this DF is defined for use as part of CauseCodeV2. It is recommended to use CauseCodeV2.
#  @category: Traffic information
#  @revision: Created in V2.1.1, the type of impassability5 changed to ImpassabilitySubCauseCode in V2.2.1, value 28 added in V2.2.1, definition of value 12 and 95 changed in V2.2.1
#   
# ASN.1 Definition:
# CHOICE {
#    reserved0 SubCauseCodeType,
#    trafficCondition1 TrafficConditionSubCauseCode,
#    accident2 AccidentSubCauseCode,
#    roadworks3 RoadworksSubCauseCode,
#    reserved4 SubCauseCodeType,
#    impassability5 ImpassabilitySubCauseCode,
#    adverseWeatherCondition_Adhesion6 AdverseWeatherCondition_AdhesionSubCauseCode,
#    aquaplaning7 SubCauseCodeType,
#    reserved8 SubCauseCodeType,
#    hazardousLocation_SurfaceCondition9 HazardousLocation_SurfaceConditionSubCauseCode,
#    hazardousLocation_ObstacleOnTheRoad10 HazardousLocation_ObstacleOnTheRoadSubCauseCode,
#    hazardousLocation_AnimalOnTheRoad11 HazardousLocation_AnimalOnTheRoadSubCauseCode,
#    humanPresenceOnTheRoad12 HumanPresenceOnTheRoadSubCauseCode,
#    reserved13 SubCauseCodeType,
#    wrongWayDriving14 WrongWayDrivingSubCauseCode,
#    rescueAndRecoveryWorkInProgress15 RescueAndRecoveryWorkInProgressSubCauseCode,
#    reserved16 SubCauseCodeType,
#    adverseWeatherCondition_ExtremeWeatherCondition17 AdverseWeatherCondition_ExtremeWeatherConditionSubCauseCode,
#    adverseWeatherCondition_Visibility18 AdverseWeatherCondition_VisibilitySubCauseCode,
#    adverseWeatherCondition_Precipitation19 AdverseWeatherCondition_PrecipitationSubCauseCode,
#    violence20 SubCauseCodeType,
#    reserved21 SubCauseCodeType,
#    reserved22 SubCauseCodeType,
#    reserved23 SubCauseCodeType,
#    reserved24 SubCauseCodeType,
#    reserved25 SubCauseCodeType,
#    slowVehicle26 SlowVehicleSubCauseCode,
#    dangerousEndOfQueue27 DangerousEndOfQueueSubCauseCode,
#    publicTransportVehicleApproaching28 SubCauseCodeType,
#    reserved29 SubCauseCodeType,
#    reserved30 SubCauseCodeType,
#    reserved31 SubCauseCodeType,
#    reserved32 SubCauseCodeType,
#    reserved33 SubCauseCodeType,
#    reserved34 SubCauseCodeType,
#    reserved35 SubCauseCodeType,
#    reserved36 SubCauseCodeType,
#    reserved37 SubCauseCodeType,
#    reserved38 SubCauseCodeType,
#    reserved39 SubCauseCodeType,
#    reserved40 SubCauseCodeType,
#    reserved41 SubCauseCodeType,
#    reserved42 SubCauseCodeType,
#    reserved43 SubCauseCodeType,
#    reserved44 SubCauseCodeType,
#    reserved45 SubCauseCodeType,
#    reserved46 SubCauseCodeType,
#    reserved47 SubCauseCodeType,
#    reserved48 SubCauseCodeType,
#    reserved49 SubCauseCodeType,
#    reserved50 SubCauseCodeType,
#    reserved51 SubCauseCodeType,
#    reserved52 SubCauseCodeType,
#    reserved53 SubCauseCodeType,
#    reserved54 SubCauseCodeType,
#    reserved55 SubCauseCodeType,
#    reserved56 SubCauseCodeType,
#    reserved57 SubCauseCodeType,
#    reserved58 SubCauseCodeType,
#    reserved59 SubCauseCodeType,
#    reserved60 SubCauseCodeType,
#    reserved61 SubCauseCodeType,
#    reserved62 SubCauseCodeType,
#    reserved63 SubCauseCodeType,
#    reserved64 SubCauseCodeType,
#    reserved65 SubCauseCodeType,
#    reserved66 SubCauseCodeType,
#    reserved67 SubCauseCodeType,
#    reserved68 SubCauseCodeType,
#    reserved69 SubCauseCodeType,
#    reserved70 SubCauseCodeType,
#    reserved71 SubCauseCodeType,
#    reserved72 SubCauseCodeType,
#    reserved73 SubCauseCodeType,
#    reserved74 SubCauseCodeType,
#    reserved75 SubCauseCodeType,
#    reserved76 SubCauseCodeType,
#    reserved77 SubCauseCodeType,
#    reserved78 SubCauseCodeType,
#    reserved79 SubCauseCodeType,
#    reserved80 SubCauseCodeType,
#    reserved81 SubCauseCodeType,
#    reserved82 SubCauseCodeType,
#    reserved83 SubCauseCodeType,
#    reserved84 SubCauseCodeType,
#    reserved85 SubCauseCodeType,
#    reserved86 SubCauseCodeType,
#    reserved87 SubCauseCodeType,
#    reserved88 SubCauseCodeType,
#    reserved89 SubCauseCodeType,
#    reserved90 SubCauseCodeType,
#    vehicleBreakdown91 VehicleBreakdownSubCauseCode,
#    postCrash92 PostCrashSubCauseCode,
#    humanProblem93 HumanProblemSubCauseCode,
#    stationaryVehicle94 StationaryVehicleSubCauseCode,
#    emergencyVehicleApproaching95 EmergencyVehicleApproachingSubCauseCode,
#    hazardousLocation_DangerousCurve96 HazardousLocation_DangerousCurveSubCauseCode,
#    collisionRisk97 CollisionRiskSubCauseCode,
#    signalViolation98 SignalViolationSubCauseCode,
#    dangerousSituation99 DangerousSituationSubCauseCode,
#    railwayLevelCrossing100 RailwayLevelCrossingSubCauseCode,
#    reserved101 SubCauseCodeType,
#    reserved102 SubCauseCodeType,
#    reserved103 SubCauseCodeType,
#    reserved104 SubCauseCodeType,
#    reserved105 SubCauseCodeType,
#    reserved106 SubCauseCodeType,
#    reserved107 SubCauseCodeType,
#    reserved108 SubCauseCodeType,
#    reserved109 SubCauseCodeType,
#    reserved110 SubCauseCodeType,
#    reserved111 SubCauseCodeType,
#    reserved112 SubCauseCodeType,
#    reserved113 SubCauseCodeType,
#    reserved114 SubCauseCodeType,
#    reserved115 SubCauseCodeType,
#    reserved116 SubCauseCodeType,
#    reserved117 SubCauseCodeType,
#    reserved118 SubCauseCodeType,
#    reserved119 SubCauseCodeType,
#    reserved120 SubCauseCodeType,
#    reserved121 SubCauseCodeType,
#    reserved122 SubCauseCodeType,
#    reserved123 SubCauseCodeType,
#    reserved124 SubCauseCodeType,
#    reserved125 SubCauseCodeType,
#    reserved126 SubCauseCodeType,
#    reserved127 SubCauseCodeType,
#    reserved128 SubCauseCodeType 
# } 
# 
# Element type: CHOICE
#
# ********** START of CauseCodeChoice **********
#

SubCauseCodeType[]                                           reserved0                                             #  choice = 0
TrafficConditionSubCauseCode[]                               traffic_condition1                                    #  choice = 1
AccidentSubCauseCode[]                                       accident2                                             #  choice = 2
RoadworksSubCauseCode[]                                      roadworks3                                            #  choice = 3
SubCauseCodeType[]                                           reserved4                                             #  choice = 4
ImpassabilitySubCauseCode[]                                  impassability5                                        #  choice = 5
AdverseWeatherConditionAdhesionSubCauseCode[]                adverse_weather_condition_adhesion6                   #  choice = 6
SubCauseCodeType[]                                           aquaplaning7                                          #  choice = 7
SubCauseCodeType[]                                           reserved8                                             #  choice = 8
HazardousLocationSurfaceConditionSubCauseCode[]              hazardous_location_surface_condition9                 #  choice = 9
HazardousLocationObstacleOnTheRoadSubCauseCode[]             hazardous_location_obstacle_on_the_road10             #  choice = 10
HazardousLocationAnimalOnTheRoadSubCauseCode[]               hazardous_location_animal_on_the_road11               #  choice = 11
HumanPresenceOnTheRoadSubCauseCode[]                         human_presence_on_the_road12                          #  choice = 12
SubCauseCodeType[]                                           reserved13                                            #  choice = 13
WrongWayDrivingSubCauseCode[]                                wrong_way_driving14                                   #  choice = 14
RescueAndRecoveryWorkInProgressSubCauseCode[]                rescue_and_recovery_work_in_progress15                #  choice = 15
SubCauseCodeType[]                                           reserved16                                            #  choice = 16
AdverseWeatherConditionExtremeWeatherConditionSubCauseCode[] adverse_weather_condition_extreme_weather_condition17 #  choice = 17
AdverseWeatherConditionVisibilitySubCauseCode[]              adverse_weather_condition_visibility18                #  choice = 18
AdverseWeatherConditionPrecipitationSubCauseCode[]           adverse_weather_condition_precipitation19             #  choice = 19
SubCauseCodeType[]                                           violence20                                            #  choice = 20
SubCauseCodeType[]                                           reserved21                                            #  choice = 21
SubCauseCodeType[]                                           reserved22                                            #  choice = 22
SubCauseCodeType[]                                           reserved23                                            #  choice = 23
SubCauseCodeType[]                                           reserved24                                            #  choice = 24
SubCauseCodeType[]                                           reserved25                                            #  choice = 25
SlowVehicleSubCauseCode[]                                    slow_vehicle26                                        #  choice = 26
DangerousEndOfQueueSubCauseCode[]                            dangerous_end_of_queue27                              #  choice = 27
SubCauseCodeType[]                                           public_transport_vehicle_approaching28                #  choice = 28
SubCauseCodeType[]                                           reserved29                                            #  choice = 29
SubCauseCodeType[]                                           reserved30                                            #  choice = 30
SubCauseCodeType[]                                           reserved31                                            #  choice = 31
SubCauseCodeType[]                                           reserved32                                            #  choice = 32
SubCauseCodeType[]                                           reserved33                                            #  choice = 33
SubCauseCodeType[]                                           reserved34                                            #  choice = 34
SubCauseCodeType[]                                           reserved35                                            #  choice = 35
SubCauseCodeType[]                                           reserved36                                            #  choice = 36
SubCauseCodeType[]                                           reserved37                                            #  choice = 37
SubCauseCodeType[]                                           reserved38                                            #  choice = 38
SubCauseCodeType[]                                           reserved39                                            #  choice = 39
SubCauseCodeType[]                                           reserved40                                            #  choice = 40
SubCauseCodeType[]                                           reserved41                                            #  choice = 41
SubCauseCodeType[]                                           reserved42                                            #  choice = 42
SubCauseCodeType[]                                           reserved43                                            #  choice = 43
SubCauseCodeType[]                                           reserved44                                            #  choice = 44
SubCauseCodeType[]                                           reserved45                                            #  choice = 45
SubCauseCodeType[]                                           reserved46                                            #  choice = 46
SubCauseCodeType[]                                           reserved47                                            #  choice = 47
SubCauseCodeType[]                                           reserved48                                            #  choice = 48
SubCauseCodeType[]                                           reserved49                                            #  choice = 49
SubCauseCodeType[]                                           reserved50                                            #  choice = 50
SubCauseCodeType[]                                           reserved51                                            #  choice = 51
SubCauseCodeType[]                                           reserved52                                            #  choice = 52
SubCauseCodeType[]                                           reserved53                                            #  choice = 53
SubCauseCodeType[]                                           reserved54                                            #  choice = 54
SubCauseCodeType[]                                           reserved55                                            #  choice = 55
SubCauseCodeType[]                                           reserved56                                            #  choice = 56
SubCauseCodeType[]                                           reserved57                                            #  choice = 57
SubCauseCodeType[]                                           reserved58                                            #  choice = 58
SubCauseCodeType[]                                           reserved59                                            #  choice = 59
SubCauseCodeType[]                                           reserved60                                            #  choice = 60
SubCauseCodeType[]                                           reserved61                                            #  choice = 61
SubCauseCodeType[]                                           reserved62                                            #  choice = 62
SubCauseCodeType[]                                           reserved63                                            #  choice = 63
SubCauseCodeType[]                                           reserved64                                            #  choice = 64
SubCauseCodeType[]                                           reserved65                                            #  choice = 65
SubCauseCodeType[]                                           reserved66                                            #  choice = 66
SubCauseCodeType[]                                           reserved67                                            #  choice = 67
SubCauseCodeType[]                                           reserved68                                            #  choice = 68
SubCauseCodeType[]                                           reserved69                                            #  choice = 69
SubCauseCodeType[]                                           reserved70                                            #  choice = 70
SubCauseCodeType[]                                           reserved71                                            #  choice = 71
SubCauseCodeType[]                                           reserved72                                            #  choice = 72
SubCauseCodeType[]                                           reserved73                                            #  choice = 73
SubCauseCodeType[]                                           reserved74                                            #  choice = 74
SubCauseCodeType[]                                           reserved75                                            #  choice = 75
SubCauseCodeType[]                                           reserved76                                            #  choice = 76
SubCauseCodeType[]                                           reserved77                                            #  choice = 77
SubCauseCodeType[]                                           reserved78                                            #  choice = 78
SubCauseCodeType[]                                           reserved79                                            #  choice = 79
SubCauseCodeType[]                                           reserved80                                            #  choice = 80
SubCauseCodeType[]                                           reserved81                                            #  choice = 81
SubCauseCodeType[]                                           reserved82                                            #  choice = 82
SubCauseCodeType[]                                           reserved83                                            #  choice = 83
SubCauseCodeType[]                                           reserved84                                            #  choice = 84
SubCauseCodeType[]                                           reserved85                                            #  choice = 85
SubCauseCodeType[]                                           reserved86                                            #  choice = 86
SubCauseCodeType[]                                           reserved87                                            #  choice = 87
SubCauseCodeType[]                                           reserved88                                            #  choice = 88
SubCauseCodeType[]                                           reserved89                                            #  choice = 89
SubCauseCodeType[]                                           reserved90                                            #  choice = 90
VehicleBreakdownSubCauseCode[]                               vehicle_breakdown91                                   #  choice = 91
PostCrashSubCauseCode[]                                      post_crash92                                          #  choice = 92
HumanProblemSubCauseCode[]                                   human_problem93                                       #  choice = 93
StationaryVehicleSubCauseCode[]                              stationary_vehicle94                                  #  choice = 94
EmergencyVehicleApproachingSubCauseCode[]                    emergency_vehicle_approaching95                       #  choice = 95
HazardousLocationDangerousCurveSubCauseCode[]                hazardous_location_dangerous_curve96                  #  choice = 96
CollisionRiskSubCauseCode[]                                  collision_risk97                                      #  choice = 97
SignalViolationSubCauseCode[]                                signal_violation98                                    #  choice = 98
DangerousSituationSubCauseCode[]                             dangerous_situation99                                 #  choice = 99
RailwayLevelCrossingSubCauseCode[]                           railway_level_crossing100                             #  choice = 100
SubCauseCodeType[]                                           reserved101                                           #  choice = 101
SubCauseCodeType[]                                           reserved102                                           #  choice = 102
SubCauseCodeType[]                                           reserved103                                           #  choice = 103
SubCauseCodeType[]                                           reserved104                                           #  choice = 104
SubCauseCodeType[]                                           reserved105                                           #  choice = 105
SubCauseCodeType[]                                           reserved106                                           #  choice = 106
SubCauseCodeType[]                                           reserved107                                           #  choice = 107
SubCauseCodeType[]                                           reserved108                                           #  choice = 108
SubCauseCodeType[]                                           reserved109                                           #  choice = 109
SubCauseCodeType[]                                           reserved110                                           #  choice = 110
SubCauseCodeType[]                                           reserved111                                           #  choice = 111
SubCauseCodeType[]                                           reserved112                                           #  choice = 112
SubCauseCodeType[]                                           reserved113                                           #  choice = 113
SubCauseCodeType[]                                           reserved114                                           #  choice = 114
SubCauseCodeType[]                                           reserved115                                           #  choice = 115
SubCauseCodeType[]                                           reserved116                                           #  choice = 116
SubCauseCodeType[]                                           reserved117                                           #  choice = 117
SubCauseCodeType[]                                           reserved118                                           #  choice = 118
SubCauseCodeType[]                                           reserved119                                           #  choice = 119
SubCauseCodeType[]                                           reserved120                                           #  choice = 120
SubCauseCodeType[]                                           reserved121                                           #  choice = 121
SubCauseCodeType[]                                           reserved122                                           #  choice = 122
SubCauseCodeType[]                                           reserved123                                           #  choice = 123
SubCauseCodeType[]                                           reserved124                                           #  choice = 124
SubCauseCodeType[]                                           reserved125                                           #  choice = 125
SubCauseCodeType[]                                           reserved126                                           #  choice = 126
SubCauseCodeType[]                                           reserved127                                           #  choice = 127
SubCauseCodeType[]                                           reserved128                                           #  choice = 128

uint8                                                        LENGTH                                                = 129

# ********** END of CauseCodeChoice   **********
