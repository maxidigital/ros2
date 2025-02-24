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
#  This DE indicates if a distance is safe.
# 
#  The value shall be set to:
#  -  `FALSE`  if  the triple  {LaD,  LoD, VD} < {MSLaD, MSLoD, MSVD} is simultaneously  satisfied with confidence level of  90 % or  more,
#  -  `TRUE` otherwise.
# 
#  @note: the abbreviations used are Lateral Distance (LaD),  Longitudinal Distance (LoD) and Vertical Distance (VD)
#  and their respective  thresholds, Minimum  Safe  Lateral  Distance (MSLaD), Minimum  Safe  Longitudinal Distance  (MSLoD),  and  Minimum  Safe Vertical Distance (MSVD).
# 
#  @category: Traffic information, Kinematic information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# BOOLEAN 
# 
# Element type: BOOLEAN
#
# ********** START of SafeDistanceIndicator **********
#

bool            value

bool            DEFAULT         = False

# ********** END of SafeDistanceIndicator   **********
