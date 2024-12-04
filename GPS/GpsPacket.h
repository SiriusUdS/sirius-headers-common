#pragma once

#include "GpsData.h"
#include "../TelecommunicationVariables.h"

#define GPS_AMOUNT 2

typedef union {
  struct {
    TelecommunicationHeader header;
    GpsData rawData[GPS_AMOUNT];
  }
  packet;
  uint8_t data[HEADER_SIZE_BYTE + (GPS_AMOUNT * GPS_DATA_SIZE_BYTE)];
}
GpsPacket;