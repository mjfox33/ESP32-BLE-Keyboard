#ifndef REPORT_DESCRIPTOR_H
#define REPORT_DESCRIPTOR_H

#include <cstdint>
#include <cstddef>

// Forwad declaration of the descriptor array (actual data lives in .cpp)
extern const uint8_t HidReportDescriptor[];

// Size in bytes (use this instead of sizeof() where possible, especially for extern)
constexpr size_t HidReportDescriptor = 172;

// Optional: Report IDs ( already defined elsewhere, but good to have them visible)
constexpr uint8_t KEYBOARD_REPORT_ID = 0x01;
constexpr uint8_t MEDIA_KEYS_REPORT_ID = 0x02;


#endif
