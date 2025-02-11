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
#  This DE represents an angle value in degrees described in the WGS84 reference system with respect to the WGS84 north.
#  The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
#  When the information is not available, the DE shall be set to 3 601. The value 3600 shall not be used.
# 
#  @category: GeoReference Information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: degrees ~~~
# 
# ASN.1 Definition:
# INTEGER { wgs84North(0), wgs84East(900), wgs84South(1800), wgs84West(2700), doNotUse(3600), unavailable(3601) }(0..3601) 
# 
# Element type: FLOAT
#
# ********** START of Wgs84AngleValue **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 360.1
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 360.1

float32         V_WGS84_NORTH   = 0.0
float32         V_WGS84_EAST    = 90.0
float32         V_WGS84_SOUTH   = 180.0
float32         V_WGS84_WEST    = 270.0
float32         V_DO_NOT_USE    = 360.0
float32         V_UNAVAILABLE   = 360.1

# ********** END of Wgs84AngleValue   **********
