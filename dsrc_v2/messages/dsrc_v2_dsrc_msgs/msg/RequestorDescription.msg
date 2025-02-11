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
# SEQUENCE {
#    id VehicleID,
#    type RequestorType OPTIONAL,
#    position RequestorPositionVector OPTIONAL,
#    name DescriptiveName OPTIONAL,
#    routeName DescriptiveName OPTIONAL,
#    transitStatus TransitVehicleStatus OPTIONAL,
#    transitOccupancy TransitVehicleOccupancy OPTIONAL,
#    transitSchedule DeltaTime OPTIONAL,
#    regional SEQUENCE(SIZE(1..4)) OF RegionalExtension AVOID OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RequestorDescription **********
#

VehicleID                      id
RequestorType[]                type              # OPTIONAL
RequestorPositionVector[]      position          # OPTIONAL
DescriptiveName[]              name              # OPTIONAL
DescriptiveName[]              route_name        # OPTIONAL
TransitVehicleStatus[]         transit_status    # OPTIONAL
TransitVehicleOccupancy[]      transit_occupancy # OPTIONAL
DeltaTime[]                    transit_schedule  # OPTIONAL
RequestorDescriptionRegional[] regional          # OPTIONAL

# ********** END of RequestorDescription   **********
