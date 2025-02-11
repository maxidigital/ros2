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
#  This DF represents the estimated position along the longitudinal extension of a carriageway or lane.
# 
#  It shall include the following components:
# 
#  @field  longitudinalLanePositionValue: the mean value of the longitudinal position along the carriageway or lane w.r.t. an externally defined start position.
# 
#  @field  longitudinalLanePositionConfidence: The confidence value associated to the value.
# 
#  @category: Road topology information
#  @revision: created in V2.1.1, description revised in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    longitudinalLanePositionValue LongitudinalLanePositionValue,
#    longitudinalLanePositionConfidence LongitudinalLanePositionConfidence 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of LongitudinalLanePosition **********
#

LongitudinalLanePositionValue      longitudinal_lane_position_value      # the mean value of the longitudinal position along the carriageway or lane w.r.t. an externally defined start position.
LongitudinalLanePositionConfidence longitudinal_lane_position_confidence # The confidence value associated to the value.

# ********** END of LongitudinalLanePosition   **********
