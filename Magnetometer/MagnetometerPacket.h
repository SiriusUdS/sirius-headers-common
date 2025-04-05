#pragma once

#include "MagnetometerData.h"
#include "MagnetometerStatus.h"
#include "MagnetometerErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define MAGNETOMETER_AMOUNT 2

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
  TelecommunicationHeader header;
  MagnetometerData        rawData[MAGNETOMETER_AMOUNT];
}
MagnetometerPacketFields;

typedef union {
  MagnetometerPacketFields fields;

  uint8_t data[sizeof(MagnetometerPacketFields)];
}
MagnetometerPacket;