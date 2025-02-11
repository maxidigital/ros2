#*                                                                          *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)          *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)            *
#*                                                                          *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore *
#*                                                                          *
#* This program and the accompanying materials are made available under the *
#* terms of the Eclipse Public License 2.0 which is available at            *
#* http://www.eclipse.org/legal/epl-2.0.                                    *
#*                                                                          *
#* SPDX-License-Identifier: EPL-2.0                                         *
#*                                                                          *
#*                                                                          *
#* File automatically generated with DLR Wind v2                            *
#*                                                                          *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0      *
#*                                                                          *
#* Module: IVI {iso(1) standard(0) ivi(19321) version1(1)}                  *
#*                                                                          *
#* For support contact v2x-ts@dlr.de                                        *
#*                                                                          *

#
# ASN.1 Definition:
# CHOICE {
#    simpleVehicleType StationType,
#    euVehicleCategoryCode EuVehicleCategoryCode,
#    iso3833VehicleType Iso3833VehicleType,
#    euroAndCo2value EnvironmentalCharacteristics,
#    engineCharacteristics EngineCharacteristics,
#    loadType LoadType,
#    usage VehicleRole,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of VehicleCharacteristicsFixValues **********
#

its_container_v1_its_container_msgs/StationType[]                                          simple_vehicle_type      #  choice = 0
dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs/EuVehicleCategoryCode[] eu_vehicle_category_code #  choice = 1
dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs/Iso3833VehicleType[]    iso3833_vehicle_type     #  choice = 2
dsrc_v2_efcdsrcapplication_msgs/EnvironmentalCharacteristics[]                             euro_and_co2value        #  choice = 3
dsrc_v2_efcdsrcapplication_msgs/EngineCharacteristics[]                                    engine_characteristics   #  choice = 4
LoadType[]                                                                                 load_type                #  choice = 5
its_container_v1_its_container_msgs/VehicleRole[]                                          usage                    #  choice = 6

uint8                                                                                      LENGTH                   = 7

# ********** END of VehicleCharacteristicsFixValues   **********
