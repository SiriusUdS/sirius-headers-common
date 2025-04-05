#pragma once

#include <stdint.h>

#include "ValveState.h"

typedef struct {
  uint16_t dutyCycle_CCR;
  uint8_t  state;
}
ValveData;