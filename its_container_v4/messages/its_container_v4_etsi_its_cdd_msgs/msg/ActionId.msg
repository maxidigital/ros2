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
#  This DF represents an identifier used to describe a protocol action taken by an ITS-S.
# 
#  It shall include the following components:
# 
#  @field originatingStationId: Id of the ITS-S that takes the action.
# 
#  @field sequenceNumber: a sequence number.
# 
#  @category: Communication information
#  @revision: Created in V2.1.1 based on @ref ActionID.
#   
# ASN.1 Definition:
# SEQUENCE {
#    originatingStationId StationId,
#    sequenceNumber SequenceNumber 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ActionId **********
#

StationId       originating_station_id # Id of the ITS-S that takes the action.
SequenceNumber  sequence_number        # a sequence number.

# ********** END of ActionId   **********
