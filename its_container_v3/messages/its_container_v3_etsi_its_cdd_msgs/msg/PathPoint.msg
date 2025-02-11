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
#  This DF defines an offset waypoint position within a path.
# 
#  It shall include the following components:
# 
#  @field pathPosition: The waypoint position defined as an offset position with regards to a pre-defined reference position.
# 
#  @field pathDeltaTime: The optional travel time separated from a waypoint to the predefined reference position.
# 
#  @category GeoReference information
#  @revision: semantics updated in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    pathPosition DeltaReferencePosition,
#    pathDeltaTime PathDeltaTime OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PathPoint **********
#

DeltaReferencePosition path_position   # The waypoint position defined as an offset position with regards to a pre-defined reference position.
PathDeltaTime[]        path_delta_time # The optional travel time separated from a waypoint to the predefined reference position.
                                       # OPTIONAL

# ********** END of PathPoint   **********
