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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE represents the duration of a traffic event validity.
# 
#  @note: this DE is kept for backwards compatibility reasons only. It is recommended to use the @ref DeltaTimeSecond instead.
#  @category: Basic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { timeOfDetection(0), oneSecondAfterDetection(1) }(0..86400) 
# 
# Element type: INTEGER
#
# ********** START of ValidityDuration **********
#

uint32          value

uint32          MIN                          = 0
uint32          MAX                          = 86400

uint32          V_TIME_OF_DETECTION          = 0
uint32          V_ONE_SECOND_AFTER_DETECTION = 1

# ********** END of ValidityDuration   **********
