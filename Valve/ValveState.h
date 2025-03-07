#pragma once

#include <stdint.h>

typedef enum {
  VALVE_STATE_UNKNOWN,
  VALVE_STATE_OPENED,
  VALVE_STATE_CLOSED,
  VALVE_STATE_OPENING,
  VALVE_STATE_CLOSING
}
ValveState;