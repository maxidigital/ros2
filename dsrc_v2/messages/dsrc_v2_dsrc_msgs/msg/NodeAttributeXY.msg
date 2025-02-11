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
# ENUMERATED { reserved , stopLine , roundedCapStyleA , roundedCapStyleB , mergePoint , divergePoint , downstreamStopLine , downstreamStartNode , closedToTraffic , safeIsland , curbPresentAtStepOff , hydrantPresent , ... } 
# 
# Element type: ENUMERATED
#
# ********** START of NodeAttributeXY **********
#

int32           value

int32           MIN                        = 0
int32           MAX                        = 11

int32           V_RESERVED                 = 0
int32           V_STOP_LINE                = 1
int32           V_ROUNDED_CAP_STYLE_A      = 2
int32           V_ROUNDED_CAP_STYLE_B      = 3
int32           V_MERGE_POINT              = 4
int32           V_DIVERGE_POINT            = 5
int32           V_DOWNSTREAM_STOP_LINE     = 6
int32           V_DOWNSTREAM_START_NODE    = 7
int32           V_CLOSED_TO_TRAFFIC        = 8
int32           V_SAFE_ISLAND              = 9
int32           V_CURB_PRESENT_AT_STEP_OFF = 10
int32           V_HYDRANT_PRESENT          = 11

# ********** END of NodeAttributeXY   **********
