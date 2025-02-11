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
#  This DE indicates whether a passenger seat is occupied or whether the occupation status is detectable or not.
# 
#  The number of row in vehicle seats layout is counted in rows from the driver row backwards from front to the rear
#  of the vehicle.
#  The left side seat of a row refers to the left hand side seen from vehicle rear to front.
#  Additionally, a bit is reserved for each seat row, to indicate if the seat occupation of a row is detectable or not,
#  i.e. `row1NotDetectable (3)`, `row2NotDetectable(8)`, `row3NotDetectable(13)` and `row4NotDetectable(18)`.
#  Finally, a bit is reserved for each row seat to indicate if the seat row is present or not in the vehicle,
#  i.e. `row1NotPresent (4)`, `row2NotPresent (9)`, `row3NotPresent(14)`, `row4NotPresent(19)`.
# 
#  When a seat is detected to be occupied, the corresponding seat occupation bit shall be set to `1`.
#  For example, when the row 1 left seat is occupied, `row1LeftOccupied(0)` bit shall be set to `1`.
#  When a seat is detected to be not occupied, the corresponding seat occupation bit shall be set to `0`.
#  Otherwise, the value of seat occupation bit shall be set according to the following conditions:
#  - If the seat occupation of a seat row is not detectable, the corresponding bit shall be set to `1`.
#    When any seat row not detectable bit is set to `1`, all corresponding seat occupation bits of the same row
#    shall be set to `1`.
#  - If the seat row is not present, the corresponding not present bit of the same row shall be set to `1`.
#    When any of the seat row not present bit is set to `1`, the corresponding not detectable bit for that row
#    shall be set to `1`, and all the corresponding seat occupation bits in that row shall be set to `0`.
# 
#  @category: Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# BIT STRING { row1LeftOccupied(0), row1RightOccupied(1), row1MidOccupied(2), row1NotDetectable(3), row1NotPresent(4), row2LeftOccupied(5), row2RightOccupied(6), row2MidOccupied(7), row2NotDetectable(8), row2NotPresent(9), row3LeftOccupied(10), row3RightOccupied(11), row3MidOccupied(12), row3NotDetectable(13), row3NotPresent(14), row4LeftOccupied(15), row4RightOccupied(16), row4MidOccupied(17), row4NotDetectable(18), row4NotPresent(19) }(SIZE(20)) 
# 
# Element type: BIT STRING
#
# ********** START of PositionOfOccupants **********
#

bool[]          values

uint8           MIN                  = 20
uint8           MAX                  = 20

uint8           ROW_1_LEFT_OCCUPIED  = 0
uint8           ROW_1_RIGHT_OCCUPIED = 1
uint8           ROW_1_MID_OCCUPIED   = 2
uint8           ROW_1_NOT_DETECTABLE = 3
uint8           ROW_1_NOT_PRESENT    = 4
uint8           ROW_2_LEFT_OCCUPIED  = 5
uint8           ROW_2_RIGHT_OCCUPIED = 6
uint8           ROW_2_MID_OCCUPIED   = 7
uint8           ROW_2_NOT_DETECTABLE = 8
uint8           ROW_2_NOT_PRESENT    = 9
uint8           ROW_3_LEFT_OCCUPIED  = 10
uint8           ROW_3_RIGHT_OCCUPIED = 11
uint8           ROW_3_MID_OCCUPIED   = 12
uint8           ROW_3_NOT_DETECTABLE = 13
uint8           ROW_3_NOT_PRESENT    = 14
uint8           ROW_4_LEFT_OCCUPIED  = 15
uint8           ROW_4_RIGHT_OCCUPIED = 16
uint8           ROW_4_MID_OCCUPIED   = 17
uint8           ROW_4_NOT_DETECTABLE = 18
uint8           ROW_4_NOT_PRESENT    = 19

# ********** END of PositionOfOccupants   **********
