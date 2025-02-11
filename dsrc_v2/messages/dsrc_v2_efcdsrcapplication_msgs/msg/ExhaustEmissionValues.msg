#*                                                                            *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)            *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)              *
#*                                                                            *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore   *
#*                                                                            *
#* This program and the accompanying materials are made available under the   *
#* terms of the Eclipse Public License 2.0 which is available at              *
#* http://www.eclipse.org/legal/epl-2.0.                                      *
#*                                                                            *
#* SPDX-License-Identifier: EPL-2.0                                           *
#*                                                                            *
#*                                                                            *
#* File automatically generated with DLR Wind v2                              *
#*                                                                            *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0        *
#*                                                                            *
#* Module: EfcDsrcApplication {iso(1) standard(0) application(0) version5(5)} *
#*                                                                            *
#* For support contact v2x-ts@dlr.de                                          *
#*                                                                            *

#
# ASN.1 Definition:
# SEQUENCE {
#    unitType UnitType,
#    emissionCO INTEGER(0..32767),
#    emissionHC Int2,
#    emissionNOX Int2,
#    emissionHCNOX Int2 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ExhaustEmissionValues **********
#

UnitType                        unit_type
ExhaustEmissionValuesEmissionCO emission_co
Int2                            emission_hc
Int2                            emission_nox
Int2                            emission_hcnox

# ********** END of ExhaustEmissionValues   **********
