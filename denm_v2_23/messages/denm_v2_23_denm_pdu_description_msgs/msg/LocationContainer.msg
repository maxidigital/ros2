#*                                                                                         *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                         *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                           *
#*                                                                                         *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                *
#*                                                                                         *
#* This program and the accompanying materials are made available under the                *
#* terms of the Eclipse Public License 2.0 which is available at                           *
#* http://www.eclipse.org/legal/epl-2.0.                                                   *
#*                                                                                         *
#* SPDX-License-Identifier: EPL-2.0                                                        *
#*                                                                                         *
#*                                                                                         *
#* File automatically generated with DLR Wind v2                                           *
#*                                                                                         *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:denm_v2_23:1.0                  *
#*                                                                                         *
#* Module: DENM_PDU_Description {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) denmPduRelease2(103831) major-version-2(2) minor-version-2(2)}               *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# 
#  This type represents the Location Container.
# 
#  It shall include the following components:
# 
#  @field eventSpeed: optional speed of a detected dynamic event and the confidence of the speed information.
# 
#  @field eventPositionHeading: the optional heading of a dynamic event and the confidence of the heading information.
# 
#  @field detectionZonesToEventPosition: the detection zone information approaching the event position, see clause 6.1.3.3.
# 
#  @field roadType: the optional road type information at the event position.
# 
#  @field lanePositions: the optional lane(s) where the event is located, at the position indicated by the component eventPosition
#  of the Management container and for a given reference direction.
# 
#  @field occupiedLanes: the optional lane(s) that are fully or partially occupied by the event, at the position indicated by the
#  component eventPosition of the Management container and for a given reference direction.
# 
#  @field linkedIvims: the optional list of DF IvimReference, pointing to IVIMs that are semantically connected because providing information
#  applying to the road segment(s) covered by the components detectionZonesToEventPosition, detectionZonesToSpecifiedEventPoint and
#  the SituationContainer component eventZone.
# 
#  @field linkedMapem: the optional list of DF Mapreference, pointing to MAPEMs that are semantically connected because providing information
#  applying to the road segment(s) covered by the component detectionZonesToEventPosition, detectionZonesToSpecifiedEventPoint and
#  the SituationContainer component eventZone.
# 
#  @field detectionZonesToSpecifiedEventPoint: the optional detection zone information approaching towards a
#  specified event point, see clause 6.1.3.3.
# 
#  @field predictedPaths: the optional list of future paths or trajectories that the event may move along or zones that the event may occupy.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    eventSpeed Speed OPTIONAL,
#    eventPositionHeading Wgs84Angle OPTIONAL,
#    detectionZonesToEventPosition Traces,
#    roadType RoadType OPTIONAL,
#    ...,
#    [[ lanePositions GeneralizedLanePositions OPTIONAL,
#    occupiedLanes OccupiedLanesWithConfidence OPTIONAL,
#    linkedIvims IvimReferences OPTIONAL,
#    linkedMapems MapReferences OPTIONAL,
#    detectionZonesToSpecifiedEventPoint TracesExtended OPTIONAL,
#    predictedPaths PathPredictedList OPTIONAL ]] 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of LocationContainer **********
#

its_container_v4_etsi_its_cdd_msgs/Speed[]                       event_speed                              # optional speed of a detected dynamic event and the confidence of the speed information.
                                                                                                          # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/Wgs84Angle[]                  event_position_heading                   # the optional heading of a dynamic event and the confidence of the heading information.
                                                                                                          # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/Traces                        detection_zones_to_event_position        # the detection zone information approaching the event position, see clause 6.1.3.3.
its_container_v4_etsi_its_cdd_msgs/RoadType[]                    road_type                                # the optional road type information at the event position.
                                                                                                          # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/GeneralizedLanePositions[]    lane_positions                           # the optional lane(s) where the event is located, at the position indicated by the component eventPosition
                                                                                                          # OPTIONAL
                                                                                                          # Extension group 1
its_container_v4_etsi_its_cdd_msgs/OccupiedLanesWithConfidence[] occupied_lanes                           # the optional lane(s) that are fully or partially occupied by the event, at the position indicated by the
                                                                                                          # OPTIONAL
                                                                                                          # Extension group 1
its_container_v4_etsi_its_cdd_msgs/IvimReferences[]              linked_ivims                             # the optional list of DF IvimReference, pointing to IVIMs that are semantically connected because providing information
                                                                                                          # OPTIONAL
                                                                                                          # Extension group 1
its_container_v4_etsi_its_cdd_msgs/MapReferences[]               linked_mapems                            # OPTIONAL
                                                                                                          # Extension group 1
its_container_v4_etsi_its_cdd_msgs/TracesExtended[]              detection_zones_to_specified_event_point # the optional detection zone information approaching towards a
                                                                                                          # OPTIONAL
                                                                                                          # Extension group 1
its_container_v4_etsi_its_cdd_msgs/PathPredictedList[]           predicted_paths                          # the optional list of future paths or trajectories that the event may move along or zones that the event may occupy.
                                                                                                          # OPTIONAL
                                                                                                          # Extension group 1

# ********** END of LocationContainer   **********
