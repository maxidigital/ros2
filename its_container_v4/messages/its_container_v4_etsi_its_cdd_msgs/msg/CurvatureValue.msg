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
#  This DE describes vehicle turning curve with the following information:
#  ```
#      Value = 1 / Radius * 10000
#  ```
#  wherein radius is the vehicle turning curve radius in metres.
# 
#  Positive values indicate a turning curve to the left hand side of the driver.
#  It corresponds to the vehicle coordinate system as defined in ISO 8855 [21].
# 
#  The value shall be set to:
#  - `-1023` for  values smaller than -1023,
#  - `n` (`n > -1023` and `n < 0`) for negative values equal to or less than `n`, and greater than `(n-1)`,
#  - `0` when the vehicle is moving straight,
#  - `n` (`n > 0` and `n < 1022`) for positive values equal to or less than `n`, and greater than `(n-1)`,
#  - `1022`, for values  greater than 1021,
#  - `1023`, if the information is not available.
# 
#  @note: The present DE is limited to vehicle types as defined in ISO 8855 [21].
# 
#  @category: Vehicle information
#  @revision: description revised in V2.1.1 (the definition of value 1022 has changed slightly)
#   
# ASN.1 Definition:
# INTEGER { outOfRangeNegative(-1023), straight(0), outOfRangePositive(1022), unavailable(1023) }(-1023..1023) 
# 
# Element type: INTEGER
#
# ********** START of CurvatureValue **********
#

int16           value

int16           MIN                     = -1023
int16           MAX                     = 1023
int16           UNAVAILABLE             = 1023

int16           V_OUT_OF_RANGE_NEGATIVE = -1023
int16           V_STRAIGHT              = 0
int16           V_OUT_OF_RANGE_POSITIVE = 1022
int16           V_UNAVAILABLE           = 1023

# ********** END of CurvatureValue   **********
