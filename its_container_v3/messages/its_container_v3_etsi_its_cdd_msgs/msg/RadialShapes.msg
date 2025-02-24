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
#  This DF describes a list of radial shapes.
# 
#  It shall include the following components:
# 
#  @field refPointId: the identification of the reference point in case of a sensor mounted to trailer. Defaults to ITS ReferencePoint (0).
# 
#  @field xCoordinate: the x-coordinate of the offset point.
# 
#  @field yCoordinate: the y-coordinate of the offset point.
# 
#  @field zCoordinate: the optional z-coordinate of the offset point.
# 
#  @field radialShapesList: the list of radial shape details.
# 
#  @category: Georeference information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    refPointId Identifier1B,
#    xCoordinate CartesianCoordinateSmall,
#    yCoordinate CartesianCoordinateSmall,
#    zCoordinate CartesianCoordinateSmall OPTIONAL,
#    radialShapesList RadialShapesList 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RadialShapes **********
#

Identifier1B               ref_point_id       # the identification of the reference point in case of a sensor mounted to trailer. Defaults to ITS ReferencePoint (0).
CartesianCoordinateSmall   x_coordinate       # the x-coordinate of the offset point.
CartesianCoordinateSmall   y_coordinate       # the y-coordinate of the offset point.
CartesianCoordinateSmall[] z_coordinate       # the optional z-coordinate of the offset point.
                                              # OPTIONAL
RadialShapesList           radial_shapes_list # the list of radial shape details.

# ********** END of RadialShapes   **********
