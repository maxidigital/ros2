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
#  This DE represents the smallest circular turn (i.e. U-turn) that the vehicle is capable of making.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 254`) to indicate the applicable value is equal to or less than n x 0,4 metre, and greater than (n-1) x 0,4 metre,
#  - `254` to indicate that the turning radius is  greater than 253 x 0,4 metre = 101.2 metres,
#  - `255` to indicate that the information is unavailable.
# 
#  For vehicle with tracker, the turning radius applies to the vehicle only.
# 
#  @category: Vehicle information
#  @revision: Description revised V2.1.1 (the meaning of 254 has changed slightly)
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(254), unavailable(255) }(1..255) 
# 
# Element type: FLOAT
#
# ********** START of TurningRadius **********
#

float32         value

float32         MIN             = 0.4
float32         MAX             = 102.0
float32         SCALAROPERAND   = 2.5
float32         UNAVAILABLE     = 102.0
float32         OUT_OF_RANGE    = 101.6

float32         V_OUT_OF_RANGE  = 101.6
float32         V_UNAVAILABLE   = 102.0

# ********** END of TurningRadius   **********
