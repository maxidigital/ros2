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
#  This DF  provides  information  associated to heading  change indicators  such as  a  change  of  direction.
# 
#  It shall include the following components:
# 
#  @field direction: the direction of heading change value.
# 
#  @field actionDeltaTime: the period over which a direction change action is performed.
# 
#  @category: Kinematic Information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    direction TurningDirection,
#    actionDeltaTime DeltaTimeTenthOfSecond,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of HeadingChangeIndication **********
#

TurningDirection       direction         # the direction of heading change value.
DeltaTimeTenthOfSecond action_delta_time # the period over which a direction change action is performed.

# ********** END of HeadingChangeIndication   **********
