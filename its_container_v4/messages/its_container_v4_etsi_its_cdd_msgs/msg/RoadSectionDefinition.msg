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
#  This DF provides the basic topological definition of a road section.
# 
#  It shall include the following components:
# 
#  @field startingPointSection: the position of the starting point of the section.
# 
#  @field lengthOfSection: the optional length of the section along the road profile (i.e. including curves).
# 
#  @field endingPointSection: the optional position of the ending point of the section.
#  If this component is absent, the ending position is implicitly defined by other means, e.g. the starting point of the next RoadConfigurationSection, or the section�s length.
# 
#  @field connectedPaths: the identifier(s) of the path(s) having one or an ordered subset of waypoints located upstream of the RoadConfigurationSection� starting point.
# 
#  @field includedPaths: the identifier(s) of the trace(s) that covers (either with all its length or with a part of it) a RoadConfigurationSection.
# 
#  @field isEventZoneIncluded: indicates, if set to TRUE, that the @ref EventZone incl. its reference position covers a RoadConfigurationSection (either with all its length or with a part of it).
# 
#  @field isEventZoneConnected: indicates, if set to TRUE, that the @ref EventZone incl. its reference position has one or an ordered subset of waypoints located upstream of the RoadConfigurationSection� starting point.
# 
#  @category: Road topology information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    startingPointSection GeoPosition,
#    lengthOfSection StandardLength2B OPTIONAL,
#    endingPointSection GeoPosition OPTIONAL,
#    connectedPaths PathReferences,
#    includedPaths PathReferences,
#    isEventZoneIncluded BOOLEAN,
#    isEventZoneConnected BOOLEAN,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RoadSectionDefinition **********
#

GeoPosition                               starting_point_section  # the position of the starting point of the section.
StandardLength2B[]                        length_of_section       # the optional length of the section along the road profile (i.e. including curves).
                                                                  # OPTIONAL
GeoPosition[]                             ending_point_section    # the optional position of the ending point of the section.
                                                                  # OPTIONAL
PathReferences                            connected_paths         # the identifier(s) of the path(s) having one or an ordered subset of waypoints located upstream of the RoadConfigurationSection� starting point.
PathReferences                            included_paths          # the identifier(s) of the trace(s) that covers (either with all its length or with a part of it) a RoadConfigurationSection.
RoadSectionDefinitionIsEventZoneIncluded  is_event_zone_included  # indicates, if set to TRUE, that the @ref EventZone incl. its reference position covers a RoadConfigurationSection (either with all its length or with a part of it).
RoadSectionDefinitionIsEventZoneConnected is_event_zone_connected # indicates, if set to TRUE, that the @ref EventZone incl. its reference position has one or an ordered subset of waypoints located upstream of the RoadConfigurationSection� starting point.

# ********** END of RoadSectionDefinition   **********
