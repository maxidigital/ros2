#*                                                                                *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                  *
#*                                                                                *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore       *
#*                                                                                *
#* This program and the accompanying materials are made available under the       *
#* terms of the Eclipse Public License 2.0 which is available at                  *
#* http://www.eclipse.org/legal/epl-2.0.                                          *
#*                                                                                *
#* SPDX-License-Identifier: EPL-2.0                                               *
#*                                                                                *
#*                                                                                *
#* File automatically generated with DLR Wind v2                                  *
#*                                                                                *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0            *
#*                                                                                *
#* Module: AddGrpC {iso(1) standard(0) signalizedIntersection(19091) profilec(2)  *
#*     addgrpc(0) version2(2)}                                                    *
#*                                                                                *
#* For support contact v2x-ts@dlr.de                                              *
#*                                                                                *

#
# ASN.1 Definition:
# SEQUENCE {
#    stationID StationID,
#    priorState PrioritizationResponseStatus,
#    signalGroup SignalGroupID,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PrioritizationResponse **********
#

its_container_v2_its_container_msgs/StationID  station_id
dsrc_v2_dsrc_msgs/PrioritizationResponseStatus prior_state
dsrc_v2_dsrc_msgs/SignalGroupID                signal_group

# ********** END of PrioritizationResponse   **********
