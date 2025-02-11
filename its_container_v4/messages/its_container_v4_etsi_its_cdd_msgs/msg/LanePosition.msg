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
#  This DE indicates a transversal position on the carriageway at a specific longitudinal position, in resolution of lanes of the carriageway.
# 
#  For right-hand traffic roads, the value shall be set to:
#  - `-1` if the position is off, i.e. besides the road,
#  - `0` if the position is on the inner hard shoulder, i.e. the hard should adjacent to the leftmost lane,
#  - `n` (`n > 0` and `n < 14`), if the position is on the n-th driving lane counted from the leftmost lane to the rightmost lane of a specific traffic direction,
#  - `14` if the position is on the outer hard shoulder, i.e. the hard should adjacent to rightmost lane (if present).
# 
#  For left-hand traffic roads, the value shall be set to:
#  - `-1` if the position is off, i.e. besides the road,
#  - `0` if the position is on the inner hard shoulder, i.e. the hard should adjacent to the rightmost lane,
#  - `n` (`n > 0` and `n < 14`), if the position is on the n-th driving lane counted from the rightmost lane to the leftmost lane of a specific traffic direction,
#  - `14` if the position is on the outer hard shoulder, i.e. the hard should adjacent to leftmost lane (if present).
# 
#   @note: in practice this means that the position is counted from "inside" to "outside" no matter which traffic practice is used.
# 
#  If the carriageway allows only traffic in one direction (e.g. in case of dual or multiple carriageway roads), the position is counted from the physical border of the carriageway.
#  If the carriageway allows traffic in both directions and there is no physical delimitation between traffic directions (e.g. on a single carrriageway road),
#  the position is counted from the legal (i.e. optical) separation between traffic directions (horizontal marking).
# 
#  If not indicated otherwise (by lane markings or traffic signs), the legal separation on carriageways allowing traffic on both directions is identified as follows:
#  - If the total number of lanes N is even, the lanes are divided evenly between the traffic directions starting from the outside of the carriageway on both sides and the
#    imaginary separation between traffic directions is on the border between the even number of lanes N/2.
#  - If the total number of lanes N is odd, the lanes are divided evenly between traffic direction starting from the outside of the carriageway on both sides.
#    The remaining middle lane is assigned to both traffic directions as innermost lane.
# 
#  @category: Road topology information
#  @revision: Description of the legal separation of carriageways added in V2.2.1
#   
# ASN.1 Definition:
# INTEGER { offTheRoad(-1), innerHardShoulder(0), outerHardShoulder(14) }(-1..14) 
# 
# Element type: INTEGER
#
# ********** START of LanePosition **********
#

int8            value

int8            MIN                   = -1
int8            MAX                   = 14

int8            V_OFF_THE_ROAD        = -1
int8            V_INNER_HARD_SHOULDER = 0
int8            V_OUTER_HARD_SHOULDER = 14

# ********** END of LanePosition   **********
