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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:2.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE represents a difference in time with respect to a reference time.
#  It can be interpreted as the first 8 bits of a GenerationDeltaTime. To convert it to a @ref GenerationDeltaTime,
#  multiply by 256 (i.e. append a `00` byte)
# 
#  @category: Basic information
#  @revision: Created in V2.1.1
#   
#  ~~~ Units: * 0,001 s ~~~
# 
# ASN.1 Definition:
# INTEGER { unavailable(255) }(1..255) 
# 
# Element type: FLOAT
#
# ********** START of DeltaTimeQuarterSecond **********
#

float32         value

float32         MIN             = 256.0
float32         MAX             = 65280.0
float32         SCALAROPERAND   = 0.00390625
float32         UNAVAILABLE     = 65280.0

float32         V_UNAVAILABLE   = 65280.0

# ********** END of DeltaTimeQuarterSecond   **********
