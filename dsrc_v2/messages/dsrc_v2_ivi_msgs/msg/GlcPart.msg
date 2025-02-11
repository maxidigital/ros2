#*                                                                          *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)          *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)            *
#*                                                                          *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore *
#*                                                                          *
#* This program and the accompanying materials are made available under the *
#* terms of the Eclipse Public License 2.0 which is available at            *
#* http://www.eclipse.org/legal/epl-2.0.                                    *
#*                                                                          *
#* SPDX-License-Identifier: EPL-2.0                                         *
#*                                                                          *
#*                                                                          *
#* File automatically generated with DLR Wind v2                            *
#*                                                                          *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0      *
#*                                                                          *
#* Module: IVI {iso(1) standard(0) ivi(19321) version1(1)}                  *
#*                                                                          *
#* For support contact v2x-ts@dlr.de                                        *
#*                                                                          *

#
# ASN.1 Definition:
# SEQUENCE {
#    zoneId Zid,
#    laneNumber LanePosition OPTIONAL,
#    zoneExtension INTEGER(0..255) OPTIONAL,
#    zoneHeading HeadingValue OPTIONAL,
#    zone Zone OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of GlcPart **********
#

Zid                                                zone_id
its_container_v1_its_container_msgs/LanePosition[] lane_number     # OPTIONAL
GlcPartZoneExtension[]                             zone_extension  # OPTIONAL
its_container_v1_its_container_msgs/HeadingValue[] zone_heading    # OPTIONAL
Zone[]                                             zone            # OPTIONAL

# ********** END of GlcPart   **********
