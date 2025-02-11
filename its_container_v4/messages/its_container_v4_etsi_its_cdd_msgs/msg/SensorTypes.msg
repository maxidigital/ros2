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
#  This DE indicates the type of sensor(s).
#  The corresponding bit shall be set to 1 under the following conditions:
# 
#  - 0  `undefined`         - in case the sensor type is undefined.
#  - 1  `radar`             - in case the sensor is a radar,
#  - 2  `lidar`             - in case the sensor is a lidar,
#  - 3  `monovideo`         - in case the sensor is mono video,
#  - 4  `stereovision`      - in case the sensor is stereo vision,
#  - 5  `nightvision`       - in case the sensor is night vision,
#  - 6  `ultrasonic`        - in case the sensor is ultrasonic,
#  - 7  `pmd`               - in case the sensor is photonic mixing device,
#  - 8  `inductionLoop`     - in case the sensor is an induction loop,
#  - 9  `sphericalCamera`   - in case the sensor is a spherical camera,
#  - 10 `uwb`               - in case the sensor is ultra wide band,
#  - 11 `acoustic`          - in case the sensor is acoustic,
#  - 12 `localAggregation`  - in case the information is provided by a system that aggregates information from different local sensors. Aggregation may include fusion,
#  - 13 `itsAggregation`    - in case the information is provided by a system that aggregates information from other received ITS messages.
#  - 14-15                  - are reserved for future usage.
# 
#  @note: If all bits are set to 0, then no sensor type is used
# 
#  @category: Sensing Information
#  @revision: created in V2.2.1
#   
# ASN.1 Definition:
# BIT STRING { undefined(0), radar(1), lidar(2), monovideo(3), stereovision(4), nightvision(5), ultrasonic(6), pmd(7), fusion(8), inductionloop(9), sphericalCamera(10), itssaggregation(11), uwb(12) }(SIZE(16,... )) 
# 
# Element type: BIT STRING
#
# ********** START of SensorTypes **********
#

bool[]          values

uint8           MIN              = 16
uint8           MAX              = 16

uint8           UNDEFINED        = 0
uint8           RADAR            = 1
uint8           LIDAR            = 2
uint8           MONOVIDEO        = 3
uint8           STEREOVISION     = 4
uint8           NIGHTVISION      = 5
uint8           ULTRASONIC       = 6
uint8           PMD              = 7
uint8           FUSION           = 8
uint8           INDUCTIONLOOP    = 9
uint8           SPHERICAL_CAMERA = 10
uint8           ITSSAGGREGATION  = 11
uint8           UWB              = 12

# ********** END of SensorTypes   **********
