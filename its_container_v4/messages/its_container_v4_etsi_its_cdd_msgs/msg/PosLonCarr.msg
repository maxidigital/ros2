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
#  This DE represents the distance from the centre of vehicle front bumper to the right or left longitudinal carrier of vehicle.
#  The left/right carrier refers to the left/right as seen from a passenger sitting in the vehicle.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 126`) for any aplicable value between 0,01 metre and 1,26 metres,
#  - `126` for values equal to or higher than 1.25 metres,
#  - `127` if the information is unavailable.
# 
#  @category Vehicle information
#  @revision: description revised in V2.1.1 (the meaning of 126 has changed slightly)
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { outOfRange(126), unavailable(127) }(1..127) 
# 
# Element type: FLOAT
#
# ********** START of PosLonCarr **********
#

float32         value

float32         MIN             = 0.01
float32         MAX             = 1.27
float32         SCALAROPERAND   = 100.0
float32         UNAVAILABLE     = 1.27
float32         OUT_OF_RANGE    = 1.26

float32         V_OUT_OF_RANGE  = 1.26
float32         V_UNAVAILABLE   = 1.27

# ********** END of PosLonCarr   **********
