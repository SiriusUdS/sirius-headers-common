#pragma once

#include <stdint.h>

/**
 * 
 * INIT
 *  |
 * SAFE  <--.
 *  |       |
 * UNSAFE --.
 *  |
 *IGNITION
 *  |
 *LAUNCH
 *  |
 * ..  
 *
 */

#define ENGINE_STATE_INIT             (uint8_t)0x00
#define ENGINE_STATE_SAFE             (uint8_t)0x01
#define ENGINE_STATE_UNSAFE           (uint8_t)0x02
#define ENGINE_STATE_ABORT            (uint8_t)0x03
#define ENGINE_STATE_IGNITION         (uint8_t)0x06
#define ENGINE_STATE_LAUNCH           (uint8_t)0x07