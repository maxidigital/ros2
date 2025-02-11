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
# Module: AVIAEINumberingAndDataStructures {iso(1) standard(0) iso14816(14816) asnm1(1) version1(1)}
#     
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(dsrc_v2_aviaeinumberinganddatastructures_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)


rosidl_generate_interfaces(${PROJECT_NAME}
    msg/CS5.msg
    msg/CS5Fill.msg
    msg/CS5Vin.msg
    msg/CountryCode.msg
    msg/IssuerIdentifier.msg
    DEPENDENCIES
	    std_msgs

)

ament_export_dependencies(rosidl_default_runtime std_msgs )

ament_package()