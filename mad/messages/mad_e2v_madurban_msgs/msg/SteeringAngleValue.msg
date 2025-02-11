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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0             *
#*                                                                                 *
#* Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) e2v(1) version(3)}                                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# ASN.1 Definition:
# INTEGER { outOfRangeNegative(-160), straight(0), pointZeroOneRadiansToTheLeft(1), outOfRangePositive(160) }(-160..160) 
# 
# Element type: INTEGER
#
# ********** START of SteeringAngleValue **********
#

int16           value

int16           MIN                                  = -160
int16           MAX                                  = 160

int16           V_OUT_OF_RANGE_NEGATIVE              = -160
int16           V_STRAIGHT                           = 0
int16           V_POINT_ZERO_ONE_RADIANS_TO_THE_LEFT = 1
int16           V_OUT_OF_RANGE_POSITIVE              = 160

# ********** END of SteeringAngleValue   **********
