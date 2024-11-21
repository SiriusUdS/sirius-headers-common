#pragma once

#include "GyroscopeStatus.h"

#define GYROSCOPE_DATA_SIZE_BYTE 12

typedef struct {
  uint16_t x;
  uint16_t y;
  uint16_t z;
}
GyroscopeAxis;

typedef union {
  struct {
    GyroscopeAxis axis;
    GyroscopeStatus status;
    uint32_t timeStamp_ms;
  };
  
  uint8_t values[GYROSCOPE_DATA_SIZE_BYTE];
}
GyroscopeData;

