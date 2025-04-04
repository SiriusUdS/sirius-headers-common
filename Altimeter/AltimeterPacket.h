#pragma once

#include "AltimeterData.h"
#include "AltimeterStatus.h"
#include "AltimeterErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define ALTIMETER_DATA_SIZE_BYTE 8

#define ACCELEROMETER_AMOUNT 1

typedef struct {
  AltimeterData         data;

  AltimeterErrorStatus  errorStatus;
  AltimeterStatus       status;
  uint32_t              timeStamp_ms;
}
AltimeterPacketDataMembers;


typedef union {
  AltimeterPacketDataMembers members;
  
  uint8_t values[sizeof(AltimeterPacketDataMembers)];
}
AltimeterPacketData;

typedef struct {
  TelecommunicationHeader header;
  AltimeterPacketData     rawData[ACCELEROMETER_AMOUNT];
}
AccelerometerPacketFields;

typedef union {
  AccelerometerPacketFields fields;

  uint8_t data[sizeof(AccelerometerPacketFields)];
}
AccelerometerPacket;