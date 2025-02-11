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
#  This DE represent the total amount of rain falling during one hour. It is measured in mm per hour at an area of 1 square metre.
# 
#  The following values are specified:
#  - `n` (`n > 0` and `n < 2000`) if the amount of rain falling is equal to or less than n x 0,1 mm/h and greater than (n-1) x 0,1 mm/h,
#  - `2000` if the amount of rain falling is greater than 199.9 mm/h,
#  - `2001` if the information is not available.
# 
#  @category: Basic Information
#  @revision: created in V2.1.1
#   
#  ~~~ Units: mm/h ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(2000), unavailable(2001) }(1..2001) 
# 
# Element type: FLOAT
#
# ********** START of PrecipitationIntensity **********
#

float32         value

float32         MIN             = 0.1
float32         MAX             = 200.1
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 200.1
float32         OUT_OF_RANGE    = 200.0

float32         V_OUT_OF_RANGE  = 200.0
float32         V_UNAVAILABLE   = 200.1

# ********** END of PrecipitationIntensity   **********
