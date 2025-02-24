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
#  This DE represents the height of the left or right longitude carrier of vehicle from base to top (left or right carrier seen from vehicle
#  rear to front).
# 
#  The value shall be set to:
#  - `n` (`n >= 1` and `n < 99`) if the height information is equal to or less than n x 0,01 metre and more than (n-1) x 0,01 metre,
#  - `99` if the height is out of range, i.e. equal to or greater than 0,98 m,
#  - `100` if the height information is not available.
# 
#  @category Vehicle information
#  @revision: Description revised in V2.1.1 (the definition of 99 has changed slightly)
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(99), unavailable(100) }(1..100) 
# 
# Element type: FLOAT
#
# ********** START of HeightLonCarr **********
#

float32         value

float32         MIN             = 0.01
float32         MAX             = 1.0
float32         SCALAROPERAND   = 100.0
float32         UNAVAILABLE     = 1.0
float32         OUT_OF_RANGE    = 0.99

float32         V_OUT_OF_RANGE  = 0.99
float32         V_UNAVAILABLE   = 1.0

# ********** END of HeightLonCarr   **********
