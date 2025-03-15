#pragma once

#include <stdint.h>

#include "ValveState.h"

typedef struct {
  uint16_t   dutyCycle_CCR;
  ValveState state;
}
ValveData;