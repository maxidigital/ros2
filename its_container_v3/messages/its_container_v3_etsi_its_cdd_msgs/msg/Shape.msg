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
#  This DF provides the definition of a geographical area or volume, based on different options.
# 
#  It is a choice of the following components:
# 
#  @field rectangular: definition of an rectangular area or a right rectangular prism (with a rectangular base) also called a cuboid, or informally a rectangular box.
# 
#  @field circular: definition of an area of circular shape or a right circular cylinder.
# 
#  @field polygonal: definition of an area of polygonal shape or a right prism.
# 
#  @field elliptical: definition of an area of elliptical shape or a right elliptical cylinder.
# 
#  @field radial: definition of a radial shape.
# 
#  @field radialList: definition of list of radial shapes.
# 
#  @category: GeoReference information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# CHOICE {
#    rectangular RectangularShape,
#    circular CircularShape,
#    polygonal PolygonalShape,
#    elliptical EllipticalShape,
#    radial RadialShape,
#    radialShapes RadialShapes,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of Shape **********
#

RectangularShape[] rectangular     #  choice = 0
CircularShape[]    circular        #  choice = 1
PolygonalShape[]   polygonal       #  choice = 2
EllipticalShape[]  elliptical      #  choice = 3
RadialShape[]      radial          #  choice = 4
RadialShapes[]     radial_shapes   #  choice = 5

uint8              LENGTH          = 6

# ********** END of Shape   **********
