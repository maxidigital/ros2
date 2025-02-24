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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DF represents a acceleration vector in a cartesian coordinate system.
#  
#  It shall include the following components:
# 
#  @field xAcceleration: the x component of the acceleration vector with the associated confidence value.
# 
#  @field yAcceleration: the y component of the acceleration vector with the associated confidence value.
# 
#  @field zAcceleration: the optional z component of the acceleration vector with the associated confidence value.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    xAcceleration AccelerationComponent,
#    yAcceleration AccelerationComponent,
#    zAcceleration AccelerationComponent OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of AccelerationCartesian **********
#

AccelerationComponent   x_acceleration  # the x component of the acceleration vector with the associated confidence value.
AccelerationComponent   y_acceleration  # the y component of the acceleration vector with the associated confidence value.
AccelerationComponent[] z_acceleration  # the optional z component of the acceleration vector with the associated confidence value.
                                        # OPTIONAL

# ********** END of AccelerationCartesian   **********
