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
#  This DF  defines a predicted offset waypoint position within a path.
# 
#  It shall include the following components:
# 
#  @field deltaLatitude: an offset latitude with regards to a pre-defined reference position.
# 
#  @field deltaLongitude: an offset longitude with regards to a pre-defined reference position.
# 
#  @field horizontalPositionConfidence: the confidence value associated to the horizontal geographical position.
# 
#  @field deltaAltitude: an offset altitude with regards to a pre-defined reference position.
# 
#  @field altitudeConfidence: the confidence value associated to the altitude value of the geographical position.
# 
#  @field pathDeltaTime: The  travel time separated from the waypoint to the predefined reference position.
# 
#  @category GeoReference information
#  @revision: semantics updated in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    deltaLatitude DeltaLatitude,
#    deltaLongitude DeltaLongitude,
#    horizontalPositionConfidence PosConfidenceEllipse OPTIONAL,
#    deltaAltitude DeltaAltitude DEFAULT unavailable,
#    altitudeConfidence AltitudeConfidence DEFAULT unavailable,
#    pathDeltaTime DeltaTimeTenthOfSecond,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PathPointPredicted **********
#

DeltaLatitude          delta_latitude                 # an offset latitude with regards to a pre-defined reference position.
DeltaLongitude         delta_longitude                # an offset longitude with regards to a pre-defined reference position.
PosConfidenceEllipse[] horizontal_position_confidence # the confidence value associated to the horizontal geographical position.
                                                      # OPTIONAL
DeltaAltitude          delta_altitude                 # an offset altitude with regards to a pre-defined reference position.
AltitudeConfidence     altitude_confidence            # the confidence value associated to the altitude value of the geographical position.
DeltaTimeTenthOfSecond path_delta_time                # The  travel time separated from the waypoint to the predefined reference position.

# ********** END of PathPointPredicted   **********
