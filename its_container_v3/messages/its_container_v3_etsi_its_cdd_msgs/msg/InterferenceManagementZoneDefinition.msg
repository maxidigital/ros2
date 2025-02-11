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
#  This DF represents the geographical definition of the zone where band sharing occurs.
# 
#  It shall include the following components:
# 
#  @field interferenceManagementZoneLatitude: Latitude of the centre point of the interference management zone.
# 
#  @field interferenceManagementZoneLongitude: Longitude of the centre point of the interference management zone.
# 
#  @field interferenceManagementZoneId: optional identification of the interference management zone.
# 
#  @field interferenceManagementZoneShape: shape of the interference management zone placed at the centre point.
# 
#  @category: Communication information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    interferenceManagementZoneLatitude Latitude,
#    interferenceManagementZoneLongitude Longitude,
#    interferenceManagementZoneId ProtectedZoneId OPTIONAL,
#    interferenceManagementZoneShape Shape (WITH COMPONENTS{
#   ..., radial ABSENT, radialShapes ABSENT
# })OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of InterferenceManagementZoneDefinition **********
#

Latitude          interference_management_zone_latitude  # Latitude of the centre point of the interference management zone.
Longitude         interference_management_zone_longitude # Longitude of the centre point of the interference management zone.
ProtectedZoneId[] interference_management_zone_id        # optional identification of the interference management zone.
                                                         # OPTIONAL
Shape[]           interference_management_zone_shape     # shape of the interference management zone placed at the centre point.
                                                         # OPTIONAL

# ********** END of InterferenceManagementZoneDefinition   **********
