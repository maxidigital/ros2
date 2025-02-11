/*
 *
 * Copyright (C) German Aerospace Center e.V. (https://www.dlr.de)
 * Institute of Transportation Systems. (https://www.dlr.de/ts/)
 *
 * 
 * Eclipse ADORe, Automated Driving Open Research https://eclipse.org/adore
 * 
 * This program and the accompanying materials are made available under the
 * terms of the Eclipse Public License 2.0 which is available at
 * http://www.eclipse.org/legal/epl-2.0.
 * 
 * SPDX-License-Identifier: EPL-2.0
 * 
 *
 * 
 * File automatically generated with DLR Wind v2
 * 
 * This file belongs to the DLR Wind project de.dlr.ts.v2x.mad:mad:2.0
 * 
 * Module: CAM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(302637) cam(2) version(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#ifndef MAD_CAM_PDU_DESCRIPTIONS_WER_ENCODER
#define MAD_CAM_PDU_DESCRIPTIONS_WER_ENCODER

#if WIND_ROS_VERSION == 1
 #include <mad_cam_pdu_descriptions_msgs/MADCAM.h>
 #include <ros/ros.h>
#else
 #include <mad_cam_pdu_descriptions_msgs/msg/madcam.hpp>
 #include <rclcpp/rclcpp.hpp>
#endif

#include <stdint.h>
#include <iostream>
#include <typeinfo>
#include <cstdint>
#include <limits>
#include <wind_constants.h>
#include <screen_logger.h>
#include <tools.h>

namespace wind
{
    namespace encoder_mad_cam_pdu_descriptions
    {
        class WerEncoder {
        private:
            ScreenLogger* logger;
            bool debug;

        public:
            // Constructor y destructor
            WerEncoder(ScreenLogger* logger = nullptr, bool debug = false);
            ~WerEncoder();

            // Método principal de codificación
            #if WIND_ROS_VERSION == 1
              int encode(const mad_cam_pdu_descriptions_msgs::MADCAM::ConstPtr& ros, const uint8_t *buffer);
            #else
              int encode(const std::shared_ptr<mad_cam_pdu_descriptions_msgs::msg::MADCAM>& ros, const uint8_t *buffer);
              //int encode(const mad_cam_pdu_descriptions_msgs::msg::MADCAM* ros, const uint8_t *buffer);
            #endif

            // Setters
            void setLogger(ScreenLogger* slogger) {
				logger = slogger;
            }
			
            void setDebug(bool debugMode) {
				debug = debugMode;
            }
        };
    }
}

#endif //CPM_V1_23_CPM_PDU_DESCRIPTIONS_RSERIAL_ENCODER