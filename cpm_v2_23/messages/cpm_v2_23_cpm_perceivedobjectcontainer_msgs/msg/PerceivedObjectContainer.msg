#*                                                                                                 *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                                 *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                                   *
#*                                                                                                 *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                        *
#*                                                                                                 *
#* This program and the accompanying materials are made available under the                        *
#* terms of the Eclipse Public License 2.0 which is available at                                   *
#* http://www.eclipse.org/legal/epl-2.0.                                                           *
#*                                                                                                 *
#* SPDX-License-Identifier: EPL-2.0                                                                *
#*                                                                                                 *
#*                                                                                                 *
#* File automatically generated with DLR Wind v2                                                   *
#*                                                                                                 *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v2_23:1.0                           *
#*                                                                                                 *
#* Module: CPM_PerceivedObjectContainer {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) perceivedObjectContainer(4) major-version-1(1) minor-version-1(1)}        *
#*                                                                                                 *
#* For support contact v2x-ts@dlr.de                                                               *
#*                                                                                                 *

#
# 
#  This DF  represents the Perceived Object Container
# 
#  It shall include the following components:
# 
#  @field numberOfPerceivedObjects: the total number of perceived objects at the time of generating the message.
# 
#  @field perceivedObjects: the list of perceived objects.
# 
#   
# ASN.1 Definition:
# SEQUENCE {
#    numberOfPerceivedObjects CardinalNumber1B,
#    perceivedObjects PerceivedObjects,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PerceivedObjectContainer **********
#

its_container_v3_etsi_its_cdd_msgs/CardinalNumber1B number_of_perceived_objects # the total number of perceived objects at the time of generating the message.
PerceivedObjects                                    perceived_objects           # the list of perceived objects.

# ********** END of PerceivedObjectContainer   **********
