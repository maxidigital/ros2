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
#  This DF indicates a transversal position in relation to the different lanes of the road.
#  It is an extension of DE_LanePosition to cover locations (sidewalks, bicycle paths), where Vehicle ITS-S would normally not be present.
# 
#  The following options are available:
# 
#  @field trafficLanePosition: a position on a traffic lane.
# 
#  @field nonTrafficLanePosition: a position on a lane which is not a traffic lane.
# 
#  @field trafficIslandPosition: a position on a traffic island
# 
#  @field mapPosition: a position on a lane identified in a MAPEM.
# 
#  @category: Road Topology information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# CHOICE {
#    trafficLanePosition LanePosition,
#    nonTrafficLanePosition LanePositionAndType,
#    trafficIslandPosition TrafficIslandPosition,
#    mapPosition MapPosition,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of GeneralizedLanePosition **********
#

LanePosition[]          traffic_lane_position     #  choice = 0
LanePositionAndType[]   non_traffic_lane_position #  choice = 1
TrafficIslandPosition[] traffic_island_position   #  choice = 2
MapPosition[]           map_position              #  choice = 3

uint8                   LENGTH                    = 4

# ********** END of GeneralizedLanePosition   **********
