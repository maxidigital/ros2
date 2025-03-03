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
 * This file belongs to the DLR Wind project de.dlr.ts.v2x:dsrc_v2:4.0
 * 
 * Module: SSEM_PDU_Descriptions {itu-t(0) identified-organization(4) etsi(0) itsDomain(5) 
 *         wg1(1) en(103301) ssem(4) version2(2)}
 * 
 * For support contact v2x-ts@dlr.de
 * 
 *
 */
#ifndef TOOLS_H
#define TOOLS_H

#include <cstdint> // uint8_t
#include <cstddef> // size_t
#include <wind_constants.h>
#include <string>
#include <type_traits>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <vector>

// Colors
#define RESET          "\033[0m"
#define BLACK          "\033[30m"
#define RED            "\033[31m"
#define GREEN          "\033[32m"
#define YELLOW         "\033[33m"
#define BLUE           "\033[34m"
#define MAGENTA        "\033[35m"
#define CYAN           "\033[36m"
#define WHITE          "\033[37m"
#define BRIGHT_BLACK   "\033[30;1m"
#define BRIGHT_RED     "\033[31;1m"
#define BRIGHT_GREEN   "\033[32;1m"
#define BRIGHT_YELLOW  "\033[33;1m"
#define BRIGHT_BLUE    "\033[34;1m"
#define BRIGHT_MAGENTA "\033[35;1m"
#define BRIGHT_CYAN    "\033[36;1m"
#define BRIGHT_WHITE   "\033[37;1m"
#define ORANGE         "\033[38;5;202m"
#define PURPLE         "\033[38;5;93m"
#define BROWN          "\033[38;5;94m"
#define PINK           "\033[38;5;200m"
#define GREY           "\033[38;5;245m"
#define CUSTOM_COLOR(r, g, b)   "\033[38;2;" #r ";" #g ";" #b "m"
#define RICH_BLUE      CUSTOM_COLOR(0, 120, 255)
#define OLIVE_GREEN    CUSTOM_COLOR(128, 128, 0)
#define DEEP_PURPLE    CUSTOM_COLOR(102, 51, 153)
#define BOLD           "\033[1m"



namespace tools {
	
inline 
std::string bool_to_string(bool b) {
    return b ? "true" : "false";
}

/**
 * @brief Converts a buffer of bytes into a hexadecimal string representation and prints it.
 *
 * This function takes a buffer of bytes and its size, converts each byte to its 
 * hexadecimal representation, and prints the result to the standard output.
 *
 * @param buffer Pointer to the buffer containing the bytes to be converted.
 * @param size The number of bytes in the buffer.
 */
inline 
void printBufferHex(const uint8_t *buffer, size_t size) {
    std::stringstream ss;
    ss << std::hex << std::setfill('0');
    
    for (size_t i = 0; i < size; ++i)
        ss << std::setw(2) << static_cast<int>(buffer[i]);
    
    std::cout << ss.str() << std::endl;  
}

/**
 * @brief Converts a buffer of bytes into a hexadecimal string representation.
 *
 * This function takes a buffer of bytes and its size, converts each byte to its 
 * hexadecimal representation, and returns the result as a string.
 *
 * @param buffer Pointer to the buffer containing the bytes to be converted.
 * @param size The number of bytes in the buffer.
 * @return A string representing the hexadecimal values of the buffer.
 */
inline 
std::string bufferToHex(const uint8_t *buffer, size_t size) {
    std::stringstream ss;
    ss << std::hex << std::setfill('0');
    
    for (size_t i = 0; i < size; ++i)
        ss << std::setw(2) << static_cast<unsigned>(buffer[i]);
    
    return ss.str();
}

template <typename T>
inline 
std::string getTypeName(const T&) {
    std::string tmp;
    if (std::is_same<T, int>::value) {
        tmp = "int   ";
    } else if (std::is_same<T, unsigned int>::value) {
        tmp = "uint  ";
    } else if (std::is_same<T, long>::value) {
        tmp = "long  ";
    } else if (std::is_same<T, unsigned long>::value) {
        tmp = "ulong ";
    } else if (std::is_same<T, short>::value) {
        tmp = "short ";
    } else if (std::is_same<T, unsigned short>::value) {
        tmp = "ushort";
    } else if (std::is_same<T, unsigned char>::value) {
        tmp = "uchar ";
    } else if (std::is_same<T, char>::value) {
        tmp = "char  ";
    } else if (std::is_same<T, float>::value) {
        tmp = "float ";
    } else if (std::is_same<T, double>::value) {
        tmp = "double";
    } else if (std::is_same<T, uint8_t>::value) {
        tmp = "uint8 ";
    } else if (std::is_same<T, int8_t>::value) {
        tmp = "int8_t";
    } else if (std::is_same<T, uint16_t>::value) {
        tmp = "uint16";
    } else if (std::is_same<T, int16_t>::value) {
        tmp = "int16 ";
    } else if (std::is_same<T, uint32_t>::value) {
        tmp = "uint32";
    } else if (std::is_same<T, int32_t>::value) {
        tmp = "int32 ";
    } else if (std::is_same<T, uint64_t>::value) {
        tmp = "uint64";
    } else if (std::is_same<T, int64_t>::value) {
        tmp = "int64 ";
    } else {
        tmp = "uknown";
    }
    return BRIGHT_WHITE + tmp + RESET;
};

inline
std::string colorGradient(double ratio) {
    int r = static_cast<int>(255 * ratio);
    int g = static_cast<int>(255 * (1 - ratio));
    return "\033[38;2;" + std::to_string(r) + ";" + std::to_string(g) + ";0m";
}

inline
std::string generateLine(int length, std::string ch) {
    // Ensure the length is within the valid range
    length = std::max(1, std::min(length, 1500));
    
    // Calculate the proportional length
    int actualLength = (length * 82) / 1500;
    
    // Calculate the ratio for color
    double ratio = static_cast<double>(length - 1) / 1499.0;
    
    // Create the line with color gradient
    std::ostringstream line;
    for (int i = 0; i < actualLength; ++i) {
        double segmentRatio = ratio * (static_cast<double>(i) / (actualLength - 1));
        line << colorGradient(segmentRatio) << ch;
    }
    
    // Fill the remaining space with white middle dots
    line << GREY;
    for (int i = actualLength; i < 81; ++i) {
        line << "-";
    }
    
    line << RESET;
    
    return line.str();
}

inline
std::string red(const std::string& text) {
    return RED + text + RESET;
}

inline
std::string green(const std::string& text) {
    return GREEN + text + RESET;
}

inline
std::string blue(const std::string& text) {
    return BLUE + text + RESET;
}

inline
std::string white(const std::string& text) {
    return BRIGHT_WHITE + text + RESET;
}

inline
std::string yellow(const std::string& text) {
    return YELLOW + text + RESET;
}

inline
std::string magenta(const std::string& text) {
    return MAGENTA + text + RESET;
}

inline
std::string orange(const std::string& text) {
    return ORANGE + text + RESET;
}

inline
std::string cyan(const std::string& text) {
    return CYAN + text + RESET;
}

inline
std::string purple(const std::string& text) {
    return PURPLE + text + RESET;
}

inline
std::string brown(const std::string& text) {
    return BROWN + text + RESET;
}

inline
std::string bold(const std::string& text) {
    return BOLD + text + RESET;
}

inline 
std::string custom(const std::string& color, const std::string& text) {
    return color + text + RESET;
}

inline 
std::string custom(int r, int g, int b, const std::string& text) {
    // Aseguramos que los valores estén en el rango 0-255
    r = std::max(0, std::min(255, r));
    g = std::max(0, std::min(255, g));
    b = std::max(0, std::min(255, b));
    
    // Creamos el código de color RGB
    std::string colorCode = "\033[38;2;" + 
                           std::to_string(r) + ";" + 
                           std::to_string(g) + ";" + 
                           std::to_string(b) + "m";
                           
    return colorCode + text + RESET;
}

inline
std::string bool_to_status(bool value) {
    if (value) {
        return bold(green("On"));
    }
    return yellow("Off");
}

} // closing namespace tools


namespace banner {

inline
std::string create_ros1_banner() {
    std::string banner;
    banner += tools::white("════════════════════════════════════════\n");
    banner += tools::blue("██████╗  ") + tools::red("██████╗ ") + tools::white("███████╗ ") + tools::orange("░░███╗░░\n");
    banner += tools::blue("██╔══██╗") + tools::red("██╔═══██╗") + tools::white("██╔════╝ ") + tools::orange("░████║░░\n");
    banner += tools::blue("██████╔╝") + tools::red("██║   ██║") + tools::white("███████╗ ") + tools::orange("██╔██║░░\n");
    banner += tools::blue("██╔══██╗") + tools::red("██║   ██║") + tools::white("╚════██║ ") + tools::orange("╚═╝██║░░\n");
    banner += tools::blue("██║  ██║") + tools::red("╚██████╔╝") + tools::white("███████║ ") + tools::orange("███████╗\n");
    banner += tools::blue("╚═╝  ╚═╝") + tools::red(" ╚═════╝ ") + tools::white("╚══════╝ ") + tools::orange("╚══════╝\n");
    banner += tools::white("════════════════════════════════════════\n");
    return banner;
}

inline
std::string create_ros2_banner() {
    std::string banner;
    banner += tools::white("════════════════════════════════════════\n");
    banner += tools::blue("██████╗  ") + tools::green("██████╗ ") + tools::white("███████╗") + tools::yellow("██████╗\n");
    banner += tools::blue("██╔══██╗") + tools::green("██╔═══██╗") + tools::white("██╔════╝") + tools::yellow("╚════██╗\n");
    banner += tools::blue("██████╔╝") + tools::green("██║   ██║") + tools::white("███████╗") + tools::yellow(" █████╔╝\n");
    banner += tools::blue("██╔══██╗") + tools::green("██║   ██║") + tools::white("╚════██║") + tools::yellow("██╔═══╝\n");
    banner += tools::blue("██║  ██║") + tools::green("╚██████╔╝") + tools::white("███████║") + tools::yellow("███████╗\n");
    banner += tools::blue("╚═╝  ╚═╝") + tools::green(" ╚═════╝ ") + tools::white("╚══════╝") + tools::yellow("╚══════╝\n");
    banner += tools::white("════════════════════════════════════════\n");
    return banner;
}

} // namespace banner


#endif