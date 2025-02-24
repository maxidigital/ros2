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
#  This DE represents the Bravais-Pearson correlation value for each cell of a lower triangular correlation matrix.
# 
#  The value shall be set to:
#  - `-100` in case of full negative correlation,
#  - `n` (`n > -100` and `n < 0`) if the correlation is negative and equal to n x 100,
#  - `0` in case of no correlation,
#  - `n` (`n > 0` and `n < 100`) if the correlation is positive and equal to n x 100,
#  - `100` in case of full positive correlation,
#  - `101` in case the correlation information is unavailable.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { full-negative-correlation(-100), no-correlation(0), full-positive-correlation(100), unavailable(101) }(-100..101) 
# 
# Element type: INTEGER
#
# ********** START of CorrelationCellValue **********
#

int8            value

int8            MIN                         = -100
int8            MAX                         = 101
int8            UNAVAILABLE                 = 101

int8            V_FULL_NEGATIVE_CORRELATION = -100
int8            V_NO_CORRELATION            = 0
int8            V_FULL_POSITIVE_CORRELATION = 100
int8            V_UNAVAILABLE               = 101

# ********** END of CorrelationCellValue   **********
