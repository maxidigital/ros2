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
#  This DE represents the width of a vehicle, excluding side mirrors and possible similar extensions.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 61`) indicates the applicable value is equal to or less than n x 0,1 metre, and greater than (n-1) x 0,1 metre,
#  - `61` indicates that the vehicle width is greater than 6,0 metres,
#  - `62` indicates that the information in unavailable.
# 
#  @category: Vehicle information
#  @revision: Description updated in V2.1.1 (the meaning of 61 has changed slightly).
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(61), unavailable(62) }(1..62) 
# 
# Element type: FLOAT
#
# ********** START of VehicleWidth **********
#

float32         value

float32         MIN             = 0.1
float32         MAX             = 6.2
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 6.2
float32         OUT_OF_RANGE    = 6.1

float32         V_OUT_OF_RANGE  = 6.1
float32         V_UNAVAILABLE   = 6.2

# ********** END of VehicleWidth   **********
