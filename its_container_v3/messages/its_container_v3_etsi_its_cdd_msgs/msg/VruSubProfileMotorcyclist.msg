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
#  This DE indicates the profile of a motorcyclist and corresponding vehicle.
# 
#  The value shall be set to:
#  - 0 `unavailable `                  - to indicate that the information  is unavailable,
#  - 1 `moped`                         - to indicate a moped and rider,
#  - 2 `motorcycle`                    - to indicate a motorcycle and rider,
#  - 3 `motorcycle-and-sidecar-right`  - to indicate a motorcycle with sidecar on the right and rider,
#  - 4 `motorcycle-and-sidecar-left`   - to indicate  a motorcycle with sidecar on the left and rider.
#  - 5 to 15                           - are reserved for future usage. Value 15 is set to "max" in order to bound the size of the encoded field.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { unavailable(0), moped(1), motorcycle(2), motorcycle-and-sidecar-right(3), motorcycle-and-sidecar-left(4), max(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of VruSubProfileMotorcyclist **********
#

int32           value

int32           MIN                            = 0
int32           MAX                            = 15
int32           UNAVAILABLE                    = 0

int32           V_UNAVAILABLE                  = 0
int32           V_MOPED                        = 1
int32           V_MOTORCYCLE                   = 2
int32           V_MOTORCYCLE_AND_SIDECAR_RIGHT = 3
int32           V_MOTORCYCLE_AND_SIDECAR_LEFT  = 4
int32           V_MAX                          = 15

# ********** END of VruSubProfileMotorcyclist   **********
