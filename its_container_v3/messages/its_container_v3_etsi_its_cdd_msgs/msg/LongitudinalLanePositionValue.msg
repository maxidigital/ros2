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
#  This DE represents the longitudinal offset of a map-matched position along a matched lane, beginning from the lane's starting point.
# 
#  The value shall be set to:
#  - `n` (`n >= 0` and `n < 32766`) if the longitudinal offset information is equal to or less than n x 0,1 metre and more than (n-1) x 0,1 metre,
#  - `32 766` if the longitudinal offset is out of range, i.e. greater than 3276,5 m,
#  - `32 767` if the longitudinal offset information is not available.
# 
#  @category: GeoReference information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(32766), unavailable(32767) }(0..32767) 
# 
# Element type: FLOAT
#
# ********** START of LongitudinalLanePositionValue **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 3276.7
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 3276.7
float32         OUT_OF_RANGE    = 3276.6

float32         V_OUT_OF_RANGE  = 3276.6
float32         V_UNAVAILABLE   = 3276.7

# ********** END of LongitudinalLanePositionValue   **********
