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
#  This DE represents an angle value described in a local Cartesian coordinate system, per default counted positive in
#  a right-hand local coordinate system from the abscissa.
# 
#  The value shall be set to:
#  - `n` (`n >= 0` and `n < 3600`) if the angle is equal to or less than n x 0,1 degrees, and greater than (n-1) x 0,1 degrees,
#  - `3601` if the information is not available.
# 
#  The value 3600 shall not be used.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1, description and value for 3601 corrected in V2.2.1
#   
#  ~~~ Units: degrees ~~~
# 
# ASN.1 Definition:
# INTEGER { valueNotUsed(3600), unavailable(3601) }(0..3601) 
# 
# Element type: FLOAT
#
# ********** START of CartesianAngleValue **********
#

float32         value

float32         MIN              = 0.0
float32         MAX              = 360.1
float32         SCALAROPERAND    = 10.0
float32         UNAVAILABLE      = 360.1

float32         V_VALUE_NOT_USED = 360.0
float32         V_UNAVAILABLE    = 360.1

# ********** END of CartesianAngleValue   **********
