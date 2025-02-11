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
#    numberOfAxles INTEGER(0..7),
#    vehicleDimensions VehicleDimensions,
#    vehicleWeightLimits VehicleWeightLimits,
#    axleWeightLimits AxleWeightLimits,
#    passengerCapacity PassengerCapacity,
#    exhaustEmissionValues ExhaustEmissionValues,
#    dieselEmissionValues DieselEmissionValues,
#    soundLevel SoundLevel,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of VehicleCharacteristicsRangesLimits **********
#

VehicleCharacteristicsRangesLimitsNumberOfAxles[]       number_of_axles         #  choice = 0
dsrc_v2_efcdsrcapplication_msgs/VehicleDimensions[]     vehicle_dimensions      #  choice = 1
dsrc_v2_efcdsrcapplication_msgs/VehicleWeightLimits[]   vehicle_weight_limits   #  choice = 2
dsrc_v2_efcdsrcapplication_msgs/AxleWeightLimits[]      axle_weight_limits      #  choice = 3
dsrc_v2_efcdsrcapplication_msgs/PassengerCapacity[]     passenger_capacity      #  choice = 4
dsrc_v2_efcdsrcapplication_msgs/ExhaustEmissionValues[] exhaust_emission_values #  choice = 5
dsrc_v2_efcdsrcapplication_msgs/DieselEmissionValues[]  diesel_emission_values  #  choice = 6
dsrc_v2_efcdsrcapplication_msgs/SoundLevel[]            sound_level             #  choice = 7

uint8                                                   LENGTH                  = 8

# ********** END of VehicleCharacteristicsRangesLimits   **********
