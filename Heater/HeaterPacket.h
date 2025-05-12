#pragma once

#include "HeaterStatus.h"
#include "HeaterErrorStatus.h"

#include "../Telecommunication/TelemetryHeader.h"

typedef struct {
  HeaterErrorStatus errorStatus;
  HeaterStatus      status;

  uint32_t              timeStamp_ms;
}
HeaterPacketDataMembers;

typedef union {
  HeaterPacketDataMembers members;
  
  uint8_t values[sizeof(HeaterPacketDataMembers)];
}
HeaterPacketData;

typedef struct {
  TelemetryHeader header;
  HeaterPacketData      rawData;
}
HeaterPacketFields;

typedef union {
  HeaterPacketFields fields;

  uint8_t data[sizeof(HeaterPacketFields)];
}
HeaterPacket;