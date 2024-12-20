#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t initialized : 1;
    uint16_t reserved : 15;
  }
  bits;
  uint16_t value;
}
RocketStatus;