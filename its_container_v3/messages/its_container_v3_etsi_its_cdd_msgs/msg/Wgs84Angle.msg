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
#  This DF represents an angular component along with a confidence value in the WGS84 coordinate system.
#  The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
# 
#  It shall include the following components:
# 
#  @field value: the angle value, which can be estimated as the mean of the current distribution.
# 
#  @field confidence: the confidence value associated to the angle value.
# 
#  @category: GeoReference information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    value Wgs84AngleValue,
#    confidence Wgs84AngleConfidence 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of Wgs84Angle **********
#

Wgs84AngleValue      value           # the angle value, which can be estimated as the mean of the current distribution.
Wgs84AngleConfidence confidence      # the confidence value associated to the angle value.

# ********** END of Wgs84Angle   **********
