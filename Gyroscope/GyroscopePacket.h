#pragma once

#include "GyroscopeData.h"
#include "../TelecommunicationVariables.h"

#define GYROSCOPE_AMOUNT 2

typedef union {
  struct {
    TelecommunicationHeader header;
    GyroscopeData rawData[GYROSCOPE_AMOUNT];
  }
  packet;
  uint8_t data[HEADER_SIZE_BYTE + (GYROSCOPE_AMOUNT * GYROSCOPE_DATA_SIZE_BYTE)];
}
GyroscopePacket;