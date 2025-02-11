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
#  This DE represents the possible usage conditions of the VRU device.
# 
#  - The value shall be set to:
#  - 0 `unavailable`      - to indicate that the usage conditions are unavailable,
#  - 1 `other`            - to indicate that the VRU device is in a state not defined below,
#  - 2 `idle`             - to indicate that the human is currently not interacting with the device,
#  - 3 `listeningToAudio` - to indicate that any audio source other than calling is in use,
#  - 4 `typing`           - to indicate that the human is texting or performaing any other manual input activity,
#  - 5 `calling`          - to indicate that the VRU device is currently receiving a call,
#  - 6 `playingGames`     - to indicate that the human is playing games,
#  - 7 `reading`          - to indicate that the human is reading on the VRU device,
#  - 8 `viewing`          - to indicate that the human is watching dynamic content, including following navigation prompts, viewing videos or other visual contents that are not static.
#  - value 9 to 15        - are reserved for future usage.
# 
#  @category: VRU information
#  @revision: Created in V2.1.1, type changed from ENUMERATED to INTEGER in V2.2.1 and range changed from 0..255 to 0..15
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), other(1), idle(2), listeningToAudio(3), typing(4), calling(5), playingGames(6), reading(7), viewing(8) }(0..15) 
# 
# Element type: INTEGER
#
# ********** START of VruDeviceUsage **********
#

uint8           value

uint8           MIN                  = 0
uint8           MAX                  = 15
uint8           UNAVAILABLE          = 0

uint8           V_UNAVAILABLE        = 0
uint8           V_OTHER              = 1
uint8           V_IDLE               = 2
uint8           V_LISTENING_TO_AUDIO = 3
uint8           V_TYPING             = 4
uint8           V_CALLING            = 5
uint8           V_PLAYING_GAMES      = 6
uint8           V_READING            = 7
uint8           V_VIEWING            = 8

# ********** END of VruDeviceUsage   **********
