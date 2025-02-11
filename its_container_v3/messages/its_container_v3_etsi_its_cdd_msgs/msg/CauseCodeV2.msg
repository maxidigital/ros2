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
#  This DF is an alternative representation of the cause code value of a traffic event.
# 
#  It shall include the following components:
# 
#  @field ccAndScc: the main cause of a detected event. Each entry is of a different type and represents the sub cause code.
# 
#  The semantics of the entire DF are completely defined by the component causeCode. The interpretation of the subCauseCode may
#  provide additional information that is not strictly necessary to understand the causeCode itself, and is therefore optional.
# 
#  @category: Traffic information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    ccAndScc CauseCodeChoice,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of CauseCodeV2 **********
#

CauseCodeChoice cc_and_scc      # the main cause of a detected event. Each entry is of a different type and represents the sub cause code.

# ********** END of CauseCodeV2   **********
