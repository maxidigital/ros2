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
# SEQUENCE {
#    owner Provider,
#    version INTEGER(0..255),
#    pictogramCode INTEGER(0..65535),
#    value INTEGER(0..65535) OPTIONAL,
#    unit RSCUnit OPTIONAL,
#    attributes ISO14823Attributes OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of AnyCatalogue **********
#

dsrc_v2_efcdsrcapplication_msgs/Provider owner
AnyCatalogueVersion                      version
AnyCataloguePictogramCode                pictogram_code
AnyCatalogueValue[]                      value           # OPTIONAL
RSCUnit[]                                unit            # OPTIONAL
ISO14823Attributes[]                     attributes      # OPTIONAL

# ********** END of AnyCatalogue   **********
