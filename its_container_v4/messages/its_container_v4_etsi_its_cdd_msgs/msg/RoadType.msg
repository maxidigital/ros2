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
#  This DE indicates the type of a road segment.
# 
#  The value shall be set to:
#  - 0 `urban-NoStructuralSeparationToOppositeLanes`       - for an urban road with no structural separation between lanes carrying traffic in opposite directions,
#  - 1 `urban-WithStructuralSeparationToOppositeLanes`     - for an urban road with structural separation between lanes carrying traffic in opposite directions,
#  - 2 `nonUrban-NoStructuralSeparationToOppositeLanes`    - for an non urban road with no structural separation between lanes carrying traffic in opposite directions,
#  - 3 `nonUrban-WithStructuralSeparationToOppositeLanes`  - for an non urban road with structural separation between lanes carrying traffic in opposite directions.
# 
#  @category: Road Topology Information
#  @revision: Editorial update in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { urban-NoStructuralSeparationToOppositeLanes(0), urban-WithStructuralSeparationToOppositeLanes(1), nonUrban-NoStructuralSeparationToOppositeLanes(2), nonUrban-WithStructuralSeparationToOppositeLanes(3) } 
# 
# Element type: ENUMERATED
#
# ********** START of RoadType **********
#

int32           value

int32           MIN                                                      = 0
int32           MAX                                                      = 3

int32           V_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES       = 0
int32           V_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES     = 1
int32           V_NON_URBAN_NO_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES   = 2
int32           V_NON_URBAN_WITH_STRUCTURAL_SEPARATION_TO_OPPOSITE_LANES = 3

# ********** END of RoadType   **********
