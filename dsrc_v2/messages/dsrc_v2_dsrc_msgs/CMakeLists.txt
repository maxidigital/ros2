#
# Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)
# Institute of Transportation Systems. (https://www.dlr.de/ts/)
#
# 
# Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore
# 
# This program and the accompanying materials are made available under the
# terms of the Eclipse Public License 2.0 which is available at
# http://www.eclipse.org/legal/epl-2.0.
# 
# SPDX-License-Identifier: EPL-2.0
# 
#
# 
# File automatically generated with DLR Wind v2
# 
# This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0
# 
# Module: DSRC {iso(1) standard(0) signalizedIntersection(19091) profilec(2) 
#         dsrc(2) version2(2)}
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(dsrc_v2_dsrc_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs REQUIRED)
find_package(its_container_v2_its_container_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    msg/AdvisorySpeed.msg
    msg/AdvisorySpeedList.msg
    msg/AdvisorySpeedType.msg
    msg/AdvisorySpeedRegional.msg
    msg/AllowedManeuvers.msg
    msg/Angle.msg
    msg/AntennaOffsetSet.msg
    msg/ApproachID.msg
    msg/BasicVehicleRole.msg
    msg/ComputedLane.msg
    msg/ComputedLaneOffsetXaxis.msg
    msg/ComputedLaneOffsetYaxis.msg
    msg/ComputedLaneRegional.msg
    msg/ConnectingLane.msg
    msg/Connection.msg
    msg/ConnectionManeuverAssist.msg
    msg/ConnectionManeuverAssistRegional.msg
    msg/ConnectsToList.msg
    msg/DDateTime.msg
    msg/DDay.msg
    msg/DHour.msg
    msg/DMinute.msg
    msg/DMonth.msg
    msg/DOffset.msg
    msg/DSRCmsgID.msg
    msg/DSecond.msg
    msg/DYear.msg
    msg/DataParameters.msg
    msg/DataParametersGeoidUsed.msg
    msg/DataParametersLastCheckedDate.msg
    msg/DataParametersProcessAgency.msg
    msg/DataParametersProcessMethod.msg
    msg/DeltaAngle.msg
    msg/DeltaTime.msg
    msg/DescriptiveName.msg
    msg/DrivenLineOffsetLg.msg
    msg/DrivenLineOffsetSm.msg
    msg/Elevation.msg
    msg/ElevationConfidence.msg
    msg/EnabledLaneList.msg
    msg/FuelType.msg
    msg/FullPositionVector.msg
    msg/GNSSstatus.msg
    msg/GenericLane.msg
    msg/GenericLaneRegional.msg
    msg/HeadingConfidenceDSRC.msg
    msg/HeadingDSRC.msg
    msg/IntersectionAccessPoint.msg
    msg/IntersectionGeometry.msg
    msg/IntersectionGeometryList.msg
    msg/IntersectionGeometryRegional.msg
    msg/IntersectionID.msg
    msg/IntersectionReferenceID.msg
    msg/IntersectionState.msg
    msg/IntersectionStateList.msg
    msg/IntersectionStateRegional.msg
    msg/IntersectionStatusObject.msg
    msg/LaneAttributes.msg
    msg/LaneAttributesBarrier.msg
    msg/LaneAttributesBike.msg
    msg/LaneAttributesCrosswalk.msg
    msg/LaneAttributesParking.msg
    msg/LaneAttributesSidewalk.msg
    msg/LaneAttributesStriping.msg
    msg/LaneAttributesTrackedVehicle.msg
    msg/LaneAttributesVehicle.msg
    msg/LaneConnectionID.msg
    msg/LaneDataAttribute.msg
    msg/LaneDataAttributeList.msg
    msg/LaneDataAttributeRegional.msg
    msg/LaneDirection.msg
    msg/LaneID.msg
    msg/LaneList.msg
    msg/LaneSharing.msg
    msg/LaneTypeAttributes.msg
    msg/LaneWidth.msg
    msg/LayerID.msg
    msg/LayerType.msg
    msg/ManeuverAssistList.msg
    msg/MapData.msg
    msg/MapDataRegional.msg
    msg/MergeDivergeNodeAngle.msg
    msg/MinuteOfTheYear.msg
    msg/MovementEvent.msg
    msg/MovementEventList.msg
    msg/MovementEventRegional.msg
    msg/MovementList.msg
    msg/MovementPhaseState.msg
    msg/MovementState.msg
    msg/MovementStateRegional.msg
    msg/MsgCount.msg
    msg/NodeAttributeSetXY.msg
    msg/NodeAttributeSetXYRegional.msg
    msg/NodeAttributeXY.msg
    msg/NodeAttributeXYList.msg
    msg/NodeListXY.msg
    msg/NodeOffsetPointXY.msg
    msg/NodeSetXY.msg
    msg/NodeXY.msg
    msg/NodeLLmD64b.msg
    msg/NodeXY20b.msg
    msg/NodeXY22b.msg
    msg/NodeXY24b.msg
    msg/NodeXY26b.msg
    msg/NodeXY28b.msg
    msg/NodeXY32b.msg
    msg/OffsetB09.msg
    msg/OffsetB10.msg
    msg/OffsetB11.msg
    msg/OffsetB12.msg
    msg/OffsetB13.msg
    msg/OffsetB14.msg
    msg/OffsetB16.msg
    msg/OverlayLaneList.msg
    msg/PedestrianBicycleDetect.msg
    msg/Position3D.msg
    msg/Position3DRegional.msg
    msg/PositionConfidence.msg
    msg/PositionConfidenceSet.msg
    msg/PositionalAccuracy.msg
    msg/PreemptPriorityList.msg
    msg/PrioritizationResponseStatus.msg
    msg/PriorityRequestType.msg
    msg/RTCMRevision.msg
    msg/RTCMcorrections.msg
    msg/RTCMcorrectionsRegional.msg
    msg/RTCMheader.msg
    msg/RTCMmessage.msg
    msg/RTCMmessageList.msg
    msg/RegionId.msg
    msg/RegionalExtension.msg
    msg/RegulatorySpeedLimit.msg
    msg/RequestID.msg
    msg/RequestImportanceLevel.msg
    msg/RequestSubRole.msg
    msg/RequestorDescription.msg
    msg/RequestorDescriptionRegional.msg
    msg/RequestorPositionVector.msg
    msg/RequestorType.msg
    msg/RestrictionAppliesTo.msg
    msg/RestrictionClassAssignment.msg
    msg/RestrictionClassID.msg
    msg/RestrictionClassList.msg
    msg/RestrictionUserType.msg
    msg/RestrictionUserTypeList.msg
    msg/RestrictionUserTypeRegional.msg
    msg/RoadLaneSetList.msg
    msg/RoadRegulatorID.msg
    msg/RoadSegment.msg
    msg/RoadSegmentID.msg
    msg/RoadSegmentList.msg
    msg/RoadSegmentReferenceID.msg
    msg/RoadSegmentRegional.msg
    msg/RoadwayCrownAngle.msg
    msg/SPAT.msg
    msg/SPATRegional.msg
    msg/ScaleB12.msg
    msg/SegmentAttributeXY.msg
    msg/SegmentAttributeXYList.msg
    msg/SemiMajorAxisAccuracy.msg
    msg/SemiMajorAxisOrientation.msg
    msg/SemiMinorAxisAccuracy.msg
    msg/SignalControlZone.msg
    msg/SignalGroupID.msg
    msg/SignalRequest.msg
    msg/SignalRequestList.msg
    msg/SignalRequestMessage.msg
    msg/SignalRequestMessageRegional.msg
    msg/SignalRequestPackage.msg
    msg/SignalRequestPackageRegional.msg
    msg/SignalRequestRegional.msg
    msg/SignalRequesterInfo.msg
    msg/SignalStatus.msg
    msg/SignalStatusList.msg
    msg/SignalStatusMessage.msg
    msg/SignalStatusMessageRegional.msg
    msg/SignalStatusPackage.msg
    msg/SignalStatusPackageList.msg
    msg/SignalStatusPackageRegional.msg
    msg/SignalStatusRegional.msg
    msg/SpeedAdvice.msg
    msg/SpeedConfidenceDSRC.msg
    msg/SpeedLimitList.msg
    msg/SpeedLimitType.msg
    msg/SpeedandHeadingandThrottleConfidence.msg
    msg/TemporaryID.msg
    msg/ThrottleConfidence.msg
    msg/TimeChangeDetails.msg
    msg/TimeConfidence.msg
    msg/TimeIntervalConfidence.msg
    msg/TimeMark.msg
    msg/TransitVehicleOccupancy.msg
    msg/TransitVehicleStatus.msg
    msg/TransmissionAndSpeed.msg
    msg/TransmissionState.msg
    msg/VehicleHeight.msg
    msg/VehicleID.msg
    msg/VehicleType.msg
    msg/Velocity.msg
    msg/WaitOnStopline.msg
    msg/ZoneLength.msg
    DEPENDENCIES
	    std_msgs
        dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs
        its_container_v2_its_container_msgs
)

ament_export_dependencies(rosidl_default_runtime std_msgs dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs its_container_v2_its_container_msgs)

ament_package()