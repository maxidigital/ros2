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
#  This DF represents a predicted path with a set of path points.
#  It shall contain up to `15` @ref PathPoint.
# 
#  The first PathPoint presents an offset delta position with regards to an external reference position.
#  Each other PathPoint presents an offset delta position and optionally an offset travel time with regards to the previous PathPoint.
# 
#  @category: GeoReference information
#  @revision: created in V2.1.1 based on PathHistory
#   
# ASN.1 Definition:
# SEQUENCE(SIZE(0..15,...)) OF PathPointPredicted
# 
# Element type: SEQUENCE OF
#
# ********** START of PathPredicted **********
#

PathPointPredicted[] elements        # Range(0, 15)

uint8                MIN             = 0
uint8                MAX             = 15

# ********** END of PathPredicted   **********
