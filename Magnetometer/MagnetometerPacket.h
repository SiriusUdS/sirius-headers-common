#pragma once

#include "MagnetometerData.h"
#include "MagnetometerStatus.h"
#include "MagnetometerErrorStatus.h"

#include "../Telecommunication/TelemetryHeader.h"

typedef struct {
  MagnetometerData        data;

  MagnetometerErrorStatus errorStatus;
  MagnetometerStatus      status;

  uint32_t                timeStamp_ms;
}
MagnetometerPacketDataMembers;

typedef union {
  MagnetometerPacketDataMembers members;
  
  uint8_t values[sizeof(MagnetometerPacketDataMembers)];
}
MagnetometerPacketData;

typedef struct {
  TelemetryHeader header;
  MagnetometerPacketData  rawData;
}
MagnetometerPacketFields;

typedef union {
  MagnetometerPacketFields fields;

  uint8_t data[sizeof(MagnetometerPacketFields)];
}
MagnetometerPacket;