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
#  This DF defines a geographical point position as a 3 dimensional offset position to a geographical reference point.
# 
#  It shall include the following components:
# 
#  @field deltaLatitude: A delta latitude offset with regards to the latitude value of the reference position.
# 
#  @field deltaLongitude: A delta longitude offset with regards to the longitude value of the reference position.
# 
#  @field deltaAltitude: A delta altitude offset with regards to the altitude value of the reference position.
# 
#  @category: GeoReference information
#  @revision:  V1.3.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    deltaLatitude DeltaLatitude,
#    deltaLongitude DeltaLongitude,
#    deltaAltitude DeltaAltitude 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of DeltaReferencePosition **********
#

DeltaLatitude   delta_latitude  # A delta latitude offset with regards to the latitude value of the reference position.
DeltaLongitude  delta_longitude # A delta longitude offset with regards to the longitude value of the reference position.
DeltaAltitude   delta_altitude  # A delta altitude offset with regards to the altitude value of the reference position.

# ********** END of DeltaReferencePosition   **********
