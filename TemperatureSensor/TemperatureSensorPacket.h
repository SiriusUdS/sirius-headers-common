#pragma once

#include "TemperatureSensorData.h"
#include "TemperatureSensorStatus.h"
#include "TemperatureSensorErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define THERMISTANCE_AMOUNT 8

typedef union {
  struct {
    TemperatureSensorData        data;

    TemperatureSensorErrorStatus errorStatus;
    TemperatureSensorStatus      status;

    uint32_t                     timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
TemperatureSensorPacketData;

typedef union {
  struct {
    TelecommunicationHeader header;
    TemperatureSensorPacketData  rawData[THERMISTANCE_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
TemperatureSensorPacket;