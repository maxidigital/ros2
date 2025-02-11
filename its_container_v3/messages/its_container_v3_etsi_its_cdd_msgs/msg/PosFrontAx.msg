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
#  This DE indicates the perpendicular distance between the vehicle front line of the bounding box and the front wheel axle in 0,1 metre.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 19`) for any aplicable value between 0,1 metre and 1,9 metres,
#  - `19` for values equal to or higher than 1.8 metres,
#  - `20` if the information is unavailable.
# 
#  @category: Vehicle information
#  @revision: description revised in V2.1.1 (the meaning of 19 has changed slightly)
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(19), unavailable(20) }(1..20) 
# 
# Element type: FLOAT
#
# ********** START of PosFrontAx **********
#

float32         value

float32         MIN             = 0.1
float32         MAX             = 2.0
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 2.0
float32         OUT_OF_RANGE    = 1.9

float32         V_OUT_OF_RANGE  = 1.9
float32         V_UNAVAILABLE   = 2.0

# ********** END of PosFrontAx   **********
