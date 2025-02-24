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
#  This DE indicates the approximate size of a VRU including the VRU vehicle used.
# 
#  The value shall be set to:
#  - 0 `unavailable`    - to indicate that there is no matched size class or due to privacy reasons in profile 1,
#  - 1 `low`            - to indicate that the VRU size class is low depending on the VRU profile,
#  - 2 `medium`         - to indicate that the VRU size class is medium depending on the VRU profile,
#  - 3 `high`           - to indicate that the VRU size class is high depending on the VRU profile.
#  - 4 to 15            - are reserved for future usage. Value 15 is set to "max" in order to bound the size of the encoded field.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { unavailable(0), low(1), medium(2), high(3), max(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of VruSizeClass **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 15
int32           UNAVAILABLE     = 0

int32           V_UNAVAILABLE   = 0
int32           V_LOW           = 1
int32           V_MEDIUM        = 2
int32           V_HIGH          = 3
int32           V_MAX           = 15

# ********** END of VruSizeClass   **********
