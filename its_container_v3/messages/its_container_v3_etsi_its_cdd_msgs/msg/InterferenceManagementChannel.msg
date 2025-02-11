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
#  This DF represents a frequency channel
# 
#  It shall include the following components:
# 
#  @field centreFrequency: the centre frequency of the channel in 10^(exp+2) Hz (where exp is exponent)
# 
#  @field channelWidth: width of the channel in 10^exp Hz (where exp is exponent)
# 
#  @field exponent: exponent of the power of 10 used in the calculation of the components above.
# 
#  @category: Communication information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    centreFrequency INTEGER(1 .. 99999),
#    channelWidth INTEGER(0 .. 9999),
#    exponent INTEGER(0 .. 15) 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of InterferenceManagementChannel **********
#

InterferenceManagementChannelCentreFrequency centre_frequency # the centre frequency of the channel in 10^(exp+2) Hz (where exp is exponent)
InterferenceManagementChannelChannelWidth    channel_width    # width of the channel in 10^exp Hz (where exp is exponent)
InterferenceManagementChannelExponent        exponent         # exponent of the power of 10 used in the calculation of the components above.

# ********** END of InterferenceManagementChannel   **********
