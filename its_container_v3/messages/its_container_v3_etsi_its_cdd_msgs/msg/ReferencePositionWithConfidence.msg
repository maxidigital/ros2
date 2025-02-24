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
#  A position within a geographic coordinate system together with a confidence ellipse.
# 
#  It shall include the following components:
# 
#  @field latitude: the latitude of the geographical point.
# 
#  @field longitude: the longitude of the geographical point.
# 
#  @field positionConfidenceEllipse: the confidence ellipse associated to the geographical position.
# 
#  @field altitude: the altitude and an altitude accuracy of the geographical point.
# 
#  @category: GeoReference information
#  @revision: created in V2.1.1 based on @ref ReferencePosition but using @ref PositionConfidenceEllipse.
#   
# ASN.1 Definition:
# SEQUENCE {
#    latitude Latitude,
#    longitude Longitude,
#    positionConfidenceEllipse PositionConfidenceEllipse,
#    altitude Altitude 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of ReferencePositionWithConfidence **********
#

Latitude                  latitude                    # the latitude of the geographical point.
Longitude                 longitude                   # the longitude of the geographical point.
PositionConfidenceEllipse position_confidence_ellipse # the confidence ellipse associated to the geographical position.
Altitude                  altitude                    # the altitude and an altitude accuracy of the geographical point.

# ********** END of ReferencePositionWithConfidence   **********
