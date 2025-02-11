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
#  This DE indicates the type of stored information.
# 
#  The corresponding bit shall be set to 1 under the following conditions:
# 
#  - `0` undefined        - in case the stored information type is undefined.
#  - `1` staticDb         - in case the stored information type is a static database.
#  - `2` dynamicDb        - in case the stored information type is a dynamic database
#  - `3` realTimeDb       - in case the stored information type is a real time updated database.
#  - `4` map              - in case the stored information type is a road topology map.
#  - Bits 5 to 7          - are reserved for future use
# 
#  @note: If all bits are set to 0, then no stored information type is used
# 
#  @category: Basic Information
#  @revision: created in V2.2.1
#   
# ASN.1 Definition:
# BIT STRING { undefined(0), staticDb(1), dynamicDb(2), realTimeDb(3), map(4) }(SIZE(1..168,... )) 
# 
# Element type: BIT STRING
#
# ********** START of StoredInformationType **********
#

bool[]          values

uint8           MIN             = 1
uint8           MAX             = 168

uint8           UNDEFINED       = 0
uint8           STATIC_DB       = 1
uint8           DYNAMIC_DB      = 2
uint8           REAL_TIME_DB    = 3
uint8           MAP             = 4

# ********** END of StoredInformationType   **********
