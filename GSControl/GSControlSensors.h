#pragma once

#include <stdint.h>

/***************************************************/
/***            Sensors/Devices Amount           ***/
/***************************************************/
#define GS_CONTROL_BUTTON_AMOUNT (uint8_t)0x04

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
#define GS_CONTROL_BUTTON_1_INDEX (uint8_t)0x00
#define GS_CONTROL_BUTTON_2_INDEX (uint8_t)0x01
#define GS_CONTROL_BUTTON_3_INDEX (uint8_t)0x02
#define GS_CONTROL_BUTTON_4_INDEX (uint8_t)0x03

/***************************************************/
/***         Array Indexes -- Peripherals        ***/
/***************************************************/
#define GS_CONTROL_GPIO_BUTTON_1_INDEX (uint8_t)0x00
#define GS_CONTROL_GPIO_BUTTON_2_INDEX (uint8_t)0x01
#define GS_CONTROL_GPIO_BUTTON_3_INDEX (uint8_t)0x02
#define GS_CONTROL_GPIO_BUTTON_4_INDEX (uint8_t)0x03