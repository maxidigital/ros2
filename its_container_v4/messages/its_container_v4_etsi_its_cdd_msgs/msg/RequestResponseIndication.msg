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
#  This DE indicates whether an ITS message is transmitted as request from ITS-S or a response transmitted from
#  ITS-S after receiving request from other ITS-Ss.
# 
#  The value shall be set to:
#  - 0 `request`  - for a request message,
#  - 1 `response` - for a response message.
# 
#  @category Communication information
#  @revision: Editorial update in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { request(0), response(1) } 
# 
# Element type: ENUMERATED
#
# ********** START of RequestResponseIndication **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 1

int32           V_REQUEST       = 0
int32           V_RESPONSE      = 1

# ********** END of RequestResponseIndication   **********
