#pragma once

#include "GpsData.h"
#include "GPSStatus.h"
#include "GPSErrorStatus.h"

#include "../Telecommunication/TelemetryHeader.h"

typedef struct {
  GpsData         data;

  GPSErrorStatus  errorStatus;
  GpsStatus       status;

  uint32_t        timeStamp_ms;
}
GpsPacketDataMembers;

typedef union {
  GpsPacketDataMembers members;
  
  uint8_t values[sizeof(GpsPacketDataMembers)];
}
GpsPacketData;

typedef struct {
  TelemetryHeader header;
  GpsPacketData           rawData;
}
GpsPacketFields;

typedef union {
  GpsPacketFields fields;

  uint8_t data[sizeof(GpsPacketFields)];
}
GpsPacket;