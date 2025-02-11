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
#  This DE represents the altitude value in a WGS84 coordinate system.
#  The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `-100 000` if the altitude is equal to or less than -1 000 m,
#  - `n` (`n > -100 000` and `n < 800 000`) if the altitude is equal to or less than n  x 0,01 metre and greater than (n-1) x 0,01 metre,
#  - `800 000` if the altitude  greater than 7 999,99 m,
#  - `800 001` if the information is not available.
# 
#  @note: the range of this DE does not use the full binary encoding range, but all reasonable values are covered. In order to cover all possible altitude ranges a larger encoding would be necessary.
#  @category: GeoReference information
#  @revision: Description revised in V2.1.1 (definition of 800 000 has slightly changed)
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { negativeOutOfRange(-100000), postiveOutOfRange(800000), unavailable(800001) }(-100000..800001) 
# 
# Element type: FLOAT
#
# ********** START of AltitudeValue **********
#

float32         value

float32         MIN                     = -1000.0
float32         MAX                     = 8000.01
float32         SCALAROPERAND           = 100.0
float32         UNAVAILABLE             = 8000.01

float32         V_NEGATIVE_OUT_OF_RANGE = -1000.0
float32         V_POSTIVE_OUT_OF_RANGE  = 8000.0
float32         V_UNAVAILABLE           = 8000.01

# ********** END of AltitudeValue   **********
