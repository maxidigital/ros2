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
#  This DE represents an angular acceleration value described in a local Cartesian coordinate system, per default counted positive in
#  a right-hand local coordinate system from the abscissa.
# 
#  The value shall be set to:
#  - `-255` if the acceleration is equal to or less than -255 degrees/s^2,
#  - `n` (`n > -255` and `n < 255`) if the acceleration is equal to or less than n x 1 degree/s^2,
#       and greater than `(n-1)` x 0,01 degree/s^2,
#  - `255` if the acceleration is greater than 254 degrees/s^2,
#  - `256` if the information is unavailable.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { negativeOutOfRange(-255), positiveOutOfRange(255), unavailable(256) }(-255..256) 
# 
# Element type: INTEGER
#
# ********** START of CartesianAngularAccelerationComponentValue **********
#

int16           value

int16           MIN                     = -255
int16           MAX                     = 256
int16           UNAVAILABLE             = 256

int16           V_NEGATIVE_OUT_OF_RANGE = -255
int16           V_POSITIVE_OUT_OF_RANGE = 255
int16           V_UNAVAILABLE           = 256

# ********** END of CartesianAngularAccelerationComponentValue   **********
