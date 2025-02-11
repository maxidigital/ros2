#*                                                                             *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)             *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)               *
#*                                                                             *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore    *
#*                                                                             *
#* This program and the accompanying materials are made available under the    *
#* terms of the Eclipse Public License 2.0 which is available at               *
#* http://www.eclipse.org/legal/epl-2.0.                                       *
#*                                                                             *
#* SPDX-License-Identifier: EPL-2.0                                            *
#*                                                                             *
#*                                                                             *
#* File automatically generated with DLR Wind v2                               *
#*                                                                             *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0         *
#*                                                                             *
#* Module: DSRC {iso(1) standard(0) signalizedIntersection(19091) profilec(2)  *
#*     dsrc(2) version2(2)}                                                    *
#*                                                                             *
#* For support contact v2x-ts@dlr.de                                           *
#*                                                                             *

#
# ASN.1 Definition:
# SEQUENCE {
#    laneID LaneID,
#    name DescriptiveName OPTIONAL,
#    ingressApproach ApproachID OPTIONAL,
#    egressApproach ApproachID OPTIONAL,
#    laneAttributes LaneAttributes,
#    maneuvers AllowedManeuvers OPTIONAL,
#    nodeList NodeListXY,
#    connectsTo ConnectsToList OPTIONAL,
#    overlays OverlayLaneList OPTIONAL,
#    regional SEQUENCE(SIZE(1..4)) OF RegionalExtension AVOID OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of GenericLane **********
#

LaneID                lane_id
DescriptiveName[]     name             # OPTIONAL
ApproachID[]          ingress_approach # OPTIONAL
ApproachID[]          egress_approach  # OPTIONAL
LaneAttributes        lane_attributes
AllowedManeuvers[]    maneuvers        # OPTIONAL
NodeListXY            node_list
ConnectsToList[]      connects_to      # OPTIONAL
OverlayLaneList[]     overlays         # OPTIONAL
GenericLaneRegional[] regional         # OPTIONAL

# ********** END of GenericLane   **********
