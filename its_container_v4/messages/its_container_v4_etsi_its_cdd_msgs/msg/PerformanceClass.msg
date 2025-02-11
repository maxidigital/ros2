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
#  This DE denotes the ability of an ITS-S to provide up-to-date information.
#  A performance class value is used to describe age of data. The exact values are out of scope of the present document.
# 
#   The value shall be set to:
#  - `0` if  the performance class is unknown,
#  - `1` for performance class A as defined in ETSI TS 101 539-1 [5],
#  - `2` for performance class B as defined in ETSI TS 101 539-1 [5],
#  -  3-7 reserved for future use.
# 
#  @category: Vehicle information
#  @revision: Editorial update in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), performanceClassA(1), performanceClassB(2) }(0..7) 
# 
# Element type: INTEGER
#
# ********** START of PerformanceClass **********
#

uint8           value

uint8           MIN                   = 0
uint8           MAX                   = 7
uint8           UNAVAILABLE           = 0

uint8           V_UNAVAILABLE         = 0
uint8           V_PERFORMANCE_CLASS_A = 1
uint8           V_PERFORMANCE_CLASS_B = 2

# ********** END of PerformanceClass   **********
