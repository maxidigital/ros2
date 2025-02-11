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
#  This DE represents a single dimension of an object.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 255`) if the  accuracy is equal to or less than n x 0,1 m, and more than (n-1) x 0,1 m,
#  - `255` if the accuracy is out of range i.e. greater than 25,4 m,
#  - `256` if the data is unavailable.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: m ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(255), unavailable(256) }(1..256) 
# 
# Element type: FLOAT
#
# ********** START of ObjectDimensionValue **********
#

float32         value

float32         MIN             = 0.1
float32         MAX             = 25.6
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 25.6
float32         OUT_OF_RANGE    = 25.5

float32         V_OUT_OF_RANGE  = 25.5
float32         V_UNAVAILABLE   = 25.6

# ********** END of ObjectDimensionValue   **********
