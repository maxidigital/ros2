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
#  This DF provides the safe distance indication of a traffic participant with other traffic participant(s).
# 
#  It shall include the following components:
# 
#  @field subjectStation: optionally indicates one "other" traffic participant identified by its ITS-S.
# 
#  @field safeDistanceIndicator: indicates whether the distance between the ego ITS-S and the traffic participant(s) is safe.
#  If subjectStation is present then it indicates whether the distance between the ego ITS-S and the traffic participant indicated in the component subjectStation is safe.
# 
#  @field timeToCollision: optionally indicated the time-to-collision calculated as sqrt(LaDi^2 + LoDi^2 + VDi^2/relative speed
#  and represented in  the  nearest 100  ms. This component may be present only if subjectStation is present.
# 
#  @note: the abbreviations used are Lateral Distance (LaD),  Longitudinal Distance (LoD) and Vertical Distance (VD)
#  and their respective  thresholds, Minimum  Safe  Lateral  Distance (MSLaD), Minimum  Safe  Longitudinal Distance  (MSLoD),  and  Minimum  Safe Vertical Distance (MSVD).
# 
#  @category: Traffic information, Kinematic information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    subjectStation StationId OPTIONAL,
#    safeDistanceIndicator SafeDistanceIndicator,
#    timeToCollision DeltaTimeTenthOfSecond OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of SafeDistanceIndication **********
#

StationId[]              subject_station         # optionally indicates one "other" traffic participant identified by its ITS-S.
                                                 # OPTIONAL
SafeDistanceIndicator    safe_distance_indicator # indicates whether the distance between the ego ITS-S and the traffic participant(s) is safe.
DeltaTimeTenthOfSecond[] time_to_collision       # optionally indicated the time-to-collision calculated as sqrt(LaDi^2 + LoDi^2 + VDi^2/relative speed
                                                 # OPTIONAL

# ********** END of SafeDistanceIndication   **********
