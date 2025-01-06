#pragma once

#include "MagnetometerData.h"
#include "../Telecommunication/TelecommunicationHeader.h"

#define MAGNETOMETER_AMOUNT 2

typedef union {
  struct {
    TelecommunicationHeader header;
    MagnetometerData        rawData[MAGNETOMETER_AMOUNT];
  }
  packet;
  uint8_t data[HEADER_SIZE_BYTE + (MAGNETOMETER_AMOUNT * MAGNETOMETER_DATA_SIZE_BYTE)];
}
MagnetometerPacket;