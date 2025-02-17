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
# This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0
# 
# Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#         wg1(1) en(302637) e2v(1) version(3)}
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(mad_e2v_madurban_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(its_container_v4_etsi_its_cdd_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    msg/BehaviourContainer.msg
    msg/Behaviours.msg
    msg/CartesianAngleRange.msg
    msg/CartesianAngleRanges.msg
    msg/ControlAdvice.msg
    msg/EPUHighFrequencyContainer.msg
    msg/EPULowFrequencyContainer.msg
    msg/EPUSectionCapabilities.msg
    msg/EPUSectionCapabilitiesCompanyName.msg
    msg/EPUSectionDimensions.msg
    msg/EPUtoVehicle.msg
    msg/EPUtoVehiclePayload.msg
    msg/ExcludedShapes.msg
    msg/HornAdvice.msg
    msg/IncludedShapes.msg
    msg/LateralAccelerationRange.msg
    msg/LateralFluctuationMargin.msg
    msg/LongitudinalAccelerationRange.msg
    msg/ManagementContainer.msg
    msg/ManeuverAdvice.msg
    msg/ManeuverAdviceMRM.msg
    msg/ManeuverAdviceNominal.msg
    msg/MovementAdvice.msg
    msg/ObjectIdentifierList.msg
    msg/PathPointPredicted.msg
    msg/PathPredicted.msg
    msg/RouteRadius.msg
    msg/RssCheckResult.msg
    msg/RssCheckResults.msg
    msg/RssDynamics.msg
    msg/RssLateralResponse.msg
    msg/RssLongitudinalResponse.msg
    msg/RssObjectData.msg
    msg/RssProperResponse.msg
    msg/RssProperResponseFlags.msg
    msg/RssRoute.msg
    msg/RssUnstructuredConstellationResponse.msg
    msg/RssVehicleRouteState.msg
    msg/SafetyAdvices.msg
    msg/SafetyContainer.msg
    msg/SteeringAngleValue.msg
    msg/TrajectoryAdvice.msg
    msg/VelocityComponentRange.msg
    msg/YawAccelerationValue.msg
    DEPENDENCIES
    std_msgs
        its_container_v4_etsi_its_cdd_msgs
)

ament_export_dependencies(rosidl_default_runtime std_msgs its_container_v4_etsi_its_cdd_msgs)

ament_package()