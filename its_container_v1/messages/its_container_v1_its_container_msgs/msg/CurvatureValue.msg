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
# ASN.1 Definition:
# INTEGER { straight(0), reciprocalOf1MeterRadiusToRight(-30000), reciprocalOf1MeterRadiusToLeft(30000), unavailable(30001) }(-30000..30001) 
# 
# Element type: INTEGER
#
# ********** START of CurvatureValue **********
#

int16           value

int16           MIN                                    = -30000
int16           MAX                                    = 30001
int16           UNAVAILABLE                            = 30001

int16           V_STRAIGHT                             = 0
int16           V_RECIPROCAL_OF1_METER_RADIUS_TO_RIGHT = -30000
int16           V_RECIPROCAL_OF1_METER_RADIUS_TO_LEFT  = 30000
int16           V_UNAVAILABLE                          = 30001

# ********** END of CurvatureValue   **********
