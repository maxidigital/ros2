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
#  This DE represents the orientation of the horizontal velocity vector with regards to the WGS84 north.
#  When the information is not available, the DE shall be set to 3 601. The value 3600 shall not be used.
# 
#  @note: this DE is kept for backwards compatibility reasons only. It is recommended to use the @ref Wgs84AngleValue instead.
# 
#  Unit: 0,1 degree
#  Categories: GeoReference information
#  @revision: Description revised in V2.1.1 (usage of value 3600 specified)
#   
# ASN.1 Definition:
# INTEGER { wgs84North(0), wgs84East(900), wgs84South(1800), wgs84West(2700), doNotUse(3600), unavailable(3601) }(0..3601) 
# 
# Element type: INTEGER
#
# ********** START of HeadingValue **********
#

uint16          value

uint16          MIN             = 0
uint16          MAX             = 3601
uint16          UNAVAILABLE     = 3601

uint16          V_WGS84_NORTH   = 0
uint16          V_WGS84_EAST    = 900
uint16          V_WGS84_SOUTH   = 1800
uint16          V_WGS84_WEST    = 2700
uint16          V_DO_NOT_USE    = 3600
uint16          V_UNAVAILABLE   = 3601

# ********** END of HeadingValue   **********
