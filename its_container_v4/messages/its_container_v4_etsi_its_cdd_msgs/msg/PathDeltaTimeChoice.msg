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
#  This DF represents estimated/predicted travel time between a position and a predefined reference position.
# 
#  the following options are available:
# 
#  @field deltaTimeHighPrecision: delta time with precision of 0,1 s.
# 
#  @field deltaTimeBigRange: delta time with precision of 10 s.
# 
#  @category: Basic information
#  @revision: V2.2.1
#   
# ASN.1 Definition:
# CHOICE {
#    deltaTimeHighPrecision DeltaTimeTenthOfSecond,
#    deltaTimeBigRange DeltaTimeTenSeconds 
# } 
# 
# Element type: CHOICE
#
# ********** START of PathDeltaTimeChoice **********
#

DeltaTimeTenthOfSecond[] delta_time_high_precision #  choice = 0
DeltaTimeTenSeconds[]    delta_time_big_range      #  choice = 1

uint8                    LENGTH                    = 2

# ********** END of PathDeltaTimeChoice   **********
