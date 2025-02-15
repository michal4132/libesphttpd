#ifndef __CGIFLASH_H__
#define __CGIFLASH_H__

#include "httpd.h"

#define CGIFLASH_TYPE_FW 0
#define CGIFLASH_TYPE_ESPFS 1

typedef struct {
	int type;
	int fw1Pos;
	int fw2Pos;
	int fwSize;
} CgiUploadFlashDef;

CgiStatus cgiGetFirmwareNext(HttpdConnData *connData);
CgiStatus cgiUploadFirmware(HttpdConnData *connData);
CgiStatus cgiRebootFirmware(HttpdConnData *connData);
CgiStatus cgiSetBoot(HttpdConnData *connData);
CgiStatus cgiEraseFlash(HttpdConnData *connData);
CgiStatus cgiGetFlashInfo(HttpdConnData *connData);

#endif
