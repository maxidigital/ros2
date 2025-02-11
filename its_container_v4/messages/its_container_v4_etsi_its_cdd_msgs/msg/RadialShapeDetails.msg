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
#  This DF describes radial shape details. The circular sector or cone is
#  constructed by sweeping the provided range about the position specified outside of the
#  context of this DF. The range is swept between a horizontal start and a horizontal end angle in
#  the X-Y plane of a right-hand cartesian coordinate system specified outside of the context of
#  this DF, in positive angular direction w.r.t. the x-axis. A vertical opening angle in the X-Z
#  plane may optionally be provided in positive angular direction w.r.t. the x-axis.
# 
#  It shall include the following components:
# 
#  @field range: the radial range of the sensor from the reference point or sensor point offset.
# 
#  @field horizontalOpeningAngleStart:  the start of the shape's horizontal opening angle.
# 
#  @field horizontalOpeningAngleEnd: the end of the shape's horizontal opening angle.
# 
#  @field verticalOpeningAngleStart: optional start of the shape's vertical opening angle.
# 
#  @field verticalOpeningAngleEnd: optional end of the shape's vertical opening angle.
# 
#  @category: Georeference information
#  @revision: created in V2.1.1, description revised and constraint added in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
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
# ********** START of RadialShapeDetails **********
#

StandardLength12b     range                          # the radial range of the sensor from the reference point or sensor point offset.
CartesianAngleValue   horizontal_opening_angle_start # the start of the shape's horizontal opening angle.
CartesianAngleValue   horizontal_opening_angle_end   # the end of the shape's horizontal opening angle.
CartesianAngleValue[] vertical_opening_angle_start   # optional start of the shape's vertical opening angle.
                                                     # OPTIONAL
CartesianAngleValue[] vertical_opening_angle_end     # optional end of the shape's vertical opening angle.
                                                     # OPTIONAL

# ********** END of RadialShapeDetails   **********
