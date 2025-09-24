#ifndef __SCANCODES_H_
#define __SCANCODES_H_

#define SCANCODE_EXTENDED		0xE0
#define SCANCODE_EXTENDED_1	0xE1
#define SCANCODE_RELEASED		0xF0

// Extended codes are going as scancode+0x100

// A-Z
#define KEY_A		0x1C
#define KEY_B		0x32
#define KEY_C		0x21
#define KEY_D		0x23
#define KEY_E		0x24
#define KEY_F		0x2B
#define KEY_G		0x34
#define KEY_H		0x33
#define KEY_I		0x43
#define KEY_J		0x3B
#define KEY_K		0x42
#define KEY_L		0x4B
#define KEY_M		0x3A
#define KEY_N		0x31
#define KEY_O		0x44
#define KEY_P		0x4D
#define KEY_Q		0x15
#define KEY_R		0x2D
#define KEY_S		0x1B
#define KEY_T		0x2C
#define KEY_U		0x3C
#define KEY_V		0x2A
#define KEY_W		0x1D
#define KEY_X		0x22
#define KEY_Y		0x35
#define KEY_Z		0x1A

// 0-9
#define KEY_0		0x45
#define KEY_1		0x16
#define KEY_2		0x1E
#define KEY_3		0x26
#define KEY_4		0x25
#define KEY_5		0x2E
#define KEY_6		0x36
#define KEY_7		0x3D
#define KEY_8		0x3E
#define KEY_9		0x46

// Others
#define KEY_ACCENT		0x0E	// '`'
#define KEY_MINUS			0x4E	// '-'
#define KEY_EQUALS		0x55	// '='
#define KEY_BACK_SLASH	0x5D	// '\'
#define KEY_SPACE			0x29	// ' '
#define KEY_TAB			0x0D	// '\t'
#define KEY_L_BRACKET	0x54	// '['
#define KEY_R_BRACKET	0x5B	// ']'
#define KEY_SEMICOLON	0x4C	// ';'
#define KEY_QUOTE			0x52	// '''
#define KEY_COMMA			0x41	// ','
#define KEY_PERIOD		0x49	// '.'
#define KEY_SLASH			0x4A	// '/'

// Control
#define KEY_BACKSPACE	0x66
#define KEY_CAPS			0x58
#define KEY_SCROLL		0x7E
#define KEY_NUM			0x77
#define KEY_L_SHIFT		0x12
#define KEY_R_SHIFT		0x59
#define KEY_L_CTRL		0x14
#define KEY_R_CTRL		0x114
#define KEY_L_ALT			0x11
#define KEY_R_ALT			0x111
#define KEY_ENTER			0x5A
#define KEY_ESC			0x76
#define KEY_INSERT		0x170
#define KEY_DELETE		0x171
#define KEY_HOME			0x16C
#define KEY_END			0x169
#define KEY_PGUP			0x17D
#define KEY_PGDN			0x17A
#define KEY_UP				0x175
#define KEY_DOWN			0x172
#define KEY_LEFT			0x16B
#define KEY_RIGHT			0x174
#define KEY_PSCR1 		0x112
#define KEY_PSCR2 		0x17c

// F1..F12
#define KEY_F1				0x05
#define KEY_F2				0x06
#define KEY_F3				0x04
#define KEY_F4				0x0C
#define KEY_F5				0x03
#define KEY_F6				0x0B
#define KEY_F7				0x83
#define KEY_F8				0x0A
#define KEY_F9				0x01
#define KEY_F10			0x09
#define KEY_F11			0x78
#define KEY_F12			0x07

// Keypad
#define KEY_NUMLOCK		0x77
#define KEY_KP_SLASH		0x14A
#define KEY_KP_STAR		0x7C
#define KEY_KP_MINUS		0x7B
#define KEY_KP_PLUS		0x79
#define KEY_KP_ENTER		0x15A
#define KEY_KP_PERIOD	0x71
#define KEY_KP_0			0x70
#define KEY_KP_1			0x69
#define KEY_KP_2			0x72
#define KEY_KP_3			0x7A
#define KEY_KP_4			0x6B
#define KEY_KP_5			0x73
#define KEY_KP_6			0x74
#define KEY_KP_7			0x6C
#define KEY_KP_8			0x75
#define KEY_KP_9			0x7D

#endif	// __SCANCODES_H_

