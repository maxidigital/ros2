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
#    detectionZoneIds SEQUENCE(SIZE(1..8,...)) OF Zid OPTIONAL,
#    relevanceZoneIds SEQUENCE(SIZE(1..8,...)) OF Zid,
#    direction Direction OPTIONAL,
#    driverAwarenessZoneIds SEQUENCE(SIZE(1..8,...)) OF Zid OPTIONAL,
#    minimumAwarenessTime INTEGER(0..255) OPTIONAL,
#    applicableLanes SEQUENCE(SIZE(1..8,...)) OF LanePosition OPTIONAL,
#    layoutId INTEGER(1..4,...) OPTIONAL,
#    preStoredlayoutId INTEGER(1..64,...) OPTIONAL,
#    text SEQUENCE(SIZE(1..4,...)) OF Text OPTIONAL,
#    data OCTET STRING,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of TcPart **********
#

TcPartDetectionZoneIds[]       detection_zone_ids        # OPTIONAL
TcPartRelevanceZoneIds         relevance_zone_ids
Direction[]                    direction                 # OPTIONAL
TcPartDriverAwarenessZoneIds[] driver_awareness_zone_ids # OPTIONAL
TcPartMinimumAwarenessTime[]   minimum_awareness_time    # OPTIONAL
TcPartApplicableLanes[]        applicable_lanes          # OPTIONAL
TcPartLayoutId[]               layout_id                 # OPTIONAL
TcPartPreStoredlayoutId[]      pre_storedlayout_id       # OPTIONAL
TcPartText[]                   text                      # OPTIONAL
TcPartData                     data

# ********** END of TcPart   **********
