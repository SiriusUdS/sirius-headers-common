#pragma once

#ifdef EMBEDDED
  #include <stdint.h>
#else
  #include <cstdint.h>
#endif

typedef struct {
  uint32_t position_s;
  uint
}
GPSCoord;