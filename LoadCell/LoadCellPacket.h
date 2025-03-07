#pragma once

#include "LoadCellData.h"
#include "LoadCellStatus.h"
#include "LoadCellErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

typedef union {
  struct {
    LoadCellData    data;

    LoadCellErrorStatus errorStatus;
    LoadCellStatus      status;

    uint32_t              timeStamp_ms;
  }
  members;
  
  uint8_t values[sizeof(members)];
}
LoadCellPacketData;

typedef union {
  struct {
    TelecommunicationHeader header;
    LoadCellPacketData      rawData;
  }
  packet;

  uint8_t data[sizeof(packet)];
}
LoadCellPacket;