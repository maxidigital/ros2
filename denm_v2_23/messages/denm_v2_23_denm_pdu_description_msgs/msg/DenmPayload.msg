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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:denm_v2_23:1.0                  *
#*                                                                                         *
#* Module: DENM_PDU_Description {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) denmPduRelease2(103831) major-version-2(2) minor-version-2(2)}               *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# 
#  This type represents the DENM payload.
# 
#  It shall include the following components:
# 
#  @field management: the Management Container.
# 
#  @field situation: the optional Situation Container.
# 
#  @field location: the optional Location Container.
# 
#  @field alacarte: the optional � La Carte Container .
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    management ManagementContainer,
#    situation SituationContainer OPTIONAL,
#    location LocationContainer OPTIONAL,
#    alacarte AlacarteContainer( (WITH COMPONENTS{
#   ..., management (WITH COMPONENTS{
#   ..., termination ABSENT
# }), situation PRESENT, location PRESENT
# })| (WITH COMPONENTS{
#   ..., management (WITH COMPONENTS{
#   ..., termination PRESENT
# }), situation ABSENT, location ABSENT, alacarte ABSENT
# }))OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of DenmPayload **********
#

ManagementContainer  management      # the Management Container.
SituationContainer[] situation       # the optional Situation Container.
                                     # OPTIONAL
LocationContainer[]  location        # the optional Location Container.
                                     # OPTIONAL
AlacarteContainer[]  alacarte        # the optional � La Carte Container .
                                     # OPTIONAL

# ********** END of DenmPayload   **********
