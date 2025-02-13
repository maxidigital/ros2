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
#  This DF represents an acceleration component along with a confidence value.
# 
#  It shall include the following components:
# 
#  @field value: the value of the acceleration component which can be estimated as the mean of the current distribution.
# 
#  @field confidence: the confidence value associated to the provided value.
# 
#  @category: Kinematic Information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    value AccelerationValue,
#    confidence AccelerationConfidence 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of AccelerationComponent **********
#

AccelerationValue      value           # the value of the acceleration component which can be estimated as the mean of the current distribution.
AccelerationConfidence confidence      # the confidence value associated to the provided value.

# ********** END of AccelerationComponent   **********
