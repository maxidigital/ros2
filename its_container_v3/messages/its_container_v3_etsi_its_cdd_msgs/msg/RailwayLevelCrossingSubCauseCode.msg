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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:2.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE represents the value of the sub cause codes of the @ref CauseCode `railwayLevelCrossing` .
# 
#  The value shall be set to:
#  - 0 `unavailable`                   - in case no further detailed information on the railway level crossing status is available,
#  - 1 `doNotCrossAbnormalSituation`   - in case when something wrong is detected by equation or sensors of the railway level crossing,
#                                          including level crossing is closed for too long (e.g. more than 10 minutes long ; default value),
#  - 2 `closed`                        - in case the crossing is closed (barriers down),
#  - 3 `unguarded`                     - in case the level crossing is unguarded (i.e a Saint Andrew cross level crossing without detection of train),
#  - 4 `nominal`                       - in case the barriers are up and lights are off.
#  - 5-255: reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), doNotCrossAbnormalSituation(1), closed(2), unguarded(3), nominal(4) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of RailwayLevelCrossingSubCauseCode **********
#

uint8           value

uint8           MIN                               = 0
uint8           MAX                               = 255
uint8           UNAVAILABLE                       = 0

uint8           V_UNAVAILABLE                     = 0
uint8           V_DO_NOT_CROSS_ABNORMAL_SITUATION = 1
uint8           V_CLOSED                          = 2
uint8           V_UNGUARDED                       = 3
uint8           V_NOMINAL                         = 4

# ********** END of RailwayLevelCrossingSubCauseCode   **********
