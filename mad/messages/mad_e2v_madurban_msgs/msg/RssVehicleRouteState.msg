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
#* This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0             *
#*                                                                                 *
#* Module: E2V_MADUrban {itu-t(0) identified-organization(4) etsi(0) itsDomain(5)  *
#*     wg1(1) en(302637) e2v(1) version(3)}                                        *
#*                                                                                 *
#* For support contact v2x-ts@dlr.de                                               *
#*                                                                                 *

#
# ASN.1 Definition:
# SEQUENCE {
#    routeHeading HeadingValue,
#    routeRadius RouteRadius,
#    routeHeadingDelta CartesianAngleValue,
#    routeSpeedLon VelocityComponentValue,
#    routeSpeedLat VelocityComponentValue,
#    routeAccelLon LongitudinalAccelerationValue,
#    routeAccelLat LateralAccelerationValue,
#    avgRouteAccelLon LongitudinalAccelerationValue,
#    avgRouteAccelLat LateralAccelerationValue 
# } 
# 
# Element type: SEQUENCE
#
# ********** START of RssVehicleRouteState **********
#

its_container_v4_etsi_its_cdd_msgs/HeadingValue                  route_heading
RouteRadius                                                      route_radius
its_container_v4_etsi_its_cdd_msgs/CartesianAngleValue           route_heading_delta
its_container_v4_etsi_its_cdd_msgs/VelocityComponentValue        route_speed_lon
its_container_v4_etsi_its_cdd_msgs/VelocityComponentValue        route_speed_lat
its_container_v4_etsi_its_cdd_msgs/LongitudinalAccelerationValue route_accel_lon
its_container_v4_etsi_its_cdd_msgs/LateralAccelerationValue      route_accel_lat
its_container_v4_etsi_its_cdd_msgs/LongitudinalAccelerationValue avg_route_accel_lon
its_container_v4_etsi_its_cdd_msgs/LateralAccelerationValue      avg_route_accel_lat

# ********** END of RssVehicleRouteState   **********
