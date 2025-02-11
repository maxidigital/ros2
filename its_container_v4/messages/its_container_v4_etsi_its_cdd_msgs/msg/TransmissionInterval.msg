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
#  This DE represents the time interval between two consecutive message transmissions.
# 
#  @note: this DE is kept for backwards compatibility reasons only. It is recommended to use the @ref DeltaTimeMilliSecondPos instead.
#  @category: Basic information
#  @revision: V1.3.1
#   
#  ~~~ Units: s ~~~
# 
# ASN.1 Definition:
# INTEGER(1..10000) 
# 
# Element type: FLOAT
#
# ********** START of TransmissionInterval **********
#

float32         value

float32         MIN             = 0.001
float32         MAX             = 10.0
float32         SCALAROPERAND   = 1000.0

# ********** END of TransmissionInterval   **********
