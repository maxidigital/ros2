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
#  This DF indicates the opening/closure status of the lanes of a carriageway.
# 
#  It shall include the following components:
# 
#  @field innerhardShoulderStatus: this information is optional and shall be included if an inner hard shoulder is present and the information is known.
#  It indicates the open/closing status of inner hard shoulder lanes.
# 
#  @field outerhardShoulderStatus: this information is optional and shall be included if an outer hard shoulder is present and the information is known.
#  It indicates the open/closing status of outer hard shoulder lanes.
# 
#  @field drivingLaneStatus: this information is optional and shall be included if the information is known.
#  It indicates the open/closing status of driving lanes.
#  For carriageways with more than 13 driving lanes, the drivingLaneStatus component shall not be present.
# 
#  @category: Infrastructure information, Road topology information
#  @revision: Description revised in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    innerhardShoulderStatus HardShoulderStatus OPTIONAL,
#    outerhardShoulderStatus HardShoulderStatus OPTIONAL,
#    drivingLaneStatus DrivingLaneStatus OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ClosedLanes **********
#

HardShoulderStatus[] innerhard_shoulder_status # this information is optional and shall be included if an inner hard shoulder is present and the information is known.
                                               # OPTIONAL
HardShoulderStatus[] outerhard_shoulder_status # this information is optional and shall be included if an outer hard shoulder is present and the information is known.
                                               # OPTIONAL
DrivingLaneStatus[]  driving_lane_status       # this information is optional and shall be included if the information is known.
                                               # OPTIONAL

# ********** END of ClosedLanes   **********
