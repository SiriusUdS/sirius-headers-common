#pragma once

#include "MagnetometerData.h"
#include "MagnetometerStatus.h"
#include "MagnetometerErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define MAGNETOMETER_AMOUNT 2

typedef union {
  struct {
    MagnetometerData        axis;

    MagnetometerErrorStatus errorStatus;
    MagnetometerStatus      status;

    uint32_t                timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
MagnetometerPacketData;

typedef union {
  struct {
    TelecommunicationHeader header;
    MagnetometerData        rawData[MAGNETOMETER_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
MagnetometerPacket;