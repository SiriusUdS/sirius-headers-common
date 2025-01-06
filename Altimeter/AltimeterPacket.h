#pragma once

#include "AltimeterData.h"
#include "../Telecommunication/TelecommunicationHeader.h"

#define ACCELEROMETER_AMOUNT 1

typedef union {
  struct {
    TelecommunicationHeader header;
    AltimeterData           rawData[ACCELEROMETER_AMOUNT];
  }
  packet;
  uint8_t data[HEADER_SIZE_BYTE + (ACCELEROMETER_AMOUNT * ALTIMETER_DATA_SIZE_BYTE)];
}
AccelerometerPacket;