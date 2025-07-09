#pragma once

#include <stdint.h>

#define BOARD_COMMAND_TYPE_CODE 0x424F4
#define BOARD_COMMAND_BROADCAST_TYPE_CODE 0x5A49D

#define BOARD_COMMAND_CODE_ACK 0b00000
#define BOARD_COMMAND_CODE_UNSAFE 0b00001
#define BOARD_COMMAND_CODE_SAFE 0b10001
#define BOARD_COMMAND_CODE_ABORT 0b11111
#define BOARD_COMMAND_CODE_RESET 0b11110

#define ENGINE_COMMAND_CODE_ARM_VALVE 0b00010
#define ENGINE_COMMAND_CODE_ARM_IGNITER 0b00011

#define ENGINE_COMMAND_CODE_OPEN_VALVE 0b01010
#define ENGINE_COMMAND_CODE_CLOSE_VALVE 0b01001
#define ENGINE_COMMAND_CODE_FIRE_IGNITER 0b01011

#define FILLING_STATION_COMMAND_CODE_ALLOW_FILL 0b00010
#define FILLING_STATION_COMMAND_CODE_ALLOW_DUMP 0b00011

#define FILLING_STATION_COMMAND_CODE_OPEN_FILL_VALVE_PCT 0b01010
#define FILLING_STATION_COMMAND_CODE_OPEN_DUMP_VALVE_PCT 0b01011

typedef union {
  struct {
    uint32_t type         : 20;
    uint32_t commandIndex : 4;
    uint32_t boardId      : 3;
    uint32_t commandCode  : 5;
  }
  bits;

  uint32_t value;
}
BoardCommandHeader;

typedef struct {
  BoardCommandHeader header;
  uint32_t           value;
  uint8_t            padding[32];
  uint32_t           crc;
}
BoardCommandFields;

typedef union {
  BoardCommandFields fields;

  uint32_t data32[sizeof(BoardCommandFields) / sizeof(uint32_t)];

  uint8_t data[sizeof(BoardCommandFields)];
}
BoardCommand;