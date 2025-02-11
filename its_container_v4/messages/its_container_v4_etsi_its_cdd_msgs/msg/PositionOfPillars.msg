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
#  This DF shall contain a list of distances @ref PosPillar that refer to the perpendicular distance between centre of vehicle front bumper
#  and vehicle pillar A, between neighbour pillars until the last pillar of the vehicle.
# 
#  Vehicle pillars refer to the vertical or near vertical support of vehicle,
#  designated respectively as the A, B, C or D and other pillars moving in side profile view from the front to rear.
# 
#  The first value of the DF refers to the perpendicular distance from the centre of vehicle front bumper to
#  vehicle A pillar. The second value refers to the perpendicular distance from the centre position of A pillar
#  to the B pillar of vehicle and so on until the last pillar.
# 
#  @category: Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# SEQUENCE(SIZE(1..3, ...)) OF PosPillar
# 
# Element type: SEQUENCE OF
#
# ********** START of PositionOfPillars **********
#

PosPillar[]     elements        # Range(1, 3)

uint8           MIN             = 1
uint8           MAX             = 3

# ********** END of PositionOfPillars   **********
