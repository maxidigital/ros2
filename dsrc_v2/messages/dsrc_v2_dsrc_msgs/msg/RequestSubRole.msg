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
# ENUMERATED { requestSubRoleUnKnown(0), requestSubRole1(1), requestSubRole2(2), requestSubRole3(3), requestSubRole4(4), requestSubRole5(5), requestSubRole6(6), requestSubRole7(7), requestSubRole8(8), requestSubRole9(9), requestSubRole10(10), requestSubRole11(11), requestSubRole12(12), requestSubRole13(13), requestSubRole14(14), requestSubRoleReserved(15) } 
# 
# Element type: ENUMERATED
#
# ********** START of RequestSubRole **********
#

int32           value

int32           MIN                         = 0
int32           MAX                         = 15

int32           V_REQUEST_SUB_ROLE_UN_KNOWN = 0
int32           V_REQUEST_SUB_ROLE1         = 1
int32           V_REQUEST_SUB_ROLE2         = 2
int32           V_REQUEST_SUB_ROLE3         = 3
int32           V_REQUEST_SUB_ROLE4         = 4
int32           V_REQUEST_SUB_ROLE5         = 5
int32           V_REQUEST_SUB_ROLE6         = 6
int32           V_REQUEST_SUB_ROLE7         = 7
int32           V_REQUEST_SUB_ROLE8         = 8
int32           V_REQUEST_SUB_ROLE9         = 9
int32           V_REQUEST_SUB_ROLE10        = 10
int32           V_REQUEST_SUB_ROLE11        = 11
int32           V_REQUEST_SUB_ROLE12        = 12
int32           V_REQUEST_SUB_ROLE13        = 13
int32           V_REQUEST_SUB_ROLE14        = 14
int32           V_REQUEST_SUB_ROLE_RESERVED = 15

# ********** END of RequestSubRole   **********
