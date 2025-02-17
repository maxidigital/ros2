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
 * 
 */
#pragma once

#include <array>
#include <atomic>
#include <functional>
#include <memory>
#include <boost/asio.hpp>
#include <boost/thread.hpp>

#if WIND_ROS_VERSION == 2
#include <boost/bind/bind.hpp>
#else
#include <boost/bind.hpp>
#endif

namespace wind {
namespace comm {

class UDPReceiver {
public:
    using DataCallbackFunction = std::function<void(const uint8_t*, size_t)>;
    static constexpr size_t MAX_BUFFER_SIZE = 65536;

    explicit UDPReceiver(int port);
    ~UDPReceiver();

    // Disable copy operations
    UDPReceiver(const UDPReceiver&) = delete;
    UDPReceiver& operator=(const UDPReceiver&) = delete;

    void setReceiveCallbackFunction(DataCallbackFunction handler);
    void startReading();
    void stopReading();

private:
    void receiveData();

    boost::asio::io_service io_service_;
    boost::asio::ip::udp::socket socket_;
    std::atomic<bool> reading_status_;
    std::shared_ptr<boost::thread> read_thread_ptr_;
    DataCallbackFunction data_callback_function_;
    std::array<uint8_t, MAX_BUFFER_SIZE> buffer_;
};

} // namespace comm
} // namespace wind
