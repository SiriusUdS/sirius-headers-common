#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t notInitialized         : 1;
    uint16_t nullFunctionPointer    : 1;
    uint16_t defaultFunctionCalled  : 1;
    uint16_t notConnected           : 1;

    uint16_t belowMinValue    : 1;
    uint16_t aboveMaxValue    : 1;
    uint16_t isShortCircuited : 1;

    uint16_t RESERVED : 9;
  }
  bits;
  
  uint16_t value;
}
ADCErrorStatus;