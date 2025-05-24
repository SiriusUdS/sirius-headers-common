#pragma once

#include <stdint.h>

/***************************************************/
/***            Sensors/Devices Amount           ***/
/***************************************************/
#define GS_CONTROL_BUTTON_AMOUNT (uint8_t)0x06

/***************************************************/
/***           Peripheral Distribution           ***/
/***************************************************/
#define GS_CONTROL_GPIO_PER_BUTTONS (uint8_t)0x01

/***************************************************/
/***              Peripheral Amount              ***/
/***************************************************/
#define GS_CONTROL_GPIO_AMOUNT GS_CONTROL_BUTTON_AMOUNT * GS_CONTROL_GPIO_PER_BUTTONS

/***************************************************/
/***       Array Indexes -- Sensors/Devices      ***/
/***************************************************/
#define GS_CONTROL_BUTTON_SAFE_INDEX (uint8_t)0x00 
#define GS_CONTROL_BUTTON_FIRE_IGNITER_INDEX (uint8_t)0x01
#define GS_CONTROL_BUTTON_ENABLE_FILL_INDEX (uint8_t)0x02
#define GS_CONTROL_BUTTON_BACKUP_INDEX (uint8_t)0x03
#define GS_CONTROL_BUTTON_IGNITER_ARMED_INDEX (uint8_t)0x04
#define GS_CONTROL_BUTTON_ROCKET_ARMED_INDEX (uint8_t)0x05


/***************************************************/
/***         Array Indexes -- Peripherals        ***/
/***************************************************/
#define GS_CONTROL_GPIO_SAFE_INDEX (uint8_t)0x00
#define GS_CONTROL_GPIO_FIRE_IGNITER_INDEX (uint8_t)0x01
#define GS_CONTROL_GPIO_ENABLE_FILL_INDEX (uint8_t)0x02
#define GS_CONTROL_GPIO_BACKUP_INDEX (uint8_t)0x03
#define GS_CONTROL_GPIO_IGNITER_ARMED_INDEX (uint8_t)0x04
#define GS_CONTROL_GPIO_ROCKET_ARMED_INDEX (uint8_t)0x05