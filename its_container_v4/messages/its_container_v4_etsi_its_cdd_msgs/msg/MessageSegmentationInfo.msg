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
#  This DF provides information about a message with respect to the segmentation process on facility layer at the sender.
# 
#  It shall include the following components:
# 
#  @field totalMsgNo: indicates the total number of messages that have been assembled on the transmitter side to encode the information
#  during the same messsage generation process.
# 
#  @field thisMsgNo: indicates the position of the message within of the total set of messages generated during the same message generation process.
# 
#  @category: Communication information
#  @revision: Created in V2.1.1, description revised in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    totalMsgNo CardinalNumber3b,
#    thisMsgNo OrdinalNumber3b 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of MessageSegmentationInfo **********
#

CardinalNumber3b total_msg_no    # indicates the total number of messages that have been assembled on the transmitter side to encode the information
OrdinalNumber3b  this_msg_no     # indicates the position of the message within of the total set of messages generated during the same message generation process.

# ********** END of MessageSegmentationInfo   **********
