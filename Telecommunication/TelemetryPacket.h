#pragma once

#include <stdint.h>

#include "TelemetryHeader.h"
#include "../Engine/EngineSensors.h"
#include "../Engine/EngineStatus.h"
#include "../Engine/EngineErrorStatus.h"
#include "../Valve/ValveStatus.h"
#include "../FillingStation/FillingStationStatus.h"
#include "../FillingStation/FillingStationErrorStatus.h"
#include "../FillingStation/FillingStationSensors.h"
#include "../GSControl/GSControlStatus.h"
#include "../GSControl/GSControlErrorStatus.h"

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
  EngineStatus status;
  EngineErrorStatus errorStatus;
  ValveStatus valveStatus[ENGINE_VALVE_AMOUNT];
  uint8_t padding[24];
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
  FillingStationStatus status;
  FillingStationErrorStatus errorStatus;
  ValveStatus valveStatus[FILLING_STATION_VALVE_AMOUNT];
  uint8_t padding[28];
  uint32_t crc;
}
FillingStationStatusPacketFields;

typedef union {
  FillingStationStatusPacketFields fields;

  uint8_t data[sizeof(FillingStationStatusPacketFields)];
}
FillingStationStatusPacket;

// GS Control
typedef struct {
  TelemetryHeader header;
  uint32_t timestamp_ms;
  GSControlStatus status;
  GSControlErrorStatus errorStatus;
  uint8_t padding[26];
  uint32_t crc;
}
GSControlStatusPacketFields;

typedef union {
  GSControlStatusPacketFields fields;

  uint8_t data[sizeof(GSControlStatusPacketFields)];
}
GSControlStatusPacket;