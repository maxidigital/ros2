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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:cpm_v1_23:1.0
 * 
 * Module: CPM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) ts(103324) cpm(1) major-version-1(1) minor-version-1(1)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#ifndef CPM_V1_23_CPM_PDU_DESCRIPTIONS_WER_DECODER
#define CPM_V1_23_CPM_PDU_DESCRIPTIONS_WER_DECODER

#if WIND_ROS_VERSION == 1
 #include <cpm_v1_23_cpm_pdu_descriptions_msgs/CollectivePerceptionMessage.h>
 #include <ros/ros.h>
#else
 #include <cpm_v1_23_cpm_pdu_descriptions_msgs/msg/collective_perception_message.hpp>
 #include <rclcpp/rclcpp.hpp>
#endif

#include <iostream>
#include <cstdint>
#include <type_traits>
#include <limits>
#include <wind_constants.h>
#include <tools.h>
#include <screen_logger.h>

namespace wind
{
    namespace decoder_cpm_v1_23_cpm_pdu_descriptions
    {
        class WerDecoder {
        public:
            // Constructor            			
			WerDecoder(ScreenLogger* slogger = nullptr, bool debugMode = false) 
                : logger(slogger)
                , debug(debugMode) 
            {}
            
            // Destructor
            ~WerDecoder() = default;
                        
            #if WIND_ROS_VERSION == 1
              bool decode(cpm_v1_23_cpm_pdu_descriptions_msgs::CollectivePerceptionMessage* ros, const uint8_t *buffer);
            #else
              bool decode(cpm_v1_23_cpm_pdu_descriptions_msgs::msg::CollectivePerceptionMessage* ros, const uint8_t *buffer);
            #endif

            // Setters and getters
            void setLogger(ScreenLogger* slogger) {
				logger = slogger;
			}
			
            void setDebug(bool debugMode) {
				debug = debugMode;
            }

        private:
            ScreenLogger* logger;
			bool debug;
        };
    }
}

#endif //CPM_V1_23_CPM_PDU_DESCRIPTIONS_WER_DECODER