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
#  This DE represents the magnitude of the acceleration vector in a defined coordinate system.
# 
#  The value shall be set to:
#  - `0` to indicate no acceleration,
#  - `n` (`n > 0` and `n < 160`) to indicate acceleration equal to or less than n x 0,1 m/s^2, and greater than (n-1) x 0,1 m/s^2,
#  - `160` for acceleration values greater than 15,9 m/s^2,
#  - `161` when the data is unavailable.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: m/s^2 ~~~
# 
# ASN.1 Definition:
# INTEGER { positiveOutOfRange(160), unavailable(161) }(0.. 161) 
# 
# Element type: FLOAT
#
# ********** START of AccelerationMagnitudeValue **********
#

float32         value

float32         MIN                     = 0.0
float32         MAX                     = 16.1
float32         SCALAROPERAND           = 10.0
float32         UNAVAILABLE             = 16.1

float32         V_POSITIVE_OUT_OF_RANGE = 16.0
float32         V_UNAVAILABLE           = 16.1

# ********** END of AccelerationMagnitudeValue   **********
