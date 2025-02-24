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
#  This DE represents the absolute geographical longitude in a WGS84 coordinate system, providing a range of 180 degrees
#  to the east or to the west of the prime meridian.
#  The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `n` (`n > -1 800 000 000` and `n < 0`) x 10^-7 degree, i.e. negative values for longitudes to the west,
#  - `0` to indicate the prime meridian,
#  - `n` (`n > 0` and `n < 1 800 000 001`) x 10^-7 degree, i.e. positive values for longitudes to the east,
#  - `1 800 000 001` when the information is unavailable.
# 
#  The value -1 800 000 000 shall not be used.
# 
#  @category: GeoReference information
#  @revision: Description revised in V2.1.1
#   
#  ~~~ Units: degree ~~~
# 
# ASN.1 Definition:
# INTEGER { valueNotUsed(-1800000000), unavailable(1800000001) }(-1800000000..1800000001) 
# 
# Element type: DOUBLE
#
# ********** START of Longitude **********
#

float64         value

float64         MIN              = -180.0
float64         MAX              = 180.0000001
float32         SCALAROPERAND    = 1.0E7
float64         UNAVAILABLE      = 180.0000001
float64         V_VALUE_NOT_USED = -180.0
float64         V_UNAVAILABLE    = 180.0000001

# ********** END of Longitude   **********
