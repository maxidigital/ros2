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
#  This DE represents the possible VRU environment conditions.
# 
#  - The value shall be set to:
#  - 0 `unavailable`            - to indicate that the information on the type of environment is unavailable,
#  - 1 `intersectionCrossing`   - to indicate that the VRU is on an intersection or crossing,
#  - 2 `zebraCrossing`          - to indicate that the VRU is on a  zebra crossing (crosswalk),
#  - 3 `sidewalk`               - to indicate that the VRU is on a sidewalk,
#  - 4 `onVehicleRoad`          - to indicate that the VRU is on a traffic lane,
#  - 5 `protectedGeographicArea`- to indicate that the VRU is in a protected area.
#  - value 6 to 15              - are reserved for future usage.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1, type changed from ENUMERATED to INTEGER in V2.2.1 and range changed from 0..255 to 0..15
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), intersectionCrossing(1), zebraCrossing(2), sidewalk(3), onVehicleRoad(4), protectedGeographicArea(5) }(0..15) 
# 
# Element type: INTEGER
#
# ********** START of VruEnvironment **********
#

uint8           value

uint8           MIN                         = 0
uint8           MAX                         = 15
uint8           UNAVAILABLE                 = 0

uint8           V_UNAVAILABLE               = 0
uint8           V_INTERSECTION_CROSSING     = 1
uint8           V_ZEBRA_CROSSING            = 2
uint8           V_SIDEWALK                  = 3
uint8           V_ON_VEHICLE_ROAD           = 4
uint8           V_PROTECTED_GEOGRAPHIC_AREA = 5

# ********** END of VruEnvironment   **********
