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
#  This DE indicates the subclass of a detected object for @ref ObjectClass "otherSubclass".
# 
#  The value shall be set to:
#  - `0` - unknown          - if the subclass is unknown.
#  - `1` - singleObject     - if the object is a single object.
#  - `2` - multipleObjects  - if the object is a group of multiple objects.
#  - `3` - bulkMaterial     - if the object is a bulk material.
# 
#  @category: Sensing information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# INTEGER { unknown(0), singleObject(1), multipleObjects(2), bulkMaterial(3) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of OtherSubClass **********
#

uint8           value

uint8           MIN                = 0
uint8           MAX                = 255

uint8           V_UNKNOWN          = 0
uint8           V_SINGLE_OBJECT    = 1
uint8           V_MULTIPLE_OBJECTS = 2
uint8           V_BULK_MATERIAL    = 3

# ********** END of OtherSubClass   **********
