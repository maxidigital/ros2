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
#    protocolVersion INTEGER {
#    currentVersion(1) 
# }(0..255),
#    messageID INTEGER {
#    UNKNOWN(0),
#    DENM(1),
#    CAM(2),
#    poi(3),
#    SPAT(4),
#    MAP(5),
#    ivi(6),
#    ev-rsr(7),
#    LAM(8),
#    SREM(9),
#    SSEM(10),
#    CPM(23) 
# }(0..255),
#    stationID StationID 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ItsPduHeader **********
#

ItsPduHeaderProtocolVersion protocol_version
ItsPduHeaderMessageID       message_id
StationID                   station_id

# ********** END of ItsPduHeader   **********
