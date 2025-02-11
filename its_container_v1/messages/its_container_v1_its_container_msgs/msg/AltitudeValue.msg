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
#  ~~~ Units: s ~~~
# 
# ASN.1 Definition:
# INTEGER { referenceEllipsoidSurface(0), oneCentimeter(1), unavailable(800001) }(-100000..800001) 
# 
# Element type: FLOAT
#
# ********** START of AltitudeValue **********
#

float32         value

float32         MIN                           = -1000.0
float32         MAX                           = 8000.01
float32         SCALAROPERAND                 = 100.0
float32         UNAVAILABLE                   = 8000.01

float32         V_REFERENCE_ELLIPSOID_SURFACE = 0.0
float32         V_ONE_CENTIMETER              = 0.01
float32         V_UNAVAILABLE                 = 8000.01

# ********** END of AltitudeValue   **********
