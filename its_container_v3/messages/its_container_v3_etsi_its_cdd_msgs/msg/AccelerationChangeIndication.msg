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
#  This DF represents information associated to changes in acceleration.
# 
#  It shall include the following components:
# 
#  @field accelOrDecel: the indication of an acceleration change.
# 
#  @field actionDeltaTime: the period over which the acceleration change action is performed.
# 
#  @category: Kinematic Information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    accelOrDecel AccelerationChange,
#    actionDeltaTime DeltaTimeTenthOfSecond,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of AccelerationChangeIndication **********
#

AccelerationChange     accel_or_decel    # the indication of an acceleration change.
DeltaTimeTenthOfSecond action_delta_time # the period over which the acceleration change action is performed.

# ********** END of AccelerationChangeIndication   **********
