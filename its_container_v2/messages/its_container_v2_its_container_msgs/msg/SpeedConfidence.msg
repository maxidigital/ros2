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
#  @labels: {standstill(0), oneMeterPerSec(1), unavailable(163.83)}
#   
#  ~~~ Units: meter ~~~
# 
# ASN.1 Definition:
# INTEGER { equalOrWithinOneCentimeterPerSec(1), equalOrWithinOneMeterPerSec(100), outOfRange(126), unavailable(127) }(1..127) 
# 
# Element type: FLOAT
#
# ********** START of SpeedConfidence **********
#

float32         value

float32         MIN                                      = 0.01
float32         MAX                                      = 1.27
float32         SCALAROPERAND                            = 100.0
float32         UNAVAILABLE                              = 1.27
float32         OUT_OF_RANGE                             = 1.26

float32         V_EQUAL_OR_WITHIN_ONE_CENTIMETER_PER_SEC = 0.01
float32         V_EQUAL_OR_WITHIN_ONE_METER_PER_SEC      = 1.0
float32         V_OUT_OF_RANGE                           = 1.26
float32         V_UNAVAILABLE                            = 1.27

# ********** END of SpeedConfidence   **********
