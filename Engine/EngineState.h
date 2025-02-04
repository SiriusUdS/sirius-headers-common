#pragma once

typedef enum {
  ENGINE_STATE_IDLE,
  ENGINE_STATE_ARMED,
  ENGINE_STATE_IGNITION,
  ENGINE_STATE_POWERED_FLIGHT,
  ENGINE_STATE_UNPOWERED_FLIGHT,
  ENGINE_STATE_ABORT
}
EngineState;