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
# This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v2_23:1.0
# 
# Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#         wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(cpm_v2_23_cpm_pdu_descriptions_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(cpm_v2_23_cpm_originatingstationcontainers_msgs REQUIRED)
find_package(cpm_v2_23_cpm_sensorinformationcontainer_msgs REQUIRED)
find_package(cpm_v2_23_cpm_perceptionregioncontainer_msgs REQUIRED)
find_package(cpm_v2_23_cpm_perceivedobjectcontainer_msgs REQUIRED)
find_package(its_container_v3_etsi_its_cdd_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    msg/CollectivePerceptionMessage.msg
    msg/ConstraintWrappedCpmContainers.msg
    msg/CpmContainerId.msg
    msg/CpmPayload.msg
    msg/ManagementContainer.msg
    msg/MessageRateRange.msg
    msg/WrappedCpmContainer.msg
    msg/WrappedCpmContainers.msg
    msg/WrappedCpmContainers.msg
    DEPENDENCIES
	    std_msgs
        cpm_v2_23_cpm_originatingstationcontainers_msgs
        cpm_v2_23_cpm_sensorinformationcontainer_msgs
        cpm_v2_23_cpm_perceptionregioncontainer_msgs
        cpm_v2_23_cpm_perceivedobjectcontainer_msgs
        its_container_v3_etsi_its_cdd_msgs
)

ament_export_dependencies(rosidl_default_runtime std_msgs cpm_v2_23_cpm_originatingstationcontainers_msgs cpm_v2_23_cpm_sensorinformationcontainer_msgs cpm_v2_23_cpm_perceptionregioncontainer_msgs cpm_v2_23_cpm_perceivedobjectcontainer_msgs its_container_v3_etsi_its_cdd_msgs)

ament_package()