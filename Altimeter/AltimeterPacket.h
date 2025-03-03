#pragma once

#include "AltimeterData.h"
#include "AltimeterStatus.h"
#include "AltimeterErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define ALTIMETER_DATA_SIZE_BYTE 8

#define ACCELEROMETER_AMOUNT 1

typedef union {
  struct {
    AltimeterData         data;

    AltimeterErrorStatus  errorStatus;
    AltimeterStatus       status;
    uint32_t              timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
AltimeterPacketData;

typedef union {
  struct {
    TelecommunicationHeader header;
    AltimeterPacketData     rawData[ACCELEROMETER_AMOUNT];
  }
  packet;

  uint8_t data[HEADER_SIZE_BYTE + (ACCELEROMETER_AMOUNT * ALTIMETER_DATA_SIZE_BYTE)];
}
AccelerometerPacket;