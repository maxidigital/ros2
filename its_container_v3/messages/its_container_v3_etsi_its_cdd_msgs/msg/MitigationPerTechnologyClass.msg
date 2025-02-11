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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x:its_container_v3:2.0    *
#*                                                                                 *
#* Module: ETSI_ITS_CDD {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) ts(102894) cdd(2) major-version-3(3) minor-version-1(1)}             *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# 
#  This DF represents a set of mitigation parameters for a specific technology, as specified in ETSI TS 103 724 [24], clause 7.
# 
#  It shall include the following components:
# 
#  @field accessTechnologyClass:  channel access technology to which this mitigation is intended to be applied.
# 
#  @field lowDutyCycle: duty cycle limit.
#  @unit: 0,01 % steps
# 
#  @field powerReduction: the delta value of power to be reduced.
#  @unit: dB
# 
#  @field dmcToffLimit: idle time limit as defined in ETSI TS 103 175 [19].
#  @unit: ms
# 
#  @field dmcTonLimit: Transmission duration limit, as defined in ETSI EN 302 571 [20].
#  @unit: ms
# 
#  @note: All parameters are optional, as they may not apply to some of the technologies or
#  interference management zone types. Specification details are in ETSI TS 103 724 [24], clause 7.
# 
#  @category: Communication information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    accessTechnologyClass AccessTechnologyClass,
#    lowDutyCycle INTEGER(0 .. 10000) OPTIONAL,
#    powerReduction INTEGER(0 .. 30) OPTIONAL,
#    dmcToffLimit INTEGER(0 .. 1200) OPTIONAL,
#    dmcTonLimit INTEGER(0 .. 20) OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of MitigationPerTechnologyClass **********
#

AccessTechnologyClass                        access_technology_class # channel access technology to which this mitigation is intended to be applied.
MitigationPerTechnologyClassLowDutyCycle[]   low_duty_cycle          # duty cycle limit.
                                                                     # OPTIONAL
MitigationPerTechnologyClassPowerReduction[] power_reduction         # the delta value of power to be reduced.
                                                                     # OPTIONAL
MitigationPerTechnologyClassDmcToffLimit[]   dmc_toff_limit          # idle time limit as defined in ETSI TS 103 175 [19].
                                                                     # OPTIONAL
MitigationPerTechnologyClassDmcTonLimit[]    dmc_ton_limit           # Transmission duration limit, as defined in ETSI EN 302 571 [20].
                                                                     # OPTIONAL

# ********** END of MitigationPerTechnologyClass   **********
