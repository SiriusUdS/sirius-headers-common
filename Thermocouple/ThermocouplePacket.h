#pragma once

#include "ThermocoupleData.h"
#include "../Telecommunication/TelecommunicationHeader.h"

#define THERMOCOUPLE_AMOUNT 8

typedef union {
  struct {
    TelecommunicationHeader header;
    ThermocoupleData        rawData[THERMOCOUPLE_AMOUNT];
  }
  packet;
  uint8_t data[HEADER_SIZE_BYTE + (THERMOCOUPLE_AMOUNT * THERMOCOUPLE_DATA_SIZE_BYTE)];
}
ThermocouplePacket;