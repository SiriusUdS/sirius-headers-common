#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t testing : 1;
    uint16_t RESERVED : 15;
  }
  bits;
  uint16_t value;
}
EngineStatus;