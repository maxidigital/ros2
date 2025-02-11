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
#  This DF represents activation data for real-time systems designed for operations control, traffic light priorities, track switches, barriers, etc.
#  using a range of activation devices equipped in public transport vehicles.
# 
#  The activation of the corresponding equipment is triggered by the approach or passage of a public transport
#  vehicle at a certain point (e.g. a beacon).
# 
#  @field ptActivationType: type of activation.
# 
#  @field ptActicationData: data of activation.
# 
#  Today there are different payload variants defined for public transport activation-data. The R09.x is one of
#  the industry standard used by public transport vehicles (e.g. buses, trams) in Europe (e.g. Germany Austria)
#  for controlling traffic lights, barriers, bollards, etc. This DF shall include information like route, course,
#  destination, priority, etc.
# 
#  The R09.x content is defined in VDV recommendation 420 [7]. It includes following information:
#  - Priority Request Information (pre-request, request, ready to start)
#  - End of Prioritization procedure
#  - Priority request direction
#  - Public Transport line number
#  - Priority of public transport
#  - Route line identifier of the public transport
#  - Route number identification
#  - Destination of public transport vehicle
# 
#  Other countries may use different message sets defined by the local administration.
#  @category: Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    ptActivationType PtActivationType,
#    ptActivationData PtActivationData 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PtActivation **********
#

PtActivationType pt_activation_type # type of activation.
PtActivationData pt_activation_data

# ********** END of PtActivation   **********
