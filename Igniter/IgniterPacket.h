#pragma once

#include "IgniterStatus.h"
#include "IgniterErrorStatus.h"

#include "../Telecommunication/TelemetryHeader.h"

typedef struct {
  IgniterErrorStatus errorStatus;
  IgniterStatus      status;

  uint32_t              timeStamp_ms;
}
IgniterPacketDataMembers;

typedef union {
  IgniterPacketDataMembers members;
  
  uint8_t values[sizeof(IgniterPacketDataMembers)];
}
IgniterPacketData;

typedef struct {
  TelemetryHeader header;
  IgniterPacketData      rawData;
}
IgniterPacketFields;

typedef union {
  IgniterPacketFields fields;

  uint8_t data[sizeof(IgniterPacketFields)];
}
IgniterPacket;