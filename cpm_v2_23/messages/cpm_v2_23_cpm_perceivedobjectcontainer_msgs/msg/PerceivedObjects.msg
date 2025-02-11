#*                                                                                                 *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                                 *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                                   *
#*                                                                                                 *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore                        *
#*                                                                                                 *
#* This program and the accompanying materials are made available under the                        *
#* terms of the Eclipse Public License 2.0 which is available at                                   *
#* http://www.eclipse.org/legal/epl-2.0.                                                           *
#*                                                                                                 *
#* SPDX-License-Identifier: EPL-2.0                                                                *
#*                                                                                                 *
#*                                                                                                 *
#* File automatically generated with DLR Wind v2                                                   *
#*                                                                                                 *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v2_23:1.0                           *
#*                                                                                                 *
#* Module: CPM_PerceivedObjectContainer {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(103324) perceivedObjectContainer(4) major-version-1(1) minor-version-1(1)}        *
#*                                                                                                 *
#* For support contact v2x-ts@dlr.de                                                               *
#*                                                                                                 *

#
#  @brief Perceived Objects
#  This DF provides a list of perceived objects represented in the coordinate system in which the y-axis corresponds to the North direction, the x-axis to the East direction, and the z- axis to the vertical direction.
#   
# ASN.1 Definition:
# SEQUENCE SIZE(0..255, ...) OF PerceivedObject (WITH COMPONENTS{..., objectId PRESENT})
# 
# Element type: SEQUENCE OF
#
# ********** START of PerceivedObjects **********
#

its_container_v3_etsi_its_cdd_msgs/PerceivedObject[] elements        # Range(0, 255)

uint8                                                MIN             = 0
uint8                                                MAX             = 255

# ********** END of PerceivedObjects   **********
