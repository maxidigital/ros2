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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v1:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(1)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# ENUMERATED { noTrailerPresent(0), trailerPresentWithKnownLength(1), trailerPresentWithUnknownLength(2), trailerPresenceIsUnknown(3), unavailable(4) } 
# 
# Element type: ENUMERATED
#
# ********** START of VehicleLengthConfidenceIndication **********
#

int32           value

int32           MIN                                   = 0
int32           MAX                                   = 4
int32           UNAVAILABLE                           = 4

int32           V_NO_TRAILER_PRESENT                  = 0
int32           V_TRAILER_PRESENT_WITH_KNOWN_LENGTH   = 1
int32           V_TRAILER_PRESENT_WITH_UNKNOWN_LENGTH = 2
int32           V_TRAILER_PRESENCE_IS_UNKNOWN         = 3
int32           V_UNAVAILABLE                         = 4

# ********** END of VehicleLengthConfidenceIndication   **********
