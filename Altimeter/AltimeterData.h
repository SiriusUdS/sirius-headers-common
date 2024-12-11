#pragma once

#include "AltimeterStatus.h"

#define ALTIMETER_DATA_SIZE_BYTE 8

typedef struct {
  uint16_t value;
}
AltimeterAltitude;

typedef union {
  struct {
    AltimeterAltitude altitude;
    AltimeterStatus status;
    uint32_t timeStamp_ms;
  };
  
  uint8_t values[ALTIMETER_DATA_SIZE_BYTE];
}
AltimeterData;