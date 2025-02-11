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
#  This DE represents the type of facility layer message.
# 
#   The value shall be set to:
# 	- 1  - `denm`              - for Decentralized Environmental Notification Message (DENM) as specified in ETSI EN 302 637-3 [2],
#   - 2  - `cam`               - for Cooperative Awareness Message (CAM) as specified in ETSI EN 302 637-2 [1],
#   - 3  - `poi`               - for Point of Interest message as specified in ETSI TS 101 556-1 [9],
#   - 4  - `spatem`            - for Signal Phase And Timing Extended Message (SPATEM) as specified in ETSI TS 103 301 [15],
#   - 5  - `mapem`             - for MAP Extended Message (MAPEM) as specified in ETSI TS 103 301 [15],
#   - 6  - `ivim`              - for in Vehicle Information Message (IVIM) as specified in ETSI TS 103 301 [15],
#   - 7  - `ev-rsr`            - for Electric vehicle recharging spot reservation message, as defined in ETSI TS 101 556-3 [11],
#   - 8  - `tistpgtransaction` - for messages for Tyre Information System (TIS) and Tyre Pressure Gauge (TPG) interoperability, as specified in ETSI TS 101 556-2 [10],
#   - 9  - `srem`              - for Signal Request Extended Message as specified in ETSI TS 103 301 [15],
#   - 10 - `ssem`              - for Signal request Status Extended Message as specified in ETSI TS 103 301 [15],
#   - 11 - `evcsn`             - for Electrical Vehicle Charging Spot Notification message as specified in ETSI TS 101 556-1 [9],
#   - 12 - `saem`              - for Services Announcement Extended Message as specified in ETSI EN 302 890-1 [17],
#   - 13 - `rtcmem`            - for Radio Technical Commission for Maritime Services Extended Message (RTCMEM) as specified in ETSI TS 103 301 [15],
#   - 14 - `cpm`               - reserved for Collective Perception Message (CPM),
#   - 15 - `imzm`              - for Interference Management Zone Message (IMZM) as specified in ETSI TS 103 724 [13],
#   - 16 - `vam`               - for Vulnerable Road User Awareness Message as specified in ETSI TS 130 300-3 [12],
#   - 17 - `dsm`               - reserved for Diagnosis, logging and Status Message,
#   - 18 - `pcim`              - reserved for Parking Control Infrastructure Message,
#   - 19 - `pcvm`              - reserved for Parking Control Vehicle Message,
#   - 20 - `mcm`               - reserved for Manoeuvre Coordination Message,
#   - 21 - `pam`               - reserved for Parking Availability Message,
#   - 22-255                   - reserved for future usage.
# 
#  @category: Communication information
#  @revision: Created in V2.1.1 from @ref ItsPduHeader.
#   
# ASN.1 Definition:
# INTEGER { denm(1), cam(2), poi(3), spatem(4), mapem(5), ivim(6), ev-rsr(7), tistpgtransaction(8), srem(9), ssem(10), evcsn(11), saem(12), rtcmem(13), cpm(14), imzm(15), vam(16), dsm(17), pcim(18), pcvm(19), mcm(20), pam(21) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of MessageId **********
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
uint8           V_CPM               = 14
uint8           V_IMZM              = 15
uint8           V_VAM               = 16
uint8           V_DSM               = 17
uint8           V_PCIM              = 18
uint8           V_PCVM              = 19
uint8           V_MCM               = 20
uint8           V_PAM               = 21

# ********** END of MessageId   **********
