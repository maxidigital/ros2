#*                                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                                    *
#*                                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                         *
#*                                                                                                  *
#* This program and the accompanying materials are made available under the                         *
#* terms of the Eclipse Public License 2.0 which is available at                                    *
#* http://www.eclipse.org/legal/epl-2.0.                                                            *
#*                                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                                 *
#*                                                                                                  *
#*                                                                                                  *
#* File automatically generated with DLR Wind v2                                                    *
#*                                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v1_23:1.0                            *
#*                                                                                                  *
#* Module: CPM_PerceptionRegionContainer {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) perceptionRegionContainer(5) major-version-1(1) minor-version-1(1)}        *
#*                                                                                                  *
#* For support contact v2x-ts@dlr.de                                                                *
#*                                                                                                  *

#
# 
#  This DF  represents the Perception Region Container as a list of perception region information objects.
#   
# ASN.1 Definition:
# SEQUENCE SIZE(1..256, ...) OF PerceptionRegion
# 
# Element type: SEQUENCE OF
#
# ********** START of PerceptionRegionContainer **********
#

PerceptionRegion[] elements        # Range(1, 256)

uint16             MIN             = 1
uint16             MAX             = 256

# ********** END of PerceptionRegionContainer   **********
