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
#  This DF represents an acceleration vector with associated confidence value.
# 
#  It shall include the following components:
# 
#  @field polarAcceleration: the representation of the acceleration vector in a polar or cylindrical coordinate system.
# 
#  @field cartesianAcceleration: the representation of the acceleration vector in a cartesian coordinate system.
# 
#  @category: Kinematic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# CHOICE {
#    polarAcceleration AccelerationPolarWithZ,
#    cartesianAcceleration AccelerationCartesian 
# } 
# 
# Element type: CHOICE
#
# ********** START of Acceleration3dWithConfidence **********
#

AccelerationPolarWithZ[] polar_acceleration     #  choice = 0
AccelerationCartesian[]  cartesian_acceleration #  choice = 1

uint8                    LENGTH                 = 2

# ********** END of Acceleration3dWithConfidence   **********
