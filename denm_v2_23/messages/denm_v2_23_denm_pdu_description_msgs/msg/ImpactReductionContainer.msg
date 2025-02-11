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
#  This type contains detailed information about the vehicle in which the originating ITS-S is mounted, for mitigating the consequences
#  of a collision.
# 
#  It shall include the following components:
# 
#  @field heightLonCarrLeft: the height of the left longitudinal carrier of the vehicle from base to top.
# 
#  @field heightLonCarrRight: the height of the right longitudinal carrier of the vehicle from base to top.
# 
#  @field posLonCarrLeft: the position of the left longitudinal carrier of vehicle.
# 
#  @field posLonCarrRight: the position of the right longitudinal carrier of vehicle.
# 
#  @field positionOfPillars: information about the vertical support of the vehicle in which the originating ITS-S is mounted. It shall be
#  included for passenger vehicles only.
# 
#  @field posCentMass: the position of the centre of mass of the vehicle.
# 
#  @field wheelBaseVehicle: the wheel base of the vehicle.
# 
#  @field turningRadius: the turning radius of the vehicle.
# 
#  @field posFrontAx: the position of the front axle of the vehicle.
# 
#  @field positionOfOccupants: indicates whether an in-vehicle seat is occupied at the moment of generation of the message.
# 
#  @field vehicleMass: the mass of the unloaded vehicle
# 
#  @field requestResponseIndication: indicates whether the originating ITS-S transmitting the impactReduction component is requesting
#  the receiving ITS-S to provide also its impactReduction component.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    heightLonCarrLeft HeightLonCarr,
#    heightLonCarrRight HeightLonCarr,
#    posLonCarrLeft PosLonCarr,
#    posLonCarrRight PosLonCarr,
#    positionOfPillars PositionOfPillars,
#    posCentMass PosCentMass,
#    wheelBaseVehicle WheelBaseVehicle,
#    turningRadius TurningRadius,
#    posFrontAx PosFrontAx,
#    positionOfOccupants PositionOfOccupants,
#    vehicleMass VehicleMass,
#    requestResponseIndication RequestResponseIndication 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ImpactReductionContainer **********
#

its_container_v4_etsi_its_cdd_msgs/HeightLonCarr             height_lon_carr_left        # the height of the left longitudinal carrier of the vehicle from base to top.
its_container_v4_etsi_its_cdd_msgs/HeightLonCarr             height_lon_carr_right       # the height of the right longitudinal carrier of the vehicle from base to top.
its_container_v4_etsi_its_cdd_msgs/PosLonCarr                pos_lon_carr_left           # the position of the left longitudinal carrier of vehicle.
its_container_v4_etsi_its_cdd_msgs/PosLonCarr                pos_lon_carr_right          # the position of the right longitudinal carrier of vehicle.
its_container_v4_etsi_its_cdd_msgs/PositionOfPillars         position_of_pillars         # information about the vertical support of the vehicle in which the originating ITS-S is mounted. It shall be
its_container_v4_etsi_its_cdd_msgs/PosCentMass               pos_cent_mass               # the position of the centre of mass of the vehicle.
its_container_v4_etsi_its_cdd_msgs/WheelBaseVehicle          wheel_base_vehicle          # the wheel base of the vehicle.
its_container_v4_etsi_its_cdd_msgs/TurningRadius             turning_radius              # the turning radius of the vehicle.
its_container_v4_etsi_its_cdd_msgs/PosFrontAx                pos_front_ax                # the position of the front axle of the vehicle.
its_container_v4_etsi_its_cdd_msgs/PositionOfOccupants       position_of_occupants       # indicates whether an in-vehicle seat is occupied at the moment of generation of the message.
its_container_v4_etsi_its_cdd_msgs/VehicleMass               vehicle_mass                # the mass of the unloaded vehicle
its_container_v4_etsi_its_cdd_msgs/RequestResponseIndication request_response_indication # indicates whether the originating ITS-S transmitting the impactReduction component is requesting

# ********** END of ImpactReductionContainer   **********
