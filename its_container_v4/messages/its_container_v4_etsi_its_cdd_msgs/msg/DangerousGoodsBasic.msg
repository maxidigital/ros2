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
#  This DE indicates the type of the dangerous goods being carried by a heavy vehicle.
#  The value is assigned according to `class` and `division` definitions of dangerous goods as specified in part II,
#  chapter 2.1.1.1 of European Agreement concerning the International Carriage of Dangerous Goods by Road [3].
# 
# 
#  @category Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# ENUMERATED { explosives1(0), explosives2(1), explosives3(2), explosives4(3), explosives5(4), explosives6(5), flammableGases(6), nonFlammableGases(7), toxicGases(8), flammableLiquids(9), flammableSolids(10), substancesLiableToSpontaneousCombustion(11), substancesEmittingFlammableGasesUponContactWithWater(12), oxidizingSubstances(13), organicPeroxides(14), toxicSubstances(15), infectiousSubstances(16), radioactiveMaterial(17), corrosiveSubstances(18), miscellaneousDangerousSubstances(19) } 
# 
# Element type: ENUMERATED
#
# ********** START of DangerousGoodsBasic **********
#

int32           value

int32           MIN                                                           = 0
int32           MAX                                                           = 19

int32           V_EXPLOSIVES1                                                 = 0
int32           V_EXPLOSIVES2                                                 = 1
int32           V_EXPLOSIVES3                                                 = 2
int32           V_EXPLOSIVES4                                                 = 3
int32           V_EXPLOSIVES5                                                 = 4
int32           V_EXPLOSIVES6                                                 = 5
int32           V_FLAMMABLE_GASES                                             = 6
int32           V_NON_FLAMMABLE_GASES                                         = 7
int32           V_TOXIC_GASES                                                 = 8
int32           V_FLAMMABLE_LIQUIDS                                           = 9
int32           V_FLAMMABLE_SOLIDS                                            = 10
int32           V_SUBSTANCES_LIABLE_TO_SPONTANEOUS_COMBUSTION                 = 11
int32           V_SUBSTANCES_EMITTING_FLAMMABLE_GASES_UPON_CONTACT_WITH_WATER = 12
int32           V_OXIDIZING_SUBSTANCES                                        = 13
int32           V_ORGANIC_PEROXIDES                                           = 14
int32           V_TOXIC_SUBSTANCES                                            = 15
int32           V_INFECTIOUS_SUBSTANCES                                       = 16
int32           V_RADIOACTIVE_MATERIAL                                        = 17
int32           V_CORROSIVE_SUBSTANCES                                        = 18
int32           V_MISCELLANEOUS_DANGEROUS_SUBSTANCES                          = 19

# ********** END of DangerousGoodsBasic   **********
