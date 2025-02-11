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
#  This DF describes a radial shape details. The triangular or cone-shaped volume is
#  constructed by sweeping the provided range about the reference point  or about the offset
#  point (if provided) between a horizontal start and a horizontal end angle in positive angular direction of the WGS84
#  coordinate system. A vertical opening angle may be provided in a Cartesian coordinate system with
#  the x-axis located in the North-East plane of the WGS84 coordinate system. The sensor height may
#  be provided to reflect characteristics of sensors mounted at an altitude (e.g. sensors mounted
#  above intersections).
# 
#  It shall include the following components:
# 
#  @field range: the radial range of the sensor from the reference point or sensor point offset.
# 
#  @field horizontalOpeningAngleStart:  the orientation indicating the beginning of the
#  shape's horizontal opening angle in positive angular direction.
# 
#  @field horizontalOpeningAngleEnd: The orientation indicating the end of the shape's horizontal
#  opening angle in positive angular direction.
# 
#  @field verticalOpeningAngleStart: optional orientation indicating the beginning of the shape's
#  vertical opening angle in positive angular direction of a Cartesian coordinate system with its x-axis
#  located in the north-east plane of the WGS84 coordinate system.
# 
#  @field verticalOpeningAngleEnd: optional orientation indicating the end of the shape's
#  vertical opening angle in positive angular direction of a Cartesian coordinate system with its x-axis
#  located in the north-east plane of the WGS84 coordinate system.
# 
#  @category: Georeference information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    range StandardLength12b,
#    horizontalOpeningAngleStart CartesianAngleValue,
#    horizontalOpeningAngleEnd CartesianAngleValue,
#    verticalOpeningAngleStart CartesianAngleValue OPTIONAL,
#    verticalOpeningAngleEnd CartesianAngleValue OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RadialShapeDetails **********
#

StandardLength12b     range                          # the radial range of the sensor from the reference point or sensor point offset.
CartesianAngleValue   horizontal_opening_angle_start # the orientation indicating the beginning of the
CartesianAngleValue   horizontal_opening_angle_end   # The orientation indicating the end of the shape's horizontal
CartesianAngleValue[] vertical_opening_angle_start   # optional orientation indicating the beginning of the shape's
                                                     # OPTIONAL
CartesianAngleValue[] vertical_opening_angle_end     # optional orientation indicating the end of the shape's
                                                     # OPTIONAL

# ********** END of RadialShapeDetails   **********
