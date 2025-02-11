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
#  This type represents the DENM PDU.
# 
#  It shall include the following components:
# 
#  @field header: the header of the DENM PDU.
# 
#  @field denm: the payload of the DENM PDU.
#   
# ASN.1 Definition:
# SEQUENCE {
#    header ItsPduHeader (WITH COMPONENTS{
#   ..., protocolVersion(2), messageId(denm)
# }), denm DenmPayload 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of DENM **********
#

its_container_v4_etsi_its_cdd_msgs/ItsPduHeader hheader         # the header of the DENM PDU.
DenmPayload                                     denm            # the payload of the DENM PDU.

# ********** END of DENM   **********
