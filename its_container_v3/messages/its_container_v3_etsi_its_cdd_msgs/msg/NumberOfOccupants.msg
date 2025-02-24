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
#  This DE represents the number of occupants in a vehicle.
# 
#  The value shall be set to:
#  - `n` (`n >= 0` and `n < 126`) for the number n of occupants,
#  - `126` for values equal to or higher than 125,
#  - `127` if information is not available.
# 
#  @category: Vehicle information
#  @revision: Editorial update in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { outOfRange(126), unavailable(127) }(0 .. 127) 
# 
# Element type: INTEGER
#
# ********** START of NumberOfOccupants **********
#

uint8           value

uint8           MIN             = 0
uint8           MAX             = 127
uint8           UNAVAILABLE     = 127
uint8           OUT_OF_RANGE    = 126

uint8           V_OUT_OF_RANGE  = 126
uint8           V_UNAVAILABLE   = 127

# ********** END of NumberOfOccupants   **********
