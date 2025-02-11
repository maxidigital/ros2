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
#  This DF provides the reference to the information contained in a MAPEM according to ETSI TS 103 301 [15].
# 
#  The following options are provided:
# 
#  @field roadsegment: option that identifies the description of a road segment contained in a MAPEM.
# 
#  @field intersection: option that identifies the description of an intersection contained in a MAPEM.
# 
#  @category: Road topology information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# CHOICE {
#    roadsegment RoadSegmentReferenceId,
#    intersection IntersectionReferenceId 
# } 
# 
# Element type: CHOICE
#
# ********** START of MapReference **********
#

RoadSegmentReferenceId[]  roadsegment     #  choice = 0
IntersectionReferenceId[] intersection    #  choice = 1

uint8                     LENGTH          = 2

# ********** END of MapReference   **********
