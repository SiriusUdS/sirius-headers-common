#pragma once

#include "AccelerometerStatus.h"

typedef struct {
  uint16_t x;
  uint16_t y;
  uint16_t z;
}
AccelerometerAxis;

typedef union {
  struct {
    AccelerometerAxis axis;
    AccelerometerStatus status;
    uint32_t timeStamp_ms;
  };
  
  uint16_t values[(sizeof(AccelerometerAxis) + sizeof(AccelerometerStatus) + sizeof(timeStamp_ms)) / sizeof(uint16_t)];
}
AccelerometerData;