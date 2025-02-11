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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(2)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# 
# 
#  @labels: {wgs84North(0), wgs84East(90), wgs84South(180), wgs84West(270), unavailable(360.1)}
#   
#  ~~~ Units: degree ~~~
# 
# ASN.1 Definition:
# INTEGER { wgs84North(0), wgs84East(900), wgs84South(1800), wgs84West(2700), unavailable(3601) }(0..3601) 
# 
# Element type: FLOAT
#
# ********** START of HeadingValue **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 360.1
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 360.1

float32         V_WGS84_NORTH   = 0.0
float32         V_WGS84_EAST    = 90.0
float32         V_WGS84_SOUTH   = 180.0
float32         V_WGS84_WEST    = 270.0
float32         V_UNAVAILABLE   = 360.1

# ********** END of HeadingValue   **********
