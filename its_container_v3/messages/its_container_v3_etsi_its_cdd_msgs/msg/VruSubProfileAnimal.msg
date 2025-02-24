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
#  This DE indicates the profile of an animal
# 
#  The value shall be set to:
#  - 0 `unavailable`     - to indicate that the information  is unavailable,
#  - 1 `wild-animal`     - to indicate a animal living in the wildness,
#  - 2 `farm-animal`     - to indicate an animal beloning to a farm,
#  - 3 `service-animal`  - to indicate an animal that supports a human being.
#  - 4 to 15             - are reserved for future usage. Value 15 is set to "max" in order to bound the size of the encoded field.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { unavailable(0), wild-animal(1), farm-animal(2), service-animal(3), max(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of VruSubProfileAnimal **********
#

int32           value

int32           MIN              = 0
int32           MAX              = 15
int32           UNAVAILABLE      = 0

int32           V_UNAVAILABLE    = 0
int32           V_WILD_ANIMAL    = 1
int32           V_FARM_ANIMAL    = 2
int32           V_SERVICE_ANIMAL = 3
int32           V_MAX            = 15

# ********** END of VruSubProfileAnimal   **********
