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
#  This DF represents the Heading in a WGS84 co-ordinates system.
#  The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
# 
#  It shall include the following components:
# 
#  @field headingValue: the heading value.
# 
#  @field headingConfidence: the confidence value of the heading value with a predefined confidence level.
# 
#  @note: this DF is kept for backwards compatibility reasons only. It is recommended to use the @ref Wgs84Angle instead.
#  @category: Kinematic Information
#  @revision: Description revised in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    headingValue HeadingValue,
#    headingConfidence HeadingConfidence 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of Heading **********
#

HeadingValue      heading_value      # the heading value.
HeadingConfidence heading_confidence # the confidence value of the heading value with a predefined confidence level.

# ********** END of Heading   **********
