#pragma once

#include <stdint.h>

typedef enum : uint16_t {
  VALVE_UNKNOWN,
  VALVE_OPENED,
  VALVE_CLOSED,
  VALVE_OPENING,
  VALVE_CLOSING
}
ValveState;