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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE Identifies all the VRU profile types within a cluster.
#  It consist of a Bitmap encoding VRU profiles, to allow multiple profiles to be indicated in a single cluster (heterogeneous cluster if more than one profile).
# 
#  The corresponding bit shall be set to 1 under the following conditions:
#  - 0 `pedestrian`  - indicates that the VRU cluster contains at least one pedestrian VRU,
#  - 1 `bicycle`     - indicates that the VRU cluster contains at least one bicycle VRU member,
#  - 2 `motorcyclist`- indicates that the VRU cluster contains at least one motorcycle VRU member,
#  - 3 `animal`      - indicates that the VRU cluster contains at least one animal VRU member.
# 
#  Otherwise, the corresponding bit shall be set to 0.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# BIT STRING { pedestrian(0), bicyclist(1), motorcyclist(2), animal(3) }(SIZE(4)) 
# 
# Element type: BIT STRING
#
# ********** START of VruClusterProfiles **********
#

bool[]          values

uint8           MIN             = 4
uint8           MAX             = 4

uint8           PEDESTRIAN      = 0
uint8           BICYCLIST       = 1
uint8           MOTORCYCLIST    = 2
uint8           ANIMAL          = 3

# ********** END of VruClusterProfiles   **********
