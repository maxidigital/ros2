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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v4:1.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) cdd(2) major-version-4(4) minor-version-1(1)}                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE indicates the angular acceleration confidence value which represents the estimated accuracy of an angular acceleration value with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
#  For correlation computation, maximum interval levels shall be assumed.
# 
#  The value shall be set to:
#  - 0 - `degSecSquared-01` - if the accuracy is equal to or less than 1 degree/second^2,
#  - 1 - `degSecSquared-02` - if the accuracy is equal to or less than 2 degrees/second^2 and greater than 1 degree/second^2,
#  - 2 - `degSecSquared-05` - if the accuracy is equal to or less than 5 degrees/second^2 and greater than 1 degree/second^2,
#  - 3 - `degSecSquared-10` - if the accuracy is equal to or less than 10 degrees/second^2 and greater than 5 degrees/second^2,
#  - 4 - `degSecSquared-20` - if the accuracy is equal to or less than 20 degrees/second^2 and greater than 10 degrees/second^2,
#  - 5 - `degSecSquared-50` - if the accuracy is equal to or less than 50 degrees/second^2 and greater than 20 degrees/second^2,
#  - 6 - `outOfRange`       - if the accuracy is out of range, i.e. greater than 50 degrees/second^2,
#  - 7 - `unavailable`      - if the accuracy information is unavailable.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { degSecSquared-01(0), degSecSquared-02(1), degSecSquared-05(2), degSecSquared-10(3), degSecSquared-20(4), degSecSquared-50(5), outOfRange(6), unavailable(7) } 
# 
# Element type: ENUMERATED
#
# ********** START of AngularAccelerationConfidence **********
#

int32           value

int32           MIN                  = 0
int32           MAX                  = 7
int32           UNAVAILABLE          = 7
int32           OUT_OF_RANGE         = 6

int32           V_DEG_SEC_SQUARED_01 = 0
int32           V_DEG_SEC_SQUARED_02 = 1
int32           V_DEG_SEC_SQUARED_05 = 2
int32           V_DEG_SEC_SQUARED_10 = 3
int32           V_DEG_SEC_SQUARED_20 = 4
int32           V_DEG_SEC_SQUARED_50 = 5
int32           V_OUT_OF_RANGE       = 6
int32           V_UNAVAILABLE        = 7

# ********** END of AngularAccelerationConfidence   **********
