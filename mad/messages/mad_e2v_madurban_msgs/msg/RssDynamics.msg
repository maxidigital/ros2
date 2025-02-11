#*                                                                                 *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                 *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                   *
#*                                                                                 *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore        *
#*                                                                                 *
#* This program and the accompanying materials are made available under the        *
#* terms of the Eclipse Public License 2.0 which is available at                   *
#* http://www.eclipse.org/legal/epl-2.0.                                           *
#*                                                                                 *
#* SPDX-License-Identifier: EPL-2.0                                                *
#*                                                                                 *
#*                                                                                 *
#* File automatically generated with DLR Wind v2                                   *
#*                                                                                 *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0             *
#*                                                                                 *
#* Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) e2v(1) version(3)}                                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# ASN.1 Definition:
# SEQUENCE {
#    lonAccelMax LongitudinalAccelerationValue,
#    lonBrakeMax LongitudinalAccelerationValue,
#    lonBrakeMin LongitudinalAccelerationValue,
#    lonBrakeMinCorrect LongitudinalAccelerationValue,
#    latAccelMax LateralAccelerationValue,
#    latBrakeMin LateralAccelerationValue,
#    lateralFluctuationMargin LateralFluctuationMargin,
#    responseTime DeltaTimeTenthOfSecond,
#    maxSpeedOnAcceleration SpeedValue,
#    minLongitudinalSafetyDistance StandardLength1B,
#    unstructuredPedestrianTurningRadius StandardLength1B,
#    unstructuredVehicleMinRadius StandardLength1B,
#    unstructuredVehicleYawRateChange YawAccelerationValue,
#    unstructuredDriveAwayMaxAngle HeadingValue 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RssDynamics **********
#

its_container_v4_etsi_its_cdd_msgs/LongitudinalAccelerationValue lon_accel_max
its_container_v4_etsi_its_cdd_msgs/LongitudinalAccelerationValue lon_brake_max
its_container_v4_etsi_its_cdd_msgs/LongitudinalAccelerationValue lon_brake_min
its_container_v4_etsi_its_cdd_msgs/LongitudinalAccelerationValue lon_brake_min_correct
its_container_v4_etsi_its_cdd_msgs/LateralAccelerationValue      lat_accel_max
its_container_v4_etsi_its_cdd_msgs/LateralAccelerationValue      lat_brake_min
LateralFluctuationMargin                                         lateral_fluctuation_margin
its_container_v4_etsi_its_cdd_msgs/DeltaTimeTenthOfSecond        response_time
its_container_v4_etsi_its_cdd_msgs/SpeedValue                    max_speed_on_acceleration
its_container_v4_etsi_its_cdd_msgs/StandardLength1B              min_longitudinal_safety_distance
its_container_v4_etsi_its_cdd_msgs/StandardLength1B              unstructured_pedestrian_turning_radius
its_container_v4_etsi_its_cdd_msgs/StandardLength1B              unstructured_vehicle_min_radius
YawAccelerationValue                                             unstructured_vehicle_yaw_rate_change
its_container_v4_etsi_its_cdd_msgs/HeadingValue                  unstructured_drive_away_max_angle

# ********** END of RssDynamics   **********
