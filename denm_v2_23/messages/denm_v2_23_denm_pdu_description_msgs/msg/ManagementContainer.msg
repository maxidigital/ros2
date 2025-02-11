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
#  This type represents the Management Container.
# 
#  It shall include the following components:
# 
#  @field actionId: the identifier of the DENM.
# 
#  @field detectionTime: the time at which the event is detected.
# 
#  @field referenceTime: the time at which a new DENM, an update DENM or a cancellation DENM is generated
# 
#  @field termination: the optional termination type of the DENM.
# 
#  @field eventPosition: the geographical position used in the definition of the awareness area / relevance zone, see clause 6.1.3.
# 
#  @field awarenessDistance: the optional radius of the circular awareness area, with centre at the event position or at any of the
#  event history points as defined in clause 6.1.3.1.
# 
#  @field trafficDirection: the optional traffic direction along which the receiving ITS-S may encounter the event,
#  as defined in clause 6.1.3.
# 
#  @field validityDuration: the validity duration of a DENM. This component represents a time offset in the unit of second since detectionTime.
# 
#  @field transmissionInterval: the optional time interval for DENM transmission as defined by the originating ITS-S.
#  If the component is not present in DENM, a default value defaultValidity is assumed.
# 
#  @field stationType: the station type information of the originating ITS-S.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    actionId ActionId,
#    detectionTime TimestampIts,
#    referenceTime TimestampIts,
#    termination Termination OPTIONAL,
#    eventPosition ReferencePosition,
#    awarenessDistance StandardLength3b OPTIONAL,
#    trafficDirection TrafficDirection OPTIONAL,
#    validityDuration DeltaTimeSecond DEFAULT defaultValidity,
#    transmissionInterval DeltaTimeMilliSecondPositive OPTIONAL,
#    stationType StationType,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ManagementContainer **********
#

its_container_v4_etsi_its_cdd_msgs/ActionId                       action_id             # the identifier of the DENM.
its_container_v4_etsi_its_cdd_msgs/TimestampIts                   detection_time        # the time at which the event is detected.
its_container_v4_etsi_its_cdd_msgs/TimestampIts                   reference_time        # the time at which a new DENM, an update DENM or a cancellation DENM is generated
Termination[]                                                     termination           # the optional termination type of the DENM.
                                                                                        # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/ReferencePosition              event_position        # the geographical position used in the definition of the awareness area / relevance zone, see clause 6.1.3.
its_container_v4_etsi_its_cdd_msgs/StandardLength3b[]             awareness_distance    # the optional radius of the circular awareness area, with centre at the event position or at any of the
                                                                                        # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/TrafficDirection[]             traffic_direction     # the optional traffic direction along which the receiving ITS-S may encounter the event,
                                                                                        # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/DeltaTimeSecond                validity_duration     # the validity duration of a DENM. This component represents a time offset in the unit of second since detectionTime.
its_container_v4_etsi_its_cdd_msgs/DeltaTimeMilliSecondPositive[] transmission_interval # the optional time interval for DENM transmission as defined by the originating ITS-S.
                                                                                        # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/StationType                    station_type          # the station type information of the originating ITS-S.

# ********** END of ManagementContainer   **********
