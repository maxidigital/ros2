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
#  This DE indicates the acceleration confidence value which represents the estimated absolute accuracy of an acceleration value with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 101`) if the confidence value is equal to or less than n x 0,1 m/s^2, and greater than (n-1) x 0,1 m/s^2,
#  - `101` if the confidence value is out of range i.e. greater than 10 m/s^2,
#  - `102` if the confidence value is unavailable.
# 
#  The value 0 shall not be used.
# 
#  @note: The fact that an acceleration value is received with confidence value set to `unavailable(102)` can be caused by several reasons, such as:
#  - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
#  - the sensor cannot calculate the accuracy due to lack of variables, or
#  - there has been a vehicle bus (e.g. CAN bus) error.
#  In all 3 cases above, the acceleration value may be valid and used by the application.
# 
#  @note: If an acceleration value is received and its confidence value is set to `outOfRange(101)`, it means that the value is not valid and therefore cannot be trusted. Such value is not useful for the application.
# 
#  @category: Kinematic information
#  @revision: Description revised in V2.1.1
#   
#  ~~~ Units: m/s^2 ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(101), unavailable(102) }(0..102) 
# 
# Element type: FLOAT
#
# ********** START of AccelerationConfidence **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 10.2
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 10.2
float32         OUT_OF_RANGE    = 10.1

float32         V_OUT_OF_RANGE  = 10.1
float32         V_UNAVAILABLE   = 10.2

# ********** END of AccelerationConfidence   **********
