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
#  This DF represents a common message header for application and facilities layer messages.
#  It is included at the beginning of an ITS message as the message header.
# 
#  It shall include the following components:
# 
#  @field protocolVersion: version of the ITS message.
# 
#  @field messageId: type of the ITS message.
# 
#  @field stationId: the identifier of the ITS-S that generated the ITS message.
# 
#  @category: Communication information
#  @revision:  update in V2.1.1: messageID and stationID changed to messageId and stationId; messageId is of type MessageId.
#   
# ASN.1 Definition:
# SEQUENCE {
#    protocolVersion OrdinalNumber1B,
#    messageId MessageId,
#    stationId StationId 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ItsPduHeader **********
#

OrdinalNumber1B protocol_version # version of the ITS message.
MessageId       message_id       # type of the ITS message.
StationId       station_id       # the identifier of the ITS-S that generated the ITS message.

# ********** END of ItsPduHeader   **********
