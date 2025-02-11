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
#  This DE indicates the number of axles of a passing train.
# 
#  The value shall be set to:
#  - `n` (`n > 2` and `n < 1001`) indicates that the train has n x axles,
#  - `1001`indicates that the number of axles is out of range,
#  - `1002` the information is unavailable.
# 
# 
#  @category: Vehicle information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { outOfRange(1001), unavailable(1002) }(2..1002) 
# 
# Element type: INTEGER
#
# ********** START of AxlesCount **********
#

uint16          value

uint16          MIN             = 2
uint16          MAX             = 1002
uint16          UNAVAILABLE     = 1002
uint16          OUT_OF_RANGE    = 1001

uint16          V_OUT_OF_RANGE  = 1001
uint16          V_UNAVAILABLE   = 1002

# ********** END of AxlesCount   **********
