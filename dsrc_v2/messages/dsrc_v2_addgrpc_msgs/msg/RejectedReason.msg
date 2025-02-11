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
# ENUMERATED { unknown , exceptionalCondition , maxWaitingTimeExceeded , ptPriorityDisabled , higherPTPriorityGranted , vehicleTrackingUnknown , ... } 
# 
# Element type: ENUMERATED
#
# ********** START of RejectedReason **********
#

int32           value

int32           MIN                          = 0
int32           MAX                          = 5

int32           V_UNKNOWN                    = 0
int32           V_EXCEPTIONAL_CONDITION      = 1
int32           V_MAX_WAITING_TIME_EXCEEDED  = 2
int32           V_PT_PRIORITY_DISABLED       = 3
int32           V_HIGHER_PT_PRIORITY_GRANTED = 4
int32           V_VEHICLE_TRACKING_UNKNOWN   = 5

# ********** END of RejectedReason   **********
