#ifndef ASCII_MAP_H
#define ASCII_MAP_H

#include <cstdint>

namespace AsciiMap {
    inline constexpr uint8_t ShiftFlag = 0x80;

    extern const uint8_t keymap[128];
}

#endif