#pragma once

#include "ValveStatus.h"
#include "ValveErrorStatus.h"

#include "ValveData.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define THERMOCOUPLE_AMOUNT 8

typedef union {
  struct {
    ValveData data;

    ValveErrorStatus errorStatus;
    ValveStatus      status;

    uint32_t                timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
ValvePacketData;

typedef union {
  struct {
    TelecommunicationHeader header;
    ValvePacketData         rawData[THERMOCOUPLE_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
ValvePacket;