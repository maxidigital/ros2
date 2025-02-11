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
#  This DE represents the perpendicular inter-distance of neighbouring pillar axis of vehicle starting from the
#  middle point of the front line of the vehicle bounding box.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 29`) for any aplicable value between 0,1 metre and 2,9 metres,
#  - `29` for values equal to or greater than 2.8 metres,
#  - `30` if the information is unavailable.
# 
#  @category Vehicle information
#  @revision: description revised in V2.1.1 (the meaning of 29 has changed slightly)
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(29), unavailable(30) }(1..30) 
# 
# Element type: FLOAT
#
# ********** START of PosPillar **********
#

float32         value

float32         MIN             = 0.1
float32         MAX             = 3.0
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 3.0
float32         OUT_OF_RANGE    = 2.9

float32         V_OUT_OF_RANGE  = 2.9
float32         V_UNAVAILABLE   = 3.0

# ********** END of PosPillar   **********
