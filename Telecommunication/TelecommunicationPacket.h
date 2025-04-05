#pragma once

#include "TelecommunicationStatus.h"
#include "TelecommunicationErrorStatus.h"

#include "TelecommunicationHeader.h"

#define THERMOCOUPLE_AMOUNT 8

typedef struct {
  TelecommunicationHeader       header;

  TelecommunicationErrorStatus  errorStatus;
  TelecommunicationStatus       status;
}
TelecommunicationPacketFields;

typedef union {
  TelecommunicationPacketFields fields;

  uint8_t data[sizeof(TelecommunicationPacketFields)];
}
TelecommunicationPacket;