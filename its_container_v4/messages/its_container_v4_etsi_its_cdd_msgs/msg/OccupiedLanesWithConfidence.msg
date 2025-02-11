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
#  This DF represents a set of lanes which are partially or fully occupied by an object or event at an externally defined reference position.
# 
#  @note: In contrast to @ref GeneralizedLanePosition, the dimension of the object or event area (width and length) is taken into account to determine the occupancy,
#  i.e. this DF describes the lanes which are blocked by an object or event and not the position of the object / event itself. A confidence is used to describe the
#  probability that exactly all the provided lanes are occupied.
# 
#  It shall include the following components:
# 
#  @field lanePositionBased: a set of up to `4` lanes that are partially or fully occupied by an object or event, ordered by increasing value of @ref LanePosition.
#  Lanes that are partially occupied can be described using the component lanePositionWithLateralDetails of @ref  Options, with the following constraints:
#  The distance to lane borders which are covered by the object / event shall be set to 0. Only the distances to the leftmost and/or rightmost border which are not covered by
#  the object / event shall be provided with values > 0. Those values shall be added to the respective instances of @ref LanePositionOptions, i.e. the first entry shall contain the component distanceToLeftBorder > 0 ,
#  and/or the last entry shall contain the component distanceToRightBorder > 0; the respective other components of these entries shall be set to 0.
# 
#  @field mapBased: optional lane information described in the context of a MAPEM as specified in ETSI TS 103 301 [15].
#  If present, it shall describe the same lane(s) as listed in the component lanePositionBased, but using the lane identification of the MAPEM. This component can be used only if a
#  MAPEM is available for the reference position (e.g. on an intersection): In this case it is used as a synonym to the mandatory component lanePositionBased.
# 
#  @field confidence: mandatory confidence information for expressing the probability that all the provided lanes are occupied. It also provides information on how the lane
#  information were generated. If none of the sensors were used, the lane information is assumed to be derived directly from the absolute reference position and the related dimension.
# 
#  @category: Road Topology information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    lanePositionBased SEQUENCE(SIZE(1..4)) OF LanePositionOptions,
#    mapBased SEQUENCE(SIZE(1..4)) OF MapPosition OPTIONAL,
#    confidence MetaInformation,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of OccupiedLanesWithConfidence **********
#

OccupiedLanesWithConfidenceLanePositionBased lane_position_based # a set of up to `4` lanes that are partially or fully occupied by an object or event, ordered by increasing value of @ref LanePosition.
OccupiedLanesWithConfidenceMapBased[]        map_based           # optional lane information described in the context of a MAPEM as specified in ETSI TS 103 301 [15].
                                                                 # OPTIONAL
MetaInformation                              confidence          # mandatory confidence information for expressing the probability that all the provided lanes are occupied. It also provides information on how the lane

# ********** END of OccupiedLanesWithConfidence   **********
