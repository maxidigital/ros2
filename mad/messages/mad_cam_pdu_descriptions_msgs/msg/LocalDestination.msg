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
#  This type contains detailed information about the local destination of the vehicle.
# 
#  It shall include the following components:
# 
#  @field deltaReferencePosition: this, together with the referencePosition of the vehicle, is the local destination of the vehicle
# 
#  @field speedValue: the speed the vehicle should have at the this point
# 
#  @field headingValue: the orientation the vehicle should have at this point
#   
# ASN.1 Definition:
# SEQUENCE {
#    deltaReferencePosition DeltaReferencePosition,
#    speedValue SpeedValue OPTIONAL,
#    headingValue HeadingValue OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of LocalDestination **********
#

DeltaReferencePosition delta_reference_position # this, together with the referencePosition of the vehicle, is the local destination of the vehicle
SpeedValue[]           speed_value              # the speed the vehicle should have at the this point
                                                # OPTIONAL
HeadingValue[]         heading_value            # the orientation the vehicle should have at this point
                                                # OPTIONAL

# ********** END of LocalDestination   **********
