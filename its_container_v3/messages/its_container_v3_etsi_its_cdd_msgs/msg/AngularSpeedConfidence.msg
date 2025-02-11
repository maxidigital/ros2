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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:2.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE indicates the angular speed confidence value which represents the estimated absolute accuracy of an angular speed value with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
#  For correlation computation, maximum interval levels can be assumed.
# 
#  The value shall be set to:
#  - 0 - `degSec-01`   - if the accuracy is equal to or less than 1 degree/second,
#  - 1 - `degSec-02`   - if the accuracy is equal to or less than 2 degrees/second and greater than 1 degree/second,
#  - 2 - `degSec-05`   - if the accuracy is equal to or less than 5 degrees/second and greater than 2 degrees/second,
#  - 3 - `degSec-10`   - if the accuracy is equal to or less than 10 degrees/second and greater than 5 degrees/second,
#  - 4 - `degSec-20`   - if the accuracy is equal to or less than 20 degrees/second and greater than 10 degrees/second,
#  - 5 - `degSec-50`   - if the accuracy is equal to or less than 50 degrees/second and greater than 20 degrees/second,
#  - 6 - `outOfRange`  - if the accuracy is out of range, i.e. greater than 50 degrees/second,
#  - 7 - `unavailable` - if the accuracy information is unavailable.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { degSec-01(0), degSec-02(1), degSec-05(2), degSec-10(3), degSec-20(4), degSec-50(5), outOfRange(6), unavailable(7) } 
# 
# Element type: ENUMERATED
#
# ********** START of AngularSpeedConfidence **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 7
int32           UNAVAILABLE     = 7
int32           OUT_OF_RANGE    = 6

int32           V_DEG_SEC_01    = 0
int32           V_DEG_SEC_02    = 1
int32           V_DEG_SEC_05    = 2
int32           V_DEG_SEC_10    = 3
int32           V_DEG_SEC_20    = 4
int32           V_DEG_SEC_50    = 5
int32           V_OUT_OF_RANGE  = 6
int32           V_UNAVAILABLE   = 7

# ********** END of AngularSpeedConfidence   **********
