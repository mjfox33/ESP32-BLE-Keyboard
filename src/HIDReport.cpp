#include "HIDReport.h"
#include "BLECharacteristic.h"

bool KeyboardReport::press(uint8_t keycode) {
    if (keycode == 0) return false;

    // Don't add duplicates
    for (int i = 0; i < MAX_SIMULTANEOUS_KEYS; ++i) {
        if (keys[i] == keycode) return true;
    }

    // Find an empty slot and add the key
    for (size_t i = 0; i < MAX_SIMULTANEOUS_KEYS; ++i) {
        if (keys[i] == 0) {
            keys[i] = keycode;
            return true;
        }
    }

    // no empty slots left (6-key rollover limit reached)
    return false;
}

bool KeyboardReport::release(uint8_t keycode) {
    if (keycode == 0) return false;

    bool found = false;
    for (size_t i = 0; i < MAX_SIMULTANEOUS_KEYS; ++i) {
        if (keys[i] == keycode) {
            keys[i] = 0;
            found = true;
        }
    }

    return found;
}

void KeyboardReport::send(BLECharacteristic* chr) const {
    if (chr != nullptr) {
        chr->setValue(reinterpret_cast<const uint8_t*>(this), sizeof(*this));
        chr->notify();
    }
}

bool KeyboardReport::isPressed(uint8_t keycode) const {
    if (keycode == 0) return false;

    for (size_t i = 0; i < MAX_SIMULTANEOUS_KEYS; ++i) {
        if (keys[i] == keycode) return true;
    }

    return false;
}

void MediaReport::press(u_int16_t mask) {
    uint16_t value = (static_cast<uint16_t>(data[1]) << 8) | data[0];
    value |= mask;
    data[0] = static_cast<uint8_t>(value & 0xFF);
    data[1] = static_cast<uint8_t>(vale >> 8);
}

void MediaReport::release(uint16_t mask) {
    uint16_t value = (static_cast<uint16_t>(data[1]) << 8) | data[0];
    value &= ~mask;
    data[0] = static_cast<uint8_t>(value & 0xFF);
    data[1] = static_cast<uint8_t>(vale >> 8);
}

void MediaReport::send(BLECharacteristic* chr) const {
    if (chr == nullptr) return;
    chr->setValue(data, sizeof(data));
    chr->notify();
}