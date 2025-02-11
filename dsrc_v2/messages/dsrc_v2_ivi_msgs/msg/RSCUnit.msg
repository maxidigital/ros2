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
# INTEGER { kmperh(0), milesperh(1), kilometer(2), meter(3), decimeter(4), centimeter(5), mile(6), yard(7), foot(8), minutesOfTime(9), tonnes(10), hundredkg(11), pound(12), rateOfIncline(13) }(0..15) 
# 
# Element type: INTEGER
#
# ********** START of RSCUnit **********
#

uint8           value

uint8           MIN               = 0
uint8           MAX               = 15

uint8           V_KMPERH          = 0
uint8           V_MILESPERH       = 1
uint8           V_KILOMETER       = 2
uint8           V_METER           = 3
uint8           V_DECIMETER       = 4
uint8           V_CENTIMETER      = 5
uint8           V_MILE            = 6
uint8           V_YARD            = 7
uint8           V_FOOT            = 8
uint8           V_MINUTES_OF_TIME = 9
uint8           V_TONNES          = 10
uint8           V_HUNDREDKG       = 11
uint8           V_POUND           = 12
uint8           V_RATE_OF_INCLINE = 13

# ********** END of RSCUnit   **********
