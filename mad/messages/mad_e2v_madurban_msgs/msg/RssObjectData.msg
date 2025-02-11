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
#    id Identifier2B,
#    type StationType,
#    deltaPosition DeltaReferencePosition,
#    heading HeadingValue,
#    semiMajorPositionConfidence SemiAxisLength,
#    semiMinorPositionConfidence SemiAxisLength,
#    dimensionLength VehicleLengthValue,
#    dimensionWidth VehicleWidth,
#    dimensionHeight VehicleWidth,
#    speedRange VelocityComponentRange,
#    yawRate YawRateValue,
#    steeringAngle SteeringAngleValue OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RssObjectData **********
#

its_container_v4_etsi_its_cdd_msgs/Identifier2B           id
its_container_v4_etsi_its_cdd_msgs/StationType            type
its_container_v4_etsi_its_cdd_msgs/DeltaReferencePosition delta_position
its_container_v4_etsi_its_cdd_msgs/HeadingValue           heading
its_container_v4_etsi_its_cdd_msgs/SemiAxisLength         semi_major_position_confidence
its_container_v4_etsi_its_cdd_msgs/SemiAxisLength         semi_minor_position_confidence
its_container_v4_etsi_its_cdd_msgs/VehicleLengthValue     dimension_length
its_container_v4_etsi_its_cdd_msgs/VehicleWidth           dimension_width
its_container_v4_etsi_its_cdd_msgs/VehicleWidth           dimension_height
VelocityComponentRange                                    speed_range
its_container_v4_etsi_its_cdd_msgs/YawRateValue           yaw_rate
SteeringAngleValue[]                                      steering_angle                 # OPTIONAL

# ********** END of RssObjectData   **********
