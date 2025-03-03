#pragma once

#include "TelecommunicationStatus.h"
#include "TelecommunicationErrorStatus.h"

#include "TelecommunicationHeader.h"

#define THERMOCOUPLE_AMOUNT 8

typedef union {
  struct {
    TelecommunicationHeader       header;

    TelecommunicationErrorStatus  errorStatus;
    TelecommunicationStatus       status;
  }
  packet;

  uint8_t data[sizeof(packet)];
}
TelecommunicationPacket;