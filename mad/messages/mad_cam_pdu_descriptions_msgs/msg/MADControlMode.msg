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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0                     *
#*                                                                                         *
#* Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) cam(2) version(2)}                                                *
#*                                                                                         *
#* For support contact v2x-ts@dlr.de                                                       *
#*                                                                                         *

#
# ASN.1 Definition:
# ENUMERATED { controlledByHumanDriver(0), controlledByMAVAutomation(1), controlledByEPUManeuver(2), controlledByEPUTrajectory(3), controlledByEPUDirectControl(4), controlledByRemoteOperatorDirectControl(5), controlledByRemoteOperatorAcknPath(6), controlledByServicePad(7), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of MADControlMode **********
#

int32           value

int32           MIN                                            = 0
int32           MAX                                            = 7

int32           V_CONTROLLED_BY_HUMAN_DRIVER                   = 0
int32           V_CONTROLLED_BY_MAV_AUTOMATION                 = 1
int32           V_CONTROLLED_BY_EPU_MANEUVER                   = 2
int32           V_CONTROLLED_BY_EPU_TRAJECTORY                 = 3
int32           V_CONTROLLED_BY_EPU_DIRECT_CONTROL             = 4
int32           V_CONTROLLED_BY_REMOTE_OPERATOR_DIRECT_CONTROL = 5
int32           V_CONTROLLED_BY_REMOTE_OPERATOR_ACKN_PATH      = 6
int32           V_CONTROLLED_BY_SERVICE_PAD                    = 7

# ********** END of MADControlMode   **********
