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
#  This DF represents the value of a cartesian coordinate with a range of -327,68 metres to +327,66 metres.
# 
#  The value shall be set to:
#  - `-32 768` if the longitudinal offset is out of range, i.e. less than or equal to -327,68 metres,
#  - `n` (`n > -32 768` and `n < 32 767`) if the longitudinal offset information is equal to or less than n x 0,01 metre and more than (n-1) x 0,01 metre,
#  - `32 767` if the longitudinal offset is out of range, i.e. greater than + 327,66 metres.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: m ~~~
# 
# ASN.1 Definition:
# INTEGER { negativeOutOfRange(-32768), positiveOutOfRange(32767) }(-32768..32767) 
# 
# Element type: FLOAT
#
# ********** START of CartesianCoordinate **********
#

float32         value

float32         MIN                     = -327.68
float32         MAX                     = 327.67
float32         SCALAROPERAND           = 100.0

float32         V_NEGATIVE_OUT_OF_RANGE = -327.68
float32         V_POSITIVE_OUT_OF_RANGE = 327.67

# ********** END of CartesianCoordinate   **********
