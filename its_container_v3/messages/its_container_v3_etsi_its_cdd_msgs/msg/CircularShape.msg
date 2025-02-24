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
# 
#  This DF represents the shape of a circular area or a right cylinder that is centred on the shape's reference point.
# 
#  It shall include the following components:
# 
#  @field shapeReferencePoint: optional reference point that represents the centre of the circle, relative to an externally specified reference position.
#  If this component is absent, the externally specified reference position represents the shape's reference point.
# 
#  @field radius: the radius of the circular area.
# 
#  @field height: the optional height, present if the shape is a right cylinder extending in the positive z-axis.
# 
# 
#  @category: GeoReference information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    shapeReferencePoint CartesianPosition3d OPTIONAL,
#    radius StandardLength12b,
#    height StandardLength12b OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of CircularShape **********
#

CartesianPosition3d[] shape_reference_point # optional reference point that represents the centre of the circle, relative to an externally specified reference position.
                                            # OPTIONAL
StandardLength12b     radius                # the radius of the circular area.
StandardLength12b[]   height                # the optional height, present if the shape is a right cylinder extending in the positive z-axis.
                                            # OPTIONAL

# ********** END of CircularShape   **********
