#pragma once

#include "ThermistanceStatus.h"

#define THERMISTANCE_DATA_SIZE_BYTE 8

typedef union {
  struct {
    uint16_t                temperature_adc12;
    ThermistanceStatus      status;
    uint32_t                timeStamp_ms;
  };
  
  uint8_t values[THERMISTANCE_DATA_SIZE_BYTE];
}
ThermocoupleData;