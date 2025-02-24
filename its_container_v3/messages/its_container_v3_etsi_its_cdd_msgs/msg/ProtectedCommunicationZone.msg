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
#  This DF describes a zone of protection inside which the ITS communication should be restricted.
# 
#  It shall include the following components:
# 
#  @field protectedZoneType: type of the protected zone.
# 
#  @field expiryTime: optional time at which the validity of the protected communication zone will expire.
# 
#  @field protectedZoneLatitude: latitude of the centre point of the protected communication zone.
# 
#  @field protectedZoneLongitude: longitude of the centre point of the protected communication zone.
# 
#  @field protectedZoneRadius: optional radius of the protected communication zone in metres.
# 
#  @field protectedZoneId: the optional ID of the protected communication zone.
# 
#  @note: A protected communication zone may be defined around a CEN DSRC road side equipment.
# 
#  @category: Infrastructure information, Communication information
#  @revision: revised in V2.1.1 (changed protectedZoneID to protectedZoneId)
#   
# ASN.1 Definition:
# SEQUENCE {
#    protectedZoneType ProtectedZoneType,
#    expiryTime TimestampIts OPTIONAL,
#    protectedZoneLatitude Latitude,
#    protectedZoneLongitude Longitude,
#    protectedZoneRadius ProtectedZoneRadius OPTIONAL,
#    protectedZoneId ProtectedZoneId OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ProtectedCommunicationZone **********
#

ProtectedZoneType     protected_zone_type      # type of the protected zone.
TimestampIts[]        expiry_time              # optional time at which the validity of the protected communication zone will expire.
                                               # OPTIONAL
Latitude              protected_zone_latitude  # latitude of the centre point of the protected communication zone.
Longitude             protected_zone_longitude # longitude of the centre point of the protected communication zone.
ProtectedZoneRadius[] protected_zone_radius    # optional radius of the protected communication zone in metres.
                                               # OPTIONAL
ProtectedZoneId[]     protected_zone_id        # the optional ID of the protected communication zone.
                                               # OPTIONAL

# ********** END of ProtectedCommunicationZone   **********
