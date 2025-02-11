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
#  This DE indicates the reason why a cluster leader intends to break up the cluster.
# 
#  The value shall be set to:
#  - 0 - `notProvided`                          - if the information is not provided,
#  - 1 - `clusteringPurposeCompleted`           - if the cluster purpose has been completed,
#  - 2 - `leaderMovedOutOfClusterBoundingBox`   - if the leader moved out of the cluster's bounding box,
#  - 3 - `joiningAnotherCluster`                - if the cluster leader is about to join another cluster,
#  - 4 - `enteringLowRiskAreaBasedOnMaps`       - if the cluster is entering an area idenrified as low risk based on the use of maps,
#  - 5 - `receptionOfCpmContainingCluster`      - if the leader received a Collective Perception Message containing information about the same cluster.
#  - 6 to 15                                    - are reserved for future use.
# 
#  @category: Cluster information
#  @revision: Created in V2.1.1, type changed from ENUMERATED to INTEGER in V2.2.1
#   
# ASN.1 Definition:
# INTEGER { notProvided(0), clusteringPurposeCompleted(1), leaderMovedOutOfClusterBoundingBox(2), joiningAnotherCluster(3), enteringLowRiskAreaBasedOnMaps(4), receptionOfCpmContainingCluster(5) }(0..15) 
# 
# Element type: INTEGER
#
# ********** START of ClusterBreakupReason **********
#

uint8           value

uint8           MIN                                        = 0
uint8           MAX                                        = 15

uint8           V_NOT_PROVIDED                             = 0
uint8           V_CLUSTERING_PURPOSE_COMPLETED             = 1
uint8           V_LEADER_MOVED_OUT_OF_CLUSTER_BOUNDING_BOX = 2
uint8           V_JOINING_ANOTHER_CLUSTER                  = 3
uint8           V_ENTERING_LOW_RISK_AREA_BASED_ON_MAPS     = 4
uint8           V_RECEPTION_OF_CPM_CONTAINING_CLUSTER      = 5

# ********** END of ClusterBreakupReason   **********
