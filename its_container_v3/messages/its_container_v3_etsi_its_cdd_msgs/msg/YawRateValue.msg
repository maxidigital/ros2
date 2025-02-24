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
#  This DE represents the vehicle rotation around z-axis of the coordinate system centred on the centre of mass of the empty-loaded
#  vehicle. The leading sign denotes the direction of rotation.
# 
#  The value shall be provided in the vehicle coordinate system as defined in ISO 8855 [21], clause 2.11.
# 
#  The value shall be set to:
#  - `-32 766` to indicate that the yaw rate is equal to or greater than 327,66 degrees/second to the right,
#  - `n` (`n > -32 766` and `n <= 0`) to indicate that the rotation is clockwise (i.e. to the right) and is equal to or less than n x 0,01 degrees/s,
#       and greater than (n-1) x 0,01 degrees/s,
#  - `n` (`n > 0` and `n < 32 766`) to indicate that the rotation is anti-clockwise (i.e. to the left) and is equal to or less than n x 0,01 degrees/s,
#       and greater than (n-1) x 0,01 degrees/s,
#  - `32 766` to indicate that the yaw rate is greater than 327.65 degrees/second to the left,
#  - `32 767` to indicate that the information is not available.
# 
#  The yaw rate value shall be a raw data value, i.e. not filtered, smoothed or otherwise modified.
#  The reading instant should be the same as for the vehicle acceleration.
# 
#  @note: The empty load vehicle is defined in ISO 1176 [8], clause 4.6.
# 
#  @category: Vehicle Information
#  @revision: Desription revised in V2.1.1 (the meaning of 32766 has changed slightly).
#   
#  ~~~ Units: degree per second. ~~~
# 
# ASN.1 Definition:
# INTEGER { negativeOutOfRange(-32766), positiveOutOfRange(32766), unavailable(32767) }(-32766..32767) 
# 
# Element type: FLOAT
#
# ********** START of YawRateValue **********
#

float32         value

float32         MIN                     = -327.66
float32         MAX                     = 327.67
float32         SCALAROPERAND           = 100.0
float32         UNAVAILABLE             = 327.67

float32         V_NEGATIVE_OUT_OF_RANGE = -327.66
float32         V_POSITIVE_OUT_OF_RANGE = 327.66
float32         V_UNAVAILABLE           = 327.67

# ********** END of YawRateValue   **********
