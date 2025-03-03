#pragma once

#include "GyroscopeData.h"
#include "GyroscopeStatus.h"
#include "GyroscopeErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define GYROSCOPE_AMOUNT 2

typedef union {
  struct {
    GyroscopeAxis         data;

    GyroscopeErrorStatus  errorStatus;
    GyroscopeStatus       status;

    uint32_t              timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
GyroscopeData;

typedef union {
  struct {
    TelecommunicationHeader header;
    GyroscopeData           rawData[GYROSCOPE_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
GyroscopePacket;