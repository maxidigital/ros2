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
#  This DF represents a velocity vector in a polar or cylindrical coordinate system.
# 
#  It shall include the following components:
# 
#  @field velocityMagnitude: magnitude of the velocity vector on the reference plane, with the associated confidence value.
# 
#  @field velocityDirection: polar angle of the velocity vector on the reference plane, with the associated confidence value.
# 
#  @field zVelocity: the optional z component of the velocity vector along the reference axis of the cylindrical coordinate system, with the associated confidence value.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    velocityMagnitude Speed,
#    velocityDirection CartesianAngle,
#    zVelocity VelocityComponent OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of VelocityPolarWithZ **********
#

Speed               velocity_magnitude # magnitude of the velocity vector on the reference plane, with the associated confidence value.
CartesianAngle      velocity_direction # polar angle of the velocity vector on the reference plane, with the associated confidence value.
VelocityComponent[] z_velocity         # the optional z component of the velocity vector along the reference axis of the cylindrical coordinate system, with the associated confidence value.
                                       # OPTIONAL

# ********** END of VelocityPolarWithZ   **********
