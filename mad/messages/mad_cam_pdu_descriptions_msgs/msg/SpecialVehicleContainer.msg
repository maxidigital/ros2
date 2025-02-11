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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0                     *
#*                                                                                         *
#* Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) cam(2) version(2)}                                                *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# ASN.1 Definition:
# CHOICE {
#    publicTransportContainer PublicTransportContainer,
#    specialTransportContainer SpecialTransportContainer,
#    dangerousGoodsContainer DangerousGoodsContainer,
#    roadWorksContainerBasic RoadWorksContainerBasic,
#    rescueContainer RescueContainer,
#    emergencyContainer EmergencyContainer,
#    safetyCarContainer SafetyCarContainer,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of SpecialVehicleContainer **********
#

PublicTransportContainer[]  public_transport_container  #  choice = 0
SpecialTransportContainer[] special_transport_container #  choice = 1
DangerousGoodsContainer[]   dangerous_goods_container   #  choice = 2
RoadWorksContainerBasic[]   road_works_container_basic  #  choice = 3
RescueContainer[]           rescue_container            #  choice = 4
EmergencyContainer[]        emergency_container         #  choice = 5
SafetyCarContainer[]        safety_car_container        #  choice = 6

uint8                       LENGTH                      = 7

# ********** END of SpecialVehicleContainer   **********
