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
#  This DF indicates both the class and associated subclass that best describes an object.
# 
#  The following options are available:
# 
#  @field vehicleSubClass: the object is a road vehicle and the specific subclass is specified.
# 
#  @field vruSubClass: the object is a VRU and the specific subclass is specified.
# 
#  @field groupSubClass: the object is a VRU group or cluster and the cluster information is specified.
# 
#  @field otherSubClass: the object is of a different type than the above and the specific subclass is specified.
# 
#  @category: Sensing information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# CHOICE {
#    vehicleSubClass TrafficParticipantType,
#    vruSubClass VruProfileAndSubprofile,
#    groupSubClass VruClusterInformation (WITH COMPONENTS{
#   ..., clusterBoundingBoxShape ABSENT
# }), otherSubClass OtherSubClass,
#    ... 
# } 
# 
# Element type: CHOICE
#
# ********** START of ObjectClass **********
#

TrafficParticipantType[]  vehicle_sub_class #  choice = 0
VruProfileAndSubprofile[] vru_sub_class     #  choice = 1
VruClusterInformation[]   group_sub_class   #  choice = 2
OtherSubClass[]           other_sub_class   #  choice = 3

uint8                     LENGTH            = 4

# ********** END of ObjectClass   **********
