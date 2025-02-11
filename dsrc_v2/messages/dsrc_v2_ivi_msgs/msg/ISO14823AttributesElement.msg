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
# CHOICE {
#    dtm DTM,
#    edt EDT,
#    dfl DFL,
#    ved VED,
#    spe SPE,
#    roi ROI,
#    dbv DBV,
#    ddd DDD 
# } 
# 
# Element type: CHOICE
#
# ********** START of ISO14823AttributesElement **********
#

DTM[]           dtm             #  choice = 0
EDT[]           edt             #  choice = 1
DFL[]           dfl             #  choice = 2
VED[]           ved             #  choice = 3
SPE[]           spe             #  choice = 4
ROI[]           roi             #  choice = 5
DBV[]           dbv             #  choice = 6
DDD[]           ddd             #  choice = 7

uint8           LENGTH          = 8

# ********** END of ISO14823AttributesElement   **********
