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
# This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0
# 
# Module: EfcDsrcApplication {iso(1) standard(0) application(0) version5(5)}
#     
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(dsrc_v2_efcdsrcapplication_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(dsrc_v2_aviaeinumberinganddatastructures_msgs REQUIRED)
find_package(dsrc_v2_efcdsrcgeneric_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    msg/AxleWeightLimits.msg
    msg/CopValue.msg
    msg/DieselEmissionValues.msg
    msg/DieselEmissionValuesParticulate.msg
    msg/DieselEmissionValuesParticulateValue.msg
    msg/EngineCharacteristics.msg
    msg/EnvironmentalCharacteristics.msg
    msg/EuroValue.msg
    msg/ExhaustEmissionValues.msg
    msg/ExhaustEmissionValuesEmissionCO.msg
    msg/Int1.msg
    msg/Int2.msg
    msg/PassengerCapacity.msg
    msg/Provider.msg
    msg/SoundLevel.msg
    msg/UnitType.msg
    msg/VehicleDimensions.msg
    msg/VehicleWeightLimits.msg
    DEPENDENCIES
	    std_msgs
        dsrc_v2_aviaeinumberinganddatastructures_msgs
        dsrc_v2_efcdsrcgeneric_msgs
)

ament_export_dependencies(rosidl_default_runtime std_msgs dsrc_v2_aviaeinumberinganddatastructures_msgs dsrc_v2_efcdsrcgeneric_msgs)

ament_package()