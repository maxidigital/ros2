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
#  This DF is a representation of the cause code value of a traffic event.
# 
#  It shall include the following components:
# 
#  @field causeCode: the main cause of a detected event.
# 
#  @field subCauseCode: the subordinate cause of a detected event.
# 
#  The semantics of the entire DF are completely defined by the component causeCode. The interpretation of the subCauseCode may
#  provide additional information that is not strictly necessary to understand the causeCode itself, and is therefore optional.
# 
#  @note: this DF is kept for backwards compatibility reasons only. It is recommended to use the @ref CauseCodeV2 instead.
# 
#  @category: Traffic information
#  @revision: Editorial update in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    causeCode CauseCodeType,
#    subCauseCode SubCauseCodeType,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of CauseCode **********
#

CauseCodeType    cause_code      # the main cause of a detected event.
SubCauseCodeType sub_cause_code  # the subordinate cause of a detected event.

# ********** END of CauseCode   **********
