#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t state : 3;
    uint16_t isPluggedIn : 1;
    uint16_t RESERVED : 12;
  }
  bits;
  
  uint16_t value;
}
StorageStatus;