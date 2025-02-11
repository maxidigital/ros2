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
#  This DE represents indication of how a certain path or area will be used.
# 
#  The value shall be set to:
#  - 0  - ` noIndication `     - in case it will remain free to be used,
#  - 1  - ` specialUse `       - in case it will be physically blocked by special use,
#  - 2  - ` rescueOperation`   - in case it is intended to be used for rescue operations,
# 
#  @category: Basic information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# ENUMERATED { noIndication(0), specialUse(1), rescueOperation(2), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of UsageIndication **********
#

int32           value

int32           MIN                = 0
int32           MAX                = 2

int32           V_NO_INDICATION    = 0
int32           V_SPECIAL_USE      = 1
int32           V_RESCUE_OPERATION = 2

# ********** END of UsageIndication   **********
