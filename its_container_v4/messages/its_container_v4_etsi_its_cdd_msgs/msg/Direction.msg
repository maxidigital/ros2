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
#  This DE indicates a direction with respect to a defined reference direction.
#  Example: a reference direction may be implicitly defined by the definition of a geographical zone.
# 
#  The value shall be set to:
#  - 0 - `sameDirection`     - to indicate the same direction as the reference direction,
#  - 1 - `oppositeDirection` - to indicate opposite direction as the reference direction,
#  - 2 - `bothDirections`    - to indicate both directions, i.e. the same and the opposite direction,
#  - 3 - `unavailable`       - to indicate that the information is unavailable.
# 
#  @category: GeoReference information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { sameDirection(0), oppositeDirection(1), bothDirections(2), unavailable(3) }(0..3) 
# 
# Element type: INTEGER
#
# ********** START of Direction **********
#

uint8           value

uint8           MIN                  = 0
uint8           MAX                  = 3
uint8           UNAVAILABLE          = 3

uint8           V_SAME_DIRECTION     = 0
uint8           V_OPPOSITE_DIRECTION = 1
uint8           V_BOTH_DIRECTIONS    = 2
uint8           V_UNAVAILABLE        = 3

# ********** END of Direction   **********
