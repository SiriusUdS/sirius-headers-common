#pragma once

#include <stdint.h>

#include "TelemetryHeader.h"
#include "../Engine/EngineSensors.h"

typedef struct {
  TelemetryHeader header;
  uint32_t timestamp_ms;
  uint16_t adcValues[ENGINE_ADC_CHANNEL_AMOUNT];
  uint32_t crc;
}
EngineTelemetryPacketFields;

typedef union {
  EngineTelemetryPacketFields fields;

  uint8_t data[sizeof(EngineTelemetryPacketFields)];
}
EngineTelemetryPacket;

typedef struct {
  TelemetryHeader header;
  uint32_t timestamp_ms;
  uint16_t engineStatus;
  uint16_t engineErrorStatus;
  uint16_t valvesStatus[ENGINE_VALVE_AMOUNT];
  uint16_t temperatureSensorErrorStatus[ENGINE_TEMPERATURE_SENSOR_AMOUNT];
  uint16_t pressureSensorErrorStatus[ENGINE_PRESSURE_SENSOR_AMOUNT];
  uint32_t crc;
}
EngineStatusPacketFields;

typedef union {
  EngineStatusPacketFields fields;

  uint8_t data[sizeof(EngineStatusPacketFields)];
}
EngineStatusPacket;