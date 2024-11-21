#pragma once

#ifdef EMBEDDED
  #include <stdint.h>
#else
  #include <cstdint.h>
#endif

typedef union {
  struct {
    uint16_t reserved : 16;
  }
  bits;
  uint16_t value;
}
GyroscopeStatus;