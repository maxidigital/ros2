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
#  This DE represents a speed value, i.e. the magnitude of the velocity-vector.
# 
#  The value shall be set to:
#  - `0` in a standstill situation.
#  - `n` (`n > 0` and `n < 16 382`) if the applicable value is equal to or less than n x 0,01 m/s, and greater than (n-1) x 0,01 m/s,
#  - `16 382` for speed values greater than 163,81 m/s,
#  - `16 383` if the speed accuracy information is not available.
# 
#  @note: the definition of standstill is out of scope of the present document.
# 
#  @category: Kinematic information
#  @revision: Description revised in V2.1.1 (the meaning of 16382 has changed slightly)
#   
#  ~~~ Units: m/s ~~~
# 
# ASN.1 Definition:
# INTEGER { standstill(0), outOfRange(16382), unavailable(16383) }(0..16383) 
# 
# Element type: FLOAT
#
# ********** START of SpeedValue **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 163.83
float32         SCALAROPERAND   = 100.0
float32         UNAVAILABLE     = 163.83
float32         OUT_OF_RANGE    = 163.82

float32         V_STANDSTILL    = 0.0
float32         V_OUT_OF_RANGE  = 163.82
float32         V_UNAVAILABLE   = 163.83

# ********** END of SpeedValue   **********
