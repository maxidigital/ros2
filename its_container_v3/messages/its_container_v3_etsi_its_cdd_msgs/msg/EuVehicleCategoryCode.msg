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
# 
#  This DF represents a vehicle category according to the UNECE/TRANS/WP.29/78/Rev.4 [16].
#  The following options are available:
# 
#  @field euVehicleCategoryL: indicates a vehicle in the L category.
# 
#  @field euVehicleCategoryM: indicates a vehicle in the M category.
# 
#  @field euVehicleCategoryN: indicates a vehicle in the N category.
# 
#  @field euVehicleCategoryO: indicates a vehicle in the O category.
# 
#  @field euVehicleCategoryT: indicates a vehicle in the T category.
# 
#  @field euVehicleCategoryG: indicates a vehicle in the G category.
# 
#  @category: Vehicle information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# CHOICE {
#    euVehicleCategoryL EuVehicleCategoryL,
#    euVehicleCategoryM EuVehicleCategoryM,
#    euVehicleCategoryN EuVehicleCategoryN,
#    euVehicleCategoryO EuVehicleCategoryO,
#    euVehicleCategoryT NULL,
#    euVehicleCategoryG NULL 
# } 
# 
# Element type: CHOICE
#
# ********** START of EuVehicleCategoryCode **********
#

EuVehicleCategoryL[] eu_vehicle_category_l #  choice = 0
EuVehicleCategoryM[] eu_vehicle_category_m #  choice = 1
EuVehicleCategoryN[] eu_vehicle_category_n #  choice = 2
EuVehicleCategoryO[] eu_vehicle_category_o #  choice = 3

uint8                LENGTH                = 4

# ********** END of EuVehicleCategoryCode   **********
