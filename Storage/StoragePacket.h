#pragma once

#include "StorageStatus.h"
#include "StorageErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define STORAGE_DEVICE_AMOUNT 2

typedef struct {
  StorageErrorStatus  errorStatus;
  StorageStatus       status;

  uint32_t            timeStamp_ms;
}
StoragePacketDataMembers;

typedef union {
  StoragePacketDataMembers members;
  
  uint8_t values[sizeof(StoragePacketDataMembers)];
}
StoragePacketData;

typedef struct {
  TelecommunicationHeader   header;
  StoragePacketData         rawData[STORAGE_DEVICE_AMOUNT];
}
StoragePacketFields;

typedef union {
  StoragePacketFields fields;

  uint8_t data[sizeof(StoragePacketFields)];
}
StoragePacket;