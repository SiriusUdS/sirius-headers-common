#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t isTestMode : 1;
    uint16_t isUsbMode : 1;
    uint16_t RESERVED : 14;
  }
  bits;
  uint16_t value;
}
EngineStatus;