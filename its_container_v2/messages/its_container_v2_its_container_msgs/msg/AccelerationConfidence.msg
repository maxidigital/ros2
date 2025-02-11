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
#   
#  ~~~ Units: m/s^2 ~~~
# 
# ASN.1 Definition:
# INTEGER { pointOneMeterPerSecSquared(1), outOfRange(101), unavailable(102) }(0 .. 102) 
# 
# Element type: FLOAT
#
# ********** START of AccelerationConfidence **********
#

float32         value

float32         MIN                               = 0.0
float32         MAX                               = 10.2
float32         SCALAROPERAND                     = 10.0
float32         UNAVAILABLE                       = 10.2
float32         OUT_OF_RANGE                      = 10.1

float32         V_POINT_ONE_METER_PER_SEC_SQUARED = 0.1
float32         V_OUT_OF_RANGE                    = 10.1
float32         V_UNAVAILABLE                     = 10.2

# ********** END of AccelerationConfidence   **********
