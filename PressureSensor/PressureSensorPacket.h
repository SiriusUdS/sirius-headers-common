#pragma once

#include "PressureSensorData.h"
#include "PressureSensorStatus.h"
#include "PressureSensorErrorStatus.h"

#include "../Telecommunication/TelemetryHeader.h"

typedef struct {
  PressureSensorData data;

  PressureSensorStatus      status;
  PressureSensorErrorStatus errorStatus;

  uint32_t timeStamp_ms;
}
PressureSensorData;

typedef struct {
  TelemetryHeader    header;
  PressureSensorData rawData;
  uint32_t           crc;
}
PressureSensorPacketFields;

typedef union {
  PressureSensorPacketFields fields;

  uint8_t data[sizeof(PressureSensorPacketFields)];
}
PressureSensorPacket;