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
#  The DF describes the position of a CEN DSRC road side equipment.
# 
#  It shall include the following components:
# 
#  @field protectedZoneLatitude: the latitude of the CEN DSRC road side equipment.
# 
#  @field protectedZoneLongitude: the latitude of the CEN DSRC road side equipment.
# 
#  @field cenDsrcTollingZoneID: the optional ID of the CEN DSRC road side equipment.
# 
#  @category: Infrastructure information, Communication information
#  @revision: revised in V2.1.1 (cenDsrcTollingZoneId is directly of type ProtectedZoneId)
#   
# ASN.1 Definition:
# SEQUENCE {
#    protectedZoneLatitude Latitude,
#    protectedZoneLongitude Longitude,
#    cenDsrcTollingZoneId ProtectedZoneId OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of CenDsrcTollingZone **********
#

Latitude          protected_zone_latitude  # the latitude of the CEN DSRC road side equipment.
Longitude         protected_zone_longitude # the latitude of the CEN DSRC road side equipment.
ProtectedZoneId[] cen_dsrc_tolling_zone_id # OPTIONAL

# ********** END of CenDsrcTollingZone   **********
