/* 
 * 5-high FONT FOR RENDERING TO THE LED SCREEN.
 * Includes kerning support

 * 8 pixels-per-byte, variable width.
 * Gaurav Manek, 2011
 */

#ifndef __FONT5X4_H
#define __FONT5X4_H

#define FONT_5X4_HEIGHT  5
// Number of bytes per glyph 

const byte FONT_5X4 [] PROGMEM = {
    0b00000000,  //  
    0b11101000,  // !
    0b11000000, 0b00000000, 0b11000000,  // "
    0b01010000, 0b11111000, 0b01010000, 0b11111000, 0b01010000,  // #
    0b00000000, 0b00000000, 0b00000000, 0b00000000,  // $
    0b11001000, 0b11010000, 0b00100000, 0b01011000, 0b10011000,  // %
    0b01010000, 0b10101000, 0b10011000, 0b01011000,  // &
    0b11000000,  // '
    0b01110000, 0b10001000,  // (
    0b10001000, 0b01110000,  // )
    0b10100000, 0b01000000, 0b10100000,  // *
    0b00100000, 0b00100000, 0b11111000, 0b00100000, 0b00100000,  // +
    0b00001000, 0b00010000,  // ,
    0b00100000, 0b00100000, 0b00100000,  // -
    0b00001000,  // .
    0b00001000, 0b00110000, 0b01100000, 0b10000000,  // /
    0b01110000, 0b10001000, 0b01110000,  // 0
    0b01001000, 0b11111000, 0b00001000,  // 1
    0b01001000, 0b10011000, 0b10101000, 0b01001000,  // 2
    0b10101000, 0b10101000, 0b01010000,  // 3
    0b00110000, 0b01010000, 0b11111000, 0b00010000,  // 4
    0b11101000, 0b10101000, 0b10110000,  // 5
    0b01110000, 0b10101000, 0b10101000, 0b00010000,  // 6
    0b10000000, 0b10111000, 0b10100000, 0b11000000,  // 7
    0b01010000, 0b10101000, 0b10101000, 0b01010000,  // 8
    0b01000000, 0b10100000, 0b10101000, 0b01110000,  // 9
    0b01010000,  // :
    0b00001000, 0b01010000,  // ;
    0b00100000, 0b01010000, 0b10001000,  // <
    0b01010000, 0b01010000, 0b01010000,  // =
    0b10001000, 0b01010000, 0b00100000,  // >
    0b01000000, 0b10000000, 0b10011000, 0b01100000,  // ?
    0b01110000, 0b10000000, 0b10110000, 0b10101000, 0b11110000,  // @
    0b01111000, 0b10100000, 0b10100000, 0b01111000,  // A
    0b11111000, 0b10101000, 0b01010000,  // B
    0b01110000, 0b10001000, 0b10001000, 0b01010000,  // C
    0b11111000, 0b10001000, 0b01110000,  // D
    0b11111000, 0b10101000, 0b10001000,  // E
    0b11111000, 0b10100000, 0b10100000,  // F
    0b01110000, 0b10001000, 0b10011000, 0b01010000,  // G
    0b11111000, 0b00100000, 0b00100000, 0b11111000,  // H
    0b10001000, 0b11111000, 0b10001000,  // I
    0b10010000, 0b10001000, 0b11110000,  // J
    0b11111000, 0b00100000, 0b01010000, 0b10001000,  // K
    0b11111000, 0b00001000, 0b00001000,  // L
    0b11111000, 0b01000000, 0b00100000, 0b01000000, 0b11111000,  // M
    0b11111000, 0b01000000, 0b00100000, 0b00010000, 0b11111000,  // N
    0b01110000, 0b10001000, 0b10001000, 0b01110000,  // O
    0b11111000, 0b10100000, 0b01000000,  // P
    0b01110000, 0b10001000, 0b10001000, 0b10010000, 0b01101000,  // Q
    0b11111000, 0b10100000, 0b01011000,  // R
    0b01001000, 0b10101000, 0b10101000, 0b10010000,  // S
    0b10000000, 0b11111000, 0b10000000,  // T
    0b11110000, 0b00001000, 0b00001000, 0b11110000,  // U
    0b11000000, 0b00110000, 0b00001000, 0b00110000, 0b11000000,  // V
    0b11110000, 0b00001000, 0b00110000, 0b00001000, 0b11110000,  // W
    0b11011000, 0b00100000, 0b11011000,  // X
    0b11000000, 0b00111000, 0b11000000,  // Y
    0b10011000, 0b10101000, 0b10101000, 0b11001000,  // Z
    0b11111000, 0b10001000,  // [
    0b10000000, 0b01100000, 0b00110000, 0b00001000,  // \ Do not leave backslash at the end of the line
    0b10001000, 0b11111000,  // ]
    0b01000000, 0b10000000, 0b01000000,  // ^
    0b00001000, 0b00001000, 0b00001000,  // _
};

int FONT_5X4_END [] = {
    1,   2,   5,  10,  14,  19,  23,  24,
   26,  28,  31,  36,  38,  41,  42,  46,
   49,  52,  56,  59,  63,  66,  70,  74,
   78,  82,  83,  85,  88,  91,  94,  98,
  103, 107, 110, 114, 117, 120, 123, 127,
  131, 134, 137, 141, 144, 149, 154, 158,
  161, 166, 169, 173, 176, 180, 185, 190,
  193, 196, 200, 202, 206, 208, 211, 214
};

#endif  // __FONT5X4_H
