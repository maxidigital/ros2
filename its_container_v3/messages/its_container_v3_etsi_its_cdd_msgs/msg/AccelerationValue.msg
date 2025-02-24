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
#  This DE represents the value of an acceleration component in a defined coordinate system.
# 
#  The value shall be set to:
#  - `-160` for acceleration values equal to or less than -16 m/s^2,
#  - `n` (`n > -160` and `n <= 0`) to indicate negative acceleration equal to or less than n x 0,1 m/s^2, and greater than (n-1) x 0,1 m/s^2,
#  - `n` (`n > 0` and `n < 160`) to indicate positive acceleration equal to or less than n x 0,1 m/s^2, and greater than (n-1) x 0,1 m/s^2,
#  - `160` for acceleration values greater than 15,9 m/s^2,
#  - `161` when the data is unavailable.
# 
#  @note: the formula for values > -160 and <160 results in rounding up to the next value. Zero acceleration is indicated using n=0.
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: m/s^2 ~~~
# 
# ASN.1 Definition:
# INTEGER { negativeOutOfRange(-160), positiveOutOfRange(160), unavailable(161) }(-160 .. 161) 
# 
# Element type: FLOAT
#
# ********** START of AccelerationValue **********
#

float32         value

float32         MIN                     = -16.0
float32         MAX                     = 16.1
float32         SCALAROPERAND           = 10.0
float32         UNAVAILABLE             = 16.1

float32         V_NEGATIVE_OUT_OF_RANGE = -16.0
float32         V_POSITIVE_OUT_OF_RANGE = 16.0
float32         V_UNAVAILABLE           = 16.1

# ********** END of AccelerationValue   **********
