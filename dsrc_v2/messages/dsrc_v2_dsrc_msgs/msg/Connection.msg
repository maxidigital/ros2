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
# SEQUENCE {
#    connectingLane ConnectingLane,
#    remoteIntersection IntersectionReferenceID OPTIONAL,
#    signalGroup SignalGroupID OPTIONAL,
#    userClass RestrictionClassID OPTIONAL,
#    connectionID LaneConnectionID OPTIONAL 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of Connection **********
#

ConnectingLane            connecting_lane
IntersectionReferenceID[] remote_intersection # OPTIONAL
SignalGroupID[]           signal_group        # OPTIONAL
RestrictionClassID[]      user_class          # OPTIONAL
LaneConnectionID[]        connection_id       # OPTIONAL

# ********** END of Connection   **********
