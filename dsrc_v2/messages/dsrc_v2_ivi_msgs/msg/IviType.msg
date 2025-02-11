#*                                                                          *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)          *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)            *
#*                                                                          *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore *
#*                                                                          *
#* This program and the accompanying materials are made available under the *
#* terms of the Eclipse Public License 2.0 which is available at            *
#* http://www.eclipse.org/legal/epl-2.0.                                    *
#*                                                                          *
#* SPDX-License-Identifier: EPL-2.0                                         *
#*                                                                          *
#*                                                                          *
#* File automatically generated with DLR Wind v2                            *
#*                                                                          *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0      *
#*                                                                          *
#* Module: IVI {iso(1) standard(0) ivi(19321) version1(1)}                  *
#*                                                                          *
#* For support contact v2x-ts@dlr.de                                        *
#*                                                                          *

#
# ASN.1 Definition:
# INTEGER { immediateDangerWarningMessages(0), regulatoryMessages(1), trafficRelatedInformationMessages(2), pollutionMessages(3), notTrafficRelatedInformationMessages(4) }(0..7) 
# 
# Element type: INTEGER
#
# ********** START of IviType **********
#

uint8           value

uint8           MIN                                        = 0
uint8           MAX                                        = 7

uint8           V_IMMEDIATE_DANGER_WARNING_MESSAGES        = 0
uint8           V_REGULATORY_MESSAGES                      = 1
uint8           V_TRAFFIC_RELATED_INFORMATION_MESSAGES     = 2
uint8           V_POLLUTION_MESSAGES                       = 3
uint8           V_NOT_TRAFFIC_RELATED_INFORMATION_MESSAGES = 4

# ********** END of IviType   **********
