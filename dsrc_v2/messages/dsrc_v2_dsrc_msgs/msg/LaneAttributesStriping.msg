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
# BIT STRING { stripeToConnectingLanesRevocableLane(0), stripeDrawOnLeft(1), stripeDrawOnRight(2), stripeToConnectingLanesLeft(3), stripeToConnectingLanesRight(4), stripeToConnectingLanesAhead(5) }(SIZE(16)) 
# 
# Element type: BIT STRING
#
# ********** START of LaneAttributesStriping **********
#

bool[]          values

uint8           MIN                                       = 16
uint8           MAX                                       = 16

uint8           STRIPE_TO_CONNECTING_LANES_REVOCABLE_LANE = 0
uint8           STRIPE_DRAW_ON_LEFT                       = 1
uint8           STRIPE_DRAW_ON_RIGHT                      = 2
uint8           STRIPE_TO_CONNECTING_LANES_LEFT           = 3
uint8           STRIPE_TO_CONNECTING_LANES_RIGHT          = 4
uint8           STRIPE_TO_CONNECTING_LANES_AHEAD          = 5

# ********** END of LaneAttributesStriping   **********
