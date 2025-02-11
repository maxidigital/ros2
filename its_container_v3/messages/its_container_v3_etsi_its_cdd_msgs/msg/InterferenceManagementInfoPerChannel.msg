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
#  This DF contains interference management information for one affected frequency channel.
# 
#  It shall include the following components:
# 
#  @field interferenceManagementChannel: frequency channel for which the zone should be applied interference management
# 
#  @field interferenceManagementZoneType: type of the interference management zone.
# 
#  @field interferenceManagementMitigationType: optional type of the mitigation to be used in the interference management zone.
#  In the case where no mitigation should be applied by the ITS-S, this is indicated by the field interferenceManagementMitigationType being absent.
# 
#  @field expiryTime: optional time at which the validity of the interference management communication zone will expire.
#  This component is present when the interference management is temporarily valid
# 
#  @category: Communication information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    interferenceManagementChannel InterferenceManagementChannel,
#    interferenceManagementZoneType InterferenceManagementZoneType,
#    interferenceManagementMitigationType MitigationForTechnologies OPTIONAL,
#    expiryTime TimestampIts OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of InterferenceManagementInfoPerChannel **********
#

InterferenceManagementChannel  interference_management_channel         # frequency channel for which the zone should be applied interference management
InterferenceManagementZoneType interference_management_zone_type       # type of the interference management zone.
MitigationForTechnologies[]    interference_management_mitigation_type # optional type of the mitigation to be used in the interference management zone.
                                                                       # OPTIONAL
TimestampIts[]                 expiry_time                             # optional time at which the validity of the interference management communication zone will expire.
                                                                       # OPTIONAL

# ********** END of InterferenceManagementInfoPerChannel   **********
