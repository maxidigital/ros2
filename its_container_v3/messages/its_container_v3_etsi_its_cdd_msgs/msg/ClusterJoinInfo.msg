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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DF provides information about the joining of a cluster.
# 
#  It shall include the following components:
# 
#  @field clusterId: indicates the identifier of the cluster.
# 
#  @field joinTime: indicates the time of joining.
# 
#  @category: Cluster Information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    clusterId Identifier1B,
#    joinTime DeltaTimeQuarterSecond,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ClusterJoinInfo **********
#

Identifier1B           cluster_id      # indicates the identifier of the cluster.
DeltaTimeQuarterSecond join_time       # indicates the time of joining.

# ********** END of ClusterJoinInfo   **********
