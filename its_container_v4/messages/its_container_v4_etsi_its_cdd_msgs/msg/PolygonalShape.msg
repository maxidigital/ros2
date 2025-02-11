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
#  This DF represents the shape of a polygonal area or of a right prism.
# 
#  It shall include the following components:
# 
#  @field shapeReferencePoint: the optional reference point used for the definition of the shape, relative to an externally specified reference position.
#  If this component is absent, the externally specified reference position represents the shape's reference point.
# 
#  @field polygon: the polygonal area represented by a list of minimum `3` to maximum `16` @ref CartesianPosition3d.
#  All nodes of the polygon shall be considered relative to the shape's reference point.
# 
#  @field height: the optional height, present if the shape is a right prism extending in the positive z-axis.
# 
#  @category GeoReference information
#  @revision: created in V2.1.1
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    shapeReferencePoint CartesianPosition3d OPTIONAL,
#    polygon SequenceOfCartesianPosition3d(SIZE(3..16,...)),
#    height StandardLength12b OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PolygonalShape **********
#

CartesianPosition3d[]         shape_reference_point # the optional reference point used for the definition of the shape, relative to an externally specified reference position.
                                                    # OPTIONAL
SequenceOfCartesianPosition3d polygon               # the polygonal area represented by a list of minimum `3` to maximum `16` @ref CartesianPosition3d.
StandardLength12b[]           height                # the optional height, present if the shape is a right prism extending in the positive z-axis.
                                                    # OPTIONAL

# ********** END of PolygonalShape   **********
