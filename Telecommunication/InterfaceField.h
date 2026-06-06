#include <stdint.h>

typedef union {
    struct {
        uint8_t initialized: 1;
        uint8_t readingError: 1;
        uint8_t writingError: 1;
        uint8_t deviceNotFound: 1;
        uint8_t invalidState: 1;
        uint8_t crcError: 1;
        uint8_t reserved: 2;
    } bits;
    uint8_t value;
} InterfaceFieldFlags;

typedef struct {
    InterfaceFieldFlags canFlags;
    InterfaceFieldFlags ethernetFlags;
    InterfaceFieldFlags sdCardFlags;
    InterfaceFieldFlags valve1Flags;
    InterfaceField valve2Flags;
    InterfaceField igniterFlags;
    uint16_t reserved;
    uint32_t erno;
} InterfaceFrame;

typedef union {
    InterfaceFrame frame;
    uint8_t byteMap[sizeof(InterfaceFrame)];
} InterfaceField;