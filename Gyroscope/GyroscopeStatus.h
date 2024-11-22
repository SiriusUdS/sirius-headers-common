#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t reserved : 16;
  }
  bits;
  uint16_t value;
}
GyroscopeStatus;