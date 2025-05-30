#pragma once

#include <stdint.h>

#include "TelemetryHeader.h"
#include "../Engine/EngineSensors.h"
#include "../FillingStation/FillingStationSensors.h"

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
  uint16_t status;
  uint16_t errorStatus;
  uint16_t valveStatus[ENGINE_VALVE_AMOUNT];
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

// Filling station
typedef struct {
  TelemetryHeader header;
  uint32_t timestamp_ms;
  uint16_t adcValues[FILLING_STATION_ADC_CHANNEL_AMOUNT];
  uint32_t crc;
}
FillingStationTelemetryPacketFields;

typedef union {
  FillingStationTelemetryPacketFields fields;

  uint8_t data[sizeof(FillingStationTelemetryPacketFields)];
}
FillingStationTelemetryPacket;

typedef struct {
  TelemetryHeader header;
  uint32_t timestamp_ms;
  uint16_t status;
  uint16_t errorStatus;
  uint16_t valveStatus[FILLING_STATION_VALVE_AMOUNT];
  uint16_t temperatureSensorErrorStatus[FILLING_STATION_TEMPERATURE_SENSOR_AMOUNT];
  uint16_t pressureSensorErrorStatus[FILLING_STATION_PRESSURE_SENSOR_AMOUNT];
  uint16_t loadCellErrorStatus[FILLING_STATION_LOAD_CELL_AMOUNT];
  uint32_t crc;
}
FillingStationStatusPacketFields;

typedef union {
  FillingStationStatusPacketFields fields;

  uint8_t data[sizeof(FillingStationStatusPacketFields)];
}
FillingStationStatusPacket;