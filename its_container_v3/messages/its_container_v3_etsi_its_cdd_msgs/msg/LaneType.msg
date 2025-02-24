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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:3.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DE represents the type of a lane.
# 
#  The value shall be set to:
#  - 0	- `traffic`            - Lane dedicated to the movement of vehicles,
#  - 1	- `through`            - Lane dedicated to the movement of vehicles travelling ahead and not turning,
#  - 2	- `reversible`         - Lane where the direction of traffic can be changed to match the peak flow,
#  - 3	- `acceleration`	   - Lane that allows vehicles entering a road to accelerate to the speed of through traffic before merging with it,
#  - 4	- `deceleration`       - Lane that allows vehicles exiting a road to decelerate before leaving it,
#  - 5	- `leftHandTurning`    - Lane reserved for slowing down and making a left turn, so as not to disrupt traffic,
#  - 6	- `rightHandTurning`   - Lane reserved for slowing down and making a right turn so as not to disrupt traffic,
#  - 7	- `dedicatedVehicle`   - Lane dedicated to movement of motor vehicles with specific characteristics, such as heavy goods vehicles, etc.,
#  - 8	- `bus`                - Lane dedicated to movement of buses providing public transport,
#  - 9	- `taxi`               - Lane dedicated to movement of taxis,
#  - 10	- `hov`                - Carpooling lane or high occupancy vehicle lane,
#  - 11	- `hot`                - High occupancy vehicle lanes that is allowed to be used without meeting the occupancy criteria by paying a toll,
#  - 12	- `pedestrian`         - Lanes dedicated to pedestrians such as pedestrian sidewalk paths,
#  - 13	- `cycleLane`	       - Lane dedicated to exclusive or preferred use by bicycles,
#  - 14	- `median`             - Lane not dedicated to movement of vehicles but representing a median / central reservation  such as the central median,
#                                  separating the two directional carriageways of the highway,
#  - 15	- `striping`	       - Lane not dedicated to movement of vehicles but covered with roadway markings,
#  - 16	- `trackedVehicle`     - Lane dedicated to movement of trains, trams and trolleys,
#  - 17	- `parking`            - Lanes dedicated to vehicles parking, stopping and loading lanes,
#  - 18	- `emergency`          - Lane dedicated to vehicles in breakdown or to emergency vehicles also called hard shoulder,
#  - 19	- `verge`              - Lane representing the verge, i.e. a narrow strip of grass or plants and sometimes also trees located between
#                                  the road surface edge and the boundary of a road,
#  - 20	`minimumRiskManoeuvre` - Lane dedicated to automated vehicles making a minimum risk manoeuvre.
#  - values 21 to 30             reserved for future use.
# 
#  @category: Road topology information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { traffic(0), through(1), reversible(2), acceleration(3), deceleration(4), leftHandTurning(5), rightHandTurning(6), dedicatedVehicle(7), bus(8), taxi(9), hov(10), hot(11), pedestrian(12), cycleLane(13), median(14), striping(15), trackedVehicle(16), parking(17), emergency(18), verge(19), minimumRiskManoeuvre(20), unknown(31) }(0..31) 
# 
# Element type: INTEGER
#
# ********** START of LaneType **********
#

uint8           value

uint8           MIN                      = 0
uint8           MAX                      = 31

uint8           V_TRAFFIC                = 0
uint8           V_THROUGH                = 1
uint8           V_REVERSIBLE             = 2
uint8           V_ACCELERATION           = 3
uint8           V_DECELERATION           = 4
uint8           V_LEFT_HAND_TURNING      = 5
uint8           V_RIGHT_HAND_TURNING     = 6
uint8           V_DEDICATED_VEHICLE      = 7
uint8           V_BUS                    = 8
uint8           V_TAXI                   = 9
uint8           V_HOV                    = 10
uint8           V_HOT                    = 11
uint8           V_PEDESTRIAN             = 12
uint8           V_CYCLE_LANE             = 13
uint8           V_MEDIAN                 = 14
uint8           V_STRIPING               = 15
uint8           V_TRACKED_VEHICLE        = 16
uint8           V_PARKING                = 17
uint8           V_EMERGENCY              = 18
uint8           V_VERGE                  = 19
uint8           V_MINIMUM_RISK_MANOEUVRE = 20
uint8           V_UNKNOWN                = 31

# ********** END of LaneType   **********
