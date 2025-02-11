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
#  This DF represents a predicted path, predicted trajectory or predicted path zone together with usage information and a prediction confidence.
# 
#  It shall include the following components:
# 
#  @field pathPredicted: the predicted path (pathDeltaTime ABSENT) or trajectory (pathDeltaTime PRESENT) and/or the path zone (symmetricAreaOffset PRESENT).
# 
#  @field usageIndication: an indication of how the predicted path will be used.
# 
#  @field confidenceLevel: the confidence that the path/trajectory in pathPredicted will occur as predicted
# 
#  @category: GeoReference information
#  @revision: created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    pathPredicted PathPredicted,
#    usageIndication UsageIndication,
#    confidenceLevel ConfidenceLevel,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PathPredicted2 **********
#

PathPredicted   path_predicted   # the predicted path (pathDeltaTime ABSENT) or trajectory (pathDeltaTime PRESENT) and/or the path zone (symmetricAreaOffset PRESENT).
UsageIndication usage_indication # an indication of how the predicted path will be used.
ConfidenceLevel confidence_level # the confidence that the path/trajectory in pathPredicted will occur as predicted

# ********** END of PathPredicted2   **********
