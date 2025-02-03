#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t notInitialized : 1;
    uint16_t nullFunctionPointer : 1;
    uint16_t defaultFunctionCalled : 1;
    uint16_t notConnected : 1;

    uint16_t dutyCycleBelowMin : 1;
    uint16_t dutyCycleOverMax : 1;
    uint16_t RESERVED2 : 10;
  }
  bits;

  uint16_t value;
}
ValveErrorStatus;