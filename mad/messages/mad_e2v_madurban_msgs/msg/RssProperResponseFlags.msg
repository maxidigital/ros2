#*                                                                                 *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                 *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                   *
#*                                                                                 *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore        *
#*                                                                                 *
#* This program and the accompanying materials are made available under the        *
#* terms of the Eclipse Public License 2.0 which is available at                   *
#* http://www.eclipse.org/legal/epl-2.0.                                           *
#*                                                                                 *
#* SPDX-License-Identifier: EPL-2.0                                                *
#*                                                                                 *
#*                                                                                 *
#* File automatically generated with DLR Wind v2                                   *
#*                                                                                 *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0             *
#*                                                                                 *
#* Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) e2v(1) version(3)}                                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# ASN.1 Definition:
# BIT STRING { none(0), dangerousState(1), dangerousVehicle(2), dangerousOppositeState(3), vehicleCrossingRoadBoundaries(4) }(SIZE(8,... )) 
# 
# Element type: BIT STRING
#
# ********** START of RssProperResponseFlags **********
#

bool[]          values

uint8           MIN                              = 8
uint8           MAX                              = 8

uint8           NONE                             = 0
uint8           DANGEROUS_STATE                  = 1
uint8           DANGEROUS_VEHICLE                = 2
uint8           DANGEROUS_OPPOSITE_STATE         = 3
uint8           VEHICLE_CROSSING_ROAD_BOUNDARIES = 4

# ********** END of RssProperResponseFlags   **********
