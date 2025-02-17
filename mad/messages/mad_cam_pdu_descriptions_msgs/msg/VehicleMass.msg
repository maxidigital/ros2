#*                                                                                         *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                         *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                           *
#*                                                                                         *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                *
#*                                                                                         *
#* This program and the accompanying materials are made available under the                *
#* terms of the Eclipse Public License 2.0 which is available at                           *
#* http://www.eclipse.org/legal/epl-2.0.                                                   *
#*                                                                                         *
#* SPDX-License-Identifier: EPL-2.0                                                        *
#*                                                                                         *
#*                                                                                         *
#* File automatically generated with DLR Wind v2                                           *
#*                                                                                         *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0                     *
#*                                                                                         *
#* Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) cam(2) version(2)}                                                *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# 
#  This DE represents the mass of an empty loaded vehicle.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 1023`) to indicate that the applicable value is equal to or less than n x 10^5 gramm, and greater than (n-1) x 10^5 gramm,
#  - `1 023` indicates that the vehicle mass is greater than 102 200 000 g,
#  - `1 024` indicates  the vehicle mass information is unavailable.
# 
#  @note:	The empty load vehicle is defined in ISO 1176 [8], clause 4.6.
# 
#  @category: Vehicle information
#  @revision: Description updated in V2.1.1 (the meaning of 1 023 has changed slightly).
#   
#  ~~~ Units: gramm ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(1023), unavailable(1024) }(1..1024) 
# 
# Element type: DOUBLE
#
# ********** START of VehicleMass **********
#

float64         value

float64         MIN             = 100000.00252621254
float64         MAX             = 1.0240000258684164E8
float32         SCALAROPERAND   = 1.0E-5
float64         UNAVAILABLE     = 1.0240000258684164E8
float64         OUT_OF_RANGE    = 1.0230000258431543E8
float64         V_OUT_OF_RANGE  = 1.0230000258431543E8
float64         V_UNAVAILABLE   = 1.0240000258684164E8

# ********** END of VehicleMass   **********
