#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t testModeOn : 1;
    uint16_t usbModeOn : 1;
    uint16_t fastModeOn : 1;
    uint16_t RESERVED : 13;
  }
  bits;
  uint16_t value;
}
EngineStatus;