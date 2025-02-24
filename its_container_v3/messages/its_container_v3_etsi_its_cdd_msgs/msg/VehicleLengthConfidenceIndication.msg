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
#  This DE provides information about the presence of a trailer.
# 
#  The value shall be set to:
#  - 0 `noTrailerPresent`                - to indicate that no trailer is present, i.e. either the vehicle is physically not enabled to tow a trailer or it has been detected that no trailer is present,
#  - 1 `trailerPresentWithKnownLength`   - to indicate that a trailer has been detected as present and the length is  included in the vehicle length value,
#  - 2 `trailerPresentWithUnknownLength` - to indicate that a trailer has been detected as present and the length is not included in the vehicle length value,
#  - 3 `trailerPresenceIsUnknown`        - to indicate that information about the trailer presence is unknown, i.e. the vehicle is physically enabled to tow a trailer but the detection of trailer presence/absence is not possible,
#  - 4 `unavailable`                     - to indicate that the information about the presence of a trailer is not available, i.e. it is neither known whether the vehicle is able to tow a trailer,
#                                         nor the detection of trailer presence/absence is possible.
# 
#  @note: this DE is kept for backwards compatibility reasons only. It is recommended to use the @ref TrailerPresenceInformation instead.
#  @category: Vehicle information
#  @revision: Description revised in V2.1.1
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
