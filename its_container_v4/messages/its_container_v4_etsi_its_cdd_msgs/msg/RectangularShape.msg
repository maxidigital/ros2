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
#  This DF represents the shape of a rectangular area or a right rectangular prism that is centred
#  on a reference position defined outside of the context of this DF and oriented w.r.t. a cartesian
#  coordinate system defined outside of the context of this DF.
# 
#  It shall include the following components:
# 
#  @field shapeReferencePoint: represents an optional offset point which the rectangle is centred on with
#  respect to the reference position. If this component is absent, the externally specified
#  reference position represents the shape's reference point.
# 
#  @field semiLength: represents half the length of the rectangle located in the X-Y Plane.
# 
#  @field semiBreadth: represents half the breadth of the rectangle located in the X-Y Plane.
# 
#  @field orientation: represents the optional orientation of the length of the rectangle,
#  measured with positive values turning around the Z-axis using the right-hand rule, starting from
#  the X-axis.
# 
#  @field height: represents the optional height, present if the shape is a right rectangular prism
#  with height extending in the positive Z-axis.
# 
#  @category GeoReference information
#  @revision: created in V2.1.1, centerPoint renamed to shapeReferencePoint, the type of the field orientation changed and description revised in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    shapeReferencePoint CartesianPosition3d OPTIONAL,
#    semiLength StandardLength12b,
#    semiBreadth StandardLength12b,
#    orientation CartesianAngleValue OPTIONAL,
#    height StandardLength12b OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RectangularShape **********
#

CartesianPosition3d[] shape_reference_point # represents an optional offset point which the rectangle is centred on with
                                            # OPTIONAL
StandardLength12b     semi_length           # represents half the length of the rectangle located in the X-Y Plane.
StandardLength12b     semi_breadth          # represents half the breadth of the rectangle located in the X-Y Plane.
CartesianAngleValue[] orientation           # represents the optional orientation of the length of the rectangle,
                                            # OPTIONAL
StandardLength12b[]   height                # represents the optional height, present if the shape is a right rectangular prism
                                            # OPTIONAL

# ********** END of RectangularShape   **********
