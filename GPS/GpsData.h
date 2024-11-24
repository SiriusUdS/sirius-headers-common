#pragma once

#include "GpsStatus.h"

#define GPS_DATA_SIZE_BYTE 32

typedef union {
  struct {
    int32_t latitude_s;
    int32_t longitude_s;
    GpsStatus status;
    uint16_t padding;
    uint32_t timeStamp_ms;
  };
  
  uint8_t values[GPS_DATA_SIZE_BYTE];
}
GpsData;