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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v4:1.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) cdd(2) major-version-4(4) minor-version-1(1)}                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE indicates the duration in minutes since which something is stationary.
# 
#  The value shall be set to:
#  - 0 `lessThan1Minute`         - for being stationary since less than 1 minute,
#  - 1 `lessThan2Minutes`        - for being stationary since less than 2 minute and for equal to or more than 1 minute,
#  - 2 `lessThan15Minutes`       - for being stationary since less than 15 minutes and for equal to or more than 1 minute,
#  - 3 `equalOrGreater15Minutes` - for being stationary since equal to or more than 15 minutes.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
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
