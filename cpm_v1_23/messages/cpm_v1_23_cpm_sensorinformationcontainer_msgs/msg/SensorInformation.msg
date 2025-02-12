#*                                                                                                   *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                                   *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                                     *
#*                                                                                                   *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                          *
#*                                                                                                   *
#* This program and the accompanying materials are made available under the                          *
#* terms of the Eclipse Public License 2.0 which is available at                                     *
#* http://www.eclipse.org/legal/epl-2.0.                                                             *
#*                                                                                                   *
#* SPDX-License-Identifier: EPL-2.0                                                                  *
#*                                                                                                   *
#*                                                                                                   *
#* File automatically generated with DLR Wind v2                                                     *
#*                                                                                                   *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v1_23:1.0                             *
#*                                                                                                   *
#* Module: CPM_SensorInformationContainer {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) sensorInformationContainer(3) major-version-1(1) minor-version-1(1)}        *
#*                                                                                                   *
#* For support contact v2x-ts@dlr.de                                                                 *
#*                                                                                                   *

#
# 
#  This DF  represents the characteristics of a single sensor or data fusion system.
# 
#  It shall include the following components:
# 
#  @field sensorId: identifier of the sensor or data fusion system used to relate the perceived object in the Perceived Object Container to the sensor that detected it.
#  this identifier shall uniquely identify the sensor inside the CPM, but may be changed from one CPM to the next.
# 
#  @field sensorType: the type of the sensor.
# 
#  @field perceptionRegionShape: the perception region of the sensor.
# 
#  @field perceptionRegionConfidence: the homogeneous perception region confidence that can be assumed for the entire perception region shape of this sensor.
# 
#  @field shadowingApplies: indicates if the standard shadowing approach applies to the described perception region.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    sensorId Identifier1B,
#    sensorType SensorType,
#    perceptionRegionShape Shape OPTIONAL,
#    perceptionRegionConfidence ConfidenceLevel OPTIONAL,
#    shadowingApplies BOOLEAN,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of SensorInformation **********
#

its_container_v3_etsi_its_cdd_msgs/Identifier1B      sensor_id                    # identifier of the sensor or data fusion system used to relate the perceived object in the Perceived Object Container to the sensor that detected it.
its_container_v3_etsi_its_cdd_msgs/SensorType        sensor_type                  # the type of the sensor.
its_container_v3_etsi_its_cdd_msgs/Shape[]           perception_region_shape      # the perception region of the sensor.
                                                                                  # OPTIONAL
its_container_v3_etsi_its_cdd_msgs/ConfidenceLevel[] perception_region_confidence # the homogeneous perception region confidence that can be assumed for the entire perception region shape of this sensor.
                                                                                  # OPTIONAL
SensorInformationShadowingApplies                    shadowing_applies            # indicates if the standard shadowing approach applies to the described perception region.

# ********** END of SensorInformation   **********
