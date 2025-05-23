#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t state : 3;
    uint16_t RESERVED : 13;
  }
  bits;
  
  uint16_t value;
}
TelecommunicationStatus;