#pragma once

#include "ValveStatus.h"
#include "ValveErrorStatus.h"

#include "../Telecommunication/TelemetryHeader.h"

typedef struct {
  ValveErrorStatus errorStatus;
  ValveStatus      status;

  uint32_t timeStamp_ms;
}
ValvePacketData;

typedef struct {
  TelemetryHeader header;
  ValvePacketData rawData;
  uint32_t crc;
}
ValvePacketFields;

typedef union {
  ValvePacketFields fields;

  uint8_t data[sizeof(ValvePacketFields)];
}
ValvePacket;

/***************************************************/
/***              Engine - 2 Valves              ***/
/***************************************************/

