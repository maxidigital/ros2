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
#  This type contains detailed information about an object with which a vehicle and/or the traffic is likely to collide.
# 
#  It shall include the following components:
# 
#  @field perceivedPreCrashObject: information about a perceived object in the East, North, Up reference frame.
# 
#  @field objectStationId: the optional station Id of the object for which the information is provided.
# 
#  @field timeToCollision: the optional estimated time to collision of a vehicle with the object.
# 
#  @field impactSection: indication of the object�s section where the impact will most likely occur.
#  When the target object is likely to be a vehicle, then this component should be present, otherwise it should not be provided.
# 
#  @field estimatedBrakingDistance: the optional estimated distance in which the vehicle would need to come to a complete hold,
#  if no obstruction was in the way.
#   
# ASN.1 Definition:
# SEQUENCE {
#    perceivedPreCrashObject PerceivedObject,
#    objectStationId StationId OPTIONAL,
#    timeToCollision DeltaTimeMilliSecondPositive OPTIONAL,
#    impactSection ObjectFace OPTIONAL,
#    estimatedBrakingDistance StandardLength12b OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PreCrashContainer **********
#

its_container_v4_etsi_its_cdd_msgs/PerceivedObject                perceived_pre_crash_object # information about a perceived object in the East, North, Up reference frame.
its_container_v4_etsi_its_cdd_msgs/StationId[]                    object_station_id          # the optional station Id of the object for which the information is provided.
                                                                                             # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/DeltaTimeMilliSecondPositive[] time_to_collision          # the optional estimated time to collision of a vehicle with the object.
                                                                                             # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/ObjectFace[]                   impact_section             # indication of the object�s section where the impact will most likely occur.
                                                                                             # OPTIONAL
its_container_v4_etsi_its_cdd_msgs/StandardLength12b[]            estimated_braking_distance # the optional estimated distance in which the vehicle would need to come to a complete hold,
                                                                                             # OPTIONAL

# ********** END of PreCrashContainer   **********
