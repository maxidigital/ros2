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
#  This DE represents the sub cause code of the @ref CauseCode  `hazardousLocation-DangerousCurve`.
# 
#  The value shall be set to:
#  - 0 - `unavailable`                                        - in case further detailed information on the dangerous curve is unavailable,
#  - 1 - `dangerousLeftTurnCurve`                             - in case the dangerous curve is a left turn curve,
#  - 2 - `dangerousRightTurnCurve`                            - in case the dangerous curve is a right turn curve,
#  - 3 - `multipleCurvesStartingWithUnknownTurningDirection`  - in case of multiple curves for which the starting curve turning direction is not known,
#  - 4 - `multipleCurvesStartingWithLeftTurn`                 - in case of multiple curves starting with a left turn curve,
#  - 5 - `multipleCurvesStartingWithRightTurn`                - in case of multiple curves starting with a right turn curve.
#  - 6-255                                                    - are reserved for future usage.
# 
#  The definition of whether a curve is dangerous may vary according to region and according to vehicle types/mass
#  and vehicle speed driving on the curve. This definition is out of scope of the present document.
# 
#  @category: Traffic information
#  @revision: V1.3.1
#   
# ASN.1 Definition:
# INTEGER { unavailable(0), dangerousLeftTurnCurve(1), dangerousRightTurnCurve(2), multipleCurvesStartingWithUnknownTurningDirection(3), multipleCurvesStartingWithLeftTurn(4), multipleCurvesStartingWithRightTurn(5) }(0..255) 
# 
# Element type: INTEGER
#
# ********** START of HazardousLocationDangerousCurveSubCauseCode **********
#

uint8           value

uint8           MIN                                                       = 0
uint8           MAX                                                       = 255
uint8           UNAVAILABLE                                               = 0

uint8           V_UNAVAILABLE                                             = 0
uint8           V_DANGEROUS_LEFT_TURN_CURVE                               = 1
uint8           V_DANGEROUS_RIGHT_TURN_CURVE                              = 2
uint8           V_MULTIPLE_CURVES_STARTING_WITH_UNKNOWN_TURNING_DIRECTION = 3
uint8           V_MULTIPLE_CURVES_STARTING_WITH_LEFT_TURN                 = 4
uint8           V_MULTIPLE_CURVES_STARTING_WITH_RIGHT_TURN                = 5

# ********** END of HazardousLocationDangerousCurveSubCauseCode   **********
