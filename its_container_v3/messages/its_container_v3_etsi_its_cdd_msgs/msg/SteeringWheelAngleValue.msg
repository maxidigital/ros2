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
#  This DE represents the steering wheel angle of the vehicle at certain point in time.
#  The value shall be provided in the vehicle coordinate system as defined in ISO 8855 [21], clause 2.11.
# 
#  The value shall be set to:
#  - `-511` if the steering wheel angle is equal to or greater than 511 x 1,5 degrees = 766,5 degrees to the right,
#  - `n` (`n > -511` and `n <= 0`) if  the steering wheel angle is equal to or less than n x 1,5 degrees, and greater than (n-1) x 1,5 degrees,
#       turning clockwise (i.e. to the right),
#  - `n` (`n >= 1` and `n < 511`) if the steering wheel angle is equal to or less than n x 0,1 degrees, and greater than (n-1) x 0,1 degrees,
#       turning counter-clockwise (i.e. to the left),
#  - `511` if the steering wheel angle is greater than 510 x 1,5 degrees = 765 degrees to the left,
#  - `512` if information is not available.
# 
#  @revision: Description revised in V2.1.1 (meaning of value 511 has changed slightly).
#   
#  ~~~ Units: degree ~~~
# 
# ASN.1 Definition:
# INTEGER { negativeOutOfRange(-511), positiveOutOfRange(511), unavailable(512) }(-511..512) 
# 
# Element type: FLOAT
#
# ********** START of SteeringWheelAngleValue **********
#

float32         value

float32         MIN                     = -766.5
float32         MAX                     = 768.0
float32         SCALAROPERAND           = 0.6666667
float32         UNAVAILABLE             = 768.0

float32         V_NEGATIVE_OUT_OF_RANGE = -766.5
float32         V_POSITIVE_OUT_OF_RANGE = 766.5
float32         V_UNAVAILABLE           = 768.0

# ********** END of SteeringWheelAngleValue   **********
