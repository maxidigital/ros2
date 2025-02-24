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
#  This DE indicates the status of light bar and any sort of audible alarm system besides the horn.
#  This includes various common sirens as well as backup up beepers and other slow speed manoeuvring alerts.
# 
#  The corresponding bit shall be set to 1 under the following conditions:
#  - 0 - `lightBarActivated`      - when the light bar is activated,
#  - 1 - `sirenActivated`         - when the siren is activated.
# 
#  Otherwise, it shall be set to 0.
# 
#  @category Vehicle information
#  @revision: Editorial update in V2.1.1
#   
# ASN.1 Definition:
# BIT STRING { lightBarActivated(0), sirenActivated(1) }(SIZE(2)) 
# 
# Element type: BIT STRING
#
# ********** START of LightBarSirenInUse **********
#

bool[]          values

uint8           MIN                 = 2
uint8           MAX                 = 2

uint8           LIGHT_BAR_ACTIVATED = 0
uint8           SIREN_ACTIVATED     = 1

# ********** END of LightBarSirenInUse   **********
