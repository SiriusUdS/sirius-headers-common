#pragma once

#include "MagnetometerStatus.h"

#define MAGNETOMETER_DATA_SIZE_BYTE 12

typedef struct {
  uint16_t x;
  uint16_t y;
  uint16_t z;
}
MagnetometerAxis;

typedef union {
  struct {
    MagnetometerAxis    axis;
    MagnetometerStatus  status;
    uint32_t            timeStamp_ms;
  };
  
  uint8_t values[MAGNETOMETER_DATA_SIZE_BYTE];
}
MagnetometerData;