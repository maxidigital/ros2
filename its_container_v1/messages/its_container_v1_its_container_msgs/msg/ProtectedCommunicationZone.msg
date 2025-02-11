#*                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                    *
#*                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore         *
#*                                                                                  *
#* This program and the accompanying materials are made available under the         *
#* terms of the Eclipse Public License 2.0 which is available at                    *
#* http://www.eclipse.org/legal/epl-2.0.                                            *
#*                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                 *
#*                                                                                  *
#*                                                                                  *
#* File automatically generated with DLR Wind v2                                    *
#*                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v1:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(1)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# SEQUENCE {
#    protectedZoneType ProtectedZoneType,
#    expiryTime TimestampIts OPTIONAL,
#    protectedZoneLatitude Latitude,
#    protectedZoneLongitude Longitude,
#    protectedZoneRadius ProtectedZoneRadius OPTIONAL,
#    protectedZoneID ProtectedZoneID OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ProtectedCommunicationZone **********
#

ProtectedZoneType     protected_zone_type
TimestampIts[]        expiry_time              # OPTIONAL
Latitude              protected_zone_latitude
Longitude             protected_zone_longitude
ProtectedZoneRadius[] protected_zone_radius    # OPTIONAL
ProtectedZoneID[]     protected_zone_id        # OPTIONAL

# ********** END of ProtectedCommunicationZone   **********
