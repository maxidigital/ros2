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
#    referencePosition ReferencePosition,
#    referencePositionTime TimestampIts OPTIONAL,
#    referencePositionHeading Heading OPTIONAL,
#    referencePositionSpeed Speed OPTIONAL,
#    parts SEQUENCE(SIZE(1..16,...)) OF GlcPart,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of GeographicLocationContainer **********
#

its_container_v1_its_container_msgs/ReferencePosition reference_position
its_container_v1_its_container_msgs/TimestampIts[]    reference_position_time    # OPTIONAL
its_container_v1_its_container_msgs/Heading[]         reference_position_heading # OPTIONAL
its_container_v1_its_container_msgs/Speed[]           reference_position_speed   # OPTIONAL
GeographicLocationContainerParts                      parts

# ********** END of GeographicLocationContainer   **********
