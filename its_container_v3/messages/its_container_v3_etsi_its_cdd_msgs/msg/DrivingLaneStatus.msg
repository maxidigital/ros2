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
#  This DE indicates whether a driving lane is open to traffic.
# 
#  A lane is counted from inside border of the road excluding the hard shoulder. The size of the bit string shall
#  correspond to the total number of the driving lanes in the carriageway.
# 
#  The numbering is matched to @ref LanePosition.
#  The bit `0` is used to indicate the innermost lane, bit `1` is used to indicate the second lane from inside border.
# 
#  If a lane is closed to traffic, the corresponding bit shall be set to `1`. Otherwise, it shall be set to `0`.
# 
#  @note: hard shoulder status is not provided by this DE but in @ref HardShoulderStatus.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# BIT STRING(SIZE(1..13)) 
# 
# Element type: BIT STRING
#
# ********** START of DrivingLaneStatus **********
#

bool[]          values

uint8           MIN             = 1
uint8           MAX             = 13

# ********** END of DrivingLaneStatus   **********
