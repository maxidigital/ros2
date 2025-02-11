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
#  This DE represents the measured uncompensated atmospheric pressure.
# 
#  The value shall be set to:
#  - `2999` indicates that the applicable value is less than 29990 Pa,
#  - `n` (`n > 2999` and `n <= 12000`) indicates that the applicable value is equal to or less than n x 10 Pa and greater than (n-1) x 10 Pa,
#  - `12001` indicates that the values is greater than 120000 Pa,
#  - `12002` indicates that the information is not available.
# 
#  @category: Basic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: Pascal ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRangelower(2999), outOfRangeUpper(12001), unavailable(12002) }(2999..12002) 
# 
# Element type: FLOAT
#
# ********** START of BarometricPressure **********
#

float32         value

float32         MIN                  = 29990.0
float32         MAX                  = 120020.0
float32         SCALAROPERAND        = 0.1
float32         UNAVAILABLE          = 120020.0

float32         V_OUT_OF_RANGELOWER  = 29990.0
float32         V_OUT_OF_RANGE_UPPER = 120010.0
float32         V_UNAVAILABLE        = 120020.0

# ********** END of BarometricPressure   **********
