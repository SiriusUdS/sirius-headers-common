#pragma once

#include "TemperatureSensorData.h"
#include "TemperatureSensorStatus.h"
#include "TemperatureSensorErrorStatus.h"

#include "../Engine/EngineSensors.h"
#include "../FillingStation/FillingStationSensors.h"

#include "../Telecommunication/TelemetryHeader.h"

typedef struct {
  TemperatureSensorData data;

  TemperatureSensorErrorStatus errorStatus;
  TemperatureSensorStatus      status;
}
TemperatureSensorPacketData;

typedef struct {
  TelemetryHeader     header;
  TemperatureSensorPacketData rawData;

  uint32_t timeStamp_ms;
}
TemperatureSensorPacketFields;

typedef union {
  TemperatureSensorPacketFields fields;

  uint8_t data[sizeof(TemperatureSensorPacketFields)];
}
TemperatureSensorPacket;

/***************************************************/
/***             Engine - 8 Sensors              ***/
/***************************************************/

typedef struct {
  TelemetryHeader     header;
  TemperatureSensorPacketData rawData[ENGINE_TEMPERATURE_SENSOR_AMOUNT];

  uint32_t timeStamp_ms;
}
TemperatureSensorEnginePacketFields;

typedef union {
  TemperatureSensorEnginePacketFields fields;

  uint8_t data[sizeof(TemperatureSensorEnginePacketFields)];
}
TemperatureSensorEnginePacket;

/***************************************************/
/***         Filling Station - 8 Sensors         ***/
/***************************************************/

typedef struct {
  TelemetryHeader     header;
  TemperatureSensorPacketData rawData[FILLING_STATION_TEMPERATURE_SENSOR_AMOUNT];

  uint32_t timeStamp_ms;
}
TemperatureSensorFillingStationPacketFields;

typedef union {
  TemperatureSensorFillingStationPacketFields fields;

  uint8_t data[sizeof(TemperatureSensorFillingStationPacketFields)];
}
TemperatureSensorFillingStationPacket;