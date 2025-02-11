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
#  This DF provides the reference to the information contained in a IVIM according to ETSI TS 103 301 [15].
# 
#  It shall include the following components:
# 
#  @field serviceProviderId: identifier of the organization that provided the IVIM.
# 
#  @field iviIdentificationNumber: identifier of the IVIM, as assigned by the organization identified in serviceProviderId.
# 
#  @category: Communication information
#  @revision: Created in V2.2.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    serviceProviderId Provider,
#    iviIdentificationNumber IviIdentificationNumber 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of IvimReference **********
#

Provider                service_provider_id       # identifier of the organization that provided the IVIM.
IviIdentificationNumber ivi_identification_number # identifier of the IVIM, as assigned by the organization identified in serviceProviderId.

# ********** END of IvimReference   **********
