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
#  This type represents the � La Carte Container.
# 
#  It shall include the following components:
# 
#  @field lanePosition: the optional lane position of the event.
# 
#  @field impactReduction: optional vehicle data for collision mitigation.
# 
#  @field externalTemperature: optional the ambient temperature at the event position.
# 
#  @field roadWorks: optional information of the roadwork zone.
# 
#  @field positioningSolution: optionally indicates the technical solution being used by the originating ITS-S to estimate the event position.
# 
#  @field stationaryVehicle: optional information about a stationary vehicle.
# 
#  @field roadConfiguration: optional information about the configuration of the road.
# 
#  @field precrash: the optional information about perceived objects that represent hazards and/or could be subject of collisions.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    lanePosition LanePosition OPTIONAL,
#    impactReduction ImpactReductionContainer OPTIONAL,
#    externalTemperature Temperature OPTIONAL,
#    roadWorks RoadWorksContainerExtended OPTIONAL,
#    positioningSolution PositioningSolutionType OPTIONAL,
#    stationaryVehicle StationaryVehicleContainer OPTIONAL,
#    ...,
#    [[ roadConfiguration RoadConfigurationContainer OPTIONAL,
#    precrash PreCrashContainer OPTIONAL ]] 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of AlacarteContainer **********
#

its_container_v4_etsi_its_cdd_msgs/LanePosition[]            lane_position        # the optional lane position of the event.
                                                                                  # OPTIONAL
ImpactReductionContainer[]                                   impact_reduction     # optional vehicle data for collision mitigation.
                                                                                  # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/Temperature[]             external_temperature # optional the ambient temperature at the event position.
                                                                                  # OPTIONAL
RoadWorksContainerExtended[]                                 road_works           # optional information of the roadwork zone.
                                                                                  # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/PositioningSolutionType[] positioning_solution # optionally indicates the technical solution being used by the originating ITS-S to estimate the event position.
                                                                                  # OPTIONAL
StationaryVehicleContainer[]                                 stationary_vehicle   # optional information about a stationary vehicle.
                                                                                  # OPTIONAL
RoadConfigurationContainer[]                                 road_configuration   # optional information about the configuration of the road.
                                                                                  # OPTIONAL
                                                                                  # Extension group 1
PreCrashContainer[]                                          precrash             # the optional information about perceived objects that represent hazards and/or could be subject of collisions.
                                                                                  # OPTIONAL
                                                                                  # Extension group 1

# ********** END of AlacarteContainer   **********
