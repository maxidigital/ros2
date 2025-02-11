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
#  This DF describes a radial shape. The circular sector or cone is constructed by sweeping
#  the provided range about the reference position specified outside of the context of this DF or
#  about the optional shapeReferencePoint. The range is swept between a horizontal start and a
#  horizontal end angle in the X-Y plane of a cartesian coordinate system specified outside of the
#  context of this DF, in a right-hand positive angular direction w.r.t. the x-axis.
#  A vertical opening angle in the X-Z plane may optionally be provided in a right-hand positive
#  angular direction w.r.t. the x-axis.
# 
#  It shall include the following components:
# 
#  @field shapeReferencePoint: the optional reference point used for the definition of the shape,
#  relative to an externally specified reference position. If this component is absent, the
#  externally specified reference position represents the shape's reference point.
# 
#  @field range: the radial range of the shape from the shape's reference point.
# 
#  @field horizontalOpeningAngleStart: the start of the shape's horizontal opening angle.
# 
#  @field horizontalOpeningAngleEnd: the end of the shape's horizontal opening angle.
# 
#  @field verticalOpeningAngleStart: optional start of the shape's vertical opening angle.
# 
#  @field verticalOpeningAngleEnd: optional end of the shape's vertical opening angle.
# 
#  @category GeoReference information
#  @revision: created in V2.1.1, names and types of the horizontal opening angles changed, constraint added and description revised in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    shapeReferencePoint CartesianPosition3d OPTIONAL,
#    range StandardLength12b,
#    horizontalOpeningAngleStart CartesianAngleValue,
#    horizontalOpeningAngleEnd CartesianAngleValue,
#    verticalOpeningAngleStart CartesianAngleValue OPTIONAL,
#    verticalOpeningAngleEnd CartesianAngleValue( (WITH COMPONENTS{
#   ..., verticalOpeningAngleStart ABSENT, verticalOpeningAngleEnd ABSENT
# })| (WITH COMPONENTS{
#   ..., verticalOpeningAngleStart PRESENT, verticalOpeningAngleEnd PRESENT
# }))OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RadialShape **********
#

CartesianPosition3d[] shape_reference_point          # the optional reference point used for the definition of the shape,
                                                     # OPTIONAL
StandardLength12b     range                          # the radial range of the shape from the shape's reference point.
CartesianAngleValue   horizontal_opening_angle_start # the start of the shape's horizontal opening angle.
CartesianAngleValue   horizontal_opening_angle_end   # the end of the shape's horizontal opening angle.
CartesianAngleValue[] vertical_opening_angle_start   # optional start of the shape's vertical opening angle.
                                                     # OPTIONAL
CartesianAngleValue[] vertical_opening_angle_end     # optional end of the shape's vertical opening angle.
                                                     # OPTIONAL

# ********** END of RadialShape   **********
