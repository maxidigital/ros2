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
#  This type represents the situation container.
# 
#  It shall include the following components:
# 
#  @field informationQuality: the quality level of the information provided by the ITS-S application of the originating ITS-S.
#  It indicates the probability of the detected event being truly existent at the event position.
# 
#  @field eventType: the event type, including direct cause and sub cause.
# 
#  @field linkedCause: the optional type of a linked event co-existing at the same time and the same place (same event zone),
#  including direct cause and sub cause of the linked event, for which no other DENM is sent out.
# 
#  @field eventZone: an optional list of EventPoint, using the position indicated in the component eventPosition of the Management container
#  as the reference position for the first EventPoint.
# 
#  @field linkedDenms: the optional list of DF ActionId, pointing to DENMs that are semantically connected because applying to consecutive
#  event zones at the same time.
# 
#  @field eventEnd: the end position of the event along the road that is affected by the event w.r.t. the component eventPosition of the
#  Management container. This end position is represented by the length of the event along the road.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    informationQuality InformationQuality,
#    eventType CauseCodeV2,
#    linkedCause CauseCodeV2 OPTIONAL,
#    eventZone EventZone OPTIONAL,
#    ...,
#    [[ linkedDenms ActionIdList OPTIONAL,
#    eventEnd Position1d( (WITH COMPONENTS{
#   ..., eventZone PRESENT, eventEnd ABSENT
# })| (WITH COMPONENTS{
#   ..., eventZone ABSENT, eventEnd PRESENT
# })| (WITH COMPONENTS{
#   ..., eventZone ABSENT, eventEnd ABSENT
# }))OPTIONAL ]] 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of SituationContainer **********
#

its_container_v4_etsi_its_cdd_msgs/InformationQuality information_quality # the quality level of the information provided by the ITS-S application of the originating ITS-S.
its_container_v4_etsi_its_cdd_msgs/CauseCodeV2        event_type          # the event type, including direct cause and sub cause.
its_container_v4_etsi_its_cdd_msgs/CauseCodeV2[]      linked_cause        # the optional type of a linked event co-existing at the same time and the same place (same event zone),
                                                                          # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/EventZone[]        event_zone          # an optional list of EventPoint, using the position indicated in the component eventPosition of the Management container
                                                                          # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/ActionIdList[]     linked_denms        # the optional list of DF ActionId, pointing to DENMs that are semantically connected because applying to consecutive
                                                                          # OPTIONAL
                                                                          # Extension group 1
its_container_v4_etsi_its_cdd_msgs/Position1d[]       event_end           # the end position of the event along the road that is affected by the event w.r.t. the component eventPosition of the
                                                                          # OPTIONAL
                                                                          # Extension group 1

# ********** END of SituationContainer   **********
