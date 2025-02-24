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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v2_23:1.0                   *
#*                                                                                         *
#* Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}                     *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# 
#  This DF  represents the payload of the CPM.
# 
#  It shall include the following components:
# 
#  @field managementContainer: the management container.
# 
#  @field cpmContainers: the list of CPM containers, including its container type identifier and including either one or none of originatingVehicleContainer and/or originatingRsuContainer.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    managementContainer ManagementContainer,
#    cpmContainers ConstraintWrappedCpmContainers,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of CpmPayload **********
#

ManagementContainer            management_container # the management container.
ConstraintWrappedCpmContainers cpm_containers       # the list of CPM containers, including its container type identifier and including either one or none of originatingVehicleContainer and/or originatingRsuContainer.

# ********** END of CpmPayload   **********
