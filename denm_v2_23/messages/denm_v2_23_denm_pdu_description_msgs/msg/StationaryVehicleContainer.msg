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
#  This type contains detailed information about a stationary vehicle.
# 
#  It shall include the following components:
# 
#  @field stationarySince: the optional time duration of the stationary vehicle being stationary.
# 
#  @field stationaryCause: optional additional information to describe causes of the stationary vehicle event such as human problem.
# 
#  @field carryingDangerousGoods: optional information on the type of dangerous goods, the required emergency action and other information.
# 
#  @field numberOfOccupants: the optional estimated number of occupants involved in the stationary vehicle event.
# 
#  @field vehicleIdentification: the optional identification of the stationary vehicle.
# 
#  @field energyStorageType: the optional vehicle energy storage type information of the stationary vehicle, such as electric, diesel, etc.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    stationarySince StationarySince OPTIONAL,
#    stationaryCause CauseCodeV2 OPTIONAL,
#    carryingDangerousGoods DangerousGoodsExtended OPTIONAL,
#    numberOfOccupants NumberOfOccupants OPTIONAL,
#    vehicleIdentification VehicleIdentification OPTIONAL,
#    energyStorageType EnergyStorageType OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of StationaryVehicleContainer **********
#

its_container_v4_etsi_its_cdd_msgs/StationarySince[]        stationary_since         # the optional time duration of the stationary vehicle being stationary.
                                                                                     # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/CauseCodeV2[]            stationary_cause         # optional additional information to describe causes of the stationary vehicle event such as human problem.
                                                                                     # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/DangerousGoodsExtended[] carrying_dangerous_goods # optional information on the type of dangerous goods, the required emergency action and other information.
                                                                                     # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/NumberOfOccupants[]      number_of_occupants      # the optional estimated number of occupants involved in the stationary vehicle event.
                                                                                     # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/VehicleIdentification[]  vehicle_identification   # the optional identification of the stationary vehicle.
                                                                                     # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/EnergyStorageType[]      energy_storage_type      # the optional vehicle energy storage type information of the stationary vehicle, such as electric, diesel, etc.
                                                                                     # OPTIONAL

# ********** END of StationaryVehicleContainer   **********
