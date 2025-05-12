#pragma once

#include "TelecommunicationStatus.h"
#include "TelecommunicationErrorStatus.h"

#include "TelemetryHeader.h"

typedef struct {
  TelecommunicationErrorStatus errorStatus;
  TelecommunicationStatus      status;
}
TelecommunicationPacketData;

typedef struct {
  TelemetryHeader             header;
  TelecommunicationPacketData rawData;
  uint32_t                    crc;
}
TelecommunicationPacketFields;

typedef union {
  TelecommunicationPacketFields fields;

  uint8_t data[sizeof(TelecommunicationPacketFields)];
}
TelecommunicationPacket;