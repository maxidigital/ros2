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
#  This DE represents a general container for usage in various types of messages.
# 
#  It shall include the following components:
# 
#  @field stationType: the type of technical context in which the ITS-S that has generated the message is integrated in.
# 
#  @field referencePosition: the reference position of the station that has generated the message that contains the basic container.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    stationType TrafficParticipantType,
#    referencePosition ReferencePositionWithConfidence,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of BasicContainer **********
#

TrafficParticipantType          station_type       # the type of technical context in which the ITS-S that has generated the message is integrated in.
ReferencePositionWithConfidence reference_position # the reference position of the station that has generated the message that contains the basic container.

# ********** END of BasicContainer   **********
