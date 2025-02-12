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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v1_23:1.0                   *
#*                                                                                         *
#* Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}                     *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# 
#  This DF represents a CPM container preceded by its type identifier and a lenght indicator.
# 
#  It shall include the following components:
# 
#  @field containerId: the identifier of the container type.
# 
#  @field containerData: the container content consistent with the container type.
# 
#   
# ASN.1 Definition:
# CHOICE {
#    originatingVehicleContainer OriginatingVehicleContainer,
#    originatingRsuContainer OriginatingRsuContainer,
#    sensorInformationContainer SensorInformationContainer,
#    perceptionRegionContainer PerceptionRegionContainer,
#    perceivedObjectContainer PerceivedObjectContainer 
# } 
# 
# Element type: CHOICE
#
# ********** START of WrappedCpmContainer **********
#

cpm_v1_23_cpm_originatingstationcontainers_msgs/OriginatingVehicleContainer[] originating_vehicle_container #  choice = 0
cpm_v1_23_cpm_originatingstationcontainers_msgs/OriginatingRsuContainer[]     originating_rsu_container     #  choice = 1
cpm_v1_23_cpm_sensorinformationcontainer_msgs/SensorInformationContainer[]    sensor_information_container  #  choice = 2
cpm_v1_23_cpm_perceptionregioncontainer_msgs/PerceptionRegionContainer[]      perception_region_container   #  choice = 3
cpm_v1_23_cpm_perceivedobjectcontainer_msgs/PerceivedObjectContainer[]        perceived_object_container    #  choice = 4

uint8                                                                         LENGTH                        = 5

# ********** END of WrappedCpmContainer   **********
