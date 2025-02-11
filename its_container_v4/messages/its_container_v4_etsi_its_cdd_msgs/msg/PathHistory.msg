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
#  This DF represents a path history with a set of path points.
#  It shall contain up to `40` @ref PathPoint.
# 
#  The first PathPoint presents an offset delta position with regards to an external reference position.
#  Each other PathPoint presents an offset delta position and optionally an offset travel time with regards to the previous PathPoint.
# 
#  @note: this DF is kept for backwards compatibility reasons only. It is recommended to use @ref Path instead.
#  @category: GeoReference information, Vehicle information
#  @revision: semantics updated in V2.1.1, size corrected to 0..40 in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE(SIZE(0..40)) OF PathPoint
# 
# Element type: SEQUENCE OF
#
# ********** START of PathHistory **********
#

PathPoint[]     elements        # Range(0, 40)

uint8           MIN             = 0
uint8           MAX             = 40

# ********** END of PathHistory   **********
