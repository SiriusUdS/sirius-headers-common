#pragma once

#include "TelecommunicationStatus.h"
#include "TelecommunicationErrorStatus.h"

#include "TelemetryHeader.h"

typedef struct {
  TelemetryHeader header;

  TelecommunicationErrorStatus errorStatus;
  TelecommunicationStatus      status;
}
TelecommunicationPacketFields;

typedef union {
  TelecommunicationPacketFields fields;

  uint8_t data[sizeof(TelecommunicationPacketFields)];
}
TelecommunicationPacket;