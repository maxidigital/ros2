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
# Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#         wg1(1) en(302637) cam(2) version(2)}
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(mad_cam_pdu_descriptions_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(its_container_v2_its_container_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    msg/AccelerationValue.msg
    msg/BasicContainer.msg
    msg/BasicVehicleContainerHighFrequency.msg
    msg/BasicVehicleContainerLowFrequency.msg
    msg/CamParameters.msg
    msg/CoopAwareness.msg
    msg/CurvatureValue.msg
    msg/DangerousGoodsContainer.msg
    msg/DeltaAltitude.msg
    msg/DeltaLatitude.msg
    msg/DeltaLongitude.msg
    msg/DeltaReferencePosition.msg
    msg/EmergencyContainer.msg
    msg/GenerationDeltaTime.msg
    msg/HeadingValue.msg
    msg/HighFrequencyContainer.msg
    msg/LevelsOfControl.msg
    msg/LocalDestination.msg
    msg/LowFrequencyContainer.msg
    msg/MADCAM.msg
    msg/MADCapabilities.msg
    msg/MADControlMode.msg
    msg/MADControlModeState.msg
    msg/MADDrivingMode.msg
    msg/MADVehicleContainerHighFrequency.msg
    msg/MADVehicleContainerLowFrequency.msg
    msg/PosCentMass.msg
    msg/PosFrontAx.msg
    msg/PublicTransportContainer.msg
    msg/RSUContainerHighFrequency.msg
    msg/RescueContainer.msg
    msg/RoadWorksContainerBasic.msg
    msg/SafetyCarContainer.msg
    msg/SpecialTransportContainer.msg
    msg/SpecialVehicleContainer.msg
    msg/SpeedValue.msg
    msg/VehicleDimensions.msg
    msg/VehicleMass.msg
    msg/WheelBaseVehicle.msg
    DEPENDENCIES
    std_msgs
        its_container_v2_its_container_msgs
)

ament_export_dependencies(rosidl_default_runtime std_msgs its_container_v2_its_container_msgs)

ament_package()