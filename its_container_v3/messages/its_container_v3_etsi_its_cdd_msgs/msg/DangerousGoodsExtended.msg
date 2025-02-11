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
#  This DF provides a description of dangerous goods being carried by a heavy vehicle.
# 
#  It shall include the following components:
# 
#  @field dangerousGoodsType: Type of dangerous goods.
# 
#  @field unNumber: a 4-digit number that identifies the substance of the dangerous goods as specified in
#  United Nations Recommendations on the Transport of Dangerous Goods - Model Regulations [4],
# 
#  @field elevatedTemperature: whether the carried dangerous goods are transported at high temperature.
#  If yes, the value shall be set to TRUE,
# 
#  @field tunnelsRestricted: whether the heavy vehicle carrying dangerous goods is restricted to enter tunnels.
#  If yes, the value shall be set to TRUE,
# 
#  @field limitedQuantity: whether the carried dangerous goods are packed with limited quantity.
#  If yes, the value shall be set to TRUE,
# 
#  @field emergencyActionCode: physical signage placard at the vehicle that carries information on how an emergency
#  service should deal with an incident. This component is optional; it shall be present if the information is available.
# 
#  @field phoneNumber: contact phone number of assistance service in case of incident or accident.
#  This component is optional, it shall be present if the information is available.
# 
#  @field companyName: name of company that manages the transportation of the dangerous goods.
#  This component is optional; it shall be present if the information is available.
# 
#  @category Vehicle information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    dangerousGoodsType DangerousGoodsBasic,
#    unNumber INTEGER(0..9999),
#    elevatedTemperature BOOLEAN,
#    tunnelsRestricted BOOLEAN,
#    limitedQuantity BOOLEAN,
#    emergencyActionCode IA5String(SIZE(1..24)) OPTIONAL,
#    phoneNumber PhoneNumber OPTIONAL,
#    companyName UTF8String(SIZE(1..24)) OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of DangerousGoodsExtended **********
#

DangerousGoodsBasic                         dangerous_goods_type  # Type of dangerous goods.
DangerousGoodsExtendedUnNumber              un_number             # a 4-digit number that identifies the substance of the dangerous goods as specified in
DangerousGoodsExtendedElevatedTemperature   elevated_temperature  # whether the carried dangerous goods are transported at high temperature.
DangerousGoodsExtendedTunnelsRestricted     tunnels_restricted    # whether the heavy vehicle carrying dangerous goods is restricted to enter tunnels.
DangerousGoodsExtendedLimitedQuantity       limited_quantity      # whether the carried dangerous goods are packed with limited quantity.
DangerousGoodsExtendedEmergencyActionCode[] emergency_action_code # physical signage placard at the vehicle that carries information on how an emergency
                                                                  # OPTIONAL
PhoneNumber[]                               phone_number          # contact phone number of assistance service in case of incident or accident.
                                                                  # OPTIONAL
DangerousGoodsExtendedCompanyName[]         company_name          # name of company that manages the transportation of the dangerous goods.
                                                                  # OPTIONAL

# ********** END of DangerousGoodsExtended   **********
