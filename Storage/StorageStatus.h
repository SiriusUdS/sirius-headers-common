#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint8_t state : 3;
    uint8_t isPluggedIn : 1;
    uint8_t writeEnabled : 1;
    uint8_t RESERVED : 3;
  }
  bits;

  uint8_t value;
}
StorageStatus;
