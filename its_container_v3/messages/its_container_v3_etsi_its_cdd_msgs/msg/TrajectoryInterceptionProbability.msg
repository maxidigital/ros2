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
#  This  DE  defines  the  probability  that the ego trajectory  intercepts  with any  other object's  trajectory  on the  road.
# 
#  The value shall be set to:
#  - `n` (`n >= 0` and `n <= 50`) to indicate the actual probability,
#  - the values between 51 and 62 are reserved,
#  - `63`: to indicate that the information is unavailable.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: % ~~~
# 
# ASN.1 Definition:
# INTEGER { unavailable(63) }(0..63) 
# 
# Element type: FLOAT
#
# ********** START of TrajectoryInterceptionProbability **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 126.0
float32         SCALAROPERAND   = 0.5
float32         UNAVAILABLE     = 126.0

float32         V_UNAVAILABLE   = 126.0

# ********** END of TrajectoryInterceptionProbability   **********
