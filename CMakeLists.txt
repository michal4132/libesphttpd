set (libesphttpd_SOURCES "core/auth.c"
                         "core/httpd-freertos.c"
                         "core/httpd.c"
                         "core/sha1.c"
                         "core/libesphttpd_base64.c"
                         "util/cgiflash.c"
                         "util/cgiredirect.c"
                         "util/cgiwebsocket.c"
                         "util/cgiredirect.c"
                         "util/esp32_flash.c"
                         "util/esp_httpd_vfs.c" )

set (libesphttpd_PRIV_INCLUDE_DIRS "core"
                                   "util")
idf_component_register(
    SRCS "${libesphttpd_SOURCES}"
    INCLUDE_DIRS "include"
    PRIV_INCLUDE_DIRS "${libesphttpd_PRIV_INCLUDE_DIRS}"
    REQUIRES "app_update"
             "json"
             "spi_flash"
             "wpa_supplicant"
)

target_compile_definitions (${COMPONENT_TARGET} PUBLIC -DFREERTOS)
