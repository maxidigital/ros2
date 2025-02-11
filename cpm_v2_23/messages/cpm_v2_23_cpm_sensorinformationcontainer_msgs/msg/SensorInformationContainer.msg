#*                                                                                                   *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                                   *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                                     *
#*                                                                                                   *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                          *
#*                                                                                                   *
#* This program and the accompanying materials are made available under the                          *
#* terms of the Eclipse Public License 2.0 which is available at                                     *
#* http://www.eclipse.org/legal/epl-2.0.                                                             *
#*                                                                                                   *
#* SPDX-License-Identifier: EPL-2.0                                                                  *
#*                                                                                                   *
#*                                                                                                   *
#* File automatically generated with DLR Wind v2                                                     *
#*                                                                                                   *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v2_23:1.0                             *
#*                                                                                                   *
#* Module: CPM_SensorInformationContainer {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) sensorInformationContainer(3) major-version-1(1) minor-version-1(1)}        *
#*                                                                                                   *
#* For support contact v2x-ts@dlr.de                                                                 *
#*                                                                                                   *

#
# 
#  This DF  represents the Sensor Information Container as a list of information objects about the sensors or data fusion systems from which the station provides information about detected objects.
#   
# ASN.1 Definition:
# SEQUENCE SIZE(1..128, ...) OF SensorInformation
# 
# Element type: SEQUENCE OF
#
# ********** START of SensorInformationContainer **********
#

SensorInformation[] elements        # Range(1, 128)

uint8               MIN             = 1
uint8               MAX             = 128

# ********** END of SensorInformationContainer   **********
