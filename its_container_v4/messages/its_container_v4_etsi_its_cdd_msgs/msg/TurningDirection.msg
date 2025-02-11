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
#  This DE provides the turning direction.
# 
#  The value shall be set to:
#  - `left`  for turning to te left.
#  - `right` for turing to the right.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { left , right } 
# 
# Element type: ENUMERATED
#
# ********** START of TurningDirection **********
#

int32           value

int32           MIN             = 0
int32           MAX             = 1

int32           V_LEFT          = 0
int32           V_RIGHT         = 1

# ********** END of TurningDirection   **********
