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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE  defines  the  confidence level of the trajectoryInterceptionProbability.
# 
#  The value shall be set to:
#  - `0` - to indicate confidence level less than 50 %,
#  - `1` - to indicate confidence level greater than or equal to 50 % and less than 70 %,
#  - `2` - to indicate confidence level greater than or equal to 70 % and less than 90 %,
#  - `3` - to indicate confidence level greater than or equal to 90%.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { lessthan50percent(0), between50and70Percent(1), between70and90Percent(2), above90Percent(3) }(0..3) 
# 
# Element type: INTEGER
#
# ********** START of TrajectoryInterceptionConfidence **********
#

uint8           value

uint8           MIN                      = 0
uint8           MAX                      = 3

uint8           V_LESSTHAN50PERCENT      = 0
uint8           V_BETWEEN50AND70_PERCENT = 1
uint8           V_BETWEEN70AND90_PERCENT = 2
uint8           V_ABOVE90_PERCENT        = 3

# ********** END of TrajectoryInterceptionConfidence   **********
