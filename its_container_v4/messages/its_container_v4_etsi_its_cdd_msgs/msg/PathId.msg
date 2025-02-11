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
#  This DE indicates an ordinal number that represents the position of a component in the list of @ref Traces or @ref TracesExtended.
# 
#  The value shall be set to:
#  - `0` - noPath  - if no path is identified
#  - `1..7`        - for instances 1..7 of @ref Traces
#  - `8..14`       - for instances 1..7 of @ref TracesExtended.
# 
#  @category: Road topology information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# INTEGER { noPath(0), path1(1), path2(2), path3(3), path4(4), path5(5), path6(6), path7(7), pathExtended1(8), pathExtended2(9), pathExtended3(10), pathExtended4(11), pathExtended5(12), pathExtended6(13), pathExtended7(14) }(0..14) 
# 
# Element type: INTEGER
#
# ********** START of PathId **********
#

uint8           value

uint8           MIN              = 0
uint8           MAX              = 14

uint8           V_NO_PATH        = 0
uint8           V_PATH1          = 1
uint8           V_PATH2          = 2
uint8           V_PATH3          = 3
uint8           V_PATH4          = 4
uint8           V_PATH5          = 5
uint8           V_PATH6          = 6
uint8           V_PATH7          = 7
uint8           V_PATH_EXTENDED1 = 8
uint8           V_PATH_EXTENDED2 = 9
uint8           V_PATH_EXTENDED3 = 10
uint8           V_PATH_EXTENDED4 = 11
uint8           V_PATH_EXTENDED5 = 12
uint8           V_PATH_EXTENDED6 = 13
uint8           V_PATH_EXTENDED7 = 14

# ********** END of PathId   **********
