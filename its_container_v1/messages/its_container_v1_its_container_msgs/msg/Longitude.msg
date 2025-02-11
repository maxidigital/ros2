#*                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                    *
#*                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore         *
#*                                                                                  *
#* This program and the accompanying materials are made available under the         *
#* terms of the Eclipse Public License 2.0 which is available at                    *
#* http://www.eclipse.org/legal/epl-2.0.                                            *
#*                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                 *
#*                                                                                  *
#*                                                                                  *
#* File automatically generated with DLR Wind v2                                    *
#*                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v1:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(1)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# 
#   
#  ~~~ Units: degree ~~~
# 
# ASN.1 Definition:
# INTEGER { oneMicrodegreeEast(10), oneMicrodegreeWest(-10), unavailable(1800000001) }(-1800000000..1800000001) 
# 
# Element type: DOUBLE
#
# ********** START of Longitude **********
#

float64         value

float64         MIN                    = -180.0
float64         MAX                    = 180.0000001
float32         SCALAROPERAND          = 1.0E7
float64         UNAVAILABLE            = 180.0000001
float64         V_ONE_MICRODEGREE_EAST = 1.0E-6
float64         V_ONE_MICRODEGREE_WEST = -1.0E-6
float64         V_UNAVAILABLE          = 180.0000001

# ********** END of Longitude   **********
