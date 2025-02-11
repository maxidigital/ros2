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
#  This DE defines the type of an interference management zone, so that an ITS-S can
#  assert the actions to do while passing by such zone (e.g. reduce the transmit power in case of a DSRC tolling station).
#  It is an extension of the type @ref ProtectedZoneType.
# 
#  The value shall be set to:
#  - 0 - `permanentCenDsrcTolling` - as specified in ETSI TS 102 792 [14],
#  - 1 - `temporaryCenDsrcTolling` - as specified in ETSI TS 102 792 [14],
#  - 2 - `unavailable`             - default value. Set to 2 for backwards compatibility with DSRC tolling,
#  - 3 - `urbanRail`               - as specified in ETSI TS 103 724 [13], clause 7,
#  - 4 - `satelliteStation`        - as specified in ETSI TS 103 724 [13], clause 7,
#  - 5 - `fixedLinks`              - as specified in ETSI TS 103 724 [13], clause 7.
# 
#  @category: Communication information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { permanentCenDsrcTolling(0), temporaryCenDsrcTolling(1), unavailable(2), urbanRail(3), satelliteStation(4), fixedLinks(5), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of InterferenceManagementZoneType **********
#

int32           value

int32           MIN                          = 0
int32           MAX                          = 5
int32           UNAVAILABLE                  = 2

int32           V_PERMANENT_CEN_DSRC_TOLLING = 0
int32           V_TEMPORARY_CEN_DSRC_TOLLING = 1
int32           V_UNAVAILABLE                = 2
int32           V_URBAN_RAIL                 = 3
int32           V_SATELLITE_STATION          = 4
int32           V_FIXED_LINKS                = 5

# ********** END of InterferenceManagementZoneType   **********
