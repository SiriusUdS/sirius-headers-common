#pragma once

#include "PressureSensorStatus.h"

#define PRESSURE_SENSOR_DATA_SIZE_BYTE 8

typedef struct {
  uint16_t value;
}
PressureSensorValue;

typedef union {
  struct {
    PressureSensorValue   pressure;
    PressureSensorStatus  status;
    uint32_t              timeStamp_ms;
  };
  
  uint8_t values[PRESSURE_SENSOR_DATA_SIZE_BYTE];
}
PressureSensorData;