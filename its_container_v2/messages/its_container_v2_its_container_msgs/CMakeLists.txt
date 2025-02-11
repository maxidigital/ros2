#
# Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)
# Institute of Transportation Systems. (https://www.dlr.de/ts/)
#
# 
# Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore
# 
# This program and the accompanying materials are made available under the
# terms of the Eclipse Public License 2.0 which is available at
# http://www.eclipse.org/legal/epl-2.0.
# 
# SPDX-License-Identifier: EPL-2.0
# 
#
# 
# File automatically generated with DLR Wind v2
# 
# This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0
# 
# Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#         wg1(1) ts(102894) cdd(2) version(2)}
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(its_container_v2_its_container_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)


rosidl_generate_interfaces(${PROJECT_NAME}
    msg/AccelerationConfidence.msg
    msg/AccelerationControl.msg
    msg/AccidentSubCauseCode.msg
    msg/ActionID.msg
    msg/AdverseWeatherConditionAdhesionSubCauseCode.msg
    msg/AdverseWeatherConditionExtremeWeatherConditionSubCauseCode.msg
    msg/AdverseWeatherConditionPrecipitationSubCauseCode.msg
    msg/AdverseWeatherConditionVisibilitySubCauseCode.msg
    msg/Altitude.msg
    msg/AltitudeConfidence.msg
    msg/AltitudeValue.msg
    msg/CauseCode.msg
    msg/CauseCodeType.msg
    msg/CenDsrcTollingZone.msg
    msg/CenDsrcTollingZoneID.msg
    msg/ClosedLanes.msg
    msg/CollisionRiskSubCauseCode.msg
    msg/Curvature.msg
    msg/CurvatureCalculationMode.msg
    msg/CurvatureConfidence.msg
    msg/CurvatureValue.msg
    msg/DangerousEndOfQueueSubCauseCode.msg
    msg/DangerousGoodsBasic.msg
    msg/DangerousGoodsExtended.msg
    msg/DangerousGoodsExtendedCompanyName.msg
    msg/DangerousGoodsExtendedElevatedTemperature.msg
    msg/DangerousGoodsExtendedEmergencyActionCode.msg
    msg/DangerousGoodsExtendedLimitedQuantity.msg
    msg/DangerousGoodsExtendedTunnelsRestricted.msg
    msg/DangerousGoodsExtendedUnNumber.msg
    msg/DangerousSituationSubCauseCode.msg
    msg/DeltaAltitude.msg
    msg/DeltaLatitude.msg
    msg/DeltaLongitude.msg
    msg/DeltaReferencePosition.msg
    msg/DigitalMap.msg
    msg/DriveDirection.msg
    msg/DrivingLaneStatus.msg
    msg/EmbarkationStatus.msg
    msg/EmergencyPriority.msg
    msg/EmergencyVehicleApproachingSubCauseCode.msg
    msg/EnergyStorageType.msg
    msg/EventHistory.msg
    msg/EventPoint.msg
    msg/ExteriorLights.msg
    msg/HardShoulderStatus.msg
    msg/HazardousLocationAnimalOnTheRoadSubCauseCode.msg
    msg/HazardousLocationDangerousCurveSubCauseCode.msg
    msg/HazardousLocationObstacleOnTheRoadSubCauseCode.msg
    msg/HazardousLocationSurfaceConditionSubCauseCode.msg
    msg/Heading.msg
    msg/HeadingConfidence.msg
    msg/HeadingValue.msg
    msg/HeightLonCarr.msg
    msg/HumanPresenceOnTheRoadSubCauseCode.msg
    msg/HumanProblemSubCauseCode.msg
    msg/InformationQuality.msg
    msg/ItineraryPath.msg
    msg/ItsPduHeader.msg
    msg/ItsPduHeaderMessageID.msg
    msg/ItsPduHeaderProtocolVersion.msg
    msg/LanePosition.msg
    msg/LateralAcceleration.msg
    msg/LateralAccelerationValue.msg
    msg/Latitude.msg
    msg/LightBarSirenInUse.msg
    msg/Longitude.msg
    msg/LongitudinalAcceleration.msg
    msg/LongitudinalAccelerationValue.msg
    msg/NumberOfOccupants.msg
    msg/OpeningDaysHours.msg
    msg/PathDeltaTime.msg
    msg/PathHistory.msg
    msg/PathPoint.msg
    msg/PerformanceClass.msg
    msg/PhoneNumber.msg
    msg/PosCentMass.msg
    msg/PosConfidenceEllipse.msg
    msg/PosFrontAx.msg
    msg/PosLonCarr.msg
    msg/PosPillar.msg
    msg/PositionOfOccupants.msg
    msg/PositionOfPillars.msg
    msg/PositioningSolutionType.msg
    msg/PostCrashSubCauseCode.msg
    msg/ProtectedCommunicationZone.msg
    msg/ProtectedCommunicationZonesRSU.msg
    msg/ProtectedZoneID.msg
    msg/ProtectedZoneRadius.msg
    msg/ProtectedZoneType.msg
    msg/PtActivation.msg
    msg/PtActivationData.msg
    msg/PtActivationType.msg
    msg/ReferencePosition.msg
    msg/RelevanceDistance.msg
    msg/RelevanceTrafficDirection.msg
    msg/RequestResponseIndication.msg
    msg/RescueAndRecoveryWorkInProgressSubCauseCode.msg
    msg/RestrictedTypes.msg
    msg/RoadType.msg
    msg/RoadworksSubCauseCode.msg
    msg/SemiAxisLength.msg
    msg/SequenceNumber.msg
    msg/SignalViolationSubCauseCode.msg
    msg/SlowVehicleSubCauseCode.msg
    msg/SpecialTransportType.msg
    msg/Speed.msg
    msg/SpeedConfidence.msg
    msg/SpeedLimit.msg
    msg/SpeedValue.msg
    msg/StationID.msg
    msg/StationType.msg
    msg/StationarySince.msg
    msg/StationaryVehicleSubCauseCode.msg
    msg/SteeringWheelAngle.msg
    msg/SteeringWheelAngleConfidence.msg
    msg/SteeringWheelAngleValue.msg
    msg/SubCauseCodeType.msg
    msg/Temperature.msg
    msg/TimestampIts.msg
    msg/Traces.msg
    msg/TrafficConditionSubCauseCode.msg
    msg/TrafficRule.msg
    msg/TransmissionInterval.msg
    msg/TurningRadius.msg
    msg/VDS.msg
    msg/ValidityDuration.msg
    msg/VehicleBreakdownSubCauseCode.msg
    msg/VehicleIdentification.msg
    msg/VehicleLength.msg
    msg/VehicleLengthConfidenceIndication.msg
    msg/VehicleLengthValue.msg
    msg/VehicleMass.msg
    msg/VehicleRole.msg
    msg/VehicleWidth.msg
    msg/VerticalAcceleration.msg
    msg/VerticalAccelerationValue.msg
    msg/WMInumber.msg
    msg/WheelBaseVehicle.msg
    msg/WrongWayDrivingSubCauseCode.msg
    msg/YawRate.msg
    msg/YawRateConfidence.msg
    msg/YawRateValue.msg
    DEPENDENCIES
	    std_msgs

)

ament_export_dependencies(rosidl_default_runtime std_msgs )

ament_package()