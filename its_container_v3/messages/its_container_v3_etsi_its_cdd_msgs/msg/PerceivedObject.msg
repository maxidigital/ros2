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
#  This DF contains information about a perceived object including its kinematic state and attitude vector in a pre-defined coordinate system and with respect to a reference time.
# 
#  It shall include the following components:
# 
#  @field objectId: optional identifier assigned to a detected object.
# 
#  @field measurementDeltaTime: the time difference from a reference time to the time of the  measurement of the object.
#  Negative values indicate that the provided object state refers to a point in time before the reference time.
# 
#  @field position: the position of the geometric centre of the object's bounding box within the pre-defined coordinate system.
# 
#  @field velocity: the velocity vector of the object within the pre-defined coordinate system.
# 
#  @field acceleration: the acceleration vector of the object within the pre-defined coordinate system.
# 
#  @field angles: optional Euler angles of the object bounding box at the time of measurement.
# 
#  @field zAngularVelocity: optional angular velocity of the object around the z-axis at the time of measurement.
#  The angular velocity is measured with positive values considering the object orientation turning around the z-axis using the right-hand rule.
# 
#  @field lowerTriangularCorrelationMatrices: optional set of lower triangular correlation matrices for selected components of the provided kinematic state and attitude vector.
# 
#  @field objectDimensionZ: optional z-dimension of object bounding box.
#  This dimension shall be measured along the direction of the z-axis after all the rotations have been applied.
# 
#  @field objectDimensionY: optional y-dimension of the object bounding box.
#  This dimension shall be measured along the direction of the y-axis after all the rotations have been applied.
# 
#  @field objectDimensionX: optional x-dimension of object bounding box.
#  This dimension shall be measured along the direction of the x-axis after all the rotations have been applied.
# 
#  @field objectAge: optional age of the detected and described object, i.e. the difference in time between the moment
#  it has been first detected and the reference time of the message. Value `1500` indicates that the object has been observed for more than 1.5s.
# 
#  @field objectPerceptionQuality: optional confidence associated to the object.
# 
#  @field sensorIdList: optional list of sensor-IDs which provided the measurement data.
# 
#  @field classification: optional classification of the described object
# 
#  @field matchedPosition: optional map-matched position of an object.
# 
#  @category Sensing information
#  @revision: created in V2.1.1
#   
# ASN.1 Definition:
# SEQUENCE {
#    objectId Identifier2B OPTIONAL,
#    measurementDeltaTime DeltaTimeMilliSecondSigned,
#    position CartesianPosition3dWithConfidence,
#    velocity Velocity3dWithConfidence OPTIONAL,
#    acceleration Acceleration3dWithConfidence OPTIONAL,
#    angles EulerAnglesWithConfidence OPTIONAL,
#    zAngularVelocity CartesianAngularVelocityComponent OPTIONAL,
#    lowerTriangularCorrelationMatrices LowerTriangularPositiveSemidefiniteMatrices OPTIONAL,
#    objectDimensionZ ObjectDimension OPTIONAL,
#    objectDimensionY ObjectDimension OPTIONAL,
#    objectDimensionX ObjectDimension OPTIONAL,
#    objectAge DeltaTimeMilliSecondSigned(0..2047) OPTIONAL,
#    objectPerceptionQuality ObjectPerceptionQuality OPTIONAL,
#    sensorIdList SequenceOfIdentifier1B OPTIONAL,
#    classification ObjectClassDescription OPTIONAL,
#    mapPosition MapPosition OPTIONAL,
#    ... 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of PerceivedObject **********
#

Identifier2B[]                                       object_id                             # optional identifier assigned to a detected object.
                                                                                           # OPTIONAL
DeltaTimeMilliSecondSigned                           measurement_delta_time                # the time difference from a reference time to the time of the  measurement of the object.
CartesianPosition3dWithConfidence                    position                              # the position of the geometric centre of the object's bounding box within the pre-defined coordinate system.
Velocity3dWithConfidence[]                           velocity                              # the velocity vector of the object within the pre-defined coordinate system.
                                                                                           # OPTIONAL
Acceleration3dWithConfidence[]                       acceleration                          # the acceleration vector of the object within the pre-defined coordinate system.
                                                                                           # OPTIONAL
EulerAnglesWithConfidence[]                          angles                                # optional Euler angles of the object bounding box at the time of measurement.
                                                                                           # OPTIONAL
CartesianAngularVelocityComponent[]                  z_angular_velocity                    # optional angular velocity of the object around the z-axis at the time of measurement.
                                                                                           # OPTIONAL
LowerTriangularPositiveSemidefiniteMatrices[]        lower_triangular_correlation_matrices # optional set of lower triangular correlation matrices for selected components of the provided kinematic state and attitude vector.
                                                                                           # OPTIONAL
ObjectDimension[]                                    object_dimension_z                    # optional z-dimension of object bounding box.
                                                                                           # OPTIONAL
ObjectDimension[]                                    object_dimension_y                    # optional y-dimension of the object bounding box.
                                                                                           # OPTIONAL
ObjectDimension[]                                    object_dimension_x                    # optional x-dimension of object bounding box.
                                                                                           # OPTIONAL
PerceivedObjectDeltaTimeMilliSecondSignedObjectAge[] object_age                            # optional age of the detected and described object, i.e. the difference in time between the moment
                                                                                           # OPTIONAL
ObjectPerceptionQuality[]                            object_perception_quality             # optional confidence associated to the object.
                                                                                           # OPTIONAL
SequenceOfIdentifier1B[]                             sensor_id_list                        # optional list of sensor-IDs which provided the measurement data.
                                                                                           # OPTIONAL
ObjectClassDescription[]                             classification                        # optional classification of the described object
                                                                                           # OPTIONAL
MapPosition[]                                        map_position                          # OPTIONAL

# ********** END of PerceivedObject   **********
