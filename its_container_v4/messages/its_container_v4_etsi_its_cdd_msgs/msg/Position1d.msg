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
#  This DE represents a position along a single dimension such as the middle of a road or lane, measured as an offset from an externally defined starting point,
#  in direction of an externally defined reference direction.
# 
#  The value shall be set to:
#  - `n` (`n >= -8190` and `n < 0`) if the position is equal to or less than n x 1 metre and more than (n-1) x 1 metre, in opposite direction of the reference direction,
#  - `0` if the position is at the starting point,
#  - `n` (`n > 0` and `n < 8190`) if the position is equal to or less than n x 1 metre and more than (n-1) x 1 metre, in the same direction as the reference direction,
#  - `8 190` if the position is out of range, i.e. equal to or greater than 8 189 m,
#  - `8 191` if the position information is not available.
# 
#  @category: GeoReference information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# INTEGER { outOfRange(8190), unavailable(8191) }(-8190..8191) 
# 
# Element type: INTEGER
#
# ********** START of Position1d **********
#

int16           value

int16           MIN             = -8190
int16           MAX             = 8191
int16           UNAVAILABLE     = 8191
int16           OUT_OF_RANGE    = 8190

int16           V_OUT_OF_RANGE  = 8190
int16           V_UNAVAILABLE   = 8191

# ********** END of Position1d   **********
