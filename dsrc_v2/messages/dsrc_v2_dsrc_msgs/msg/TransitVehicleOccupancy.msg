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
# ENUMERATED { occupancyUnknown(0), occupancyEmpty(1), occupancyVeryLow(2), occupancyLow(3), occupancyMed(4), occupancyHigh(5), occupancyNearlyFull(6), occupancyFull(7) } 
# 
# Element type: ENUMERATED
#
# ********** START of TransitVehicleOccupancy **********
#

int32           value

int32           MIN                     = 0
int32           MAX                     = 7

int32           V_OCCUPANCY_UNKNOWN     = 0
int32           V_OCCUPANCY_EMPTY       = 1
int32           V_OCCUPANCY_VERY_LOW    = 2
int32           V_OCCUPANCY_LOW         = 3
int32           V_OCCUPANCY_MED         = 4
int32           V_OCCUPANCY_HIGH        = 5
int32           V_OCCUPANCY_NEARLY_FULL = 6
int32           V_OCCUPANCY_FULL        = 7

# ********** END of TransitVehicleOccupancy   **********
