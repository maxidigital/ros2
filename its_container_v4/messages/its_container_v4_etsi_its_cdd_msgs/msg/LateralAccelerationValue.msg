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
#  This DE represents the vehicle acceleration at lateral direction in the centre of the mass of the empty vehicle.
#  It corresponds to the vehicle coordinate system as specified in ISO 8855 [21].
# 
#  The value shall be set to:
#  - `-160` for acceleration values equal to or less than -16 m/s^2,
#  - `n` (`n > -160` and `n <= 0`) to indicate that the vehicle is accelerating towards the right side with regards to the vehicle orientation
#                             with acceleration equal to or less than n x 0,1 m/s^2 and greater than (n-1) x 0,1 m/s^2,
#  - `n` (`n > 0` and `n < 160`) to indicate that the vehicle is accelerating towards the left hand side with regards to the vehicle orientation
# 						     with acceleration equal to or less than n x 0,1 m/s^2 and greater than (n-1) x 0,1 m/s^2,
#  - `160` for acceleration values greater than 15,9 m/s^2,
#  - `161` when the data is unavailable.
# 
#  @note: the empty load vehicle is defined in ISO 1176 [8], clause 4.6.
#  @note: this DF is kept for backwards compatibility reasons only. It is recommended to use @ref AccelerationValue instead.
# 
#  @category: Vehicle information
#  @revision: Description updated in V2.1.1 (the meaning of 160 has changed slightly).
#   
#  ~~~ Units: m/s^2 ~~~
# 
# ASN.1 Definition:
# INTEGER { negativeOutOfRange(-160), positiveOutOfRange(160), unavailable(161) }(-160 .. 161) 
# 
# Element type: FLOAT
#
# ********** START of LateralAccelerationValue **********
#

float32         value

float32         MIN                     = -16.0
float32         MAX                     = 16.1
float32         SCALAROPERAND           = 10.0
float32         UNAVAILABLE             = 16.1

float32         V_NEGATIVE_OUT_OF_RANGE = -16.0
float32         V_POSITIVE_OUT_OF_RANGE = 16.0
float32         V_UNAVAILABLE           = 16.1

# ********** END of LateralAccelerationValue   **********
