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
# 
#  This DF defines a predicted offset position that can be used within a predicted path or trajectory, together with optional data to describe a path zone shape.
# 
#  It shall include the following components:
#  @field deltaLatitude: the offset latitude with regards to a pre-defined reference position.
#  @field deltaLongitude: the offset longitude with regards to a pre-defined reference position.
#  @field horizontalPositionConfidence: the optional confidence value associated to the horizontal geographical position.
#  @field deltaAltitude: the optional offset altitude with regards to a pre-defined reference position, with default value unavailable.
#  @field altitudeConfidence: the optional confidence value associated to the altitude value of the geographical position, with default value unavailable.
#  @field pathDeltaTime: the optional travel time to the waypoint from the predefined reference position.
#  @field symmetricAreaOffset: the optional symmetric offset to generate a shape, see Annex D for details.
#  @field asymmetricAreaOffset: the optional asymmetric offset to generate a shape, see Annex D for details.
# 
#  @category GeoReference information
#  @revision: Based on PathPointPredicted created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    deltaLatitude DeltaLatitude,
#    deltaLongitude DeltaLongitude,
#    horizontalPositionConfidence PosConfidenceEllipse OPTIONAL,
#    deltaAltitude DeltaAltitude DEFAULT unavailable,
#    altitudeConfidence AltitudeConfidence DEFAULT unavailable,
#    pathDeltaTime PathDeltaTimeChoice OPTIONAL,
#    symmetricAreaOffset StandardLength9b OPTIONAL,
#    asymmetricAreaOffset StandardLength9b OPTIONAL,
#    ...,
#    [[ headingValue HeadingValue OPTIONAL,
#    absSpeed SpeedValue OPTIONAL,
#    longitudinalAcceleration AccelerationValue( (WITH COMPONENTS{
#   ..., symmetricAreaOffset ABSENT, asymmetricAreaOffset ABSENT
# })| (WITH COMPONENTS{
#   ..., symmetricAreaOffset PRESENT, asymmetricAreaOffset ABSENT
# })| (WITH COMPONENTS{
#   ..., symmetricAreaOffset PRESENT, asymmetricAreaOffset PRESENT
# }))OPTIONAL ]] 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PathPointPredicted **********
#

its_container_v4_etsi_its_cdd_msgs/DeltaLatitude          delta_latitude                 # the offset latitude with regards to a pre-defined reference position.
its_container_v4_etsi_its_cdd_msgs/DeltaLongitude         delta_longitude                # the offset longitude with regards to a pre-defined reference position.
its_container_v4_etsi_its_cdd_msgs/PosConfidenceEllipse[] horizontal_position_confidence # the optional confidence value associated to the horizontal geographical position.
                                                                                         # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/DeltaAltitude          delta_altitude                 # the optional offset altitude with regards to a pre-defined reference position, with default value unavailable.
its_container_v4_etsi_its_cdd_msgs/AltitudeConfidence     altitude_confidence            # the optional confidence value associated to the altitude value of the geographical position, with default value unavailable.
its_container_v4_etsi_its_cdd_msgs/PathDeltaTimeChoice[]  path_delta_time                # the optional travel time to the waypoint from the predefined reference position.
                                                                                         # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/StandardLength9b[]     symmetric_area_offset          # the optional symmetric offset to generate a shape, see Annex D for details.
                                                                                         # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/StandardLength9b[]     asymmetric_area_offset         # the optional asymmetric offset to generate a shape, see Annex D for details.
                                                                                         # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/HeadingValue[]         heading_value                  # OPTIONAL
                                                                                         # Extension group 1
its_container_v4_etsi_its_cdd_msgs/SpeedValue[]           abs_speed                      # OPTIONAL
                                                                                         # Extension group 1
its_container_v4_etsi_its_cdd_msgs/AccelerationValue[]    longitudinal_acceleration      # OPTIONAL
                                                                                         # Extension group 1

# ********** END of PathPointPredicted   **********
