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
#  This DE indicates the angle confidence value which represents the estimated absolute accuracy of an angle value with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 126`)  if the accuracy is equal to or less than n * 0,1 degrees and greater than (n-1) x * 0,1 degrees,
#  - `126` if the  accuracy is out of range, i.e. greater than 12,5 degrees,
#  - `127` if the accuracy information is not available.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: degrees ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(126), unavailable(127) }(1..127) 
# 
# Element type: FLOAT
#
# ********** START of AngleConfidence **********
#

float32         value

float32         MIN             = 0.1
float32         MAX             = 12.7
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 12.7
float32         OUT_OF_RANGE    = 12.6

float32         V_OUT_OF_RANGE  = 12.6
float32         V_UNAVAILABLE   = 12.7

# ********** END of AngleConfidence   **********
