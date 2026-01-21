#ifndef HID_REPORTS_H
#define HID_REPORTS_H

#include <cstdint>
#include <cstring>
#include <algorithm>
#include <array>

// Forward declarations (so we dont need full BLECharacteristic.h here)
class BLECharacteristic;

static constexpr size_t MAX_SIMULTANEOUS_KEYS = 6;

struct KeyboardReport final {
    uint8_t modifiers = 0;  // Left Ctrl, Shift, Alt, Gui, Right Ctrl, Shift, Alt, Gui
    uint8_t reserved = 0;   // Always 0 (USB HID requirement)
    std::array<uint8_t, MAX_SIMULTANEOUS_KEYS> keys{}; // Up to 6 simultaneous non-modifier keys (NKRO limited)

    // Reset to no keys pressed
    void clear() {
        modifiers = 0;
        reserved = 0;
        keys.fill(0);
    }

    // Returns true if key was added (false if already present or no slots left)
    bool press(uint8_t keycode);

    // Returns true if key was found and removed
    bool release(uint8_t keycode);

    // Send this report over BLE (only if connected)
    void send(BLECharacteristic* characteristic) const;

    // Optional: check if a key is currently pressed
    bool isPressed(uint8_t keycode) const;

};

struct MediaReport final {
    uint8_t data[2] = { 0, 0 };

    // Set a media key bit (additive - supports multiple media keys at once)
    void press(u_int16_t mask);

    // Clear a media key bit
    void release(u_int16_t mask);

    void clear() {
        data[0] = 0;
        data[1] = 0;
    }

    bool isPressed(u_int16_t mask) const {
        u_int16_t value = (data[1] << 8) | data[0];
        return (value & mask) != 0;
    }

    void send(BLECharacteristic* characteristic) const;

};

#endif