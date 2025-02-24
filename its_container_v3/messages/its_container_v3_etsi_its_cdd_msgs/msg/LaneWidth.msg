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
#  This DE represents the width of a lane measured at a defined position.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 1022`) if the lane width information is equal to or less than n x 0,01 metre and more than (n-1) x 0,01 metre,
#  - `1022` if the lane width is out of range, i.e. greater than 10,21 m,
#  - `1023` if the lane width information is not available.
# 
#  The value 0 shall not be used.
# 
#  @category: Road topology information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: meter ~~~
# 
# ASN.1 Definition:
# INTEGER(0..1023) 
# 
# Element type: FLOAT
#
# ********** START of LaneWidth **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 10.23
float32         SCALAROPERAND   = 100.0

# ********** END of LaneWidth   **********
