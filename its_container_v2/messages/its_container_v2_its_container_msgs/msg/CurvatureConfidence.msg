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
# ASN.1 Definition:
# ENUMERATED { onePerMeter-0-00002(0), onePerMeter-0-0001(1), onePerMeter-0-0005(2), onePerMeter-0-002(3), onePerMeter-0-01(4), onePerMeter-0-1(5), outOfRange(6), unavailable(7) } 
# 
# Element type: ENUMERATED
#
# ********** START of CurvatureConfidence **********
#

int32           value

int32           MIN                     = 0
int32           MAX                     = 7
int32           UNAVAILABLE             = 7
int32           OUT_OF_RANGE            = 6

int32           V_ONE_PER_METER_0_00002 = 0
int32           V_ONE_PER_METER_0_0001  = 1
int32           V_ONE_PER_METER_0_0005  = 2
int32           V_ONE_PER_METER_0_002   = 3
int32           V_ONE_PER_METER_0_01    = 4
int32           V_ONE_PER_METER_0_1     = 5
int32           V_OUT_OF_RANGE          = 6
int32           V_UNAVAILABLE           = 7

# ********** END of CurvatureConfidence   **********
