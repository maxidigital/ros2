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
#  This DE indicates the profile of a VRU and its light VRU vehicle / mounted animal.
# 
#  The value shall be set to:
#  - 0 `unavailable`           - to indicate that the information  is unavailable,
#  - 1 `bicyclist `            - to indicate a cycle and bicyclist,
#  - 2 `wheelchair-user`       - to indicate a wheelchair and its user,
#  - 3 `horse-and-rider`       - to indicate a horse and rider,
#  - 4 `rollerskater`          - to indicate a rolleskater and skater,
#  - 5 `e-scooter`             - to indicate an e-scooter and rider,
#  - 6 `personal-transporter`  - to indicate a personal-transporter and rider,
#  - 7 `pedelec`               - to indicate a pedelec and rider,
#  - 8 `speed-pedelec`         - to indicate a speed-pedelec and rider.
#  - 9 to 15                   - are reserved for future usage.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), bicyclist(1), wheelchair-user(2), horse-and-rider(3), rollerskater(4), e-scooter(5), personal-transporter(6), pedelec(7), speed-pedelec(8) }(0..15) 
# 
# Element type: INTEGER
#
# ********** START of VruSubProfileBicyclist **********
#

uint8           value

uint8           MIN                    = 0
uint8           MAX                    = 15
uint8           UNAVAILABLE            = 0

uint8           V_UNAVAILABLE          = 0
uint8           V_BICYCLIST            = 1
uint8           V_WHEELCHAIR_USER      = 2
uint8           V_HORSE_AND_RIDER      = 3
uint8           V_ROLLERSKATER         = 4
uint8           V_E_SCOOTER            = 5
uint8           V_PERSONAL_TRANSPORTER = 6
uint8           V_PEDELEC              = 7
uint8           V_SPEED_PEDELEC        = 8

# ********** END of VruSubProfileBicyclist   **********
