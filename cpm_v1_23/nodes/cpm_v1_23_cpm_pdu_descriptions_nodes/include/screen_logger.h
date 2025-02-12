#ifndef SCREEN_LOGGER_H
#define SCREEN_LOGGER_H

#include <sstream>
#include <string>

class ScreenLogger {
private:
    enum class LogLevel {
        DEBUG,
        INFO,
        WARN,
        ERROR,
        FATAL
    };

    class LogStream {
    private:
        std::stringstream ss;
        LogLevel level;

    public:
        LogStream(LogLevel lvl);
        
        LogStream(const LogStream&) = delete;
        LogStream& operator=(const LogStream&) = delete;
        
        LogStream(LogStream&& other) noexcept;
        
        template<typename T>
        LogStream& operator<<(const T& value) {
            ss << value;
            return *this;
        }

        ~LogStream();
    };

public:
    LogStream debug();
    LogStream print();
    LogStream warning();
    LogStream error();
    LogStream fatal();

    // Para strings literales
    template<typename T>
    void print(const T& message) {
        std::stringstream ss;
        ss << message;
        printInternal(ss.str());
    }

    // Para múltiples argumentos
    template<typename T, typename... Args>
    void print(const T& first, const Args&... rest) {
        std::stringstream ss;
        ss << first;
        // Función helper para expandir el parameter pack
        int dummy[] = { 0, ((ss << rest), 0)... };
        (void)dummy;  // Evita warning de unused variable
        printInternal(ss.str());
    }

private:
    void printInternal(const std::string& message);
};

#endif