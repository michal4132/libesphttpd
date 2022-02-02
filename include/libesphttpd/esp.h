#include "sdkconfig.h"

#ifdef CONFIG_IDF_TARGET_ESP32
#define ESP32 1
#endif

#ifdef CONFIG_IDF_TARGET_ESP8266
#define ESP8266 1
#endif

#ifdef ESPHTTPD_IRAM_OP
#define MEM_ATTR IRAM_ATTR
#else
#define MEM_ATTR 
#endif

#define HTTPD_STACKSIZE CONFIG_ESPHTTPD_STACK_SIZE

#include <stdint.h>
#include "esp_types.h"
#include "esp_attr.h"
#include "esp_spi_flash.h"

#include "string.h"
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
