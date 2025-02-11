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
#  This DE represents a  difference in time with respect to a reference time.
# 
#  The value shall be set to:
#  - `-0` for a difference in time of 0 seconds.
#  - `n` (`n > 0` and `n <= 86400`) to indicate a time value equal to or less than n x 1 s, and greater than (n-1) x 1 s,
# 
#  @category: Basic information
#  @revision: Created in V2.1.1 from ValidityDuration
#   
# ASN.1 Definition:
# INTEGER(0..86400) 
# 
# Element type: INTEGER
#
# ********** START of DeltaTimeSecond **********
#

uint32          value

uint32          MIN             = 0
uint32          MAX             = 86400

# ********** END of DeltaTimeSecond   **********
