#pragma once

#include "AccelerometerData.h"
#include "AccelerometerStatus.h"
#include "AccelerometerErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define ACCELEROMETER_AMOUNT 1

typedef union {
  struct {
    AccelerometerData         axis;

    AccelerometerErrorStatus  errorStatus;
    AccelerometerStatus       status;
    uint32_t                  timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
AccelerometerPacketData;

typedef union {
  struct {
    TelecommunicationHeader header;
    AccelerometerPacketData rawData[ACCELEROMETER_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
AccelerometerPacket;