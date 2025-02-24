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
#  This DE indicates the altitude confidence value which represents the estimated absolute accuracy of an altitude value of a geographical point with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#    - 0  - `alt-000-01`   - if the confidence value is equal to or less than 0,01 metre,
#    - 1  - `alt-000-02`   - if the confidence value is equal to or less than 0,02 metre and greater than 0,01 metre,
#    - 2  - `alt-000-05`   - if the confidence value is equal to or less than 0,05 metre and greater than 0,02 metre,
#    - 3  - `alt-000-10`   - if the confidence value is equal to or less than 0,1 metre and greater than 0,05 metre,
#    - 4  - `alt-000-20`   - if the confidence value is equal to or less than 0,2 metre and greater than 0,1 metre,
#    - 5  - `alt-000-50`   - if the confidence value is equal to or less than 0,5 metre and greater than 0,2 metre,
#    - 6  - `alt-001-00`   - if the confidence value is equal to or less than 1 metre and greater than 0,5 metre,
#    - 7  - `alt-002-00`   - if the confidence value is equal to or less than 2 metres and greater than 1 metre,
#    - 8  - `alt-005-00`   - if the confidence value is equal to or less than 5 metres and greater than 2 metres,
#    - 9  - `alt-010-00`   - if the confidence value is equal to or less than 10 metres and greater than 5 metres,
#    - 10 - `alt-020-00`   - if the confidence value is equal to or less than 20 metres and greater than 10 metres,
#    - 11 - `alt-050-00`   - if the confidence value is equal to or less than 50 metres and greater than 20 metres,
#    - 12 - `alt-100-00`   - if the confidence value is equal to or less than 100 metres and greater than 50 metres,
#    - 13 - `alt-200-00`   - if the confidence value is equal to or less than 200 metres and greater than 100 metres,
#    - 14 - `outOfRange`   - if the confidence value is out of range, i.e. greater than 200 metres,
#    - 15 - `unavailable`  - if the confidence value is unavailable.
# 
#  @note: The fact that an altitude value is received with confidence value set to `unavailable(15)` can be caused
#  by several reasons, such as:
#  - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
#  - the sensor cannot calculate the accuracy due to lack of variables, or
#  - there has been a vehicle bus (e.g. CAN bus) error.
#  In all 3 cases above, the altitude value may be valid and used by the application.
# 
#  @note: If an altitude value is received and its confidence value is set to `outOfRange(14)`, it means that the
#  altitude value is not valid and therefore cannot be trusted. Such value is not useful for the application.
# 
#  @category: GeoReference information
#  @revision: Description revised in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { alt-000-01(0), alt-000-02(1), alt-000-05(2), alt-000-10(3), alt-000-20(4), alt-000-50(5), alt-001-00(6), alt-002-00(7), alt-005-00(8), alt-010-00(9), alt-020-00(10), alt-050-00(11), alt-100-00(12), alt-200-00(13), outOfRange(14), unavailable(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of AltitudeConfidence **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 15
int32           UNAVAILABLE     = 15
int32           OUT_OF_RANGE    = 14

int32           V_ALT_000_01    = 0
int32           V_ALT_000_02    = 1
int32           V_ALT_000_05    = 2
int32           V_ALT_000_10    = 3
int32           V_ALT_000_20    = 4
int32           V_ALT_000_50    = 5
int32           V_ALT_001_00    = 6
int32           V_ALT_002_00    = 7
int32           V_ALT_005_00    = 8
int32           V_ALT_010_00    = 9
int32           V_ALT_020_00    = 10
int32           V_ALT_050_00    = 11
int32           V_ALT_100_00    = 12
int32           V_ALT_200_00    = 13
int32           V_OUT_OF_RANGE  = 14
int32           V_UNAVAILABLE   = 15

# ********** END of AltitudeConfidence   **********
