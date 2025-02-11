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
#  This DF represents the Euler angles which describe the orientation of an object bounding box in a Cartesian coordinate system with an associated confidence level for each angle.
# 
#  It shall include the following components:
# 
#  @field zAngle: z-angle of object bounding box at the time of measurement, with the associated confidence.
#  The angle is measured with positive values considering the object orientation turning around the z-axis using the right-hand rule, starting from the x-axis.
#  This extrinsic rotation shall be applied around the centre point of the object bounding box before all other rotations.
# 
#  @field yAngle: optional y-angle of object bounding box at the time of measurement, with the associated confidence.
#  The angle is measured with positive values considering the object orientation turning around the y-axis using the right-hand rule, starting from the z-axis.
#  This extrinsic rotation shall be applied around the centre point of the object bounding box after the rotation by zAngle and before the rotation by xAngle.
# 
#  @field xAngle: optional x-angle of object bounding box at the time of measurement, with the associated confidence.
#  The angle is measured with positive values considering the object orientation turning around the x-axis using the right-hand rule, starting from the z-axis.
#  This extrinsic rotation shall be applied around the centre point of the object bounding box after all other rotations.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    zAngle CartesianAngle,
#    yAngle CartesianAngle OPTIONAL,
#    xAngle CartesianAngle OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of EulerAnglesWithConfidence **********
#

CartesianAngle   z_angle         # z-angle of object bounding box at the time of measurement, with the associated confidence.
CartesianAngle[] y_angle         # optional y-angle of object bounding box at the time of measurement, with the associated confidence.
                                 # OPTIONAL
CartesianAngle[] x_angle         # optional x-angle of object bounding box at the time of measurement, with the associated confidence.
                                 # OPTIONAL

# ********** END of EulerAnglesWithConfidence   **********
