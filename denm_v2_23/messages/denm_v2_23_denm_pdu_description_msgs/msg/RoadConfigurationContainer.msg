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
#  This type contains detailed information about the configuration of road section(s) that are geographically related to the event.
# 
#  It shall include the following components:
# 
#  @field roadConfigurationConfidence: information about the source of the road configuration and the confidence in the information.
# 
#  @field roadConfigurationSectionList: a list of road configuration information per applicable road section.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    roadConfigurationConfidence MetaInformation,
#    roadConfigurationSectionList RoadConfigurationSectionList,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RoadConfigurationContainer **********
#

its_container_v4_etsi_its_cdd_msgs/MetaInformation              road_configuration_confidence   # information about the source of the road configuration and the confidence in the information.
its_container_v4_etsi_its_cdd_msgs/RoadConfigurationSectionList road_configuration_section_list # a list of road configuration information per applicable road section.

# ********** END of RoadConfigurationContainer   **********
