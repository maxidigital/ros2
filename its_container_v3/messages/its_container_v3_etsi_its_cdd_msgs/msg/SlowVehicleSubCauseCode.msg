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
#  This DE represents the sub cause codes of the @ref CauseCode "slowVehicle".
# 
#  The value shall be set to:
#  - 0 `unavailable`                    - in case further detailed information on slow vehicle driving event is
#                                         unavailable,
#  - 1 `maintenanceVehicle`             - in case of a slow driving maintenance vehicle on the road,
#  - 2 `vehiclesSlowingToLookAtAccident`- in case vehicle is temporally slowing down to look at accident, spot, etc.,
#  - 3 `abnormalLoad`                   - in case an abnormal loaded vehicle is driving slowly on the road,
#  - 4 `abnormalWideLoad`               - in case an abnormal wide load vehicle is driving slowly on the road,
#  - 5 `convoy`                         - in case of slow driving convoy on the road,
#  - 6 `snowplough`                     - in case of slow driving snow plough on the road,
#  - 7 `deicing`                        - in case of slow driving de-icing vehicle on the road,
#  - 8 `saltingVehicles`                - in case of slow driving salting vehicle on the road.
#  - 9-255                              - are reserved for future usage.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), maintenanceVehicle(1), vehiclesSlowingToLookAtAccident(2), abnormalLoad(3), abnormalWideLoad(4), convoy(5), snowplough(6), deicing(7), saltingVehicles(8) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of SlowVehicleSubCauseCode **********
#

uint8           value

uint8           MIN                                    = 0
uint8           MAX                                    = 255
uint8           UNAVAILABLE                            = 0

uint8           V_UNAVAILABLE                          = 0
uint8           V_MAINTENANCE_VEHICLE                  = 1
uint8           V_VEHICLES_SLOWING_TO_LOOK_AT_ACCIDENT = 2
uint8           V_ABNORMAL_LOAD                        = 3
uint8           V_ABNORMAL_WIDE_LOAD                   = 4
uint8           V_CONVOY                               = 5
uint8           V_SNOWPLOUGH                           = 6
uint8           V_DEICING                              = 7
uint8           V_SALTING_VEHICLES                     = 8

# ********** END of SlowVehicleSubCauseCode   **********
