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
#  This DE represents an offset latitude with regards to a defined latitude value.
#  It may be used to describe a geographical point with regards to a specific reference geographical position.
# 
#  The value shall be set to:
#  - `n` (`n >= -131 071` and `n < 0`) for offset n x 10^-7 degree towards the south from the reference position,
#  - `0` for no latitudinal offset,
#  - `n` (`n > 0` and `n < 131 072`) for offset n x 10^-7 degree towards the north from the reference position,
#  - `131 072` when the information is unavailable.
# 
#  @category: GeoReference information
#  @revision: editorial update in V2.1.1
#   
#  ~~~ Units: degree ~~~
# 
# ASN.1 Definition:
# INTEGER { unavailable(131072) }(-131071..131072) 
# 
# Element type: DOUBLE
#
# ********** START of DeltaLatitude **********
#

float64         value

float64         MIN             = -0.0131071
float64         MAX             = 0.0131072
float32         SCALAROPERAND   = 1.0E7
float64         UNAVAILABLE     = 0.0131072
float64         V_UNAVAILABLE   = 0.0131072

# ********** END of DeltaLatitude   **********
