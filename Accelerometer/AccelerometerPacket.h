#pragma once

#include "AccelerometerData.h"

#include "../CAN/CANHeader.h"

typedef struct {
	AccelerometerData data;
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

// errorCode bit 0 = notInitialized
// errorCode bit 1 = nullFunctionPointer
// errorCode bit 2 = defaultFunctionCalled
// errorCode bit 3 = notConnected
// errorCode bit 4-7 = RESERVED