#pragma once

#include "StorageStatus.h"
#include "StorageErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

#define STORAGE_DEVICE_AMOUNT 2

typedef union {
  struct {
    StorageErrorStatus  errorStatus;
    StorageStatus       status;

    uint32_t            timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
StoragePacketData;

typedef union {
  struct {
    TelecommunicationHeader   header;
    StoragePacketData         rawData[STORAGE_DEVICE_AMOUNT];
  }
  packet;

  uint8_t data[sizeof(packet)];
}
StoragePacket;