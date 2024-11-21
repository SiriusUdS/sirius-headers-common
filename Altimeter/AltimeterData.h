#pragma once

#include "AltimeterStatus.h"

#define ALTIMETER_DATA_SIZE_BYTE 8

typedef union {
  struct {
    uint16_t altitude;
    AltimeterStatus status;
    uint32_t timeStamp_ms;
  };
  
  uint16_t values[ALTIMETER_DATA_SIZE_BYTE];
}
AltimeterData;