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
#  This DE is used for various tasks in the public transportation environment, especially for controlling traffic
#  signal systems to prioritize and speed up public transportation in urban area (e.g. intersection "_bottlenecks_").
#  The traffic lights may be controlled by an approaching bus or tram automatically. This permits "_In Time_" activation
#  of the green phase, will enable the individual traffic to clear a potential traffic jam in advance. Thereby the
#  approaching bus or tram may pass an intersection with activated green light without slowing down the speed due to
#  traffic congestion. Other usage of the DE is the provision of information like the public transport line number
#  or the schedule delay of a public transport vehicle.
# 
#  @category: Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# OCTET STRING(SIZE(1..20)) 
# 
# Element type: OCTET STRING
#
# ********** START of PtActivationData **********
#


uint8           MIN             = 1
uint8           MAX             = 20
int8[]          values

# ********** END of PtActivationData   **********
