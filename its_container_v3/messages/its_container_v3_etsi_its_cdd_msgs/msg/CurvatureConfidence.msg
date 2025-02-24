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
#  This DE indicates the acceleration confidence value which represents the estimated absolute accuracy range of a curvature value with a confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - 0 - `onePerMeter-0-00002` - if the confidence value is less than or equal to 0,00002 m-1,
#  - 1 - `onePerMeter-0-0001`  - if the confidence value is less than or equal to 0,0001 m-1 and greater than 0,00002 m-1,
#  - 2 - `onePerMeter-0-0005`  - if the confidence value is less than or equal to 0,0005 m-1 and greater than 0,0001 m-1,
#  - 3 - `onePerMeter-0-002`   - if the confidence value is less than or equal to 0,002 m-1 and greater than 0,0005 m-1,
#  - 4 - `nePerMeter-0-01`     - if the confidence value is less than or equal to 0,01 m-1 and greater than 0,002 m-1,
#  - 5 - `nePerMeter-0-1`      - if the confidence value is less than or equal to 0,1 m-1  and greater than 0,01 m-1,
#  - 6 - `outOfRange`          - if the confidence value is out of range, i.e. greater than 0,1 m-1,
#  - 7 - `unavailable`         - if the confidence value is not available.
# 
#  @note:	The fact that a curvature value is received with confidence value set to `unavailable(7)` can be caused by
#  several reasons, such as:
#  - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
#  - the sensor cannot calculate the accuracy due to lack of variables, or
#  - there has been a vehicle bus (e.g. CAN bus) error.
#  In all 3 cases above, the curvature value may be valid and used by the application.
# 
#  @note: If a curvature value is received and its confidence value is set to `outOfRange(6)`, it means that the curvature value is not valid
#  and therefore cannot be trusted. Such value is not useful for the application.
# 
#  @category: Vehicle information
#  @revision: Description revised in V2.1.1
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
