#*                                                                             *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)             *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)               *
#*                                                                             *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore    *
#*                                                                             *
#* This program and the accompanying materials are made available under the    *
#* terms of the Eclipse Public License 2.0 which is available at               *
#* http://www.eclipse.org/legal/epl-2.0.                                       *
#*                                                                             *
#* SPDX-License-Identifier: EPL-2.0                                            *
#*                                                                             *
#*                                                                             *
#* File automatically generated with DLR Wind v2                               *
#*                                                                             *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0         *
#*                                                                             *
#* Module: DSRC {iso(1) standard(0) signalizedIntersection(19091) profilec(2)  *
#*     dsrc(2) version2(2)}                                                    *
#*                                                                             *
#* For support contact v2x-ts@dlr.de                                           *
#*                                                                             *

#
# ASN.1 Definition:
# ENUMERATED { reserved , doNotBlock , whiteLine , mergingLaneLeft , mergingLaneRight , curbOnLeft , curbOnRight , loadingzoneOnLeft , loadingzoneOnRight , turnOutPointOnLeft , turnOutPointOnRight , adjacentParkingOnLeft , adjacentParkingOnRight , adjacentBikeLaneOnLeft , adjacentBikeLaneOnRight , sharedBikeLane , bikeBoxInFront , transitStopOnLeft , transitStopOnRight , transitStopInLane , sharedWithTrackedVehicle , safeIsland , lowCurbsPresent , rumbleStripPresent , audibleSignalingPresent , adaptiveTimingPresent , rfSignalRequestPresent , partialCurbIntrusion , taperToLeft , taperToRight , taperToCenterLine , parallelParking , headInParking , freeParking , timeRestrictionsOnParking , costToPark , midBlockCurbPresent , unEvenPavementPresent , ... } 
# 
# Element type: ENUMERATED
#
# ********** START of SegmentAttributeXY **********
#

int32           value

int32           MIN                            = 0
int32           MAX                            = 37

int32           V_RESERVED                     = 0
int32           V_DO_NOT_BLOCK                 = 1
int32           V_WHITE_LINE                   = 2
int32           V_MERGING_LANE_LEFT            = 3
int32           V_MERGING_LANE_RIGHT           = 4
int32           V_CURB_ON_LEFT                 = 5
int32           V_CURB_ON_RIGHT                = 6
int32           V_LOADINGZONE_ON_LEFT          = 7
int32           V_LOADINGZONE_ON_RIGHT         = 8
int32           V_TURN_OUT_POINT_ON_LEFT       = 9
int32           V_TURN_OUT_POINT_ON_RIGHT      = 10
int32           V_ADJACENT_PARKING_ON_LEFT     = 11
int32           V_ADJACENT_PARKING_ON_RIGHT    = 12
int32           V_ADJACENT_BIKE_LANE_ON_LEFT   = 13
int32           V_ADJACENT_BIKE_LANE_ON_RIGHT  = 14
int32           V_SHARED_BIKE_LANE             = 15
int32           V_BIKE_BOX_IN_FRONT            = 16
int32           V_TRANSIT_STOP_ON_LEFT         = 17
int32           V_TRANSIT_STOP_ON_RIGHT        = 18
int32           V_TRANSIT_STOP_IN_LANE         = 19
int32           V_SHARED_WITH_TRACKED_VEHICLE  = 20
int32           V_SAFE_ISLAND                  = 21
int32           V_LOW_CURBS_PRESENT            = 22
int32           V_RUMBLE_STRIP_PRESENT         = 23
int32           V_AUDIBLE_SIGNALING_PRESENT    = 24
int32           V_ADAPTIVE_TIMING_PRESENT      = 25
int32           V_RF_SIGNAL_REQUEST_PRESENT    = 26
int32           V_PARTIAL_CURB_INTRUSION       = 27
int32           V_TAPER_TO_LEFT                = 28
int32           V_TAPER_TO_RIGHT               = 29
int32           V_TAPER_TO_CENTER_LINE         = 30
int32           V_PARALLEL_PARKING             = 31
int32           V_HEAD_IN_PARKING              = 32
int32           V_FREE_PARKING                 = 33
int32           V_TIME_RESTRICTIONS_ON_PARKING = 34
int32           V_COST_TO_PARK                 = 35
int32           V_MID_BLOCK_CURB_PRESENT       = 36
int32           V_UN_EVEN_PAVEMENT_PRESENT     = 37

# ********** END of SegmentAttributeXY   **********
