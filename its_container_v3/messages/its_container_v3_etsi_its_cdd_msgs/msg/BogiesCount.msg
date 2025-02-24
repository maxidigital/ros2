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
#  This DE indicates the cardinal number of bogies of a train.
# 
#  The value shall be set to:
#  - `n` (`n > 1` and `n < 100`) indicates that the train has n x bogies,
#  - `100`indicates that the number of bogies is out of range,
#  - `101` the information is unavailable.
# 
#  @category: Vehicle information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { outOfRange(100), unavailable(101) }(2..101) 
# 
# Element type: INTEGER
#
# ********** START of BogiesCount **********
#

uint8           value

uint8           MIN             = 2
uint8           MAX             = 101
uint8           UNAVAILABLE     = 101
uint8           OUT_OF_RANGE    = 100

uint8           V_OUT_OF_RANGE  = 100
uint8           V_UNAVAILABLE   = 101

# ********** END of BogiesCount   **********
