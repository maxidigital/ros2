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
#  This DE represents the value of the sub cause codes of the @ref CauseCode `impassability`
# 
#  The value shall be set to:
#  - 0 `unavailable`              - in case further detailed information about the unmanaged road blockage is unavailable,
#  - 1 `flooding          `       - in case the road is affected by flooding,
#  - 2 `dangerOfAvalanches`       - in case the road is at risk of being affected or blocked by avalanches,
#  - 3 `blastingOfAvalanches`     - in case there is an active blasting of avalanches on or near the road,
#  - 4 `landslips`                - in case the road is affected by landslips,
#  - 5 `chemicalSpillage`         - in case the road is affected by chemical spillage,
#  - 6 `winterClosure`            - in case the road is impassable due to a winter closure.
#  - 7-255                        - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), flooding(1), dangerOfAvalanches(2), blastingOfAvalanches(3), landslips(4), chemicalSpillage(5), winterClosure(6) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of ImpassabilitySubCauseCode **********
#

uint8           value

uint8           MIN                      = 0
uint8           MAX                      = 255
uint8           UNAVAILABLE              = 0

uint8           V_UNAVAILABLE            = 0
uint8           V_FLOODING               = 1
uint8           V_DANGER_OF_AVALANCHES   = 2
uint8           V_BLASTING_OF_AVALANCHES = 3
uint8           V_LANDSLIPS              = 4
uint8           V_CHEMICAL_SPILLAGE      = 5
uint8           V_WINTER_CLOSURE         = 6

# ********** END of ImpassabilitySubCauseCode   **********
