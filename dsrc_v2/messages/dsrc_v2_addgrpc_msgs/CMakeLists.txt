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
# Module: AddGrpC {iso(1) standard(0) signalizedIntersection(19091) profilec(2) 
#         addgrpc(0) version2(2)}
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(dsrc_v2_addgrpc_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs REQUIRED)
find_package(dsrc_v2_dsrc_msgs REQUIRED)
find_package(its_container_v2_its_container_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    msg/BatteryStatus.msg
    msg/ConnectionManeuverAssistAddGrpC.msg
    msg/ConnectionTrajectoryAddGrpC.msg
    msg/EmissionType.msg
    msg/ExceptionalCondition.msg
    msg/IntersectionStateAddGrpC.msg
    msg/ItsStationPosition.msg
    msg/ItsStationPositionList.msg
    msg/LaneAttributesAddGrpC.msg
    msg/MapDataAddGrpC.msg
    msg/MovementEventAddGrpC.msg
    msg/Node.msg
    msg/NodeAttributeSetAddGrpC.msg
    msg/NodeLink.msg
    msg/NodeId.msg
    msg/Position3DAddGrpC.msg
    msg/PrioritizationResponse.msg
    msg/PrioritizationResponseList.msg
    msg/PtvRequestType.msg
    msg/RejectedReason.msg
    msg/RequestorDescriptionAddGrpC.msg
    msg/RestrictionUserTypeAddGrpC.msg
    msg/SignalHeadLocation.msg
    msg/SignalHeadLocationList.msg
    msg/SignalStatusPackageAddGrpC.msg
    msg/TimeReference.msg
    DEPENDENCIES
    std_msgs
        dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs
        dsrc_v2_dsrc_msgs
        its_container_v2_its_container_msgs
)

ament_export_dependencies(rosidl_default_runtime std_msgs dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs dsrc_v2_dsrc_msgs its_container_v2_its_container_msgs)

ament_package()