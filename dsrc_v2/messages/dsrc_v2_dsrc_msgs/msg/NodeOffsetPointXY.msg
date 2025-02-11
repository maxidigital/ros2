#*                                                                             *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)             *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)               *
#*                                                                             *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore    *
#*                                                                             *
#* This program and the accompanying materials are made available under the    *
#* terms of the Eclipse Public License 2.0 which is available at               *
#* http://www.eclipse.org/legal/epl-2.0.                                       *
#*                                                                             *
#* SPDX-License-Identifier: EPL-2.0                                            *
#*                                                                             *
#*                                                                             *
#* File automatically generated with DLR Wind v2                               *
#*                                                                             *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0         *
#*                                                                             *
#* Module: DSRC {iso(1) standard(0) signalizedIntersection(19091) profilec(2)  *
#*     dsrc(2) version2(2)}                                                    *
#*                                                                             *
#* For support contact v2x-ts@dlr.de                                           *
#*                                                                             *

#
# ASN.1 Definition:
# CHOICE {
#    node_XY1 Node_XY_20b,
#    node_XY2 Node_XY_22b,
#    node_XY3 Node_XY_24b,
#    node_XY4 Node_XY_26b,
#    node_XY5 Node_XY_28b,
#    node_XY6 Node_XY_32b,
#    node_LatLon Node_LLmD_64b,
#    regional RegionalExtension AVOID 
# } 
# 
# Element type: CHOICE
#
# ********** START of NodeOffsetPointXY **********
#

NodeXY20b[]         node_xy1        #  choice = 0
NodeXY22b[]         node_xy2        #  choice = 1
NodeXY24b[]         node_xy3        #  choice = 2
NodeXY26b[]         node_xy4        #  choice = 3
NodeXY28b[]         node_xy5        #  choice = 4
NodeXY32b[]         node_xy6        #  choice = 5
NodeLLmD64b[]       node_lat_lon    #  choice = 6
RegionalExtension[] regional        #  choice = 7

uint8               LENGTH          = 8

# ********** END of NodeOffsetPointXY   **********
