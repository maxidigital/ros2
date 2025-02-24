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
#  This DF represents a unique id for an intersection, in accordance with ETSI TS 103 301 [15].
# 
#  It shall include the following components:
# 
#  @field region: the optional identifier of the entity that is responsible for the region in which the intersection is placed.
#  It is the duty of that entity to guarantee that the @ref Id is unique within the region.
# 
#  @field id: the identifier of the intersection
# 
#  @note: when the component region is present, the IntersectionReferenceId is guaranteed to be globally unique.
#  @category: Road topology information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    region Identifier2B OPTIONAL,
#    id Identifier2B 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of IntersectionReferenceId **********
#

Identifier2B[]  region          # the optional identifier of the entity that is responsible for the region in which the intersection is placed.
                                # OPTIONAL
Identifier2B    id              # the identifier of the intersection

# ********** END of IntersectionReferenceId   **********
