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
# 
#  This type contains detailed information about the vehicle dimensions, without length and width, as they are in the basicVehicleContainerHighFrequency.
# 
#  It shall include the following components:
# 
#  @field curvatureValueMin: the minimum curvature value which is going to be accepted by the vehicle. Can be situation dependent.
# 
#  @field curvatureValueMax: the maximum curvature value which is going to be accepted by the vehicle. Can be situation dependent.
# 
#  @field accelerationValueMin: the minimum longitudinal acceleration which is going to be accepted by the vehicle. Can be situation dependent.
# 
#  @field accelerationValueMax: the maximum longitudinal acceleration which is going to be accepted by the vehicle. Can be situation dependent.
# 
#  @field possibleLevelOfInput: indicates on which level support may be accepted
#   
# ASN.1 Definition:
# SEQUENCE {
#    curvatureValueMin CurvatureValue,
#    curvatureValueMax CurvatureValue,
#    accelerationValueMin AccelerationValue,
#    accelerationValueMax AccelerationValue,
#    possibleLevelOfInput LevelsOfControl 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of MADCapabilities **********
#

CurvatureValue    curvature_value_min     # the minimum curvature value which is going to be accepted by the vehicle. Can be situation dependent.
CurvatureValue    curvature_value_max     # the maximum curvature value which is going to be accepted by the vehicle. Can be situation dependent.
AccelerationValue acceleration_value_min  # the minimum longitudinal acceleration which is going to be accepted by the vehicle. Can be situation dependent.
AccelerationValue acceleration_value_max  # the maximum longitudinal acceleration which is going to be accepted by the vehicle. Can be situation dependent.
LevelsOfControl   possible_level_of_input # indicates on which level support may be accepted

# ********** END of MADCapabilities   **********
