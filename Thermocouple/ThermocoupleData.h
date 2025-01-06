#pragma once

#include "ThermocoupleStatus.h"

#define THERMOCOUPLE_DATA_SIZE_BYTE 10

typedef struct {
  uint16_t  temperature;
  uint8_t   type;
  uint8_t   padding;
}
ThermocoupleInformation;

typedef union {
  struct {
    ThermocoupleInformation info;
    ThermocoupleStatus      status;
    uint32_t                timeStamp_ms;
  };
  
  uint8_t values[THERMOCOUPLE_DATA_SIZE_BYTE];
}
ThermocoupleData;