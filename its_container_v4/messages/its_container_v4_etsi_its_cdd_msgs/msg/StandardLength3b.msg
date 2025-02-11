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
#  The DE represents length as a measure of distance between points.
# 
#  The value shall be set to:
#  - 0 `lessThan50m`   - for distances below 50 m,
#  - 1 `lessThan100m`  - for distances below 100 m,
#  - 2 `lessThan200m`  - for distances below 200 m,
#  - 3 `lessThan500m`  - for distances below 300 m,
#  - 4 `lessThan1000m` - for distances below 1 000 m,
#  - 5 `lessThan5km`   - for distances below 5 000 m,
#  - 6 `lessThan10km`  - for distances below 10 000 m,
#  - 7 `over10km`      - for distances over 10 000 m.
# 
#  @category: GeoReference information
#  @revision: Created in V2.1.1 from RelevanceDistance
#   
# ASN.1 Definition:
# ENUMERATED { lessThan50m(0), lessThan100m(1), lessThan200m(2), lessThan500m(3), lessThan1000m(4), lessThan5km(5), lessThan10km(6), over10km(7) } 
# 
# Element type: ENUMERATED
#
# ********** START of StandardLength3b **********
#

int32           value

int32           MIN              = 0
int32           MAX              = 7

int32           V_LESS_THAN50M   = 0
int32           V_LESS_THAN100M  = 1
int32           V_LESS_THAN200M  = 2
int32           V_LESS_THAN500M  = 3
int32           V_LESS_THAN1000M = 4
int32           V_LESS_THAN5KM   = 5
int32           V_LESS_THAN10KM  = 6
int32           V_OVER10KM       = 7

# ********** END of StandardLength3b   **********
