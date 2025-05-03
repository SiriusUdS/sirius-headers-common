#pragma once

#include <stdint.h>

typedef struct {
  
}
EngineArmCommandFields;

typedef union {
  EngineArmCommandFields fields;

  uint8_t data[sizeof(EngineArmCommandFields)];
}
EngineArmCommand;