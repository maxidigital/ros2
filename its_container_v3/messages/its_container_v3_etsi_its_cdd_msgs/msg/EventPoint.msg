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
#  This DF provides information related to an event at a defined position.
# 
#  It shall include the following components:
# 
#  @field eventPosition: offset position of a detected event point to a defined position.
# 
#  @field eventDeltaTime: optional time travelled by the detecting ITS-S since the previous detected event point.
# 
#  @field informationQuality: Information quality of the detection for this event point.
# 
#  @category: GeoReference information, Traffic information
#  @revision: generalized the semantics in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    eventPosition DeltaReferencePosition,
#    eventDeltaTime PathDeltaTime OPTIONAL,
#    informationQuality InformationQuality 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of EventPoint **********
#

DeltaReferencePosition event_position      # offset position of a detected event point to a defined position.
PathDeltaTime[]        event_delta_time    # optional time travelled by the detecting ITS-S since the previous detected event point.
                                           # OPTIONAL
InformationQuality     information_quality # Information quality of the detection for this event point.

# ********** END of EventPoint   **********
