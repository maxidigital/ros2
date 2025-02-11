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
#  This DF provides information about a VRU cluster.
# 
#  It shall include the following components:
# 
#  @field clusterId: optional identifier of a VRU cluster .
# 
#  @field clusterBoundingBoxShape: optionally indicates the shape of the cluster bounding box, per default inside an East-North-Up coordinate system
#  centered around a reference point defined outside of the context of this DF.
# 
#  @field clusterCardinalitySize: indicates an estimation of the number of VRUs in the group, e.g. the known members in the cluster + 1 (for the cluster leader) .
# 
#  @field clusterProfiles: optionally identifies all the VRU profile types that are estimated to be within the cluster.
#  if this component is absent it means that the information is unavailable.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1, description revised in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    clusterId Identifier1B OPTIONAL,
#    clusterBoundingBoxShape Shape (WITH COMPONENTS{
#   ..., elliptical ABSENT, radial ABSENT, radialShapes ABSENT
# })OPTIONAL,
#    clusterCardinalitySize CardinalNumber1B,
#    clusterProfiles VruClusterProfiles OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of VruClusterInformation **********
#

Identifier1B[]       cluster_id                 # optional identifier of a VRU cluster .
                                                # OPTIONAL
Shape[]              cluster_bounding_box_shape # optionally indicates the shape of the cluster bounding box, per default inside an East-North-Up coordinate system
                                                # OPTIONAL
CardinalNumber1B     cluster_cardinality_size   # indicates an estimation of the number of VRUs in the group, e.g. the known members in the cluster + 1 (for the cluster leader) .
VruClusterProfiles[] cluster_profiles           # optionally identifies all the VRU profile types that are estimated to be within the cluster.
                                                # OPTIONAL

# ********** END of VruClusterInformation   **********
