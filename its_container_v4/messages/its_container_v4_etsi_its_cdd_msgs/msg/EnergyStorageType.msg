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
#  This DE indicated the type of energy being used and stored in vehicle.
# 
#  The corresponding bit shall be set to 1 under the following conditions:
#  - 0 - `hydrogenStorage`       - when hydrogen is being used and stored in vehicle,
#  - 1 - `electricEnergyStorage` - when electric energy is being used and stored in vehicle,
#  - 2 - `liquidPropaneGas`      - when liquid Propane Gas (LPG) is being used and stored in vehicle,
#  - 3 - `compressedNaturalGas ` - when compressedNaturalGas (CNG) is being used and stored in vehicle,
#  - 4 - `diesel`                - when diesel is being used and stored in vehicle,
#  - 5 - `gasoline`              - when gasoline is being used and stored in vehicle,
#  - 6 - `ammonia`               - when ammonia is being used and stored in vehicle.
# 
#  - Otherwise, the corresponding bit shall be set to `0`.
# 
#  @category: Vehicle information
#  @revision: editorial revision in V2.1.1
#   
# ASN.1 Definition:
# BIT STRING { hydrogenStorage(0), electricEnergyStorage(1), liquidPropaneGas(2), compressedNaturalGas(3), diesel(4), gasoline(5), ammonia(6) }(SIZE(7)) 
# 
# Element type: BIT STRING
#
# ********** START of EnergyStorageType **********
#

bool[]          values

uint8           MIN                     = 7
uint8           MAX                     = 7

uint8           HYDROGEN_STORAGE        = 0
uint8           ELECTRIC_ENERGY_STORAGE = 1
uint8           LIQUID_PROPANE_GAS      = 2
uint8           COMPRESSED_NATURAL_GAS  = 3
uint8           DIESEL                  = 4
uint8           GASOLINE                = 5
uint8           AMMONIA                 = 6

# ********** END of EnergyStorageType   **********
