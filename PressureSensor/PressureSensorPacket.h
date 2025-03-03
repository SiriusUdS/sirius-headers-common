#pragma once

#include "PressureSensorData.h"
#include "PressureSensorStatus.h"
#include "PressureSensorErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define PRESSURE_SENSOR_AMOUNT 1

typedef union {
  struct {
    PressureSensorData    data;

    PressureSensorStatus  status;

    uint32_t              timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
PressureSensorPacketData;

typedef union {
  struct {
    TelecommunicationHeader   header;
    PressureSensorPacketData  rawData[PRESSURE_SENSOR_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
PressureSensorPacket;