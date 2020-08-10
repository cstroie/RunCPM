#ifndef ESP8266_H
#define ESP8266_H

#if defined(ESP8266)
SdFat SD;
#define SDMHZ 25
#define LED LED_BUILTIN
#define LEDinv 1
#define BOARD "ESP8266"
#define board_esp8266
#define board_digital_io

uint8 esp8266bdos(uint16 dmaaddr) {
  return(0x00);
}

#endif

#endif
