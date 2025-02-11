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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:2.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DF indicates the profile of a VRU including sub-profile information
#  It identifies four options corresponding to the four types of VRU profiles specified in ETSI TS 103 300-2 [18]:
# 
#  @field pedestrian: VRU Profile 1 - Pedestrian.
# 
#  @field bicyclistAndLightVruVehicle: VRU Profile  2 - Bicyclist.
# 
#  @field motorcyclist: VRU Profile 3  - Motorcyclist.
# 
#  @field animal: VRU Profile  4 -  Animal.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# CHOICE {
#    pedestrian VruSubProfilePedestrian,
#    bicyclistAndLightVruVehicle VruSubProfileBicyclist,
#    motorcyclist VruSubProfileMotorcyclist,
#    animal VruSubProfileAnimal,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of VruProfileAndSubprofile **********
#

VruSubProfilePedestrian[]   pedestrian                      #  choice = 0
VruSubProfileBicyclist[]    bicyclist_and_light_vru_vehicle #  choice = 1
VruSubProfileMotorcyclist[] motorcyclist                    #  choice = 2
VruSubProfileAnimal[]       animal                          #  choice = 3

uint8                       LENGTH                          = 4

# ********** END of VruProfileAndSubprofile   **********
