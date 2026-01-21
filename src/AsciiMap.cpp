#include  "AsciiMap.h"

const uint8_t AsciiMap::keymap[128] =
{
	0x00,             // NUL
	0x00,             // SOH
	0x00,             // STX
	0x00,             // ETX
	0x00,             // EOT
	0x00,             // ENQ
	0x00,             // ACK
	0x00,             // BEL
	0x2a,			// BS	Backspace
	0x2b,			// TAB	Tab
	0x28,			// LF	Enter
	0x00,             // VT
	0x00,             // FF
	0x00,             // CR
	0x00,             // SO
	0x00,             // SI
	0x00,             // DEL
	0x00,             // DC1
	0x00,             // DC2
	0x00,             // DC3
	0x00,             // DC4
	0x00,             // NAK
	0x00,             // SYN
	0x00,             // ETB
	0x00,             // CAN
	0x00,             // EM
	0x00,             // SUB
	0x00,             // ESC
	0x00,             // FS
	0x00,             // GS
	0x00,             // RS
	0x00,             // US

	0x2c,		   //  ' '
	0x1e | ShiftFlag,	   // !
	0x34 | ShiftFlag,	   // "
	0x20 | ShiftFlag,    // #
	0x21 | ShiftFlag,    // $
	0x22 | ShiftFlag,    // %
	0x24 | ShiftFlag,    // &
	0x34,          // '
	0x26 | ShiftFlag,    // (
	0x27 | ShiftFlag,    // )
	0x25 | ShiftFlag,    // *
	0x2e | ShiftFlag,    // +
	0x36,          // ,
	0x2d,          // -
	0x37,          // .
	0x38,          // /
	0x27,          // 0
	0x1e,          // 1
	0x1f,          // 2
	0x20,          // 3
	0x21,          // 4
	0x22,          // 5
	0x23,          // 6
	0x24,          // 7
	0x25,          // 8
	0x26,          // 9
	0x33 | ShiftFlag,      // :
	0x33,          // ;
	0x36 | ShiftFlag,      // <
	0x2e,          // =
	0x37 | ShiftFlag,      // >
	0x38 | ShiftFlag,      // ?
	0x1f | ShiftFlag,      // @
	0x04 | ShiftFlag,      // A
	0x05 | ShiftFlag,      // B
	0x06 | ShiftFlag,      // C
	0x07 | ShiftFlag,      // D
	0x08 | ShiftFlag,      // E
	0x09 | ShiftFlag,      // F
	0x0a | ShiftFlag,      // G
	0x0b | ShiftFlag,      // H
	0x0c | ShiftFlag,      // I
	0x0d | ShiftFlag,      // J
	0x0e | ShiftFlag,      // K
	0x0f | ShiftFlag,      // L
	0x10 | ShiftFlag,      // M
	0x11 | ShiftFlag,      // N
	0x12 | ShiftFlag,      // O
	0x13 | ShiftFlag,      // P
	0x14 | ShiftFlag,      // Q
	0x15 | ShiftFlag,      // R
	0x16 | ShiftFlag,      // S
	0x17 | ShiftFlag,      // T
	0x18 | ShiftFlag,      // U
	0x19 | ShiftFlag,      // V
	0x1a | ShiftFlag,      // W
	0x1b | ShiftFlag,      // X
	0x1c | ShiftFlag,      // Y
	0x1d | ShiftFlag,      // Z
	0x2f,          // [
	0x31,          // bslash
	0x30,          // ]
	0x23 | ShiftFlag,    // ^
	0x2d | ShiftFlag,    // _
	0x35,          // `
	0x04,          // a
	0x05,          // b
	0x06,          // c
	0x07,          // d
	0x08,          // e
	0x09,          // f
	0x0a,          // g
	0x0b,          // h
	0x0c,          // i
	0x0d,          // j
	0x0e,          // k
	0x0f,          // l
	0x10,          // m
	0x11,          // n
	0x12,          // o
	0x13,          // p
	0x14,          // q
	0x15,          // r
	0x16,          // s
	0x17,          // t
	0x18,          // u
	0x19,          // v
	0x1a,          // w
	0x1b,          // x
	0x1c,          // y
	0x1d,          // z
	0x2f | ShiftFlag,    // {
	0x31 | ShiftFlag,    // |
	0x30 | ShiftFlag,    // }
	0x35 | ShiftFlag,    // ~
	0				// DEL
};