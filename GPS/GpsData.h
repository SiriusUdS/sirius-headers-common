#pragma once

#include "GpsStatus.h"

#define GPS_DATA_SIZE_BYTE 32

typedef struct {
  uint32_t position_s;
  uint8_t direction;
}
GpsCoord;

typedef union {
  struct {
    GpsCoord latitude;
    GpsCoord longitude;
    GpsStatus status;
    uint32_t timeStamp_ms;
  };
  
  uint16_t values[GPS_DATA_SIZE_BYTE];
}
GpsData;