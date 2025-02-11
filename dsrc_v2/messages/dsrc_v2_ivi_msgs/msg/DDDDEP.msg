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
# INTEGER { none(0), importantArea(1), principalArea(2), generalArea(3), wellKnownPoint(4), country(5), city(6), street(7), industrialArea(8), historicArea(9), touristicArea(10), culturalArea(11), touristicRoute(12), recommendedRoute(13), touristicAttraction(14), geographicArea(15) }(0..15, ...) 
# 
# Element type: INTEGER
#
# ********** START of DDDDEP **********
#

uint8           value

uint8           MIN                    = 0
uint8           MAX                    = 15

uint8           V_NONE                 = 0
uint8           V_IMPORTANT_AREA       = 1
uint8           V_PRINCIPAL_AREA       = 2
uint8           V_GENERAL_AREA         = 3
uint8           V_WELL_KNOWN_POINT     = 4
uint8           V_COUNTRY              = 5
uint8           V_CITY                 = 6
uint8           V_STREET               = 7
uint8           V_INDUSTRIAL_AREA      = 8
uint8           V_HISTORIC_AREA        = 9
uint8           V_TOURISTIC_AREA       = 10
uint8           V_CULTURAL_AREA        = 11
uint8           V_TOURISTIC_ROUTE      = 12
uint8           V_RECOMMENDED_ROUTE    = 13
uint8           V_TOURISTIC_ATTRACTION = 14
uint8           V_GEOGRAPHIC_AREA      = 15

# ********** END of DDDDEP   **********
