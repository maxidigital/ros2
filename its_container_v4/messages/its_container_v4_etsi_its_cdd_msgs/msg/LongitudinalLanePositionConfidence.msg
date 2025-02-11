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
#  This DE indicates the longitudinal lane position confidence value which represents the estimated accuracy of longitudinal lane position measurement with a default confidence level of 95 %.
#  If required, the confidence level can be defined by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 1 022`) if the  confidence value is equal to or less than n x 0,1 m, and more than (n-1) x 0,1 m,
#  - `1 022` if the confidence value is out of range i.e. greater than 102,1 m,
#  - `1 023` if the confidence value is unavailable.
# 
#  @category: GeoReference information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(1022), unavailable(1023) }(0..1023) 
# 
# Element type: FLOAT
#
# ********** START of LongitudinalLanePositionConfidence **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 102.3
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 102.3
float32         OUT_OF_RANGE    = 102.2

float32         V_OUT_OF_RANGE  = 102.2
float32         V_UNAVAILABLE   = 102.3

# ********** END of LongitudinalLanePositionConfidence   **********
