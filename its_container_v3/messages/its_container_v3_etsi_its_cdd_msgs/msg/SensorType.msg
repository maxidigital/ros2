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
#  This DE indicates the type of sensor.
# 
#  The value shall be set to:
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
#  - 14-31                  - are reserved for future usage.
# 
#  @category: Sensing Information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { undefined(0), radar(1), lidar(2), monovideo(3), stereovision(4), nightvision(5), ultrasonic(6), pmd(7), inductionLoop(8), sphericalCamera(9), uwb(10), acoustic(11), localAggregation(12), itsAggregation(13) }(0..31) 
# 
# Element type: INTEGER
#
# ********** START of SensorType **********
#

uint8           value

uint8           MIN                 = 0
uint8           MAX                 = 31

uint8           V_UNDEFINED         = 0
uint8           V_RADAR             = 1
uint8           V_LIDAR             = 2
uint8           V_MONOVIDEO         = 3
uint8           V_STEREOVISION      = 4
uint8           V_NIGHTVISION       = 5
uint8           V_ULTRASONIC        = 6
uint8           V_PMD               = 7
uint8           V_INDUCTION_LOOP    = 8
uint8           V_SPHERICAL_CAMERA  = 9
uint8           V_UWB               = 10
uint8           V_ACOUSTIC          = 11
uint8           V_LOCAL_AGGREGATION = 12
uint8           V_ITS_AGGREGATION   = 13

# ********** END of SensorType   **********
