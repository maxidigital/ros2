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
#  This DE indicates the estimated probability of a stability level and conversely also the probability of a stability loss.
# 
#  The value shall be set to:
#  - `0` to indicate an estimated probability of a loss of stability of 0 %, i.e. "stable",
#  - `n` (`n > 0` and `n < 50`) to indicate the actual stability level,
#  - `50` to indicate a estimated probability of a loss of stability of 100 %, i.e. "total loss of stability",
#  - the values between 51 and 62 are reserved for future use,
#  - `63`: this value indicates that the information is unavailable.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: % ~~~
# 
# ASN.1 Definition:
# INTEGER { stable(0), totalLossOfStability(50), unavailable(63) }(0..63) 
# 
# Element type: FLOAT
#
# ********** START of StabilityLossProbability **********
#

float32         value

float32         MIN                       = 0.0
float32         MAX                       = 126.0
float32         SCALAROPERAND             = 0.5
float32         UNAVAILABLE               = 126.0

float32         V_STABLE                  = 0.0
float32         V_TOTAL_LOSS_OF_STABILITY = 100.0
float32         V_UNAVAILABLE             = 126.0

# ********** END of StabilityLossProbability   **********
