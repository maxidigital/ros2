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
#  This DE indicates the speed confidence value which represents the estimated absolute accuracy of a speed value with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 126`) if the confidence value is equal to or less than n * 0,01 m/s.
#  - `126` if the confidence value is out of range, i.e. greater than 1,25 m/s,
#  - `127` if the confidence value information is not available.
# 
#  @note: The fact that a speed value is received with confidence value set to `unavailable(127)` can be caused by several reasons, such as:
#  - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
#  - the sensor cannot calculate the accuracy due to lack of variables, or
#  - there has been a vehicle bus (e.g. CAN bus) error.
#  In all 3 cases above, the speed value may be valid and used by the application.
# 
#  @note: If a speed value is received and its confidence value is set to `outOfRange(126)`, it means that the speed value is not valid
#  and therefore cannot be trusted. Such is not useful for the application.
# 
#  @category: Vehicle information
#  @revision: Description revised in V2.1.1
#   
#  ~~~ Units: m/s ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(126), unavailable(127) }(1..127) 
# 
# Element type: FLOAT
#
# ********** START of SpeedConfidence **********
#

float32         value

float32         MIN             = 0.01
float32         MAX             = 1.27
float32         SCALAROPERAND   = 100.0
float32         UNAVAILABLE     = 1.27
float32         OUT_OF_RANGE    = 1.26

float32         V_OUT_OF_RANGE  = 1.26
float32         V_UNAVAILABLE   = 1.27

# ********** END of SpeedConfidence   **********
