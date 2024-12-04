#pragma once

#include "PressureSensorData.h"
#include "../TelecommunicationVariables.h"

#define PRESSURE_SENSOR_AMOUNT 1

typedef union {
  struct {
    TelecommunicationHeader header;
    PressureSensorData rawData[PRESSURE_SENSOR_AMOUNT];
  }
  packet;
  uint8_t data[HEADER_SIZE_BYTE + (PRESSURE_SENSOR_AMOUNT * PRESSURE_SENSOR_DATA_SIZE_BYTE)];
}
PressureSensorPacket;