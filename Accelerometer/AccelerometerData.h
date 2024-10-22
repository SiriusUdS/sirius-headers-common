#pragma once

#ifdef EMBEDDED
  #include <stdint.h>
#else
  #include <cstdint.h>
#endif

typedef struct {
  uint16_t x;
  uint16_t y;
  uint16_t z;
}
AccelerometerAxis;

typedef union {
  struct {
    AccelerometerAxis accelerometerAxis;
    uint32_t timeStamp_ms;
  };
  
  uint16_t accelerometerValues[sizeof(AccelerometerAxis) + (sizeof(timeStamp_ms) / sizeof(uint32_t))];
}
AccelerometerData;