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
#  This DE indicates a certain coding type of the PtActivationData data.
# 
#  The folowing value are specified:
#  - 0 `undefinedCodingType`  : undefined coding type,
#  - 1 `r09-16CodingType`     : coding of PtActivationData conform to VDV recommendation 420 [7],
#  - 2 `vdv-50149CodingType`  : coding of PtActivationData based on VDV recommendation 420 [7].
#  - 3 - 255                  : reserved for alternative and future use.
# 
#  @category: Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { undefinedCodingType(0), r09-16CodingType(1), vdv-50149CodingType(2) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of PtActivationType **********
#

uint8           value

uint8           MIN                     = 0
uint8           MAX                     = 255

uint8           V_UNDEFINED_CODING_TYPE = 0
uint8           V_R09_16_CODING_TYPE    = 1
uint8           V_VDV_50149_CODING_TYPE = 2

# ********** END of PtActivationType   **********
