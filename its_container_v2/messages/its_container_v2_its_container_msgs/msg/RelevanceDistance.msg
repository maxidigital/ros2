#*                                                                                  *
#* Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)                  *
#* Institute of Transportation Systems. (https://www.dlr.de/ts/)                    *
#*                                                                                  *
#* Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore         *
#*                                                                                  *
#* This program and the accompanying materials are made available under the         *
#* terms of the Eclipse Public License 2.0 which is available at                    *
#* http://www.eclipse.org/legal/epl-2.0.                                            *
#*                                                                                  *
#* SPDX-License-Identifier: EPL-2.0                                                 *
#*                                                                                  *
#*                                                                                  *
#* File automatically generated with DLR Wind v2                                    *
#*                                                                                  *
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v2:4.0     *
#*                                                                                  *
#* Module: ITS_Container {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) version(2)}                                         *
#*                                                                                  *
#* For support contact v2x-ts@dlr.de                                                *
#*                                                                                  *

#
# ASN.1 Definition:
# ENUMERATED { lessThan50m(0), lessThan100m(1), lessThan200m(2), lessThan500m(3), lessThan1000m(4), lessThan5km(5), lessThan10km(6), over10km(7) } 
# 
# Element type: ENUMERATED
#
# ********** START of RelevanceDistance **********
#

int32           value

int32           MIN              = 0
int32           MAX              = 7

int32           V_LESS_THAN50M   = 0
int32           V_LESS_THAN100M  = 1
int32           V_LESS_THAN200M  = 2
int32           V_LESS_THAN500M  = 3
int32           V_LESS_THAN1000M = 4
int32           V_LESS_THAN5KM   = 5
int32           V_LESS_THAN10KM  = 6
int32           V_OVER10KM       = 7

# ********** END of RelevanceDistance   **********
