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
# 
#  This DF represents the shape of an elliptical area or right elliptical cylinder that is centred
#  on the shape's reference point defined outside of the context of this DF and oriented w.r.t. a
#  cartesian coordinate system defined outside of the context of this DF.
# 
#  It shall include the following components:
# 
#  @field shapeReferencePoint: optional reference point which represents the centre of the ellipse,
#  relative to an externally specified reference position. If this component is absent, the
#  externally specified reference position represents the shape's reference point.
# 
#  @field semiMajorAxisLength: half length of the major axis of the ellipse located in the X-Y Plane.
# 
#  @field semiMinorAxisLength: half length of the minor axis of the ellipse located in the X-Y Plane.
# 
#  @field orientation: the optional orientation of the major axis of the ellipse, measured with
#  positive values turning around the z-axis using the right-hand rule, starting from the X-axis.
# 
#  @field height: the optional height, present if the shape is a right elliptical cylinder extending
#  in the positive Z-axis.
# 
#  @category: GeoReference information
#  @revision: Created in V2.1.1, the type of the field orientation changed and the description revised in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    shapeReferencePoint CartesianPosition3d OPTIONAL,
#    semiMajorAxisLength StandardLength12b,
#    semiMinorAxisLength StandardLength12b,
#    orientation CartesianAngleValue OPTIONAL,
#    height StandardLength12b OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of EllipticalShape **********
#

CartesianPosition3d[] shape_reference_point  # optional reference point which represents the centre of the ellipse,
                                             # OPTIONAL
StandardLength12b     semi_major_axis_length # half length of the major axis of the ellipse located in the X-Y Plane.
StandardLength12b     semi_minor_axis_length # half length of the minor axis of the ellipse located in the X-Y Plane.
CartesianAngleValue[] orientation            # the optional orientation of the major axis of the ellipse, measured with
                                             # OPTIONAL
StandardLength12b[]   height                 # the optional height, present if the shape is a right elliptical cylinder extending
                                             # OPTIONAL

# ********** END of EllipticalShape   **********
