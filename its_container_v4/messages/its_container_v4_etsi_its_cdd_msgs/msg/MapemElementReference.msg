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
#  This DF provides references to an element described in a MAPEM according to ETSI TS 103 301 [i.15], such as a lane or connection at a specific intersection or road segment.
# 
#  It shall include the following components:
# 
#  @field mapReference: the optional reference to a MAPEM that describes the intersection or road segment. It is absent if the MAPEM topology is known from the context.
# 
#  @field laneIds: the optional list of the identifiers of the lanes to be referenced.
# 
#  @field connectionIds: the optional list of the identifiers of the connections to be referenced.
# 
#  @category: Road topology information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    mapReference MapReference OPTIONAL,
#    laneIds MapemLaneList OPTIONAL,
#    connectionIds MapemConnectionList( (WITH COMPONENTS{
#   ..., laneIds PRESENT
# })| (WITH COMPONENTS{
#   ..., connectionIds PRESENT
# }))OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of MapemElementReference **********
#

MapReference[]        map_reference   # the optional reference to a MAPEM that describes the intersection or road segment. It is absent if the MAPEM topology is known from the context.
                                      # OPTIONAL
MapemLaneList[]       lane_ids        # the optional list of the identifiers of the lanes to be referenced.
                                      # OPTIONAL
MapemConnectionList[] connection_ids  # the optional list of the identifiers of the connections to be referenced.
                                      # OPTIONAL

# ********** END of MapemElementReference   **********
