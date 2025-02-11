#*                                                                             *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)             *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)               *
#*                                                                             *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore    *
#*                                                                             *
#* This program and the accompanying materials are made available under the    *
#* terms of the Eclipse Public License 2.0 which is available at               *
#* http://www.eclipse.org/legal/epl-2.0.                                       *
#*                                                                             *
#* SPDX-License-Identifier: EPL-2.0                                            *
#*                                                                             *
#*                                                                             *
#* File automatically generated with DLR Wind v2                               *
#*                                                                             *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0         *
#*                                                                             *
#* Module: DSRC {iso(1) standard(0) signalizedIntersection(19091) profilec(2)  *
#*     dsrc(2) version2(2)}                                                    *
#*                                                                             *
#* For support contact v2x-ts@dlr.de                                           *
#*                                                                             *

#
# ASN.1 Definition:
# ENUMERATED { unknown(0), requested(1), processing(2), watchOtherTraffic(3), granted(4), rejected(5), maxPresence(6), reserviceLocked(7), ... } 
# 
# Element type: ENUMERATED
#
# ********** START of PrioritizationResponseStatus **********
#

int32           value

int32           MIN                   = 0
int32           MAX                   = 7

int32           V_UNKNOWN             = 0
int32           V_REQUESTED           = 1
int32           V_PROCESSING          = 2
int32           V_WATCH_OTHER_TRAFFIC = 3
int32           V_GRANTED             = 4
int32           V_REJECTED            = 5
int32           V_MAX_PRESENCE        = 6
int32           V_RESERVICE_LOCKED    = 7

# ********** END of PrioritizationResponseStatus   **********
