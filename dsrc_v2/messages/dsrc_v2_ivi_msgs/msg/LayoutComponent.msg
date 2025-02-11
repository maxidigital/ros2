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
#    layoutComponentId INTEGER(1..8,...),
#    height INTEGER(10..73),
#    width INTEGER(10..265),
#    x INTEGER(10..265),
#    y INTEGER(10..73),
#    textScripting INTEGER {
#    horizontal(0),
#    vertical(1) 
# }(0..1) 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of LayoutComponent **********
#

LayoutComponentLayoutComponentId layout_component_id
LayoutComponentHeight            height
LayoutComponentWidth             width
LayoutComponentX                 x
LayoutComponentY                 y
LayoutComponentTextScripting     text_scripting

# ********** END of LayoutComponent   **********
