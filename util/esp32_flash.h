#ifndef __ESP32_FLASH_H__
#define __ESP32_FLASH_H__

int esp32flashGetUpdateMem(uint32_t *loc, uint32_t *size);
int esp32flashSetOtaAsCurrentImage();
int esp32flashRebootIntoOta();

#endif
