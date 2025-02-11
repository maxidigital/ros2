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
#  This DE indicates the profile of a pedestrian.
# 
#  The value shall be set to:
#  - 0 `unavailable`             - to indicate that the information on is unavailable,
#  - 1 `ordinary-pedestrian`     - to indicate a pedestrian to which no more-specific profile applies,
#  - 2 `road-worker`             - to indicate a pedestrian with the role of a road worker,
#  - 3 `first-responder`         - to indicate a pedestrian with the role of a first responder.
#  - value 4 to 15               - are reserved for future usage.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1, type changed from ENUMERATED to INTEGER in V2.2.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), ordinary-pedestrian(1), road-worker(2), first-responder(3) }(0..15) 
# 
# Element type: INTEGER
#
# ********** START of VruSubProfilePedestrian **********
#

uint8           value

uint8           MIN                   = 0
uint8           MAX                   = 15
uint8           UNAVAILABLE           = 0

uint8           V_UNAVAILABLE         = 0
uint8           V_ORDINARY_PEDESTRIAN = 1
uint8           V_ROAD_WORKER         = 2
uint8           V_FIRST_RESPONDER     = 3

# ********** END of VruSubProfilePedestrian   **********
