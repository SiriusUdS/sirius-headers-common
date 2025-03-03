#pragma once

#include <stdint.h>

typedef struct {
  uint16_t  temperature_adc12;
  uint8_t   type;
  uint8_t   padding;
}
ThermocoupleData;