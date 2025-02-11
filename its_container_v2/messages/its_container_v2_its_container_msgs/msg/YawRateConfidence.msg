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
# ENUMERATED { degSec-000-01(0), degSec-000-05(1), degSec-000-10(2), degSec-001-00(3), degSec-005-00(4), degSec-010-00(5), degSec-100-00(6), outOfRange(7), unavailable(8) } 
# 
# Element type: ENUMERATED
#
# ********** START of YawRateConfidence **********
#

int32           value

int32           MIN              = 0
int32           MAX              = 8
int32           UNAVAILABLE      = 8
int32           OUT_OF_RANGE     = 7

int32           V_DEG_SEC_000_01 = 0
int32           V_DEG_SEC_000_05 = 1
int32           V_DEG_SEC_000_10 = 2
int32           V_DEG_SEC_001_00 = 3
int32           V_DEG_SEC_005_00 = 4
int32           V_DEG_SEC_010_00 = 5
int32           V_DEG_SEC_100_00 = 6
int32           V_OUT_OF_RANGE   = 7
int32           V_UNAVAILABLE    = 8

# ********** END of YawRateConfidence   **********
