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
#  This DE represents an offset altitude with regards to a defined altitude value.
#  It may be used to describe a geographical point with regards to a specific reference geographical position.
# 
#  The value shall be set to:
#  - `-12 700` for values equal to or lower than -127 metres,
#  - `n` (`n > -12 700` and `n <= 0`) for altitude offset n x 0,01 metre below the reference position,
#  - `0` for no altitudinal offset,
#  - `n` (`n > 0` and `n < 12799`) for altitude offset n x 0,01 metre above the reference position,
#  - `12 799` for values equal to or greater than 127,99 metres,
#  - `12 800` when the information is unavailable.
# 
#  @category: GeoReference information
#  @revision: editorial update in V2.1.1
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { negativeOutOfRange(-12700), positiveOutOfRange(12799), unavailable(12800) }(-12700..12800) 
# 
# Element type: FLOAT
#
# ********** START of DeltaAltitude **********
#

float32         value

float32         MIN                     = -127.0
float32         MAX                     = 128.0
float32         SCALAROPERAND           = 100.0
float32         UNAVAILABLE             = 128.0

float32         V_NEGATIVE_OUT_OF_RANGE = -127.0
float32         V_POSITIVE_OUT_OF_RANGE = 127.99
float32         V_UNAVAILABLE           = 128.0

# ********** END of DeltaAltitude   **********
