#pragma once

#include "GpsData.h"
#include "GPSStatus.h"
#include "GPSErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define GPS_AMOUNT 2

typedef union {
  struct {
    GpsData         position;

    GPSErrorStatus  errorStatus;
    GpsStatus       status;

    uint32_t        timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
GpsPacketData;

typedef union {
  struct {
    TelecommunicationHeader header;
    GpsPacketData           rawData[GPS_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
GpsPacket;