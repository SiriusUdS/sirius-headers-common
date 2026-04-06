#pragma once

#include "AccelerometerData.h"
#include "AccelerometerStatus.h"
#include "AccelerometerErrorStatus.h"
#include "../CAN/CANHeader.h"

typedef struct {
	AccelerometerData data;
	AccelerometerErrorStatus  errorStatus;
	AccelerometerStatus       status;
	uint32_t timeStamp_ms;
}
AccelerometerPacketData;

typedef union {
	AccelerometerPacketData fields;
	uint8_t data[sizeof(AccelerometerPacketData)];
}
AccelerometerPayload;

typedef struct {
	CANHeader header;
	AccelerometerPayload payload;
}
AccelerometerPacket;
