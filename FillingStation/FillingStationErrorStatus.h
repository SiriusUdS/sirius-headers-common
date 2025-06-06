#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t notInitialized : 1;
    uint16_t invalidState : 1;
    uint16_t RESERVED : 14;
  }
  bits;
  
  uint16_t value;
}
FillingStationErrorStatus;