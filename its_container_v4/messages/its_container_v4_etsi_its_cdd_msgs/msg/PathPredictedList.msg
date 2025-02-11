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
#  This DF represents one or more predicted paths, or trajectories or path zones (zones that include all possible paths/trajectories within its boundaries) using @ref PathPredicted2.
#  It shall contain up to `16` @ref PathPredicted2.
# 
#  @category: GeoReference information
#  @revision: V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE SIZE(1..16,...) OF PathPredicted2
# 
# Element type: SEQUENCE OF
#
# ********** START of PathPredictedList **********
#

PathPredicted2[] elements        # Range(1, 16)

uint8            MIN             = 1
uint8            MAX             = 16

# ********** END of PathPredictedList   **********
