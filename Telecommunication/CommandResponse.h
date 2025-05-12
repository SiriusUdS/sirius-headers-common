#pragma once

#include <stdint.h>

#define COMMAND_RESPONSE_TYPE_CODE 0x52535

typedef union {
  struct {
    uint32_t type         : 20;
    uint32_t commandIndex : 4;
    uint32_t boardId      : 3;
    uint32_t response     : 5;
  }
  bits;

  uint32_t value;
}
CommandResponseHeader;

typedef struct {
  CommandResponseHeader header;
  uint32_t              crc;
}
CommandResponseFields;

typedef union {
  CommandResponseFields fields;

  uint8_t data[sizeof(CommandResponseFields)];
}
CommandResponse;