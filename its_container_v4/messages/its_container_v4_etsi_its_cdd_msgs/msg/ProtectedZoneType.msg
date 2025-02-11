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
#  This DE indicates the type of a protected communication zone, so that an ITS-S is aware of the actions to do
#  while passing by such zone (e.g. reduce the transmit power in case of a DSRC tolling station).
# 
#  The protected zone type is defined in ETSI TS 102 792 [14].
# 
# 
#  @category: Communication information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# ENUMERATED { permanentCenDsrcTolling(0), ... , temporaryCenDsrcTolling(1) } 
# 
# Element type: ENUMERATED
#
# ********** START of ProtectedZoneType **********
#

int32           value

int32           MIN                          = 0
int32           MAX                          = 1

int32           V_PERMANENT_CEN_DSRC_TOLLING = 0
int32           V_TEMPORARY_CEN_DSRC_TOLLING = 1

# ********** END of ProtectedZoneType   **********
