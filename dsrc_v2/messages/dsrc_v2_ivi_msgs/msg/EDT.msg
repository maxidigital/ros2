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
# SEQUENCE {
#    year SEQUENCE {
#    syr INTEGER(2000..2127,...),
#    eyr INTEGER(2000..2127,...) 
# } OPTIONAL,
#    month_day SEQUENCE {
#    smd MonthDay,
#    emd MonthDay 
# } OPTIONAL,
#    pmd PMD OPTIONAL,
#    hourMinutes SEQUENCE {
#    shm HoursMinutes,
#    ehm HoursMinutes 
# } OPTIONAL,
#    dayOfWeek DayOfWeek OPTIONAL,
#    period HoursMinutes OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of EDT **********
#

DTMYear         year
DTMMonthDay     month_day
PMD             pmd
DTMHourMinutes  hour_minutes
DayOfWeek       day_of_week
HoursMinutes    period

# ********** END of EDT   **********
