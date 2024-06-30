#ifndef PINS_H
#define PINS_H

// Waveshare RP2040 PiZero pinout
// dvi output uses gpio pins 22-29
// dvi data bus uses GPIO 2,3,16
// sd card uses 18-21
// GPIO USB uses 6-7
// no detection of VBUS!
// no GPIO-LED

#define PIN_BUZZER       9
#define PIN_PS2_DATA     4
#define PIN_PS2_CLOCK    5
#define PIN_DEFAULTS    10
// unfortunately no LED on RP2040 PiZero
// #define PIN_LED         25
// not connected in RP2040, also we always asume HDMI
// #define PIN_HDMI_DETECT 28

#define PIN_UART_ID   uart0
#define PIN_UART_TX   12     // uart0: 0, 12, 16, 28  uart1: 4,  8, 20, 24
#define PIN_UART_RX   13     // uart0: 1, 13, 17, 29  uart1: 5,  9, 21, 25
#define PIN_UART_CTS  14     // uart0: 2, 14, 18      uart1: 6, 10, 22, 26
#define PIN_UART_RTS  15     // uart0: 3, 15, 19      uart1: 7, 11  23, 27

#endif
