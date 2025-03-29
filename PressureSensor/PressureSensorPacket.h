#pragma once

#include "PressureSensorData.h"
#include "PressureSensorStatus.h"
#include "PressureSensorErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define PRESSURE_SENSOR_AMOUNT 1

typedef struct {
  PressureSensorData    data;
  PressureSensorStatus  status;
  uint32_t              timeStamp_ms;
}
PressureSensorDataMembers;

typedef union {
  PressureSensorDataMembers members;
  
  uint8_t values[sizeof(PressureSensorDataMembers)];
}
PressureSensorPacketData;

typedef struct {
  TelecommunicationHeader   header;
  PressureSensorPacketData  rawData[PRESSURE_SENSOR_AMOUNT];
}
PressureSensorPacketFields;

typedef union {
  PressureSensorPacketFields fields;

  uint8_t data[sizeof(PressureSensorPacketFields)];
}
PressureSensorPacket;