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
#  This DE represents a timestamp based on TimestampIts modulo 65 536.
#  This means that generationDeltaTime = TimestampIts mod 65 536.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1 based on ETSI TS 103 900 [1]
#   
# ASN.1 Definition:
# INTEGER { oneMilliSec(1) }(0..65535) 
# 
# Element type: INTEGER
#
# ********** START of GenerationDeltaTime **********
#

uint16          value

uint16          MIN             = 0
uint16          MAX             = 65535

uint16          V_ONE_MILLI_SEC = 1

# ********** END of GenerationDeltaTime   **********
