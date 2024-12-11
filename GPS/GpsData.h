#pragma once

#include "GpsStatus.h"

#define GPS_DATA_SIZE_BYTE 16

typedef struct {
  int32_t value_s;
}
GpsCoordinateAxis;

typedef struct {
  GpsCoordinateAxis latitude;
  GpsCoordinateAxis longitude;
}
GpsCoordinate;

typedef union {
  struct {
    GpsCoordinate position;
    GpsStatus status;
    uint16_t padding;
    uint32_t timeStamp_ms;
  };
  
  uint8_t values[GPS_DATA_SIZE_BYTE];
}
GpsData;