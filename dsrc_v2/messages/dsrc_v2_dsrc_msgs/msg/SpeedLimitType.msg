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
# ENUMERATED { unknown , maxSpeedInSchoolZone , maxSpeedInSchoolZoneWhenChildrenArePresent , maxSpeedInConstructionZone , vehicleMinSpeed , vehicleMaxSpeed , vehicleNightMaxSpeed , truckMinSpeed , truckMaxSpeed , truckNightMaxSpeed , vehiclesWithTrailersMinSpeed , vehiclesWithTrailersMaxSpeed , vehiclesWithTrailersNightMaxSpeed , ... } 
# 
# Element type: ENUMERATED
#
# ********** START of SpeedLimitType **********
#

int32           value

int32           MIN                                                  = 0
int32           MAX                                                  = 12

int32           V_UNKNOWN                                            = 0
int32           V_MAX_SPEED_IN_SCHOOL_ZONE                           = 1
int32           V_MAX_SPEED_IN_SCHOOL_ZONE_WHEN_CHILDREN_ARE_PRESENT = 2
int32           V_MAX_SPEED_IN_CONSTRUCTION_ZONE                     = 3
int32           V_VEHICLE_MIN_SPEED                                  = 4
int32           V_VEHICLE_MAX_SPEED                                  = 5
int32           V_VEHICLE_NIGHT_MAX_SPEED                            = 6
int32           V_TRUCK_MIN_SPEED                                    = 7
int32           V_TRUCK_MAX_SPEED                                    = 8
int32           V_TRUCK_NIGHT_MAX_SPEED                              = 9
int32           V_VEHICLES_WITH_TRAILERS_MIN_SPEED                   = 10
int32           V_VEHICLES_WITH_TRAILERS_MAX_SPEED                   = 11
int32           V_VEHICLES_WITH_TRAILERS_NIGHT_MAX_SPEED             = 12

# ********** END of SpeedLimitType   **********
