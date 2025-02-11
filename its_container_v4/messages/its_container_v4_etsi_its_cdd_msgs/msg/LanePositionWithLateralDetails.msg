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
#  This DF is a third-level DF that represents a lane position and is an extended version of @ref LanePositionAndType that adds the distances to the left and right lane border.
# 
#  It shall additionally include the following components:
# 
#  @field distanceToLeftBorder: the distance of the transversal position to the left lane border. The real value shall be rounded to the next lower encoding-value.
# 
#  @field distanceToRightBorder: the distance of the transversal position to the right lane border. The real value shall be rounded to the next lower encoding-value.
# 
#  @category: Road Topology information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    COMPONENTS OF LanePositionAndType,
#    distanceToLeftBorder StandardLength9b,
#    distanceToRightBorder StandardLength9b,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of LanePositionWithLateralDetails **********
#

LanePosition     transversal_position     # the transversal position.
LaneType         lane_type                # the type of the lane identified in the component transversalPosition. By default set to `traffic`.
Direction        direction                # the traffic direction for the lane position relative to a defined reference direction. By default set to `sameDirection`, i.e. following the reference direction.
StandardLength9b distance_to_left_border  # the distance of the transversal position to the left lane border. The real value shall be rounded to the next lower encoding-value.
StandardLength9b distance_to_right_border # the distance of the transversal position to the right lane border. The real value shall be rounded to the next lower encoding-value.

# ********** END of LanePositionWithLateralDetails   **********
