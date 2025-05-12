#pragma once

#include "StorageStatus.h"
#include "StorageErrorStatus.h"

#include "../Telecommunication/TelemetryHeader.h"

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
  TelemetryHeader   header;
  StoragePacketData         rawData;
}
StoragePacketFields;

typedef union {
  StoragePacketFields fields;

  uint8_t data[sizeof(StoragePacketFields)];
}
StoragePacket;