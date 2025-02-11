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
#  This DE indicates the perpendicular distance from the centre of mass of an empty load vehicle to the front line of
#  the vehicle bounding box of the empty load vehicle.
# 
#  The value shall be set to:
#  - `n` (`n > 0` and `n < 62`) for any aplicable value n between 0,1 metre and 6,2 metres,
#  - `62` for values equal to or higher than 6.1 metres,
#  - `63`  if the information is unavailable.
# 
#  @note:	The empty load vehicle is defined in ISO 1176 [8], clause 4.6.
# 
#  @category Vehicle information
#  @revision: description revised in V2.1.1 (the meaning of 62 has changed slightly)
#   
#  ~~~ Units: metre ~~~
# 
# ASN.1 Definition:
# INTEGER { tenCentimetres(1), outOfRange(62), unavailable(63) }(1..63) 
# 
# Element type: FLOAT
#
# ********** START of PosCentMass **********
#

float32         value

float32         MIN               = 0.1
float32         MAX               = 6.3
float32         SCALAROPERAND     = 10.0
float32         UNAVAILABLE       = 6.3
float32         OUT_OF_RANGE      = 6.2

float32         V_TEN_CENTIMETRES = 0.1
float32         V_OUT_OF_RANGE    = 6.2
float32         V_UNAVAILABLE     = 6.3

# ********** END of PosCentMass   **********
