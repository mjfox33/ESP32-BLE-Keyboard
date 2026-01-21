// KeyDefs.h
#ifndef KEY_DEFS_H
#define KEY_DEFS_H

#include <cstdint>

// ─────────────────────────────────────────────
// Modifiers: Bit masks for the modifiers byte in HID report
// These match the official HID spec (bit 0 = Left Ctrl, etc.)
// Users press/release these separately from regular keys
// ─────────────────────────────────────────────
enum class Modifier : uint8_t {
    LeftCtrl     = 1 << 0,  // 0x01
    LeftShift    = 1 << 1,  // 0x02
    LeftAlt      = 1 << 2,  // 0x04
    LeftGui      = 1 << 3,  // 0x08 (Windows / Command)
    RightCtrl    = 1 << 4,  // 0x10
    RightShift   = 1 << 5,  // 0x20
    RightAlt     = 1 << 6,  // 0x40 (AltGr)
    RightGui     = 1 << 7,  // 0x80
};

// ─────────────────────────────────────────────
// Regular Keys: Official boot-protocol HID codes (no offsets!)
// These go directly into the keys[6] array
// Sourced from USB HID Usage Tables (Keyboard page 0x07) + boot mappings
// ─────────────────────────────────────────────
enum class Key : uint8_t {
   // Navigation
    UpArrow      = 0x52,    // Official HID Usage ID: 0x52 (82 decimal)
    DownArrow    = 0x51,    // Official HID Usage ID: 0x51 (81 decimal)
    LeftArrow    = 0x50,    // Official HID Usage ID: 0x50 (80 decimal)
    RightArrow   = 0x4F,    // Official HID Usage ID: 0x4F (79 decimal)

    // Common editing
    Backspace    = 0x2A,    // Official HID Usage ID: 0x2A (42 decimal)
    Tab          = 0x2B,    // Official HID Usage ID: 0x2B (43 decimal)
    Return       = 0x28,    // Official HID Usage ID: 0x28 (40 decimal)  // Enter
    Escape       = 0x29,    // Official HID Usage ID: 0x29 (41 decimal)
    Insert       = 0x49,    // Official HID Usage ID: 0x49 (73 decimal)
    PrintScreen  = 0x46,    // Official HID Usage ID: 0x46 (70 decimal)  // PrtSc / SysRq
    Delete       = 0x4C,    // Official HID Usage ID: 0x4C (76 decimal)  // Forward delete
    PageUp       = 0x4B,    // Official HID Usage ID: 0x4B (75 decimal)
    PageDown     = 0x4E,    // Official HID Usage ID: 0x4E (78 decimal)
    Home         = 0x4A,    // Official HID Usage ID: 0x4A (74 decimal)
    End          = 0x4D,    // Official HID Usage ID: 0x4D (77 decimal)

    // Lock & Special
    CapsLock     = 0x39,    // Official HID Usage ID: 0x39 (57 decimal)

    // Function Keys F1–F24
    F1           = 0x3A,    // Official HID Usage ID: 0x3A (58 decimal)
    F2           = 0x3B,    // Official HID Usage ID: 0x3B (59 decimal)
    F3           = 0x3C,    // Official HID Usage ID: 0x3C (60 decimal)
    F4           = 0x3D,    // Official HID Usage ID: 0x3D (61 decimal)
    F5           = 0x3E,    // Official HID Usage ID: 0x3E (62 decimal)
    F6           = 0x3F,    // Official HID Usage ID: 0x3F (63 decimal)
    F7           = 0x40,    // Official HID Usage ID: 0x40 (64 decimal)
    F8           = 0x41,    // Official HID Usage ID: 0x41 (65 decimal)
    F9           = 0x42,    // Official HID Usage ID: 0x42 (66 decimal)
    F10          = 0x43,    // Official HID Usage ID: 0x43 (67 decimal)
    F11          = 0x44,    // Official HID Usage ID: 0x44 (68 decimal)
    F12          = 0x45,    // Official HID Usage ID: 0x45 (69 decimal)
    F13          = 0x68,    // Official HID Usage ID: 0x68 (104 decimal)  // Extended (non-boot, but supported)
    F14          = 0x69,    // Official HID Usage ID: 0x69 (105 decimal)
    F15          = 0x6A,    // Official HID Usage ID: 0x6A (106 decimal)
    F16          = 0x6B,    // Official HID Usage ID: 0x6B (107 decimal)
    F17          = 0x6C,    // Official HID Usage ID: 0x6C (108 decimal)
    F18          = 0x6D,    // Official HID Usage ID: 0x6D (109 decimal)
    F19          = 0x6E,    // Official HID Usage ID: 0x6E (110 decimal)
    F20          = 0x6F,    // Official HID Usage ID: 0x6F (111 decimal)
    F21          = 0x70,    // Official HID Usage ID: 0x70 (112 decimal)
    F22          = 0x71,    // Official HID Usage ID: 0x71 (113 decimal)
    F23          = 0x72,    // Official HID Usage ID: 0x72 (114 decimal)
    F24          = 0x73,    // Official HID Usage ID: 0x73 (115 decimal)

    // Numpad
    Num0         = 0x62,    // Official HID Usage ID: 0x62 (98 decimal)
    Num1         = 0x59,    // Official HID Usage ID: 0x59 (89 decimal)
    Num2         = 0x5A,    // Official HID Usage ID: 0x5A (90 decimal)
    Num3         = 0x5B,    // Official HID Usage ID: 0x5B (91 decimal)
    Num4         = 0x5C,    // Official HID Usage ID: 0x5C (92 decimal)
    Num5         = 0x5D,    // Official HID Usage ID: 0x5D (93 decimal)
    Num6         = 0x5E,    // Official HID Usage ID: 0x5E (94 decimal)
    Num7         = 0x5F,    // Official HID Usage ID: 0x5F (95 decimal)
    Num8         = 0x60,    // Official HID Usage ID: 0x60 (96 decimal)
    Num9         = 0x61,    // Official HID Usage ID: 0x61 (97 decimal)
    NumSlash     = 0x54,    // Official HID Usage ID: 0x54 (84 decimal)  // /
    NumAsterisk  = 0x55,    // Official HID Usage ID: 0x55 (85 decimal)  // *
    NumMinus     = 0x56,    // Official HID Usage ID: 0x56 (86 decimal)  // -
    NumPlus      = 0x57,    // Official HID Usage ID: 0x57 (87 decimal)  // +
    NumEnter     = 0x58,    // Official HID Usage ID: 0x58 (88 decimal)
    NumPeriod    = 0x63     // Official HID Usage ID: 0x63 (99 decimal)  // . (decimal separator)
};

// =============================================================================
// Media / Consumer Control Keys (HID Usage Page 0x0C - Consumer)
// =============================================================================
// Values are the BIT MASKS (1 << bit position) used in the 16-bit media report.
// These exactly match the original library's KEY_MEDIA_XXX constants.
enum class MediaKey : uint16_t {
    NextTrack                   = 0x0001,   // Scan Next Track         (bit 0)
    PreviousTrack               = 0x0002,   // Scan Previous Track     (bit 1)
    Stop                        = 0x0004,   // Stop                    (bit 2)
    PlayPause                   = 0x0008,   // Play / Pause            (bit 3)
    Mute                        = 0x0010,   // Mute                    (bit 4)
    VolumeUp                    = 0x0020,   // Volume Increment        (bit 5)
    VolumeDown                  = 0x0040,   // Volume Decrement        (bit 6)
    WwwHome                     = 0x0080,   // WWW Home                (bit 7)
    MyComputer                  = 0x0100,   // Local Machine Browser   (bit 8)  "My Computer" on Windows
    Calculator                  = 0x0200,   // Calculator              (bit 9)
    WwwBookmarks                = 0x0400,   // WWW Bookmarks / Favorites (bit 10)
    WwwSearch                   = 0x0800,   // WWW Search              (bit 11)
    WwwStop                     = 0x1000,   // WWW Stop                (bit 12)
    WwwBack                     = 0x2000,   // WWW Back                (bit 13)
    ConsumerControlConfiguration = 0x4000,  // Consumer Control Configuration / Media Selection (bit 14)
    EmailReader                 = 0x8000    // Email Reader / Mail     (bit 15)
    // If you need more (Eject, Brightness, etc.), you must extend the report descriptor to 32 bits.
};


#endif