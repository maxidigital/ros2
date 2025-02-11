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
#  This DE indicates the current status of a hard shoulder: whether it is available for special usage
#  (e.g. for stopping or for driving) or closed for all vehicles.
# 
#  The value shall be set to:
#  - 0 - `availableForStopping` - if the hard shoulder is available for stopping in e.g. emergency situations,
#  - 1 - `closed`               - if the hard shoulder is closed and cannot be occupied in any case,
#  - 2 - `availableForDriving`  - if the hard shoulder is available for regular driving.
# 
#  @category: Traffic information
#  @revision: Description revised in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { availableForStopping(0), closed(1), availableForDriving(2) } 
# 
# Element type: ENUMERATED
#
# ********** START of HardShoulderStatus **********
#

int32           value

int32           MIN                      = 0
int32           MAX                      = 2

int32           V_AVAILABLE_FOR_STOPPING = 0
int32           V_CLOSED                 = 1
int32           V_AVAILABLE_FOR_DRIVING  = 2

# ********** END of HardShoulderStatus   **********
