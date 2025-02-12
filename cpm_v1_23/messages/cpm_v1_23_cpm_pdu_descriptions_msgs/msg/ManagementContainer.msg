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
#  This DF  represents the management container of the CPM.
#  The management container provides basic information about the originating ITS-S, which are not specific to a specific type of station.
# 
#  It shall include the following components:
# 
#  @field referenceTime: the reference time for all time related information in the CPM.
# 
#  @field messageRateRange: the planned or expected range of the CPM generation rate.
# 
#  @field segmentationInfo: information regarding the message segmentation on facility layer.
# 
#  @field referencePosition: the reference position for all position related information in the CPM.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    referenceTime TimestampIts,
#    referencePosition ReferencePosition,
#    segmentationInfo MessageSegmentationInfo OPTIONAL,
#    messageRateRange MessageRateRange OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ManagementContainer **********
#

its_container_v3_etsi_its_cdd_msgs/TimestampIts              reference_time     # the reference time for all time related information in the CPM.
its_container_v3_etsi_its_cdd_msgs/ReferencePosition         reference_position # the reference position for all position related information in the CPM.
its_container_v3_etsi_its_cdd_msgs/MessageSegmentationInfo[] segmentation_info  # information regarding the message segmentation on facility layer.
                                                                                # OPTIONAL
MessageRateRange[]                                           message_rate_range # the planned or expected range of the CPM generation rate.
                                                                                # OPTIONAL

# ********** END of ManagementContainer   **********
