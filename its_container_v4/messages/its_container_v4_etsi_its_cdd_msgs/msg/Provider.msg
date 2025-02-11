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
#  This DF identifies an organization.
# 
#  It shall include the following components:
# 
#  @field countryCode: represents the country code that identifies the country of the national registration administrator for issuers according to ISO 14816.
# 
#  @field providerIdentifier: identifies the organization according to the national ISO 14816 register for issuers.
# 
#  @note: See https://www.itsstandards.eu/registries/register-of-nra-i-cs1/ for a list of national registration administrators and their respective registers
# 
#  @category: Communication information
#  @revision: Created in V2.2.1 based on ISO 17573-3 [24]
#   
# ASN.1 Definition:
# SEQUENCE {
#    countryCode CountryCode,
#    providerIdentifier IssuerIdentifier 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of Provider **********
#

CountryCode      country_code        # represents the country code that identifies the country of the national registration administrator for issuers according to ISO 14816.
IssuerIdentifier provider_identifier # identifies the organization according to the national ISO 14816 register for issuers.

# ********** END of Provider   **********
