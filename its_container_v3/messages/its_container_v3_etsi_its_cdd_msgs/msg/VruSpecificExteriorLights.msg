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
#  This DE describes the status of the exterior light switches of a VRU.
# 
#  The value of each bit indicates the state of the switch, which commands the corresponding light.
#  The bit corresponding to a specific light shall be set to 1, when the corresponding switch is turned on, either manually by the driver or VRU
#  or automatically by a vehicle or VRU system:
#  - 0 `unavailable`     - indicates no information available,
#  - 1 `backFlashLight ` - indicates the status of the back flash light,
#  - 2 `helmetLight`     - indicates the status of the helmet light,
#  - 3 `armLight`        - indicates the status of the arm light,
#  - 4 `legLight`        - indicates the status of the leg light,
#  - 5 `wheelLight`      - indicates the status of the wheel light.
#  - Bits 6 to 8         - are reserved for future use.
#  The bit values do not indicate if the corresponding lamps are alight or not.
#  If  VRU is not equipped with a certain light or if the light switch status information is not available, the corresponding bit shall be set to 0.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# BIT STRING { unavailable(0), backFlashLight(1), helmetLight(2), armLight(3), legLight(4), wheelLight(5) }(SIZE(8)) 
# 
# Element type: BIT STRING
#
# ********** START of VruSpecificExteriorLights **********
#

bool[]          values

uint8           MIN              = 8
uint8           MAX              = 8

uint8           UNAVAILABLE      = 0
uint8           BACK_FLASH_LIGHT = 1
uint8           HELMET_LIGHT     = 2
uint8           ARM_LIGHT        = 3
uint8           LEG_LIGHT        = 4
uint8           WHEEL_LIGHT      = 5

# ********** END of VruSpecificExteriorLights   **********
