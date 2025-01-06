#pragma once

#include <stdint.h>

#define TELECOMMUNICATION_STATUS_SIZE_BYTE 2

typedef union {
  struct {
    uint16_t notInitialized : 1;
    uint16_t invalidFunctionPointer : 1;
    uint16_t reserved : 14;
  }
  bits;
  uint16_t value;
}
TelecommunicationStatus;