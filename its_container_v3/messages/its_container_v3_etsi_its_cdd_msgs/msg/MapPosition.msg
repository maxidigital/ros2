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
#  This DF indicates a position on a topology description transmitted in a MAPEM according to ETSI TS 103 301 [15].
# 
#  It shall include the following components:
# 
#  @field mapReference: optionally identifies the MAPEM containing the topology information.
#  It is absent if the MAPEM topology is known from the context.
# 
#  @field laneId: optionally identifies the lane in the road segment or intersection topology on which the position is located.
# 
#  @field connectionId: optionally identifies the connection inside the conflict area of an intersection, i.e. it identifies a trajectory for travelling through the
#  conflict area of an intersection which connects e.g an ingress with an egress lane.
# 
#  @field longitudinalLanePosition: optionally indicates the longitudinal offset of the map-matched position of the object along the lane or connection.
# 
#  @category: Road topology information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    mapReference MapReference OPTIONAL,
#    laneId Identifier1B OPTIONAL,
#    connectionId Identifier1B OPTIONAL,
#    longitudinalLanePosition LongitudinalLanePosition( (WITH COMPONENTS{
#   ..., laneId PRESENT, connectionId ABSENT
# })| (WITH COMPONENTS{
#   ..., laneId ABSENT, connectionId PRESENT
# }))OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of MapPosition **********
#

MapReference[]             map_reference              # optionally identifies the MAPEM containing the topology information.
                                                      # OPTIONAL
Identifier1B[]             lane_id                    # optionally identifies the lane in the road segment or intersection topology on which the position is located.
                                                      # OPTIONAL
Identifier1B[]             connection_id              # optionally identifies the connection inside the conflict area of an intersection, i.e. it identifies a trajectory for travelling through the
                                                      # OPTIONAL
LongitudinalLanePosition[] longitudinal_lane_position # optionally indicates the longitudinal offset of the map-matched position of the object along the lane or connection.
                                                      # OPTIONAL

# ********** END of MapPosition   **********
