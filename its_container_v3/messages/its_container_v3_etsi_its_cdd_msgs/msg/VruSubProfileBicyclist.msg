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
#  - 9 to 15                   - are reserved for future usage. Value 15 is set to "max" in order to bound the size of the encoded field.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { unavailable(0), bicyclist(1), wheelchair-user(2), horse-and-rider(3), rollerskater(4), e-scooter(5), personal-transporter(6), pedelec(7), speed-pedelec(8), max(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of VruSubProfileBicyclist **********
#

int32           value

int32           MIN                    = 0
int32           MAX                    = 15
int32           UNAVAILABLE            = 0

int32           V_UNAVAILABLE          = 0
int32           V_BICYCLIST            = 1
int32           V_WHEELCHAIR_USER      = 2
int32           V_HORSE_AND_RIDER      = 3
int32           V_ROLLERSKATER         = 4
int32           V_E_SCOOTER            = 5
int32           V_PERSONAL_TRANSPORTER = 6
int32           V_PEDELEC              = 7
int32           V_SPEED_PEDELEC        = 8
int32           V_MAX                  = 15

# ********** END of VruSubProfileBicyclist   **********
