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
# ENUMERATED { dangerWarning , regulatory , informative , ... } 
# 
# Element type: ENUMERATED
#
# ********** START of ISO14823CodePictogramCodeServiceCategoryCodeTrafficSignPictogram **********
#

int32           value

int32           MIN              = 0
int32           MAX              = 2

int32           V_DANGER_WARNING = 0
int32           V_REGULATORY     = 1
int32           V_INFORMATIVE    = 2

# ********** END of ISO14823CodePictogramCodeServiceCategoryCodeTrafficSignPictogram   **********
