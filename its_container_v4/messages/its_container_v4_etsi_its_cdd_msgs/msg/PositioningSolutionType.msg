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
#  This DE indicates the positioning technology being used to estimate a geographical position.
# 
#  The value shall be set to:
#  - 0 `noPositioningSolution`  - no positioning solution used,
#  - 1 `sGNSS`                  - Global Navigation Satellite System used,
#  - 2 `dGNSS`                  - Differential GNSS used,
#  - 3 `sGNSSplusDR`            - GNSS and dead reckoning used,
#  - 4 `dGNSSplusDR`            - Differential GNSS and dead reckoning used,
#  - 5 `dR`                     - dead reckoning used,
#  - 6 `manuallyByOperator`     - position set manually by a human operator.
# 
#  @category: GeoReference information
#  @revision: V1.3.1, extension with value 6 added in V2.2.1
#   
# ASN.1 Definition:
# ENUMERATED { noPositioningSolution(0), sGNSS(1), dGNSS(2), sGNSSplusDR(3), dGNSSplusDR(4), dR(5), ... , manuallyByOperator(6) } 
# 
# Element type: ENUMERATED
#
# ********** START of PositioningSolutionType **********
#

int32           value

int32           MIN                       = 0
int32           MAX                       = 6

int32           V_NO_POSITIONING_SOLUTION = 0
int32           V_S_GNSS                  = 1
int32           V_D_GNSS                  = 2
int32           V_S_GNS_SPLUS_DR          = 3
int32           V_D_GNS_SPLUS_DR          = 4
int32           V_D_R                     = 5
int32           V_MANUALLY_BY_OPERATOR    = 6

# ********** END of PositioningSolutionType   **********
