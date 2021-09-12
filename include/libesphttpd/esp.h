// Combined include file for esp8266 and esp32

#ifdef CONFIG_IDF_TARGET_ESP32
#define ESP32 1
#endif

#ifdef CONFIG_IDF_TARGET_ESP8266
#define ESP8266 1
#endif

#ifdef ESP_PLATFORM
#define FREERTOS 1

#include "sdkconfig.h"
#define HTTPD_STACKSIZE CONFIG_ESPHTTPD_STACK_SIZE
#include "stdint.h"
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;

#define ICACHE_RODATA_ATTR
#endif


#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef linux

#ifdef FREERTOS
#include <stdint.h>
#include "esp_types.h"
#include "esp_attr.h"
#include "esp_spi_flash.h"

#else
#include <c_types.h>
#include <ip_addr.h>
#include <espconn.h>
#include <ets_sys.h>
#include <gpio.h>
#include <mem.h>
#include <osapi.h>
#include <user_interface.h>
#include <upgrade.h>
#endif

#endif // #ifndef linux

#include "platform.h"

#ifndef linux
#include "espmissingincludes.h"
#endif
