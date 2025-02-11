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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0             *
#*                                                                                 *
#* Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) e2v(1) version(3)}                                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# ASN.1 Definition:
# SEQUENCE {
#    responseFlags RssProperResponseFlags,
#    longitudinalResponse RssLongitudinalResponse,
#    lateralResponseRight RssLateralResponse,
#    lateralResponseLeft RssLateralResponse,
#    unstructuredConstellationResponse RssUnstructuredConstellationResponse,
#    headingRanges CartesianAngleRanges,
#    dangerousObjects ObjectIdentifierList,
#    longitudinalRange LongitudinalAccelerationRange,
#    lateralRightRange LateralAccelerationRange,
#    lateralLeftRange LateralAccelerationRange 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RssProperResponse **********
#

RssProperResponseFlags               response_flags
RssLongitudinalResponse              longitudinal_response
RssLateralResponse                   lateral_response_right
RssLateralResponse                   lateral_response_left
RssUnstructuredConstellationResponse unstructured_constellation_response
CartesianAngleRanges                 heading_ranges
ObjectIdentifierList                 dangerous_objects
LongitudinalAccelerationRange        longitudinal_range
LateralAccelerationRange             lateral_right_range
LateralAccelerationRange             lateral_left_range

# ********** END of RssProperResponse   **********
