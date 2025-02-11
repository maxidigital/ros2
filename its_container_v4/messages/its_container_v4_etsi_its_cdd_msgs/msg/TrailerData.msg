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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v4:1.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) cdd(2) major-version-4(4) minor-version-1(1)}                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DF provides detailed information about an attached trailer.
# 
#  It shall include the following components:
# 
#  @field refPointId: identifier of the reference point of the trailer.
# 
#  @field hitchPointOffset: optional position of the hitch point in negative x-direction (according to ISO 8855) from the
#  vehicle Reference Point.
# 
#  @field frontOverhang: optional length of the trailer overhang in the positive x direction (according to ISO 8855) from the
#  trailer Reference Point indicated by the refPointID. The value defaults to 0 in case the trailer
#  is not overhanging to the front with respect to the trailer reference point.
# 
#  @field rearOverhang: optional length of the trailer overhang in the negative x direction (according to ISO 8855) from the
#  trailer Reference Point indicated by the refPointID.
# 
#  @field trailerWidth: optional width of the trailer.
# 
#  @field hitchAngle: optional Value and confidence value of the angle between the trailer orientation (corresponding to the x
#  direction of the ISO 8855 [21] coordinate system centered on the trailer) and the direction of
#  the segment having as end points the reference point of the trailer and the reference point of
#  the pulling vehicle, which can be another trailer or a vehicle looking on the horizontal plane
#  xy, described in the local Cartesian coordinate system of the trailer. The
#  angle is measured with negative values considering the trailer orientation turning clockwise
#  starting from the segment direction. The angle value accuracy is provided with the
#  confidence level of 95 %.
# 
#  @category: Vehicle information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    refPointId Identifier1B,
#    hitchPointOffset StandardLength1B,
#    frontOverhang StandardLength1B OPTIONAL,
#    rearOverhang StandardLength1B OPTIONAL,
#    trailerWidth VehicleWidth OPTIONAL,
#    hitchAngle CartesianAngle,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of TrailerData **********
#

Identifier1B       ref_point_id       # identifier of the reference point of the trailer.
StandardLength1B   hitch_point_offset # optional position of the hitch point in negative x-direction (according to ISO 8855) from the
StandardLength1B[] front_overhang     # optional length of the trailer overhang in the positive x direction (according to ISO 8855) from the
                                      # OPTIONAL
StandardLength1B[] rear_overhang      # optional length of the trailer overhang in the negative x direction (according to ISO 8855) from the
                                      # OPTIONAL
VehicleWidth[]     trailer_width      # optional width of the trailer.
                                      # OPTIONAL
CartesianAngle     hitch_angle        # optional Value and confidence value of the angle between the trailer orientation (corresponding to the x

# ********** END of TrailerData   **********
