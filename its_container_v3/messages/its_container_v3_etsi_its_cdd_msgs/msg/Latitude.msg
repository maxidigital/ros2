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
#  This DE represents the absolute geographical latitude in a WGS84 coordinate system, providing a range of 90 degrees in north or
#  in south hemisphere.
#  The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
# 
#  The value shall be set to:
#  - `n` (`n >= -900 000 000` and `n < 0`) x 10^-7 degree, i.e. negative values for latitudes south of the Equator,
#  - `0` is used for the latitude of the equator,
#  - `n` (`n > 0` and `n < 900 000 001`) x 10^-7 degree, i.e. positive values for latitudes north of the Equator,
#  - `900 000 001` when the information is unavailable.
# 
#  @category: GeoReference information
#  @revision: Editorial update in V2.1.1
#   
#  ~~~ Units: degree ~~~
# 
# ASN.1 Definition:
# INTEGER { unavailable(900000001) }(-900000000..900000001) 
# 
# Element type: DOUBLE
#
# ********** START of Latitude **********
#

float64         value

float64         MIN             = -90.0
float64         MAX             = 90.0000001
float32         SCALAROPERAND   = 1.0E7
float64         UNAVAILABLE     = 90.0000001
float64         V_UNAVAILABLE   = 90.0000001

# ********** END of Latitude   **********
