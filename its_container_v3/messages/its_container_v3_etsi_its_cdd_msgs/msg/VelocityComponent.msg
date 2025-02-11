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
#  This DF represents a component of the velocity vector and the associated confidence value.
# 
#  It shall include the following components:
# 
#  @field value: the value of the component.
# 
#  @field confidence: the confidence value of the value.
# 
#  @category: Kinematic information
#  @revision: V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    value VelocityComponentValue,
#    confidence SpeedConfidence 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of VelocityComponent **********
#

VelocityComponentValue value           # the value of the component.
SpeedConfidence        confidence      # the confidence value of the value.

# ********** END of VelocityComponent   **********
