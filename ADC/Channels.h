#include <stdint.h>

typedef union{
    struct {
        uint32_t id: 8;
        uint32_t value: 24;
    };
    uint32_t code;
} Channel;