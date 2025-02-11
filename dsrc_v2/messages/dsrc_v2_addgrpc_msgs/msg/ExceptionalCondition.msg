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
# ENUMERATED { unknown , publicTransportPriority , emergencyVehiclePriority , trainPriority , bridgeOpen , vehicleHeight , weather , trafficJam , tunnelClosure , meteringActive , truckPriority , bicyclePlatoonPriority , vehiclePlatoonPriority , ... } 
# 
# Element type: ENUMERATED
#
# ********** START of ExceptionalCondition **********
#

int32           value

int32           MIN                          = 0
int32           MAX                          = 12

int32           V_UNKNOWN                    = 0
int32           V_PUBLIC_TRANSPORT_PRIORITY  = 1
int32           V_EMERGENCY_VEHICLE_PRIORITY = 2
int32           V_TRAIN_PRIORITY             = 3
int32           V_BRIDGE_OPEN                = 4
int32           V_VEHICLE_HEIGHT             = 5
int32           V_WEATHER                    = 6
int32           V_TRAFFIC_JAM                = 7
int32           V_TUNNEL_CLOSURE             = 8
int32           V_METERING_ACTIVE            = 9
int32           V_TRUCK_PRIORITY             = 10
int32           V_BICYCLE_PLATOON_PRIORITY   = 11
int32           V_VEHICLE_PLATOON_PRIORITY   = 12

# ********** END of ExceptionalCondition   **********
