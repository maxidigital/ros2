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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v4:1.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) cdd(2) major-version-4(4) minor-version-1(1)}                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE indicates the reason why a cluster participant is leaving the cluster.
# 
#  The value shall be set to:
#  - 0 - `notProvided `                 - if the information is not provided,
#  - 1 - `clusterLeaderLost`            - if the cluster leader cannot be found anymore,
#  - 2 - `clusterDisbandedByLeader`     - if the cluster has been disbanded by the leader,
#  - 3 - `outOfClusterBoundingBox`      - if the participants moved out of the cluster's bounding box,
#  - 4 - `outOfClusterSpeedRange`       - if the cluster speed moved out of a defined range,
#  - 5 - `joiningAnotherCluster`        - if the participant is joining another cluster,
#  - 6 - `cancelledJoin`                - if the participant is cancelling a joining procedure,
#  - 7 - `failedJoin`                   - if the participant failed to join the cluster,
#  - 8 - `safetyCondition`              - if a safety condition applies.
#  - 9 to 15                            - are reserved for future use
# 
#  @category: Cluster information
#  @revision: Created in V2.1.1, type changed from ENUMERATED to INTEGER in V2.2.1
#   
# ASN.1 Definition:
# INTEGER { notProvided(0), clusterLeaderLost(1), clusterDisbandedByLeader(2), outOfClusterBoundingBox(3), outOfClusterSpeedRange(4), joiningAnotherCluster(5), cancelledJoin(6), failedJoin(7), safetyCondition(8) }(0..15) 
# 
# Element type: INTEGER
#
# ********** START of ClusterLeaveReason **********
#

uint8           value

uint8           MIN                           = 0
uint8           MAX                           = 15

uint8           V_NOT_PROVIDED                = 0
uint8           V_CLUSTER_LEADER_LOST         = 1
uint8           V_CLUSTER_DISBANDED_BY_LEADER = 2
uint8           V_OUT_OF_CLUSTER_BOUNDING_BOX = 3
uint8           V_OUT_OF_CLUSTER_SPEED_RANGE  = 4
uint8           V_JOINING_ANOTHER_CLUSTER     = 5
uint8           V_CANCELLED_JOIN              = 6
uint8           V_FAILED_JOIN                 = 7
uint8           V_SAFETY_CONDITION            = 8

# ********** END of ClusterLeaveReason   **********
