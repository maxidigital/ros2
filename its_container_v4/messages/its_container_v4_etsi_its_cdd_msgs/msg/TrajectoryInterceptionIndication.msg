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
#  This DF  provides the trajectory  interception  indication  of  ego-VRU  ITS-S  with another ITS-Ss.
# 
#  It shall include the following components:
# 
#  @field subjectStation: indicates the subject station.
# 
#  @field trajectoryInterceptionProbability: indicates the propbability of the interception of the subject station trajectory
#  with the trajectory of the station indicated in the component subjectStation.
# 
#  @field trajectoryInterceptionConfidence: indicates the confidence of interception of the subject station trajectory
#  with the trajectory of the station indicated in the component subjectStation.
# 
#  @category: Vehicle information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    subjectStation StationId OPTIONAL,
#    trajectoryInterceptionProbability TrajectoryInterceptionProbability,
#    trajectoryInterceptionConfidence TrajectoryInterceptionConfidence OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of TrajectoryInterceptionIndication **********
#

StationId[]                        subject_station                     # indicates the subject station.
                                                                       # OPTIONAL
TrajectoryInterceptionProbability  trajectory_interception_probability # indicates the propbability of the interception of the subject station trajectory
TrajectoryInterceptionConfidence[] trajectory_interception_confidence  # indicates the confidence of interception of the subject station trajectory
                                                                       # OPTIONAL

# ********** END of TrajectoryInterceptionIndication   **********
