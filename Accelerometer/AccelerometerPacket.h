#pragma once

#include "AccelerometerData.h"
#include "AccelerometerStatus.h"
#include "AccelerometerErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define ACCELEROMETER_AMOUNT 1

typedef struct {
  AccelerometerData         data;

  AccelerometerErrorStatus  errorStatus;
  AccelerometerStatus       status;
  uint32_t                  timeStamp_ms;
}
AccelerometerDataMembers;

typedef union {
  AccelerometerDataMembers members;
  
  uint8_t values[sizeof(AccelerometerDataMembers)];
}
AccelerometerPacketData;

typedef struct {
  TelecommunicationHeader header;
  AccelerometerPacketData rawData[ACCELEROMETER_AMOUNT];
}
AccelerometerPacketFields;

typedef union {
  AccelerometerPacketFields fields;

  uint8_t data[sizeof(AccelerometerPacketFields)];
}
AccelerometerPacket;