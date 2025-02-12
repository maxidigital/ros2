#*                                                                                                     *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                                     *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                                       *
#*                                                                                                     *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                            *
#*                                                                                                     *
#* This program and the accompanying materials are made available under the                            *
#* terms of the Eclipse Public License 2.0 which is available at                                       *
#* http://www.eclipse.org/legal/epl-2.0.                                                               *
#*                                                                                                     *
#* SPDX-License-Identifier: EPL-2.0                                                                    *
#*                                                                                                     *
#*                                                                                                     *
#* File automatically generated with DLR Wind v2                                                       *
#*                                                                                                     *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v1_23:1.0                               *
#*                                                                                                     *
#* Module: CPM_OriginatingStationContainers {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) originatingStationContainers(2) major-version-1(1) minor-version-1(1)}        *
#*                                                                                                     *
#* For support contact v2x-ts@dlr.de                                                                   *
#*                                                                                                     *

#
# 
#  This DF  represents the Originating Vehicle Container
# 
#  It shall include the following components:
# 
#  @field orientationAngle: the angle and angle accuracy of the absolute orientation of the disseminating vehicle in the WGS84 coordinate system with respect to true North.
# 
#  @field pitchAngle: the optional angle and angle accuracy between the ground plane and the current orientation of the vehicle's x-axis with respect to the ground plane about the y-axis according to the ISO 8855.
# 
#  @field rollAngle: the optional angle and angle accuracy between the ground plane and the current orientation of a vehicle's y-axis with respect to the ground plane about the x-axis according to the ISO 8855
# 
#  @field trailerData: information about the trailer dimensions and orientation in case a trailer is present.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    orientationAngle Wgs84Angle,
#    pitchAngle CartesianAngle OPTIONAL,
#    rollAngle CartesianAngle OPTIONAL,
#    trailerDataSet TrailerDataSet OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of OriginatingVehicleContainer **********
#

its_container_v3_etsi_its_cdd_msgs/Wgs84Angle       orientation_angle # the angle and angle accuracy of the absolute orientation of the disseminating vehicle in the WGS84 coordinate system with respect to true North.
its_container_v3_etsi_its_cdd_msgs/CartesianAngle[] pitch_angle       # the optional angle and angle accuracy between the ground plane and the current orientation of the vehicle's x-axis with respect to the ground plane about the y-axis according to the ISO 8855.
                                                                      # OPTIONAL
its_container_v3_etsi_its_cdd_msgs/CartesianAngle[] roll_angle        # the optional angle and angle accuracy between the ground plane and the current orientation of a vehicle's y-axis with respect to the ground plane about the x-axis according to the ISO 8855
                                                                      # OPTIONAL
TrailerDataSet[]                                    trailer_data_set  # OPTIONAL

# ********** END of OriginatingVehicleContainer   **********
