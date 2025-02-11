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
#  This DE represents the value of the sub cause codes of the @ref CauseCode `postCrash` .
# 
#  The value shall be set to:
#  - 0 `unavailable`                                               - in case further detailed information on post crash event is unavailable,
#  - 1 `accidentWithoutECallTriggered`                             - in case no eCall has been triggered for an accident,
#  - 2 `accidentWithECallManuallyTriggered`                        - in case eCall has been manually triggered and transmitted to eCall back end,
#  - 3 `accidentWithECallAutomaticallyTriggered`                   - in case eCall has been automatically triggered and transmitted to eCall back end,
#  - 4 `accidentWithECallTriggeredWithoutAccessToCellularNetwork`  - in case eCall has been triggered but cellular network is not accessible from triggering vehicle.
#  - 5-255                                                         - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), accidentWithoutECallTriggered(1), accidentWithECallManuallyTriggered(2), accidentWithECallAutomaticallyTriggered(3), accidentWithECallTriggeredWithoutAccessToCellularNetwork(4) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of PostCrashSubCauseCode **********
#

uint8           value

uint8           MIN                                                                 = 0
uint8           MAX                                                                 = 255
uint8           UNAVAILABLE                                                         = 0

uint8           V_UNAVAILABLE                                                       = 0
uint8           V_ACCIDENT_WITHOUT_E_CALL_TRIGGERED                                 = 1
uint8           V_ACCIDENT_WITH_E_CALL_MANUALLY_TRIGGERED                           = 2
uint8           V_ACCIDENT_WITH_E_CALL_AUTOMATICALLY_TRIGGERED                      = 3
uint8           V_ACCIDENT_WITH_E_CALL_TRIGGERED_WITHOUT_ACCESS_TO_CELLULAR_NETWORK = 4

# ********** END of PostCrashSubCauseCode   **********
