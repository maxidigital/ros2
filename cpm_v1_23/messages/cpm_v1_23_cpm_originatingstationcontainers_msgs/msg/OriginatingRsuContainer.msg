#*                                                                                                     *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                                     *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                                       *
#*                                                                                                     *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                            *
#*                                                                                                     *
#* This program and the accompanying materials are made available under the                            *
#* terms of the Eclipse Public License 2.0 which is available at                                       *
#* http://www.eclipse.org/legal/epl-2.0.                                                               *
#*                                                                                                     *
#* SPDX-License-Identifier: EPL-2.0                                                                    *
#*                                                                                                     *
#*                                                                                                     *
#* File automatically generated with DLR Wind v2                                                       *
#*                                                                                                     *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v1_23:1.0                               *
#*                                                                                                     *
#* Module: CPM_OriginatingStationContainers {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) originatingStationContainers(2) major-version-1(1) minor-version-1(1)}        *
#*                                                                                                     *
#* For support contact v2x-ts@dlr.de                                                                   *
#*                                                                                                     *

#
# 
#  This DF  represents the Originating RSU Container.
# 
#  It shall include the following components:
# 
#  @field mapReference: identifies the MAPEM containing the topology information reference in the Perceived Object Container
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    mapReference MapReference OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of OriginatingRsuContainer **********
#

its_container_v3_etsi_its_cdd_msgs/MapReference[] map_reference   # identifies the MAPEM containing the topology information reference in the Perceived Object Container
                                                                  # OPTIONAL

# ********** END of OriginatingRsuContainer   **********
