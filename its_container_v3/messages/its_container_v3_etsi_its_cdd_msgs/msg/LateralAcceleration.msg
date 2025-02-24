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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DF indicates the vehicle acceleration at lateral direction and the confidence value of the lateral acceleration.
# 
#  It shall include the following components:
# 
#  @field lateralAccelerationValue: lateral acceleration value at a point in time.
# 
#  @field lateralAccelerationConfidence: confidence value of the lateral acceleration value.
# 
#  @note: this DF is kept for backwards compatibility reasons only. It is recommended to use @ref AccelerationComponent instead.
#  @category Vehicle information
#  @revision: Description revised in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    lateralAccelerationValue LateralAccelerationValue,
#    lateralAccelerationConfidence AccelerationConfidence 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of LateralAcceleration **********
#

LateralAccelerationValue lateral_acceleration_value      # lateral acceleration value at a point in time.
AccelerationConfidence   lateral_acceleration_confidence # confidence value of the lateral acceleration value.

# ********** END of LateralAcceleration   **********
