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
#  This type contains detailed information of a roadwork zone and specific access conditions.
# 
#  It shall include the following components:
# 
#  @field lightBarSirenInUse: optionally indicates whether a roadwork vehicle has switched on the light bar or siren.
#  It is used when the roadwork involves a specific roadwork vehicle
# 
#  @field closedLanes: optionally indicates whether the roadwork has caused the closure of one or several driving lanes.
#  Optionally, it may indicate whether a hard shoulder lane is closed to traffic or can be used for specific usage (e.g. for stopping).
# 
#  @field restriction: the optional type(s) of vehicles that are restricted to access the road work zone.
#  More than one vehicle types may be provided by this component if the restriction apply to multiple vehicle types.
# 
#  @field speedLimit: the optional speed limitation applied to the roadwork zone.
# 
#  @field incidentIndication: the optional incident related to the roadworks to provide additional information of the roadworks zone.
# 
#  @field recommendedPath: the optional recommended itinerary in order to contour the roadworks zone. If present, a recommended path
#  shall be a list of path points in the order from the starting point closest to the roadworks zone to the end point of the recommended path.
# 
#  @field startingPointSpeedLimit: the optional effective starting position of a speed limit being applied to the roadwork zone,
#  with respect to the component eventPosition on the Management Container.
#  This component shall be present if the speed limit is applied at a certain distance prior to the roadwork zone starting position.
# 
#  @field trafficFlowRule: optionally indicates the side of the road to which the traffic should flow around a roadwork.
# 
#  @field referenceDenms: an optional sequence of actionIds for different DENMs that describe the same event.
#  If it is available, it indicates the actionIds of all other DENMs describing this event.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    lightBarSirenInUse LightBarSirenInUse OPTIONAL,
#    closedLanes ClosedLanes OPTIONAL,
#    restriction RestrictedTypes OPTIONAL,
#    speedLimit SpeedLimit OPTIONAL,
#    incidentIndication CauseCodeV2 OPTIONAL,
#    recommendedPath ItineraryPath OPTIONAL,
#    startingPointSpeedLimit DeltaReferencePosition OPTIONAL,
#    trafficFlowRule TrafficRule OPTIONAL,
#    referenceDenms ActionIdList OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RoadWorksContainerExtended **********
#

its_container_v4_etsi_its_cdd_msgs/LightBarSirenInUse[]     light_bar_siren_in_use     # optionally indicates whether a roadwork vehicle has switched on the light bar or siren.
                                                                                       # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/ClosedLanes[]            closed_lanes               # optionally indicates whether the roadwork has caused the closure of one or several driving lanes.
                                                                                       # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/RestrictedTypes[]        restriction                # the optional type(s) of vehicles that are restricted to access the road work zone.
                                                                                       # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/SpeedLimit[]             speed_limit                # the optional speed limitation applied to the roadwork zone.
                                                                                       # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/CauseCodeV2[]            incident_indication        # the optional incident related to the roadworks to provide additional information of the roadworks zone.
                                                                                       # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/ItineraryPath[]          recommended_path           # the optional recommended itinerary in order to contour the roadworks zone. If present, a recommended path
                                                                                       # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/DeltaReferencePosition[] starting_point_speed_limit # the optional effective starting position of a speed limit being applied to the roadwork zone,
                                                                                       # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/TrafficRule[]            traffic_flow_rule          # optionally indicates the side of the road to which the traffic should flow around a roadwork.
                                                                                       # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/ActionIdList[]           reference_denms            # an optional sequence of actionIds for different DENMs that describe the same event.
                                                                                       # OPTIONAL

# ********** END of RoadWorksContainerExtended   **********
