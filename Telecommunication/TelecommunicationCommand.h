#pragma once
#include "TelecommunicationHeader.h"

#define ROCKET_SIGNATURE 0x70F5
#define FILL_STATION_SIGNATURE 0xFEAD
#define ENGINE_SIGNATURE 0xADE0

#define ABORT_COMMAND 0xFFA0
#define ACK_COMMAND 0x414B


typedef union {
    struct {
        TelecommunicationHeader header;
        uint16_t signature;
        uint16_t command;
        uint32_t CRC;
    } packet;

    uint8_t data[sizeof(packet)];
} CommandPacket;


/*
[oxHH OxHH oxHH oxHH oxSS oxSS oxCC ox CC oxCR oxCR oxCR oxCR] // union.data

*/
