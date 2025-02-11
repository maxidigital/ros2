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
#  This DE represents the number of elapsed (TAI) milliseconds since the ITS Epoch.
#  The ITS epoch is `00:00:00.000 UTC, 1 January 2004`.
#  "Elapsed" means that the true number of milliseconds is continuously counted without interruption,
#   i.e. it is not altered by leap seconds, which occur in UTC.
# 
#  @note: International Atomic Time (TAI) is the time reference coordinate on the basis of the readings of atomic clocks,
#  operated in accordance with the definition of the second, the unit of time of the International System of Units.
#  TAI is a continuous time scale. UTC has discontinuities, as it is occasionally adjusted by leap seconds.
#  As of 1 January, 2022, TimestampIts is 5 seconds ahead of UTC, because since the ITS epoch on 1 January 2004 00:00:00.000 UTC,
#  further 5 leap seconds have been inserted in UTC.
# 
#  EXAMPLE: The value for TimestampIts for 1 January 2007 00:00:00.000 UTC is `94 694 401 000` milliseconds,
#  which includes one leap second insertion since the ITS epoch.
#  @category: Basic information
#  @revision: Description revised in in V2.1.1
#   
#  ~~~ Units: s ~~~
# 
# ASN.1 Definition:
# INTEGER(0..4398046511103) 
# 
# Element type: FLOAT
#
# ********** START of TimestampIts **********
#

float32         value

float32         MIN             = 0.0
float32         MAX             = 4.3980467E9
float32         SCALAROPERAND   = 1000.0

# ********** END of TimestampIts   **********
