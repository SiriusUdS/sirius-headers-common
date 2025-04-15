#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t isIdle   : 1;
    uint16_t closedSwitchHigh : 1;
    uint16_t openedSwitchHigh : 1;
    uint16_t state : 3;
    uint16_t RESERVED : 10;
  }
  bits;

  uint16_t value;
}
ValveStatus;