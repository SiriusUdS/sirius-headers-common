#pragma once

#include "TelecommunicationStatus.h"
#include "TelecommunicationHeader.h"

#define THERMOCOUPLE_AMOUNT 8

typedef union {
  struct {
    TelecommunicationHeader header;
    TelecommunicationStatus rawData;
  }
  packet;
  uint8_t data[HEADER_SIZE_BYTE + TELECOMMUNICATION_STATUS_SIZE_BYTE];
}
ThermocouplePacket;