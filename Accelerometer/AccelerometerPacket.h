#pragma once

#include "AccelerometerData.h"
#include "../Telecommunication/TelecommunicationHeader.h"

#define ACCELEROMETER_AMOUNT 1

typedef union {
  struct {
    TelecommunicationHeader header;
    AccelerometerData       rawData[ACCELEROMETER_AMOUNT];
  }
  packet;
  uint8_t data[HEADER_SIZE_BYTE + (ACCELEROMETER_AMOUNT * ACCELEROMETER_DATA_SIZE_BYTE)];
}
AccelerometerPacket;