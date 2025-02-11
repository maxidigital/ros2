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
#  This DF defines a predicted offset position that can be used within a predicted path or trajectory, together with optional data to describe a path zone shape.
# 
#  It shall include the following components:
# 
#  @field deltaLatitude: the offset latitude with regards to a pre-defined reference position.
# 
#  @field deltaLongitude: the offset longitude with regards to a pre-defined reference position.
# 
#  @field horizontalPositionConfidence: the optional confidence value associated to the horizontal geographical position.
# 
#  @field deltaAltitude: the optional offset altitude with regards to a pre-defined reference position, with default value unavailable.
# 
#  @field altitudeConfidence: the optional confidence value associated to the altitude value of the geographical position, with default value unavailable.
# 
#  @field pathDeltaTime: the optional travel time separated from the waypoint to the predefined reference position.
# 
#  @field symmetricAreaOffset: the optional symmetric offset applied to the position in order to generate a shape.
#  if the component asymmetricAreaOffset is absent, the symmetricAreaOffset is applied to both sides of the position (left and right)
#  If the component asymmetricAreaOffset is present, the symmetricAreaOffset is applied to the enclosed side of a curve.
#  If the curvature of the path is 0 the offset is applied to the left handside of the path.
#  To determine how the lateral offset is to be applied to the path, the following steps are executed:
#  - For each nth pathPointPredicted (ppp_n), vectors v_(n-) and v_(n+) from ppp_n to ppp_(n-1) and from ppp_n to ppp_(n+1) are created.
#  - v^_(n-) and v^_(n+), the normalized vectors of vectors v_(n-) and v_(n+) are created.
#  - v^_o the normalized sum of the vectors v^_(n-) and v^_(n+) is calculated.
#  The symmetrical border offset spans a vector in the direction of both v^_o and -v^_o, if the asymmetrical border offset is ABSENT.
#  The symmetrical border offset spans a vector in the direction of v^_o if the asymmetrical border offset is PRESENT.
#  The ends of the border offsets vectors of ppp_n for each side are connected to the border offsets vectors of the endings of ppp_(n-1) and ppp_(n+1) to create the indicated zone.
#  If @ref PathPredicted has only one element, the encoded area represents a circle with the asymmetricAreaOffset as the defining radius.
# 
#  @field asymmetricAreaOffset: the optional asymmetric offset applied to the outer curve of the path in order to generate a shape.
#  The asymmetrical border offset spans a vector in the direction of -v^_o
# 
#  @category GeoReference information
#  @revision: Created in V2.1.1, type of pathDeltaTime changed and optionality added, fields symmetricAreaOffset and asymmetricAreaOffset added in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    deltaLatitude DeltaLatitude,
#    deltaLongitude DeltaLongitude,
#    horizontalPositionConfidence PosConfidenceEllipse OPTIONAL,
#    deltaAltitude DeltaAltitude DEFAULT unavailable,
#    altitudeConfidence AltitudeConfidence DEFAULT unavailable,
#    pathDeltaTime PathDeltaTimeChoice,
#    symmetricAreaOffset StandardLength9b OPTIONAL,
#    asymmetricAreaOffset StandardLength9b( (WITH COMPONENTS{
#   ..., symmetricAreaOffset ABSENT, asymmetricAreaOffset ABSENT
# })| (WITH COMPONENTS{
#   ..., symmetricAreaOffset PRESENT, asymmetricAreaOffset ABSENT
# })| (WITH COMPONENTS{
#   ..., symmetricAreaOffset PRESENT, asymmetricAreaOffset PRESENT
# }))OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PathPointPredicted **********
#

DeltaLatitude          delta_latitude                 # the offset latitude with regards to a pre-defined reference position.
DeltaLongitude         delta_longitude                # the offset longitude with regards to a pre-defined reference position.
PosConfidenceEllipse[] horizontal_position_confidence # the optional confidence value associated to the horizontal geographical position.
                                                      # OPTIONAL
DeltaAltitude          delta_altitude                 # the optional offset altitude with regards to a pre-defined reference position, with default value unavailable.
AltitudeConfidence     altitude_confidence            # the optional confidence value associated to the altitude value of the geographical position, with default value unavailable.
PathDeltaTimeChoice    path_delta_time                # the optional travel time separated from the waypoint to the predefined reference position.
StandardLength9b[]     symmetric_area_offset          # the optional symmetric offset applied to the position in order to generate a shape.
                                                      # OPTIONAL
StandardLength9b[]     asymmetric_area_offset         # the optional asymmetric offset applied to the outer curve of the path in order to generate a shape.
                                                      # OPTIONAL

# ********** END of PathPointPredicted   **********
