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
#  This DF represents a path towards a specific point specified in the @ref EventZone.
# 
#  It shall include the following components:
# 
#  @field pointOfEventZone: the ordinal number of the point within the DF EventZone, i.e. within the list of EventPoints.
# 
#  @field path: the associated path towards the point specified in pointOfEventZone.
#  The first PathPoint presents an offset delta position with regards to the position of that pointOfEventZone.
# 
#  @category: GeoReference information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    pointOfEventZone INTEGER(1..23),
#    path Path 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PathExtended **********
#

PathExtendedPointOfEventZone point_of_event_zone # the ordinal number of the point within the DF EventZone, i.e. within the list of EventPoints.
Path                         path                # the associated path towards the point specified in pointOfEventZone.

# ********** END of PathExtended   **********
