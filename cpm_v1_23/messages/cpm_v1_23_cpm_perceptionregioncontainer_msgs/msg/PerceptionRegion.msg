#*                                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                                    *
#*                                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                         *
#*                                                                                                  *
#* This program and the accompanying materials are made available under the                         *
#* terms of the Eclipse Public License 2.0 which is available at                                    *
#* http://www.eclipse.org/legal/epl-2.0.                                                            *
#*                                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                                 *
#*                                                                                                  *
#*                                                                                                  *
#* File automatically generated with DLR Wind v2                                                    *
#*                                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v1_23:1.0                            *
#*                                                                                                  *
#* Module: CPM_PerceptionRegionContainer {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) perceptionRegionContainer(5) major-version-1(1) minor-version-1(1)}        *
#*                                                                                                  *
#* For support contact v2x-ts@dlr.de                                                                *
#*                                                                                                  *

#
# 
#  This DF represents the actual perception capabilities available to the transmitting ITS-S, offering additional (often dynamic) details to the information provided in the sensor information container.
# 
#  It shall include the following components:
# 
#  @field measurementDeltaTime: difference between the time of estimation of the perception region and the reference time. Positive values indicates that the provided information refers to a point in time after the reference time.
# 
#  @field perceptionRegionConfidence: the perception confidence.
# 
#  @field perceptionRegionShape: specification of the shape of the perception region.
# 
#  @field shadowingApplies: indicates if the standard shadowing approach applies to the described perception region.
# 
#  @field sensorIdList: the optional list of identifiers of the sensors which are involved in perceiving the region.
# 
#  @field numberOfPerceivedObjects: the optional number of perceived objects contained in the perception region specified in the component perceptionRegionShape.
# 
#  @field perceivedObjectIds: the optional list of identifiers of the objects specified in the Perceived Object Container that are contained in the perception region specified in the component perceptionRegionShape.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    measurementDeltaTime DeltaTimeMilliSecondSigned,
#    perceptionRegionConfidence ConfidenceLevel,
#    perceptionRegionShape Shape,
#    shadowingApplies BOOLEAN,
#    sensorIdList SequenceOfIdentifier1B OPTIONAL,
#    numberOfPerceivedObjects CardinalNumber1B OPTIONAL,
#    perceivedObjectIds PerceivedObjectIds OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PerceptionRegion **********
#

its_container_v3_etsi_its_cdd_msgs/DeltaTimeMilliSecondSigned measurement_delta_time       # difference between the time of estimation of the perception region and the reference time. Positive values indicates that the provided information refers to a point in time after the reference time.
its_container_v3_etsi_its_cdd_msgs/ConfidenceLevel            perception_region_confidence # the perception confidence.
its_container_v3_etsi_its_cdd_msgs/Shape                      perception_region_shape      # specification of the shape of the perception region.
PerceptionRegionShadowingApplies                              shadowing_applies            # indicates if the standard shadowing approach applies to the described perception region.
its_container_v3_etsi_its_cdd_msgs/SequenceOfIdentifier1B[]   sensor_id_list               # the optional list of identifiers of the sensors which are involved in perceiving the region.
                                                                                           # OPTIONAL
its_container_v3_etsi_its_cdd_msgs/CardinalNumber1B[]         number_of_perceived_objects  # the optional number of perceived objects contained in the perception region specified in the component perceptionRegionShape.
                                                                                           # OPTIONAL
PerceivedObjectIds[]                                          perceived_object_ids         # the optional list of identifiers of the objects specified in the Perceived Object Container that are contained in the perception region specified in the component perceptionRegionShape.
                                                                                           # OPTIONAL

# ********** END of PerceptionRegion   **********
