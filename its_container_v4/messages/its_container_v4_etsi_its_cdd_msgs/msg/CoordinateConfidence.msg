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
#  This DE indicates the coordinate confidence value which represents the estimated absolute accuracy of a position coordinate with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 4095`) if the confidence value is is equal to or less than n x 0,01 metre, and greater than (n-1) x 0,01 metre,
#  - `4095` if the confidence value is greater than 40,94 metres,
#  - `4096` if the confidence value is not available.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: m ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(4095), unavailable(4096) }(1..4096) 
# 
# Element type: FLOAT
#
# ********** START of CoordinateConfidence **********
#

float32         value

float32         MIN             = 0.01
float32         MAX             = 40.96
float32         SCALAROPERAND   = 100.0
float32         UNAVAILABLE     = 40.96
float32         OUT_OF_RANGE    = 40.95

float32         V_OUT_OF_RANGE  = 40.95
float32         V_UNAVAILABLE   = 40.96

# ********** END of CoordinateConfidence   **********
