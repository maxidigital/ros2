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
#  This DF represents a set of options to describe a lane position and is the second level DF to represent a lane position. The top-level DFs are @ref GeneralizedLanePosition or @ref OccupiedLanesWithConfidence.
#  A lane position is a transversal position on the carriageway at a specific longitudinal position, in resolution of lanes of the carriageway.
# 
#  The following options are available:
# 
#  @field simplelanePosition: a single lane position without any additional context information.
# 
#  @field simpleLaneType: a lane type, to be used when the lane position is unknown but the type of lane is known. This can be used in scenarios where a certain confidence about the used lane type is given
#  but no or limited knowledge about the absolute lane number is available. For example, a cyclist on a cycle-lane or vehicles on a specific lane that is unique for the part of the road (e.g. a bus lane).
# 
#  @field detailedlanePosition: a single lane position with additional lane details.
# 
#  @field lanePositionWithLateralDetails: a single lane position with additional details and the lateral position within the lane.
# 
#  @field trafficIslandPosition: a position on a traffic island, i.e. between two lanes.
# 
#  @category: Road Topology information
#  @revision: Created in V2.2.1 from the DF GeneralizedLanePosition of V2.1.1.
#   
# ASN.1 Definition:
# CHOICE {
#    simplelanePosition LanePosition,
#    simpleLaneType LaneType,
#    detailedlanePosition LanePositionAndType,
#    lanePositionWithLateralDetails LanePositionWithLateralDetails,
#    trafficIslandPosition TrafficIslandPosition,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of LanePositionOptions **********
#

LanePosition[]                   simplelane_position                #  choice = 0
LaneType[]                       simple_lane_type                   #  choice = 1
LanePositionAndType[]            detailedlane_position              #  choice = 2
LanePositionWithLateralDetails[] lane_position_with_lateral_details #  choice = 3
TrafficIslandPosition[]          traffic_island_position            #  choice = 4

uint8                            LENGTH                             = 5

# ********** END of LanePositionOptions   **********
