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
# ENUMERATED { nominalDriving(0), mrm_wait_for_RO_SP(1), mrm_calc_path(2), mrm_wait_for_RO_ack(3) } 
# 
# Element type: ENUMERATED
#
# ********** START of MADDrivingMode **********
#

int32           value

int32           MIN                   = 0
int32           MAX                   = 3

int32           V_NOMINAL_DRIVING     = 0
int32           V_MRM_WAIT_FOR_RO_SP  = 1
int32           V_MRM_CALC_PATH       = 2
int32           V_MRM_WAIT_FOR_RO_ACK = 3

# ********** END of MADDrivingMode   **********
