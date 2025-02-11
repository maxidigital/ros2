#*                                                                                      *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                      *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                        *
#*                                                                                      *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore             *
#*                                                                                      *
#* This program and the accompanying materials are made available under the             *
#* terms of the Eclipse Public License 2.0 which is available at                        *
#* http://www.eclipse.org/legal/epl-2.0.                                                *
#*                                                                                      *
#* SPDX-License-Identifier: EPL-2.0                                                     *
#*                                                                                      *
#*                                                                                      *
#* File automatically generated with DLR Wind v2                                        *
#*                                                                                      *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0                  *
#*                                                                                      *
#* Module: CITSapplMgmtIDs {iso(1) standard(0) cits-applMgmt(17419) ids(1) version1(1)} *
#*                                                                                      *
#* For support contact v2x-ts@dlr.de                                                    *
#*                                                                                      *

#
# ASN.1 Definition:
# CHOICE {
#    content INTEGER(128..16511),
#    extension Ext2 
# } 
# 
# Element type: CHOICE
#
# ********** START of Ext1 **********
#

Ext1Content[]   content         #  choice = 0
Ext2[]          extension       #  choice = 1

uint8           LENGTH          = 2

# ********** END of Ext1   **********
