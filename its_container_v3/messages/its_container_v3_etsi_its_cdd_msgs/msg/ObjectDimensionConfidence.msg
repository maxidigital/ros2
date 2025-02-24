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
#  This DE indicates the object dimension confidence value which represents the estimated absolute accuracy of an object dimension value with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 31`) if the confidence value is equal to or less than n x 0,1 metre, and more than (n-1) x 0,1 metre,
#  - `31` if the confidence value is out of range i.e. greater than 3,0 m,
#  - `32` if the confidence value is unavailable.
# 
#  @category: Sensing information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: m ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(31), unavailable(32) }(1..32) 
# 
# Element type: FLOAT
#
# ********** START of ObjectDimensionConfidence **********
#

float32         value

float32         MIN             = 0.1
float32         MAX             = 3.2
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 3.2
float32         OUT_OF_RANGE    = 3.1

float32         V_OUT_OF_RANGE  = 3.1
float32         V_UNAVAILABLE   = 3.2

# ********** END of ObjectDimensionConfidence   **********
