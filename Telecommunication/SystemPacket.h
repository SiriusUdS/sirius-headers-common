#include <stdint.h>
#include "InterfaceField.h"
#include "../ADC/Channels.h"

typedef struct {
    uint32_t frameTs_MS;
    uint32_t lastHandshakeTs_MS;
    InterfaceField interfaces;
    Channel channels[12];
} FrameSystemPacket;

typedef union {
    FrameSystemPacket frame;
    uint8_t byteMap[sizeof(FrameSystemPacket)];
} SystemPacket;