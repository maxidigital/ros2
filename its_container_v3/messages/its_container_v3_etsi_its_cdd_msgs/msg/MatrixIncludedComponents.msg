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
#  This DE indicates the components of an @ref PerceivedObject that are included in the @ref LowerTriangularPositiveSemidefiniteMatrix.
# 
#  The corresponding bit shall be set to 1 if the component is included:
#  - 0 - `xCoordinate`                   - when the component xCoordinate of the component @ref CartesianPosition3dWithConfidence is included,
#  - 1 - `yCoordinate`                   - when the component yCoordinate of the component @ref CartesianPosition3dWithConfidence is included,
#  - 2 - `zCoordinate`                   - when the component zCoordinate of the component @ref CartesianPosition3dWithConfidence is included,
#  - 3 - `xVelocityOrVelocityMagnitude`  - when the component xVelocity of the component @ref VelocityCartesian or the component VelocityMagnitude of the component @ref VelocityPolarWithZ is included,
#  - 4 - `yVelocityOrVelocityDirection`  - when the component yVelocity of the component @ref VelocityCartesian or the component VelocityDirection of the component @ref VelocityPolarWithZ is included,
#  - 5 - `zVelocity`                     - when the component zVelocity of the component @ref VelocityCartesian or of the component @ref VelocityPolarWithZ is included,
#  - 6 - `xAccelOrAccelMagnitude`        - when the component xAcceleration of the component @ref AccelerationCartesian or the component AccelerationMagnitude of the component @ref AccelerationPolarWithZ is included,
#  - 7 - `yAccelOrAccelDirection`        - when the component yAcceleration of the component @ref AccelerationCartesian or the component AccelerationDirection of the component @ref AccelerationPolarWithZ is included,
#  - 8 - `zAcceleration`                 - when the component zAcceleration of the component @ref AccelerationCartesian or of the component @ref AccelerationPolarWithZ is included,
#  - 9 - `zAngle`                        - when the component zAngle is included,
#  - 10 - `yAngle`                       - when the component yAngle is included,
#  - 11 - `xAngle`                       - when the component xAngle is included,
#  - 12 - `zAngularVelocity`             - when the component zAngularVelocity is included.
# 
#  Otherwise, it shall be set to 0.
# 
#  @category: Sensing information
#  @revision: Created in V2.1.1
#   
# ASN.1 Definition:
# BIT STRING { xPosition(0), yPosition(1), zPosition(2), xVelocityOrVelocityMagnitude(3), yVelocityOrVelocityDirection(4), zSpeed(5), xAccelOrAccelMagnitude(6), yAccelOrAccelDirection(7), zAcceleration(8), zAngle(9), yAngle(10), xAngle(11), zAngularVelocity(12) }(SIZE(13,...)) 
# 
# Element type: BIT STRING
#
# ********** START of MatrixIncludedComponents **********
#

bool[]          values

uint8           MIN                              = 13
uint8           MAX                              = 13

uint8           X_POSITION                       = 0
uint8           Y_POSITION                       = 1
uint8           Z_POSITION                       = 2
uint8           X_VELOCITY_OR_VELOCITY_MAGNITUDE = 3
uint8           Y_VELOCITY_OR_VELOCITY_DIRECTION = 4
uint8           Z_SPEED                          = 5
uint8           X_ACCEL_OR_ACCEL_MAGNITUDE       = 6
uint8           Y_ACCEL_OR_ACCEL_DIRECTION       = 7
uint8           Z_ACCELERATION                   = 8
uint8           Z_ANGLE                          = 9
uint8           Y_ANGLE                          = 10
uint8           X_ANGLE                          = 11
uint8           Z_ANGULAR_VELOCITY               = 12

# ********** END of MatrixIncludedComponents   **********
