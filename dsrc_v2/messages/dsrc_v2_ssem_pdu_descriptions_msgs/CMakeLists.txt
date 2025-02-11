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
# Module: SSEM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#         wg1(1) en(103301) ssem(4) version2(2)}
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(dsrc_v2_ssem_pdu_descriptions_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs REQUIRED)
find_package(dsrc_v2_dsrc_msgs REQUIRED)
find_package(its_container_v2_its_container_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    msg/SSEM.msg
    DEPENDENCIES
	    std_msgs
        dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs
        dsrc_v2_dsrc_msgs
        its_container_v2_its_container_msgs
)

ament_export_dependencies(rosidl_default_runtime std_msgs dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs dsrc_v2_dsrc_msgs its_container_v2_its_container_msgs)

ament_package()