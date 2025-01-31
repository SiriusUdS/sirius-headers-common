#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t initialized : 1;
    uint16_t invalidFunctionPointer : 1;
    uint16_t notConnected : 1;
    uint16_t RESERVED : 1;

    uint16_t PWMValueAdjustedMin : 1;
    uint16_t PWMValueAdjustedMax : 1;
    uint16_t RESERVED : 10;
  }
  bits;
  uint16_t value;
}
ValveStatus;