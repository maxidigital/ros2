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
#  This DE represents the value of the sub cause code of the @ref CauseCode `hazardousLocation-AnimalOnTheRoad`.
# 
#  The value shall be set to:
#  - 0 - `unavailable`  - in case further detailed information on the animal on the road event is unavailable,
#  - 1 - `wildAnimals`  - in case wild animals are detected on the road,
#  - 2 - `herdOfAnimals`- in case herd of animals are detected on the road,
#  - 3 - `smallAnimals` - in case small size animals are detected on the road,
#  - 4 - `largeAnimals` - in case large size animals are detected on the road.
#  - 5-255              - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), wildAnimals(1), herdOfAnimals(2), smallAnimals(3), largeAnimals(4) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of HazardousLocationAnimalOnTheRoadSubCauseCode **********
#

uint8           value

uint8           MIN               = 0
uint8           MAX               = 255
uint8           UNAVAILABLE       = 0

uint8           V_UNAVAILABLE     = 0
uint8           V_WILD_ANIMALS    = 1
uint8           V_HERD_OF_ANIMALS = 2
uint8           V_SMALL_ANIMALS   = 3
uint8           V_LARGE_ANIMALS   = 4

# ********** END of HazardousLocationAnimalOnTheRoadSubCauseCode   **********
