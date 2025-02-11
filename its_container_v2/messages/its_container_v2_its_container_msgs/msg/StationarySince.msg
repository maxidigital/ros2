#*                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                    *
#*                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore         *
#*                                                                                  *
#* This program and the accompanying materials are made available under the         *
#* terms of the Eclipse Public License 2.0 which is available at                    *
#* http://www.eclipse.org/legal/epl-2.0.                                            *
#*                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                 *
#*                                                                                  *
#*                                                                                  *
#* File automatically generated with DLR Wind v2                                    *
#*                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(2)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# ENUMERATED { lessThan1Minute(0), lessThan2Minutes(1), lessThan15Minutes(2), equalOrGreater15Minutes(3) } 
# 
# Element type: ENUMERATED
#
# ********** START of StationarySince **********
#

int32           value

int32           MIN                          = 0
int32           MAX                          = 3

int32           V_LESS_THAN1_MINUTE          = 0
int32           V_LESS_THAN2_MINUTES         = 1
int32           V_LESS_THAN15_MINUTES        = 2
int32           V_EQUAL_OR_GREATER15_MINUTES = 3

# ********** END of StationarySince   **********
