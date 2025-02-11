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
#  This DF provides configuration information about a road section.
# 
#  It shall include the following components:
# 
#  @field roadSectionDefinition: the topological definition of the road section for which the information in the other components applies throughout its entire length.
# 
#  @field roadType: the optional type of road on which the section is located.
# 
#  @field laneConfiguration: the optional configuration of the road section in terms of basic information per lane.
# 
#  @field mapemConfiguration: the optional configuration of the road section in terms of MAPEM lanes or connections.
# 
#  @category: Road topology information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    roadSectionDefinition RoadSectionDefinition,
#    roadType RoadType OPTIONAL,
#    laneConfiguration BasicLaneConfiguration OPTIONAL,
#    mapemConfiguration MapemConfiguration( (WITH COMPONENTS{
#   ..., laneConfiguration PRESENT
# })| (WITH COMPONENTS{
#   ..., mapemConfiguration PRESENT
# }))OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RoadConfigurationSection **********
#

RoadSectionDefinition    road_section_definition # the topological definition of the road section for which the information in the other components applies throughout its entire length.
RoadType[]               road_type               # the optional type of road on which the section is located.
                                                 # OPTIONAL
BasicLaneConfiguration[] lane_configuration      # the optional configuration of the road section in terms of basic information per lane.
                                                 # OPTIONAL
MapemConfiguration[]     mapem_configuration     # the optional configuration of the road section in terms of MAPEM lanes or connections.
                                                 # OPTIONAL

# ********** END of RoadConfigurationSection   **********
