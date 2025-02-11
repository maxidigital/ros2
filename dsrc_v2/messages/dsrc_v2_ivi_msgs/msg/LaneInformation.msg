#*                                                                          *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)          *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)            *
#*                                                                          *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore *
#*                                                                          *
#* This program and the accompanying materials are made available under the *
#* terms of the Eclipse Public License 2.0 which is available at            *
#* http://www.eclipse.org/legal/epl-2.0.                                    *
#*                                                                          *
#* SPDX-License-Identifier: EPL-2.0                                         *
#*                                                                          *
#*                                                                          *
#* File automatically generated with DLR Wind v2                            *
#*                                                                          *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0      *
#*                                                                          *
#* Module: IVI {iso(1) standard(0) ivi(19321) version1(1)}                  *
#*                                                                          *
#* For support contact v2x-ts@dlr.de                                        *
#*                                                                          *

#
# ASN.1 Definition:
# SEQUENCE {
#    laneNumber LanePosition,
#    direction Direction,
#    validity DTM OPTIONAL,
#    laneType LaneType,
#    laneTypeQualifier CompleteVehicleCharacteristics OPTIONAL,
#    laneStatus LaneStatus,
#    laneWidth IVILaneWidth OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of LaneInformation **********
#

its_container_v1_its_container_msgs/LanePosition lane_number
Direction                                        direction
DTM[]                                            validity            # OPTIONAL
LaneType                                         lane_type
CompleteVehicleCharacteristics[]                 lane_type_qualifier # OPTIONAL
LaneStatus                                       lane_status
IVILaneWidth[]                                   lane_width          # OPTIONAL

# ********** END of LaneInformation   **********
