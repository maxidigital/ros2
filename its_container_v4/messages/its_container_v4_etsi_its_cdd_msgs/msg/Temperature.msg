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
#  This DE indicates a temperature value.
# 
#  The value shall be set to:
#  - `-60` for temperature equal to or less than -60 degrees C,
#  - `n` (`n > -60` and `n < 67`) for the actual temperature n in degrees C,
#  - `67` for temperature equal to or greater than 67 degrees C.
# 
#  @category: Basic information
#  @revision: Editorial update in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { equalOrSmallerThanMinus60Deg(-60), equalOrGreaterThan67Deg(67) }(-60..67) 
# 
# Element type: INTEGER
#
# ********** START of Temperature **********
#

int8            value

int8            MIN                                 = -60
int8            MAX                                 = 67

int8            V_EQUAL_OR_SMALLER_THAN_MINUS60_DEG = -60
int8            V_EQUAL_OR_GREATER_THAN67_DEG       = 67

# ********** END of Temperature   **********
