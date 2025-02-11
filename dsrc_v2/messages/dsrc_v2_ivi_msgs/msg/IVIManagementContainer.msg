#*                                                                          *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)          *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)            *
#*                                                                          *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore *
#*                                                                          *
#* This program and the accompanying materials are made available under the *
#* terms of the Eclipse Public License 2.0 which is available at            *
#* http://www.eclipse.org/legal/epl-2.0.                                    *
#*                                                                          *
#* SPDX-License-Identifier: EPL-2.0                                         *
#*                                                                          *
#*                                                                          *
#* File automatically generated with DLR Wind v2                            *
#*                                                                          *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0      *
#*                                                                          *
#* Module: IVI {iso(1) standard(0) ivi(19321) version1(1)}                  *
#*                                                                          *
#* For support contact v2x-ts@dlr.de                                        *
#*                                                                          *

#
# ASN.1 Definition:
# SEQUENCE {
#    serviceProviderId Provider,
#    iviIdentificationNumber IviIdentificationNumber,
#    timeStamp TimestampIts OPTIONAL,
#    validFrom TimestampIts OPTIONAL,
#    validTo TimestampIts OPTIONAL,
#    connectedIviStructures SEQUENCE(SIZE(1..8)) OF IviIdentificationNumber OPTIONAL,
#    iviStatus IviStatus,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of IVIManagementContainer **********
#

dsrc_v2_efcdsrcapplication_msgs/Provider           service_provider_id
IviIdentificationNumber                            ivi_identification_number
its_container_v1_its_container_msgs/TimestampIts[] time_stamp                # OPTIONAL
its_container_v1_its_container_msgs/TimestampIts[] valid_from                # OPTIONAL
its_container_v1_its_container_msgs/TimestampIts[] valid_to                  # OPTIONAL
IVIManagementContainerConnectedIviStructures[]     connected_ivi_structures  # OPTIONAL
IviStatus                                          ivi_status

# ********** END of IVIManagementContainer   **********
