#pragma once

#include "ButtonStatus.h"
#include "ButtonErrorStatus.h"

#include "../Telecommunication/TelecommunicationHeader.h"

typedef struct {
  ButtonErrorStatus errorStatus;
  ButtonStatus status;

  uint32_t timeStamp_ms;
}
ButtonPacketDataMembers;

typedef union {
  ButtonPacketDataMembers members;
  
  uint8_t values[sizeof(ButtonPacketDataMembers)];
}
ButtonPacketData;

typedef struct {
  TelecommunicationHeader header;
  ButtonPacketData      rawData;
}
ButtonPacketFields;

typedef union {
  ButtonPacketFields fields;

  uint8_t data[sizeof(ButtonPacketFields)];
}
ButtonPacket;