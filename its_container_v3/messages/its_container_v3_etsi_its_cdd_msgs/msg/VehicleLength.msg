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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:2.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DF represents the length of vehicle and accuracy indication information.
# 
#  It shall include the following components:
# 
#  @field vehicleLengthValue: length of vehicle.
# 
#  @field vehicleLengthConfidenceIndication: indication of the length value confidence.
# 
#  @note: this DF is kept for backwards compatibility reasons only. It is recommended to use @ref VehicleLengthV2 instead.
#  @category: Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    vehicleLengthValue VehicleLengthValue,
#    vehicleLengthConfidenceIndication VehicleLengthConfidenceIndication 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of VehicleLength **********
#

VehicleLengthValue                vehicle_length_value                 # length of vehicle.
VehicleLengthConfidenceIndication vehicle_length_confidence_indication # indication of the length value confidence.

# ********** END of VehicleLength   **********
