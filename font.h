#include <avr/pgmspace.h>
const int font_count = 127;
unsigned char PROGMEM myfont[127][5] = {
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // blank
  {0x00, 0x00, 0x00, 0x00, 0x00}, // Space
  {0x00, 0x00, 0xFA, 0x00, 0x00}, // !
  {0x00, 0xF0, 0x00, 0xF0, 0x00}, // "
  {0x27, 0x3C, 0xE7, 0x3C, 0xE4}, // #
  {0x12, 0x2A, 0x7F, 0x2A, 0x4},  // $
  {0x32, 0x34, 0x8, 0x16, 0x26},  // %
  {0x00, 0x00, 0x00, 0x00, 0x00}, // &---
  {0x00, 0x00, 0xF0, 0x00, 0x00}, // '
  {0x00, 0x18, 0x66, 0x81, 0x00}, // (
  {0x00, 0x81, 0x66, 0x18, 0x00}, // )
  {0x00, 0xA0, 0x40, 0xA0, 0x00}, // *
  {0x8, 0x8, 0x3E, 0x8, 0x8},     // +
  {0x00, 0x1, 0x6, 0x00, 0x00},   // ,
  {0x8, 0x8, 0x8, 0x8, 0x8},      // -
  {0x00, 0x2, 0x00, 0x00, 0x00},  // .
  {0x1, 0x6, 0x18, 0x60, 0x80},   // /
  {0x7c, 0x8a, 0x92, 0xa2, 0x7c}, // 0
  {0x00, 0x20, 0x40, 0xfe, 0x00}, // 1
  {0x8e, 0x92, 0x92, 0x92, 0x62}, // 2
  {0x84, 0x92, 0xb2, 0xd2, 0x8c}, // 3
  {0x10, 0x30, 0x50, 0xfe, 0x10}, // 4
  {0xe2, 0x92, 0x92, 0x92, 0x8c}, // 5
  {0x7c, 0x92, 0x92, 0x92, 0x0c}, // 6
  {0x80, 0x8e, 0x90, 0xa0, 0xc0}, // 7
  {0x6c, 0x92, 0x92, 0x92, 0x6c}, // 8
  {0x60, 0x92, 0x92, 0x92, 0x7c}, // 9
  {0x00, 0x00, 0x24, 0x00, 0x00}, // :
  {0x00, 0x2, 0x24, 0x00, 0x00},  // ;
  {0x10, 0x28, 0x44, 0x82, 0x00}, // <
  {0x24, 0x24, 0x24, 0x24, 0x24}, // =
  {0x00, 0x82, 0x44, 0x28, 0x10}, // >
  {0x20, 0x40, 0x9A, 0x50, 0x20}, // ?
  {0x7C, 0x82, 0xBA, 0xAA, 0x7A}, // @
  {0x7e, 0x90, 0x90, 0x90, 0x7e}, // A  
  {0xfe, 0x92, 0x92, 0x92, 0x6c}, // B
  {0x7c, 0x82, 0x82, 0x82, 0x44}, // C
  {0xfe, 0x82, 0x82, 0x44, 0x38}, // D
  {0xfe, 0x92, 0x92, 0x92, 0x82}, // E
  {0xfe, 0x90, 0x90, 0x90, 0x80}, // F
  {0x7c, 0x82, 0x92, 0x92, 0x5c}, // G
  {0xfe, 0x10, 0x10, 0x10, 0xfe}, // H
  {0x00, 0x82, 0xfe, 0x82, 0x00}, // I
  {0x0c, 0x02, 0x02, 0x02, 0xfc}, // J
  {0xfe, 0x10, 0x28, 0x44, 0x82}, // K
  {0xfe, 0x02, 0x02, 0x02, 0x02}, // L
  {0xfe, 0x40, 0x20, 0x40, 0xfe}, // M
  {0xfe, 0x20, 0x10, 0x08, 0xfe}, // N
  {0x7c, 0x82, 0x82, 0x82, 0x7c}, // O
  {0xfe, 0x90, 0x90, 0x90, 0x60}, // P
  {0x7c, 0x82, 0x8a, 0x84, 0x7a}, // Q
  {0xfe, 0x90, 0x98, 0x94, 0x62}, // R
  {0x62, 0x92, 0x92, 0x92, 0x8c}, // S
  {0x80, 0x80, 0xfe, 0x80, 0x80}, // T
  {0xfc, 0x02, 0x02, 0x02, 0xfc}, // U
  {0xf8, 0x04, 0x02, 0x04, 0xf8}, // V
  {0xfe, 0x04, 0x08, 0x04, 0xfe}, // W
  {0xc6, 0x28, 0x10, 0x28, 0xc6}, // X
  {0xc0, 0x20, 0x1e, 0x20, 0xc0}, // Y
  {0x86, 0x8a, 0x92, 0xa2, 0xc2}, // Z
  {0xFF, 0x81, 0x81, 0x81, 0x00}, // [
  {0x80, 0x60, 0x18, 0x6, 0x1},   // Back Slash
  {0x00, 0x81, 0x81, 0x81, 0xFF}, // ]
  {0x20, 0x40, 0x80, 0x40, 0x20}, // ^
  {0x1, 0x1, 0x1, 0x1, 0x1},      // _
  {0x00, 0xC0, 0x20, 0x00, 0x00}, // `
  {0x4, 0x2A, 0x2A, 0x2A, 0x3E},  // a  
  {0xfe, 0x12, 0x22, 0x22, 0x1C}, // b
  {0x1C, 0x22, 0x22, 0x22, 0x4},  // c
  {0x1C, 0x22, 0x22, 0x12, 0xFE}, // d
  {0x1C, 0x2A, 0x2A, 0x2A, 0x18}, // e
  {0x21, 0x21, 0x7E, 0xA0, 0xA0}, // f
  {0x18, 0x25, 0x25, 0x29, 0x3E}, // g
  {0xFE, 0x10, 0x20, 0x20, 0x3E}, // h
  {0x20, 0x20, 0xBE, 0x00, 0x00}, // i
  {0x00, 0x01, 0x21, 0x21, 0xBE}, // j
  {0xFE, 0x8, 0x8, 0x14, 0x22},   // k
  {0x00, 0xFC, 0x2, 0x2, 0x4},    // l
  {0x3E, 0x20, 0x1E, 0x20, 0x3E}, // m
  {0x3E, 0x10, 0x20, 0x20, 0x1E}, // n
  {0x1C, 0x22, 0x22, 0x22, 0x1C}, // o
  {0x3F, 0x12, 0x22, 0x22, 0x1C}, // p
  {0x1C, 0x22, 0x22, 0x12, 0x3F}, // q
  {0x00, 0x3E, 0x10, 0x20, 0x20}, // r
  {0x12, 0x2A, 0x2A, 0x2A, 0x4},  // s
  {0x20, 0x7C, 0x22, 0x22, 0x24}, // t
  {0x3C, 0x2, 0x2, 0x4, 0x3E},    // u
  {0x38, 0x4, 0x2, 0x4, 0x38},    // v
  {0x3C, 0x2, 0x1E, 0x2, 0x3C},   // w
  {0x22, 0x14, 0x8, 0x14, 0x22},  // x
  {0x31, 0xD, 0x2, 0xC, 0x30},    // y
  {0x22, 0x26, 0x2A, 0x32, 0x22}, // z
  {0x18, 0x18, 0x66, 0x81, 0x00}, // {
  {0x00, 0x00, 0xFF, 0x00, 0x00}, // |
  {0x00, 0x81, 0x66, 0x18, 0x18}, // }
  {0x4, 0x8, 0xC, 0x4, 0x8}};     // ~
