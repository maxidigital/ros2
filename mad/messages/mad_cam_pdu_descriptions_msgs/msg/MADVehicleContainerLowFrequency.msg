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
#  This type contains detailed information the vehicle needs to send to the EPU in low frequency.
# 
#  It shall include the following components:
# 
#  @field vehicleDimensions: includes the dimension aspects beyond width and lenght, which are already in the basicVehicleContainerHighFrequency
# 
#  @field vehicleCapabilities: the capabilities of the vehicle
# 
#  @field localDestination: the local destination the vehicle is currently going, relative to the referencePosition of the vehicle
#   
# ASN.1 Definition:
# SEQUENCE {
#    vehicleDimensions VehicleDimensions,
#    vehicleCapabilities MADCapabilities,
#    localDestination LocalDestination 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of MADVehicleContainerLowFrequency **********
#

VehicleDimensions vehicle_dimensions   # includes the dimension aspects beyond width and lenght, which are already in the basicVehicleContainerHighFrequency
MADCapabilities   vehicle_capabilities # the capabilities of the vehicle
LocalDestination  local_destination    # the local destination the vehicle is currently going, relative to the referencePosition of the vehicle

# ********** END of MADVehicleContainerLowFrequency   **********
