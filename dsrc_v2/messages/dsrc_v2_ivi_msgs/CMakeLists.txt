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
# Module: IVI {iso(1) standard(0) ivi(19321) version1(1)}
#     
# 
# For support contact v2x-ts@dlr.de
# 
#
cmake_minimum_required(VERSION 3.5)
project(dsrc_v2_ivi_msgs)

set(CMAKE_CXX_STANDARD 14)
add_definitions(-DWIND_ROS_VERSION=2)

find_package(ament_cmake               REQUIRED)
find_package(std_msgs                  REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(dsrc_v2_aviaeinumberinganddatastructures_msgs REQUIRED)
find_package(dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs REQUIRED)
find_package(dsrc_v2_efcdsrcgeneric_msgs REQUIRED)
find_package(its_container_v1_its_container_msgs REQUIRED)
find_package(dsrc_v2_citsapplmgmtids_msgs REQUIRED)
find_package(dsrc_v2_efcdsrcapplication_msgs REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
    msg/AbsolutePosition.msg
    msg/AbsolutePositionWAltitude.msg
    msg/AnyCatalogue.msg
    msg/AnyCataloguePictogramCode.msg
    msg/AnyCatalogueValue.msg
    msg/AnyCatalogueVersion.msg
    msg/ComparisonOperator.msg
    msg/CompleteVehicleCharacteristics.msg
    msg/CompleteVehicleCharacteristicsTrailer.msg
    msg/ComputedSegment.msg
    msg/ComputedSegmentOffsetDistance.msg
    msg/DBV.msg
    msg/DDD.msg
    msg/DDDDEP.msg
    msg/DDDDER.msg
    msg/DDDIO.msg
    msg/DDDIODp.msg
    msg/DDDIODr.msg
    msg/DDDIODrn.msg
    msg/DDDIORne.msg
    msg/DDDIOStnId.msg
    msg/DDDIOStnText.msg
    msg/DDDDcj.msg
    msg/DDDDcr.msg
    msg/DDDIoList.msg
    msg/DDDTpl.msg
    msg/DFL.msg
    msg/DTM.msg
    msg/DTMHourMinutes.msg
    msg/DTMMonthDay.msg
    msg/DTMYear.msg
    msg/DTMYearEyr.msg
    msg/DTMYearSyr.msg
    msg/DayOfWeek.msg
    msg/DeltaPosition.msg
    msg/DestinationPlace.msg
    msg/DestinationPlaceDepBlob.msg
    msg/DestinationPlacePlnId.msg
    msg/DestinationPlacePlnText.msg
    msg/DestinationRoad.msg
    msg/DestinationRoadRonId.msg
    msg/DestinationRoadRonText.msg
    msg/Direction.msg
    msg/Distance.msg
    msg/DistanceOrDuration.msg
    msg/DistanceOrDurationRSCUnitUnit.msg
    msg/DistanceOrDurationValue.msg
    msg/DistanceValue.msg
    msg/DriverCharacteristics.msg
    msg/EDT.msg
    msg/GeneralIviContainer.msg
    msg/GeographicLocationContainer.msg
    msg/GeographicLocationContainerParts.msg
    msg/GicPart.msg
    msg/GicPartApplicableLanes.msg
    msg/GicPartDetectionZoneIds.msg
    msg/GicPartDriverAwarenessZoneIds.msg
    msg/GicPartExtraText.msg
    msg/GicPartLayoutId.msg
    msg/GicPartMinimumAwarenessTime.msg
    msg/GicPartPreStoredlayoutId.msg
    msg/GicPartRelevanceZoneIds.msg
    msg/GicPartRoadSignCodes.msg
    msg/GicPartVehicleCharacteristics.msg
    msg/GlcPart.msg
    msg/GlcPartZoneExtension.msg
    msg/GoodsType.msg
    msg/HoursMinutes.msg
    msg/HoursMinutesHours.msg
    msg/HoursMinutesMins.msg
    msg/ISO14823Attributes.msg
    msg/ISO14823AttributesElement.msg
    msg/ISO14823Code.msg
    msg/ISO14823CodePictogramCode.msg
    msg/ISO14823CodePictogramCodeCountryCode.msg
    msg/ISO14823CodePictogramCodePictogramCategoryCode.msg
    msg/ISO14823CodePictogramCodePictogramCategoryCodeNature.msg
    msg/ISO14823CodePictogramCodePictogramCategoryCodeSerialNumber.msg
    msg/ISO14823CodePictogramCodeServiceCategoryCode.msg
    msg/ISO14823CodePictogramCodeServiceCategoryCodeAmbientOrRoadConditionPictogram.msg
    msg/ISO14823CodePictogramCodeServiceCategoryCodePublicFacilitiesPictogram.msg
    msg/ISO14823CodePictogramCodeServiceCategoryCodeTrafficSignPictogram.msg
    msg/IVI.msg
    msg/IVILaneWidth.msg
    msg/IVIManagementContainer.msg
    msg/IVIManagementContainerConnectedIviStructures.msg
    msg/IviContainer.msg
    msg/IviIdentificationNumber.msg
    msg/IviPurpose.msg
    msg/IviStatus.msg
    msg/IviStructure.msg
    msg/IviStructureOptional.msg
    msg/IviType.msg
    msg/LaneInformation.msg
    msg/LaneStatus.msg
    msg/LaneType.msg
    msg/LayoutComponent.msg
    msg/LayoutComponentHeight.msg
    msg/LayoutComponentLayoutComponentId.msg
    msg/LayoutComponentTextScripting.msg
    msg/LayoutComponentWidth.msg
    msg/LayoutComponentX.msg
    msg/LayoutComponentY.msg
    msg/LayoutContainer.msg
    msg/LayoutContainerHeight.msg
    msg/LayoutContainerLayoutComponents.msg
    msg/LayoutContainerLayoutId.msg
    msg/LayoutContainerWidth.msg
    msg/LoadType.msg
    msg/MonthDay.msg
    msg/MonthDayDay.msg
    msg/MonthDayMonth.msg
    msg/PMD.msg
    msg/PolygonalLine.msg
    msg/PolygonalLineAbsolutePositions.msg
    msg/PolygonalLineAbsolutePositionsWithAltitude.msg
    msg/PolygonalLineDeltaPositions.msg
    msg/PolygonalLineDeltaPositionsWithAltitude.msg
    msg/ROI.msg
    msg/RSCUnit.msg
    msg/RSCode.msg
    msg/RSCodeCode.msg
    msg/RSCodeCodeItisCodes.msg
    msg/RSCodeLayoutComponentId.msg
    msg/RccPart.msg
    msg/RccPartLaneConfiguration.msg
    msg/RccPartZoneIds.msg
    msg/RoadConfigurationContainer.msg
    msg/SPE.msg
    msg/SPERSCUnitUnit.msg
    msg/SPEMns.msg
    msg/SPESpm.msg
    msg/Segment.msg
    msg/TcPart.msg
    msg/TcPartApplicableLanes.msg
    msg/TcPartData.msg
    msg/TcPartDetectionZoneIds.msg
    msg/TcPartDriverAwarenessZoneIds.msg
    msg/TcPartLayoutId.msg
    msg/TcPartMinimumAwarenessTime.msg
    msg/TcPartPreStoredlayoutId.msg
    msg/TcPartRelevanceZoneIds.msg
    msg/TcPartText.msg
    msg/Text.msg
    msg/TextContainer.msg
    msg/TextLanguage.msg
    msg/TextLayoutComponentId.msg
    msg/TextTextContent.msg
    msg/TractorCharacteristics.msg
    msg/TractorCharacteristicsEqualTo.msg
    msg/TractorCharacteristicsNotEqualTo.msg
    msg/TractorCharacteristicsRanges.msg
    msg/TrailerCharacteristics.msg
    msg/TrailerCharacteristicsEqualTo.msg
    msg/TrailerCharacteristicsNotEqualTo.msg
    msg/TrailerCharacteristicsRanges.msg
    msg/TrainCharacteristics.msg
    msg/VED.msg
    msg/VcClass.msg
    msg/VcCode.msg
    msg/VcCodeRoadSignCode.msg
    msg/VcCodeValidity.msg
    msg/VcCodeValue.msg
    msg/VcOption.msg
    msg/VehicleCharacteristicsFixValues.msg
    msg/VehicleCharacteristicsRanges.msg
    msg/VehicleCharacteristicsRangesLimits.msg
    msg/VehicleCharacteristicsRangesLimitsNumberOfAxles.msg
    msg/Weight.msg
    msg/WeightValue.msg
    msg/Zid.msg
    msg/Zone.msg
    DEPENDENCIES
	    std_msgs
        dsrc_v2_aviaeinumberinganddatastructures_msgs
        dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs
        dsrc_v2_efcdsrcgeneric_msgs
        its_container_v1_its_container_msgs
        dsrc_v2_citsapplmgmtids_msgs
        dsrc_v2_efcdsrcapplication_msgs
)

ament_export_dependencies(rosidl_default_runtime std_msgs dsrc_v2_aviaeinumberinganddatastructures_msgs dsrc_v2_electronicregistrationidentificationvehicledatamodule_msgs dsrc_v2_efcdsrcgeneric_msgs its_container_v1_its_container_msgs dsrc_v2_citsapplmgmtids_msgs dsrc_v2_efcdsrcapplication_msgs)

ament_package()