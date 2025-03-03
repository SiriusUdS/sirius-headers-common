#pragma once

#include "ThermistanceData.h"
#include "ThermistanceStatus.h"
#include "ThermistanceErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define THERMISTANCE_AMOUNT 8

typedef union {
  struct {
    ThermistanceData        data;

    ThermistanceErrorStatus errorStatus;
    ThermistanceStatus      status;

    uint32_t                timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
ThermistancePacketData;

typedef union {
  struct {
    TelecommunicationHeader header;
    ThermistancePacketData  rawData[THERMISTANCE_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
ThermistancePacket;