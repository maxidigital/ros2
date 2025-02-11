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
#  This DF represents a yaw rate of vehicle at a point in time.
# 
#  It shall include the following components:
# 
#  @field yawRateValue: yaw rate value at a point in time.
# 
#  @field yawRateConfidence: confidence value associated to the yaw rate value.
# 
#  @category: Vehicle Information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    yawRateValue YawRateValue,
#    yawRateConfidence YawRateConfidence 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of YawRate **********
#

YawRateValue      yaw_rate_value      # yaw rate value at a point in time.
YawRateConfidence yaw_rate_confidence # confidence value associated to the yaw rate value.

# ********** END of YawRate   **********
