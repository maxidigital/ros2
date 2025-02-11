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
#  This DF indicates the horizontal position confidence ellipse which represents the estimated accuracy with a
#  confidence level of 95 %. The centre of the ellipse shape corresponds to the reference
#  position point for which the position accuracy is evaluated.
# 
#  It shall include the following components:
# 
#  @field semiMajorAxisLength: half of length of the major axis, i.e. distance between the centre point
#  and major axis point of the position accuracy ellipse.
# 
#  @field semiMinorAxisLength: half of length of the minor axis, i.e. distance between the centre point
#  and minor axis point of the position accuracy ellipse.
# 
#  @field semiMajorAxisOrientation: orientation direction of the ellipse major axis of the position accuracy
#  ellipse with regards to the WGS84 north.
#  The specific WGS84 coordinate system is specified by the corresponding standards applying this DE.
# 
#  @category GeoReference information
#  @revision: created in V2.1.1 based on @ref PosConfidenceEllipse
#   
# ASN.1 Definition:
# SEQUENCE {
#    semiMajorAxisLength SemiAxisLength,
#    semiMinorAxisLength SemiAxisLength,
#    semiMajorAxisOrientation Wgs84AngleValue 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PositionConfidenceEllipse **********
#

SemiAxisLength  semi_major_axis_length      # half of length of the major axis, i.e. distance between the centre point
SemiAxisLength  semi_minor_axis_length      # half of length of the minor axis, i.e. distance between the centre point
Wgs84AngleValue semi_major_axis_orientation # orientation direction of the ellipse major axis of the position accuracy

# ********** END of PositionConfidenceEllipse   **********
