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
#  This DE represents the possible VRU environment conditions.
# 
#  - The value shall be set to:
#  - 0 `unavailable`            - to indicate that the information on the type of environment is unavailable,
#  - 1 `intersectionCrossing`   - to indicate that the VRU is on an intersection or crossing,
#  - 2 `zebraCrossing`          - to indicate that the VRU is on a  zebra crossing (crosswalk),
#  - 3 `sidewalk`               - to indicate that the VRU is on a sidewalk,
#  - 4 `onVehicleRoad`          - to indicate that the VRU is on a traffic lane,
#  - 5 `protectedGeographicArea`- to indicate that the VRU is in a protected area.
#  - value 5 to 255             - are reserved for future usage. Value 255 is set to "max" in order to bound the size of the encoded field.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { unavailable(0), intersectionCrossing(1), zebraCrossing(2), sidewalk(3), onVehicleRoad(4), protectedGeographicArea(5), max(255) } 
# 
# Element type: ENUMERATED
#
# ********** START of VruEnvironment **********
#

int32           value

int32           MIN                         = 0
int32           MAX                         = 255
int32           UNAVAILABLE                 = 0

int32           V_UNAVAILABLE               = 0
int32           V_INTERSECTION_CROSSING     = 1
int32           V_ZEBRA_CROSSING            = 2
int32           V_SIDEWALK                  = 3
int32           V_ON_VEHICLE_ROAD           = 4
int32           V_PROTECTED_GEOGRAPHIC_AREA = 5
int32           V_MAX                       = 255

# ********** END of VruEnvironment   **********
