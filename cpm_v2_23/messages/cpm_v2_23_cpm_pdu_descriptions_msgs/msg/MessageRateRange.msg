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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v2_23:1.0                   *
#*                                                                                         *
#* Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}                     *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# 
#  This DF  represents the planned or expected range of the message generation rate.
# 
#  It shall include the following components:
# 
#  @field messageRateMin: the minimum planned or expected message rate.
# 
#  @field messageRateMax: the maximum planned or expected message rate.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    messageRateMin MessageRateHz,
#    messageRateMax MessageRateHz 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of MessageRateRange **********
#

its_container_v3_etsi_its_cdd_msgs/MessageRateHz message_rate_min # the minimum planned or expected message rate.
its_container_v3_etsi_its_cdd_msgs/MessageRateHz message_rate_max # the maximum planned or expected message rate.

# ********** END of MessageRateRange   **********
