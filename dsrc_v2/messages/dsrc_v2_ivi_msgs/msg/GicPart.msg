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
#    its_Rrid VarLengthNumber OPTIONAL,
#    relevanceZoneIds SEQUENCE(SIZE(1..8,...)) OF Zid OPTIONAL,
#    direction Direction OPTIONAL,
#    driverAwarenessZoneIds SEQUENCE(SIZE(1..8,...)) OF Zid OPTIONAL,
#    minimumAwarenessTime INTEGER(0..255) OPTIONAL,
#    applicableLanes SEQUENCE(SIZE(1..8,...)) OF LanePosition OPTIONAL,
#    iviType IviType,
#    iviPurpose IviPurpose OPTIONAL,
#    laneStatus LaneStatus OPTIONAL,
#    vehicleCharacteristics SEQUENCE(SIZE(1..8, ...)) OF CompleteVehicleCharacteristics OPTIONAL,
#    driverCharacteristics DriverCharacteristics OPTIONAL,
#    layoutId INTEGER(1..4,...) OPTIONAL,
#    preStoredlayoutId INTEGER(1..64,...) OPTIONAL,
#    roadSignCodes SEQUENCE(SIZE(1..4,...)) OF RSCode,
#    extraText SEQUENCE(SIZE(1..4,...)) OF Text OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of GicPart **********
#

GicPartDetectionZoneIds[]                      detection_zone_ids        # OPTIONAL
dsrc_v2_citsapplmgmtids_msgs/VarLengthNumber[] its_rrid                  # OPTIONAL
GicPartRelevanceZoneIds[]                      relevance_zone_ids        # OPTIONAL
Direction[]                                    direction                 # OPTIONAL
GicPartDriverAwarenessZoneIds[]                driver_awareness_zone_ids # OPTIONAL
GicPartMinimumAwarenessTime[]                  minimum_awareness_time    # OPTIONAL
GicPartApplicableLanes[]                       applicable_lanes          # OPTIONAL
IviType                                        ivi_type
IviPurpose[]                                   ivi_purpose               # OPTIONAL
LaneStatus[]                                   lane_status               # OPTIONAL
GicPartVehicleCharacteristics[]                vehicle_characteristics   # OPTIONAL
DriverCharacteristics[]                        driver_characteristics    # OPTIONAL
GicPartLayoutId[]                              layout_id                 # OPTIONAL
GicPartPreStoredlayoutId[]                     pre_storedlayout_id       # OPTIONAL
GicPartRoadSignCodes                           road_sign_codes
GicPartExtraText[]                             extra_text                # OPTIONAL

# ********** END of GicPart   **********
