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
#  This DE indicates the perpendicular distance between front and rear axle of the wheel base of vehicle.
# 
#  The value shall be set to:
#  - `n` (`n >= 1` and `n < 126`) if the value is equal to or less than n x 0,1 metre  and more than (n-1) x 0,1 metre,
#  - `126` indicates that the wheel base distance is equal to or greater than 12,5 metres,
#  - `127` indicates that the information is unavailable.
# 
#  @category: Vehicle information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(126), unavailable(127) }(1..127) 
# 
# Element type: FLOAT
#
# ********** START of WheelBaseVehicle **********
#

float32         value

float32         MIN             = 0.1
float32         MAX             = 12.7
float32         SCALAROPERAND   = 10.0
float32         UNAVAILABLE     = 12.7
float32         OUT_OF_RANGE    = 12.6

float32         V_OUT_OF_RANGE  = 12.6
float32         V_UNAVAILABLE   = 12.7

# ********** END of WheelBaseVehicle   **********
