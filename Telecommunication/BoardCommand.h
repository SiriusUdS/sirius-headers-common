#pragma once

#include <stdint.h>

#define BOARD_COMMAND_TYPE_CODE 0x424F4

typedef union {
  uint32_t type         : 20;
  uint32_t commandIndex : 4;
  uint32_t boardId      : 3;
  uint32_t commandCode  : 5;
}
BoardCommandHeader;

typedef struct {
  BoardCommandHeader header;
  uint32_t           crc;
}
BoardCommandFields;

typedef union {
  BoardCommandFields fields;

  uint8_t data[sizeof(BoardCommandFields)];
}
BoardCommand;