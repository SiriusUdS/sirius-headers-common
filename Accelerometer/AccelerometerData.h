#pragma once

#include "AccelerometerStatus.h"

#define ACCELEROMETER_DATA_SIZE_BYTE 12

typedef struct {
  uint16_t x;
  uint16_t y;
  uint16_t z;
}
AccelerometerAxis;

typedef union {
  struct {
    AccelerometerAxis   axis;
    AccelerometerStatus status;
    uint32_t            timeStamp_ms;
  };
  
  uint8_t values[ACCELEROMETER_DATA_SIZE_BYTE];
}
AccelerometerData;