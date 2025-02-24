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
#  This DF represents the shape of a rectangular area or a right rectangular prism that is centred on a reference position defined outside of the context of this DF.
# 
#  It shall include the following components:
# 
#  @field centerPoint: represents an optional offset point which the rectangle is centred on with respect to the reference position.
# 
#  @field semiLength: represents half the length of the rectangle.
# 
#  @field semiBreadth: represents half the breadth of the rectangle.
# 
#  @field orientation: represents the optional orientation of the lenght of the rectangle in the WGS84 coordinate system.
#  The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
# 
#  @field height: represents the optional height, present if the shape is a right rectangular prism with height extending in the positive z-axis.
# 
#  @category GeoReference information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    centerPoint CartesianPosition3d OPTIONAL,
#    semiLength StandardLength12b,
#    semiBreadth StandardLength12b,
#    orientation Wgs84AngleValue OPTIONAL,
#    height StandardLength12b OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RectangularShape **********
#

CartesianPosition3d[] center_point    # represents an optional offset point which the rectangle is centred on with respect to the reference position.
                                      # OPTIONAL
StandardLength12b     semi_length     # represents half the length of the rectangle.
StandardLength12b     semi_breadth    # represents half the breadth of the rectangle.
Wgs84AngleValue[]     orientation     # represents the optional orientation of the lenght of the rectangle in the WGS84 coordinate system.
                                      # OPTIONAL
StandardLength12b[]   height          # represents the optional height, present if the shape is a right rectangular prism with height extending in the positive z-axis.
                                      # OPTIONAL

# ********** END of RectangularShape   **********
