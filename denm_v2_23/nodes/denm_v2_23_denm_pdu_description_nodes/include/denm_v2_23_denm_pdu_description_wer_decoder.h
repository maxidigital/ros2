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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:denm_v2_23:1.0
 * 
 * Module: DENM_PDU_Description {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) denmPduRelease2(103831) major-version-2(2) minor-version-2(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#ifndef DENM_V2_23_DENM_PDU_DESCRIPTION_WER_DECODER
#define DENM_V2_23_DENM_PDU_DESCRIPTION_WER_DECODER

#if WIND_ROS_VERSION == 1
 #include <denm_v2_23_denm_pdu_description_msgs/DENM.h>
 #include <ros/ros.h>
#else
 #include <denm_v2_23_denm_pdu_description_msgs/msg/denm.hpp>
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
    namespace decoder_denm_v2_23_denm_pdu_description
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
              bool decode(denm_v2_23_denm_pdu_description_msgs::DENM* ros, const uint8_t *buffer);
            #else
              bool decode(denm_v2_23_denm_pdu_description_msgs::msg::DENM* ros, const uint8_t *buffer);
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

#endif //DENM_V2_23_DENM_PDU_DESCRIPTION_WER_DECODER