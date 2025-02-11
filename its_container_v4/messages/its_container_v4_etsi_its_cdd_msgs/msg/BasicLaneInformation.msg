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
#  This DF provides basic information about a single lane of a road segment.
#  It includes the following components:
# 
#  @field laneNumber: the number associated to the lane that provides a transversal identification.
# 
#  @field direction: the direction of traffic flow allowed on the lane.
# 
#  @field laneWidth: the optional width of the lane.
# 
#  @field connectingLane: the number of the connecting lane in the next road section, i.e. the number of the lane which the vehicle will use when travelling from one section to the next,
#  if it does not actively change lanes. If this component is absent, the lane name number remains the same in the next section.
# 
#  @field connectingRoadSection: the identifier of the next road section in direction of traffic, that is connecting to the current road section.
#  If this component is absent, the connecting road section is the one following the instance where this DF is placed in the @ref RoadConfigurationSectionList.
# 
#  @category: Road topology information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    laneNumber LanePosition,
#    direction Direction,
#    laneWidth LaneWidth OPTIONAL,
#    connectingLane LanePosition OPTIONAL,
#    connectingRoadSection RoadSectionId( (WITH COMPONENTS{
#   ..., connectingLane PRESENT
# })| (WITH COMPONENTS{
#   ..., connectingLane ABSENT, connectingRoadSection ABSENT
# }))OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of BasicLaneInformation **********
#

LanePosition    lane_number             # the number associated to the lane that provides a transversal identification.
Direction       direction               # the direction of traffic flow allowed on the lane.
LaneWidth[]     lane_width              # the optional width of the lane.
                                        # OPTIONAL
LanePosition[]  connecting_lane         # the number of the connecting lane in the next road section, i.e. the number of the lane which the vehicle will use when travelling from one section to the next,
                                        # OPTIONAL
RoadSectionId[] connecting_road_section # the identifier of the next road section in direction of traffic, that is connecting to the current road section.
                                        # OPTIONAL

# ********** END of BasicLaneInformation   **********
