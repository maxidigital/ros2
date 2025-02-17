/*
 *
 * Copyright (C) 2017-2021 German Aerospace Center e.V. (https://www.dlr.de)
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
 */
#include "udp_receiver.h"

#if WIND_ROS_VERSION == 2
 using namespace boost::placeholders;
#endif

namespace wind {
namespace comm {

UDPReceiver::UDPReceiver(int port)
    : socket_(io_service_, boost::asio::ip::udp::endpoint(boost::asio::ip::udp::v4(), port))
    , reading_status_(false)
{
    io_service_.run();  // Keep this as it was in your original code
}

UDPReceiver::~UDPReceiver() {
    stopReading();
    socket_.close();
}

void UDPReceiver::setReceiveCallbackFunction(DataCallbackFunction handler) {
    data_callback_function_ = std::move(handler);
}

void UDPReceiver::startReading() {
    if (reading_status_.load(std::memory_order_acquire)) {
        return;
    }
    
    reading_status_.store(true, std::memory_order_release);
    read_thread_ptr_ = std::make_shared<boost::thread>(
        #if WIND_ROS_VERSION == 2
            boost::bind(&UDPReceiver::receiveData, this)
        #else
            boost::bind(&UDPReceiver::receiveData, this)
        #endif
    );
}

void UDPReceiver::stopReading() {
    reading_status_.store(false, std::memory_order_release);
    if (read_thread_ptr_ && read_thread_ptr_->joinable()) {
        read_thread_ptr_->join();
    }
}

void UDPReceiver::receiveData() {
    while (reading_status_.load(std::memory_order_acquire)) {
        try {
            size_t bytes_transferred = socket_.receive(boost::asio::buffer(buffer_));
            
            if (bytes_transferred > 0 && data_callback_function_) {
                // Create a copy of the received data for the callback
                std::vector<uint8_t> copied_data(buffer_.begin(), 
                                               buffer_.begin() + bytes_transferred);
                data_callback_function_(copied_data.data(), bytes_transferred);
            }
        }
        catch (const std::exception& e) {
            // Keep the same error handling approach as your original code
            continue;
        }
    }
}

} // namespace comm
} // namespace wind
