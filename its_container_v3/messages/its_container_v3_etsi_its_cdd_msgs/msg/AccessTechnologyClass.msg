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
#  This DE indicates an access technology.
# 
#  The value shall be set to:
#  - `0`: in case of any access technology class,
#  - `1`: in case of ITS-G5 access technology class,
#  - `2`: in case of LTE-V2X access technology class,
#  - `3`: in case of NR-V2X access technology class.
# 
#  @category: Communication information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { any(0), itsg5Class(1), ltev2xClass(2), nrv2xClass(3), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of AccessTechnologyClass **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 3

int32           V_ANY           = 0
int32           V_ITSG5_CLASS   = 1
int32           V_LTEV2X_CLASS  = 2
int32           V_NRV2X_CLASS   = 3

# ********** END of AccessTechnologyClass   **********
