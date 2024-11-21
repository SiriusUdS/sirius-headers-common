#pragma once

#ifdef EMBEDDED
  #include <stdint.h>
#else
  #include <cstdint.h>
#endif

typedef struct {
  uint16_t reserved : 16;
}
AccelerometerStatus;