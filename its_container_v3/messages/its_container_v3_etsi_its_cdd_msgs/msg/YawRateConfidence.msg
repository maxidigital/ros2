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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE indicates the yaw rate confidence value which represents the estimated accuracy for a yaw rate value with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `0` if the confidence value is equal to or less than 0,01 degree/second,
#  - `1` if the confidence value is equal to or less than 0,05 degrees/second or greater than 0,01 degree/second,
#  - `2` if the confidence value is equal to or less than 0,1 degree/second or greater than 0,05 degree/second,
#  - `3` if the confidence value is equal to or less than 1 degree/second or greater than 0,1 degree/second,
#  - `4` if the confidence value is equal to or less than 5 degrees/second or greater than 1 degrees/second,
#  - `5` if the confidence value is equal to or less than 10 degrees/second or greater than 5 degrees/second,
#  - `6` if the confidence value is equal to or less than 100 degrees/second or greater than 10 degrees/second,
#  - `7` if the confidence value is out of range, i.e. greater than 100 degrees/second,
#  - `8` if the confidence value is unavailable.
# 
#  NOTE: The fact that a yaw rate value is received with confidence value set to `unavailable(8)` can be caused by
#  several reasons, such as:
#  - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
#  - the sensor cannot calculate the accuracy due to lack of variables, or
#  - there has been a vehicle bus (e.g. CAN bus) error.
#  In all 3 cases above, the yaw rate value may be valid and used by the application.
# 
#  If a yaw rate value is received and its confidence value is set to `outOfRange(7)`, it means that the
#  yaw rate value is not valid and therefore cannot be trusted. Such value is not useful the application.
# 
#  @category: Vehicle information
#  @revision: Description revised in V2.1.1
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
