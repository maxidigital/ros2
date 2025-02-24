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
#  The DE indicates if a vehicle is carrying goods in the special transport conditions.
# 
#  The corresponding bit shall be set to 1 under the following conditions:
#  - 0 `heavyLoad`        - the vehicle is carrying goods with heavy load,
#  - 1 `excessWidth`      - the vehicle is carrying goods in excess of width,
#  - 2 `excessLength`     - the vehicle is carrying goods in excess of length,
#  - 3 `excessHeight`     - the vehicle is carrying goods in excess of height.
# 
#  Otherwise, the corresponding bit shall be set to 0.
#  @category Vehicle information
#  @revision: Description revised in V2.1.1
#   
# ASN.1 Definition:
# BIT STRING { heavyLoad(0), excessWidth(1), excessLength(2), excessHeight(3) }(SIZE(4)) 
# 
# Element type: BIT STRING
#
# ********** START of SpecialTransportType **********
#

bool[]          values

uint8           MIN             = 4
uint8           MAX             = 4

uint8           HEAVY_LOAD      = 0
uint8           EXCESS_WIDTH    = 1
uint8           EXCESS_LENGTH   = 2
uint8           EXCESS_HEIGHT   = 3

# ********** END of SpecialTransportType   **********
