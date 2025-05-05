#pragma once

#include <stdint.h>

#define GS_COMMAND_TYPE_CODE 0x47834

typedef union {
  uint32_t type         : 20;
  uint32_t commandIndex : 4;
  uint32_t boardId      : 3;
  uint32_t commandCode  : 5;
}
GSCommandHeader;

typedef struct {
  GSCommandHeader header;
  uint32_t        crc;
}
GSCommandFields;

typedef union {
  GSCommandFields fields;

  uint8_t data[sizeof(GSCommandFields)];
}
GSCommand;