#pragma once

#include <stdint.h>

typedef union {
  struct {
    uint16_t isOpening : 1;
    uint16_t isClosing : 1;
    uint16_t RESERVED : 14;
  }
  bits;

  uint16_t value;
}
ValveStatus;