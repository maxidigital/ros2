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
#  This DF provides information about the source of and confidence in information.
# 
#  It shall include the following components:
# 
#  @field usedDetectionInformation: the type of sensor(s) that is used to provide the detection information.
# 
#  @field usedStoredInformation: the type of source of the stored information
# 
#  @field confidenceValue: an optional confidence value associated to the information.
# 
#  @category: Basic information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    usedDetectionInformation SensorTypes,
#    usedStoredInformation StoredInformationType,
#    confidenceValue ConfidenceLevel OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of MetaInformation **********
#

SensorTypes           used_detection_information # the type of sensor(s) that is used to provide the detection information.
StoredInformationType used_stored_information    # the type of source of the stored information
ConfidenceLevel[]     confidence_value           # an optional confidence value associated to the information.
                                                 # OPTIONAL

# ********** END of MetaInformation   **********
