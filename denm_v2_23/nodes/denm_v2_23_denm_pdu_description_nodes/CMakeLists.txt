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
# This file belongs to the DLR Wind project de.dlr.ts.v2x:denm_v2_23:1.0
# 
# Module: DENM_PDU_Description {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
#         wg1(1) denmPduRelease2(103831) major-version-2(2) minor-version-2(2)}
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(denm_v2_23_denm_pdu_description_nodes)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)
unset(CATKIN_INSTALL_INTO_PREFIX_ROOT CACHE)

find_package(ament_cmake REQUIRED)
find_package(rclcpp      REQUIRED)
find_package(Boost       REQUIRED COMPONENTS thread system)
find_package(denm_v2_23_denm_pdu_description_msgs REQUIRED)
find_package(its_container_v4_etsi_its_cdd_msgs REQUIRED)

include_directories(include
    include
    ${denm_v2_23_denm_pdu_description_msgs_INCLUDE_DIRS}
    ${Boost_INCLUDE_DIRS}
)

# Declare the executable targets
add_executable(receiver
    src/receiver.cpp
    src/udp_receiver.cpp
	src/screen_logger.cpp
    src/denm_v2_23_denm_pdu_description_receiver.cpp
    src/denm_v2_23_denm_pdu_description_wer_decoder.cpp
)

add_executable(sender
    src/sender.cpp
    src/udp_sender.cpp
	src/screen_logger.cpp
    src/denm_v2_23_denm_pdu_description_sender.cpp
    src/denm_v2_23_denm_pdu_description_wer_encoder.cpp
)

# Specify dependencies and include directories
ament_target_dependencies(receiver
    rclcpp
	denm_v2_23_denm_pdu_description_msgs    
    its_container_v4_etsi_its_cdd_msgs
)

ament_target_dependencies(sender
    rclcpp
	denm_v2_23_denm_pdu_description_msgs    
    its_container_v4_etsi_its_cdd_msgs
)

target_link_libraries(sender
    rclcpp::rclcpp
)

target_link_libraries(receiver
    rclcpp::rclcpp
    ${Boost_LIBRARIES}
)

install(TARGETS receiver
    DESTINATION lib/${PROJECT_NAME}
)

install(TARGETS sender
    DESTINATION lib/${PROJECT_NAME}
)

ament_package()