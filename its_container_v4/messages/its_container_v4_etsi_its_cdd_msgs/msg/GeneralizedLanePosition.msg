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
#  This DF represents the top-level DF to represent a lane position. A lane position is a transversal position on the carriageway at a specific longitudinal position, in resolution of lanes of the carriageway.
# 
#  @note: This DF is the most general way to represent a lane position: it provides a complete set of information regarding a transversal (dimensionless) position on the carriageway at a specific
#  reference position, i.e. it provides different options and synonyms to represent the lane at which the reference position (the point) is located. A confidence is used to describe the probability
#  that the object is located in the provided lane. The dimension of the object or extension of an area are not considered: See @ref OccupiedLanesWithConfidence for describing the occupation of lanes,
#  where the dimensions of an object or the extension of an area is considered.
# 
#  It shall include the following components:
# 
#  @field lanePositionBased: lane position information for a defined reference position.
# 
#  @field mapBased: optional lane position information described in the context of a MAPEM as specified in ETSI TS 103 301 [15].
#  If present, it shall describe the same reference position using the lane identification in the MAPEM. This component can be used only if a MAPEM is available for the reference position
#  (e.g. on an intersection): In this case it is used as a synonym to the mandatory component lanePositionBased.
# 
#  @field confidence: confidence information for expressing the probability that the object is located at the indicated lane.
#  If the value of the component lanePositionBased is generated directly from the absolute reference position and reference topology information,
#  no sensor shall be indicated in the component usedDetectionInformation of the @ref MetaInformation.
# 
#  @category: Road Topology information
#  @revision: newly created in V2.2.1. The previous DF GeneralizedLanePosition is now renamed to @ref LanePositionOptions.
#   
# ASN.1 Definition:
# SEQUENCE {
#    lanePositionBased LanePositionOptions,
#    mapBased MapPosition OPTIONAL,
#    confidence MetaInformation,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of GeneralizedLanePosition **********
#

LanePositionOptions lane_position_based # lane position information for a defined reference position.
MapPosition[]       map_based           # optional lane position information described in the context of a MAPEM as specified in ETSI TS 103 301 [15].
                                        # OPTIONAL
MetaInformation     confidence          # confidence information for expressing the probability that the object is located at the indicated lane.

# ********** END of GeneralizedLanePosition   **********
