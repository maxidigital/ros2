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
#  The DE describes whether the yaw rate is used to calculate the curvature for a curvature value.
# 
#  The value shall be set to:
#  - 0 - `yawRateUsed`    - if the yaw rate is used,
#  - 1 - `yawRateNotUsed` - if the yaw rate is not used,
#  - 2 - `unavailable`    - if the information of curvature calculation mode is unknown.
# 
#  @category: Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# ENUMERATED { yawRateUsed(0), yawRateNotUsed(1), unavailable(2), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of CurvatureCalculationMode **********
#

int32           value

int32           MIN                 = 0
int32           MAX                 = 2
int32           UNAVAILABLE         = 2

int32           V_YAW_RATE_USED     = 0
int32           V_YAW_RATE_NOT_USED = 1
int32           V_UNAVAILABLE       = 2

# ********** END of CurvatureCalculationMode   **********
