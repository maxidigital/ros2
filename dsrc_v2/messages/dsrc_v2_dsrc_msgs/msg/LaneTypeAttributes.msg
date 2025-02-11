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
# CHOICE {
#    vehicle LaneAttributes_Vehicle,
#    crosswalk LaneAttributes_Crosswalk,
#    bikeLane LaneAttributes_Bike,
#    sidewalk LaneAttributes_Sidewalk,
#    median LaneAttributes_Barrier,
#    striping LaneAttributes_Striping,
#    trackedVehicle LaneAttributes_TrackedVehicle,
#    parking LaneAttributes_Parking,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of LaneTypeAttributes **********
#

LaneAttributesVehicle[]        vehicle         #  choice = 0
LaneAttributesCrosswalk[]      crosswalk       #  choice = 1
LaneAttributesBike[]           bike_lane       #  choice = 2
LaneAttributesSidewalk[]       sidewalk        #  choice = 3
LaneAttributesBarrier[]        median          #  choice = 4
LaneAttributesStriping[]       striping        #  choice = 5
LaneAttributesTrackedVehicle[] tracked_vehicle #  choice = 6
LaneAttributesParking[]        parking         #  choice = 7

uint8                          LENGTH          = 8

# ********** END of LaneTypeAttributes   **********
