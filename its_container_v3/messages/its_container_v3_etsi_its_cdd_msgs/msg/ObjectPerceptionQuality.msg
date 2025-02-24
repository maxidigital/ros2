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
#  This DE represents a single-value indication about the overall information quality of a perceived object.
# 
#  The value shall be set to:
#  - `0`                        : if there is no confidence in detected object, e.g. for "ghost"-objects or if confidence could not be computed,
#  - `n` (`n > 0` and `n < 15`) : for the applicable confidence value,
#  - `15`                       : if there is full confidence in the detected Object.
# 
#  @category: Sensing information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { noConfidence(0), fullConfidence(15) }(0..15) 
# 
# Element type: INTEGER
#
# ********** START of ObjectPerceptionQuality **********
#

uint8           value

uint8           MIN               = 0
uint8           MAX               = 15

uint8           V_NO_CONFIDENCE   = 0
uint8           V_FULL_CONFIDENCE = 15

# ********** END of ObjectPerceptionQuality   **********
