#pragma once

#include <stdint.h>

#define DATA_HEADER_CODE 0xB256BE // If performance permits (rnd)

#define ACCELEROMETER_DATA_HEADER_CODE   0x414343 // "ACC"
#define GYROSCOPE_DATA_HEADER_CODE       0x475952 // "GYR"
#define ALTIMETER_DATA_HEADER_CODE       0x414C54 // "ALT"
#define GPS_DATA_HEADER_CODE             0x475053 // "GPS"
#define MAGNETOMETER_DATA_HEADER_CODE    0x4D4147 // "MAG"
#define PRESSURE_SENSOR_DATA_HEADER_CODE 0x505253 // "PRS"
#define ROCKET_DATA_HEADER_CODE          0x524B54 // "RKT"
#define THERMOCOUPLE_DATA_HEADER_CODE    0x54484D // "THM"
#define VALVE_DATA_HEADER_CODE           0x564C56 // "VLV"

#define HEADER_SIZE_4BYTE 1

typedef struct {
  uint32_t values[HEADER_SIZE_4BYTE];
}
TelecommunicationHeader;