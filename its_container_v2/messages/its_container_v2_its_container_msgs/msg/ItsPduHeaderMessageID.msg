#*                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                    *
#*                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore         *
#*                                                                                  *
#* This program and the accompanying materials are made available under the         *
#* terms of the Eclipse Public License 2.0 which is available at                    *
#* http://www.eclipse.org/legal/epl-2.0.                                            *
#*                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                 *
#*                                                                                  *
#*                                                                                  *
#* File automatically generated with DLR Wind v2                                    *
#*                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(2)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# INTEGER { denm(1), cam(2), poi(3), spatem(4), mapem(5), ivim(6), ev-rsr(7), tistpgtransaction(8), srem(9), ssem(10), evcsn(11), saem(12), rtcmem(13), mcm(33) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of ItsPduHeaderMessageID **********
#

uint8           value

uint8           MIN                 = 0
uint8           MAX                 = 255

uint8           V_DENM              = 1
uint8           V_CAM               = 2
uint8           V_POI               = 3
uint8           V_SPATEM            = 4
uint8           V_MAPEM             = 5
uint8           V_IVIM              = 6
uint8           V_EV_RSR            = 7
uint8           V_TISTPGTRANSACTION = 8
uint8           V_SREM              = 9
uint8           V_SSEM              = 10
uint8           V_EVCSN             = 11
uint8           V_SAEM              = 12
uint8           V_RTCMEM            = 13
uint8           V_MCM               = 33

# ********** END of ItsPduHeaderMessageID   **********
