#pragma once

#include <stdint.h>

#define TELEMETRY_ACCELEROMETER_DATA_HEADER_CODE      (uint32_t)0x414343 // "ACC"
#define TELEMETRY_GYROSCOPE_DATA_HEADER_CODE          (uint32_t)0x475952 // "GYR"
#define TELEMETRY_ALTIMETER_DATA_HEADER_CODE          (uint32_t)0x414C54 // "ALT"
#define TELEMETRY_GPS_DATA_HEADER_CODE                (uint32_t)0x475053 // "GPS"
#define TELEMETRY_MAGNETOMETER_DATA_HEADER_CODE       (uint32_t)0x4D4147 // "MAG"
#define TELEMETRY_PRESSURE_SENSOR_DATA_HEADER_CODE    (uint32_t)0x505253 // "PRS"
#define TELEMETRY_ROCKET_DATA_HEADER_CODE             (uint32_t)0x524B54 // "RKT"
#define TELEMETRY_TEMPERATURE_SENSOR_DATA_HEADER_CODE (uint32_t)0x54484D // "THM"
#define TELEMETRY_VALVE_DATA_HEADER_CODE              (uint32_t)0x564C56 // "VLV"

#define TELEMETRY_ENGINE_BOARD_ID          (uint8_t)0x00
#define TELEMETRY_FILLING_STATION_BOARD_ID (uint8_t)0x01
#define TELEMETRY_GS_CONTROL_BOARD_ID      (uint8_t)0x02

#define TELEMETRY_HEADER_TYPE_TELEMETRY (uint32_t)0x54454C5 // TELY
#define TELEMETRY_HEADER_TYPE_STATUS    (uint32_t)0x5354415 // STAU

typedef union {
  struct {
    uint32_t type        : 28;
    uint32_t boardId     : 4;
  }
  bits;

  uint32_t value;
}
TelemetryHeader;