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
#  This DE indicates a traffic direction that is relevant to information indicated in a message.
# 
#  The value shall be set to:
#  - 0 `allTrafficDirections` - for all traffic directions,
#  - 1 `upstreamTraffic`      - for upstream traffic,
#  - 2 `downstreamTraffic`    - for downstream traffic,
#  - 3 `oppositeTraffic`      - for traffic in the opposite direction.
# 
#  The terms `upstream`, `downstream` and `oppositeTraffic` are relative to the event position.
# 
#  @note: Upstream traffic corresponds to the incoming traffic towards the event position,
#  and downstream traffic to the departing traffic away from the event position.
# 
#  @category: GeoReference information
#  @revision: Created in V2.1.1 from RelevanceTrafficDirection
#   
# ASN.1 Definition:
# ENUMERATED { allTrafficDirections(0), upstreamTraffic(1), downstreamTraffic(2), oppositeTraffic(3) } 
# 
# Element type: ENUMERATED
#
# ********** START of TrafficDirection **********
#

int32           value

int32           MIN                      = 0
int32           MAX                      = 3

int32           V_ALL_TRAFFIC_DIRECTIONS = 0
int32           V_UPSTREAM_TRAFFIC       = 1
int32           V_DOWNSTREAM_TRAFFIC     = 2
int32           V_OPPOSITE_TRAFFIC       = 3

# ********** END of TrafficDirection   **********
