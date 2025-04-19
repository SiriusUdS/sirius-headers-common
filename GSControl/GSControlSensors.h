#pragma once

#include <stdint.h>

/***************************************************/
/***            Sensors/Devices Amount           ***/
/***************************************************/
#define GS_CONTROL_BUTTONS_AMOUT (uint8_t)0x04

/***************************************************/
/***           Peripheral Distribution           ***/
/***************************************************/
#define GS_CONTROL_GPIO_PER_BUTTONS (uint8_t)0x01

/***************************************************/
/***              Peripheral Amount              ***/
/***************************************************/
#define GS_CONTROL_GPIO_AMOUNT GS_CONTROL_BUTTONS_AMOUT * GS_CONTROL_GPIO_PER_BUTTONS

/***************************************************/
/***       Array Indexes -- Sensors/Devices      ***/
/***************************************************/
#define GS_CONTROL_BUTTON_IGNITE_INDEX (uint8_t)0x00

/***************************************************/
/***         Array Indexes -- Peripherals        ***/
/***************************************************/
#define GS_CONTROL_GPIO_BUTTON_IGNITE_INDEX (uint8_t)0x00