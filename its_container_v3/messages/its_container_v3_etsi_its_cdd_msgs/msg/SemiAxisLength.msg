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
#  This DE indicates the horizontal position confidence value which represents the estimated absolute position accuracy, in one of the axis direction as defined in a shape of ellipse with a
#  confidence level of 95 %.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 4 094`) if the accuracy is equal to or less than n * 0,01 metre,
#  - `4 094` if the accuracy is out of range, i.e. greater than 4,093 m,
#  - `4 095` if the accuracy information is unavailable.
# 
#  The value 0 shall not be used.
# 
#  @note: The fact that a position coordinate value is received with confidence value set to `unavailable(4095)`.
#  can be caused by several reasons, such as:
#  - the sensor cannot deliver the accuracy at the defined confidence level because it is a low-end sensor,
#  - the sensor cannot calculate the accuracy due to lack of variables, or
#  - there has been a vehicle bus (e.g. CAN bus) error.
#  In all 3 cases above, the position coordinate value may be valid and used by the application.
#  If a position coordinate value is received and its confidence value is set to `outOfRange(4094)`, it means that
#  the position coordinate value is not valid and therefore cannot be trusted. Such value is not useful
#  for the application.
# 
#  @category: GeoReference Information
#  @revision: Description revised in V2.1.1
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { doNotUse(0), outOfRange(4094), unavailable(4095) }(0..4095) 
# 
# Element type: FLOAT
#
# ********** START of SemiAxisLength **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 40.95
float32         SCALAROPERAND   = 100.0
float32         UNAVAILABLE     = 40.95
float32         OUT_OF_RANGE    = 40.94

float32         V_DO_NOT_USE    = 0.0
float32         V_OUT_OF_RANGE  = 40.94
float32         V_UNAVAILABLE   = 40.95

# ********** END of SemiAxisLength   **********
