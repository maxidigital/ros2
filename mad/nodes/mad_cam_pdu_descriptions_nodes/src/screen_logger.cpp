#include "screen_logger.h"
#include "rclcpp/rclcpp.hpp"

namespace {
    rclcpp::Logger getLogger() {
        return rclcpp::get_logger("ros2");
    }
}

ScreenLogger::LogStream::LogStream(LogLevel lvl) : level(lvl) {}

ScreenLogger::LogStream::LogStream(LogStream&& other) noexcept 
    : ss(std::move(other.ss)), level(other.level) {}

ScreenLogger::LogStream::~LogStream() {
    auto logger = getLogger();
    switch(level) {
        case LogLevel::DEBUG: RCLCPP_DEBUG(logger, "%s", ss.str().c_str()); break;
        case LogLevel::INFO:  RCLCPP_INFO(logger, "%s", ss.str().c_str());  break;
        case LogLevel::WARN:  RCLCPP_WARN(logger, "%s", ss.str().c_str());  break;
        case LogLevel::ERROR: RCLCPP_ERROR(logger, "%s", ss.str().c_str()); break;
        case LogLevel::FATAL: RCLCPP_FATAL(logger, "%s", ss.str().c_str()); break;
    }
}

ScreenLogger::LogStream ScreenLogger::debug()   { return LogStream(LogLevel::DEBUG); }
ScreenLogger::LogStream ScreenLogger::print()   { return LogStream(LogLevel::INFO); }
ScreenLogger::LogStream ScreenLogger::warning() { return LogStream(LogLevel::WARN); }
ScreenLogger::LogStream ScreenLogger::error()   { return LogStream(LogLevel::ERROR); }
ScreenLogger::LogStream ScreenLogger::fatal()   { return LogStream(LogLevel::FATAL); }

void ScreenLogger::printInternal(const std::string& message) {
    auto logger = getLogger();
    RCLCPP_INFO(logger, "%s", message.c_str());
}