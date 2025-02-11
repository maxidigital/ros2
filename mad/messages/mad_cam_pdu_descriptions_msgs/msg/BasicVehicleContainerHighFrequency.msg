#*                                                                                         *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                         *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                           *
#*                                                                                         *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                *
#*                                                                                         *
#* This program and the accompanying materials are made available under the                *
#* terms of the Eclipse Public License 2.0 which is available at                           *
#* http://www.eclipse.org/legal/epl-2.0.                                                   *
#*                                                                                         *
#* SPDX-License-Identifier: EPL-2.0                                                        *
#*                                                                                         *
#*                                                                                         *
#* File automatically generated with DLR Wind v2                                           *
#*                                                                                         *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0                     *
#*                                                                                         *
#* Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) cam(2) version(2)}                                                *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# ASN.1 Definition:
# SEQUENCE {
#    heading Heading,
#    speed Speed,
#    driveDirection DriveDirection,
#    vehicleLength VehicleLength,
#    vehicleWidth VehicleWidth,
#    longitudinalAcceleration LongitudinalAcceleration,
#    curvature Curvature,
#    curvatureCalculationMode CurvatureCalculationMode,
#    yawRate YawRate,
#    accelerationControl AccelerationControl OPTIONAL,
#    lanePosition LanePosition OPTIONAL,
#    steeringWheelAngle SteeringWheelAngle OPTIONAL,
#    lateralAcceleration LateralAcceleration OPTIONAL,
#    verticalAcceleration VerticalAcceleration OPTIONAL,
#    performanceClass PerformanceClass OPTIONAL,
#    cenDsrcTollingZone CenDsrcTollingZone OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of BasicVehicleContainerHighFrequency **********
#

its_container_v2_its_container_msgs/Heading                  heading
its_container_v2_its_container_msgs/Speed                    speed
its_container_v2_its_container_msgs/DriveDirection           drive_direction
its_container_v2_its_container_msgs/VehicleLength            vehicle_length
its_container_v2_its_container_msgs/VehicleWidth             vehicle_width
its_container_v2_its_container_msgs/LongitudinalAcceleration longitudinal_acceleration
its_container_v2_its_container_msgs/Curvature                curvature
its_container_v2_its_container_msgs/CurvatureCalculationMode curvature_calculation_mode
its_container_v2_its_container_msgs/YawRate                  yaw_rate
its_container_v2_its_container_msgs/AccelerationControl[]    acceleration_control       # OPTIONAL
its_container_v2_its_container_msgs/LanePosition[]           lane_position              # OPTIONAL
its_container_v2_its_container_msgs/SteeringWheelAngle[]     steering_wheel_angle       # OPTIONAL
its_container_v2_its_container_msgs/LateralAcceleration[]    lateral_acceleration       # OPTIONAL
its_container_v2_its_container_msgs/VerticalAcceleration[]   vertical_acceleration      # OPTIONAL
its_container_v2_its_container_msgs/PerformanceClass[]       performance_class          # OPTIONAL
its_container_v2_its_container_msgs/CenDsrcTollingZone[]     cen_dsrc_tolling_zone      # OPTIONAL

# ********** END of BasicVehicleContainerHighFrequency   **********
