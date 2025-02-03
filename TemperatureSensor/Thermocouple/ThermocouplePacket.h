#pragma once

#include "ThermocoupleData.h"
#include "ThermocoupleStatus.h"
#include "ThermocoupleErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define THERMOCOUPLE_AMOUNT 8

typedef union {
  struct {
    ThermocoupleData data;

    ThermocoupleErrorStatus errorStatus;
    ThermocoupleStatus      status;

    uint32_t                timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
ThermocouplePacketData;

typedef union {
  struct {
    TelecommunicationHeader header;
    ThermocouplePacketData  rawData[THERMOCOUPLE_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
ThermocouplePacket;