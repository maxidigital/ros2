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
#  This DE indicates the face or part of a face of a solid object.
# 
#  The object is modelled  as a rectangular prism that has a length that is greater than its width, with the faces of the object being defined as:
#  - front: the face defined by the prism's width and height, and which is the first face in direction of longitudinal movement of the object,
#  - back: the face defined by the prism's width and height, and which is the last face in direction of longitudinal movement of the object,
#  - side: the faces defined by the prism's length and height with "left" and "right" defined by looking at the front face and "front" and "back" defined w.r.t to the front and back faces.
# 
#  Note: It is permissible to derive the required object dimensions and orientation from models to provide a best guess.
# 
#  @category: Basic information
#  @revision: V2.1.1
#   
# ASN.1 Definition:
# ENUMERATED { front(0), sideLeftFront(1), sideLeftBack(2), sideRightFront(3), sideRightBack(4), back(5) } 
# 
# Element type: ENUMERATED
#
# ********** START of ObjectFace **********
#

int32           value

int32           MIN                = 0
int32           MAX                = 5

int32           V_FRONT            = 0
int32           V_SIDE_LEFT_FRONT  = 1
int32           V_SIDE_LEFT_BACK   = 2
int32           V_SIDE_RIGHT_FRONT = 3
int32           V_SIDE_RIGHT_BACK  = 4
int32           V_BACK             = 5

# ********** END of ObjectFace   **********
