#pragma once

/***************************************************/
/***            Sensors/Devices Amount           ***/
/***************************************************/
#define FILL_STATION_THERMISTANCE_AMOUNT 4
#define FILL_STATION_LOAD_CELL_AMOUNT    2
#define FILL_STATION_HEATPAD_AMOUNT      4
#define FILL_STATION_VALVE_AMOUNT        2

/***************************************************/
/***           Peripheral Distribution           ***/
/***************************************************/

/***************************************************/
/***              Peripheral Amount              ***/
/***************************************************/
#define FILL_STATION_ADC_CHANNEL_AMOUNT FILL_STATION_THERMISTANCE_AMOUNT + FILL_STATION_LOAD_CELL_AMOUNT
#define FILL_STATION_PWM_AMOUNT         FILL_STATION_VALVE_AMOUNT

/***************************************************/
/***                Array Indexes                ***/
/***************************************************/
#define FILL_STATION_NOS_VALVE_INDEX      0
#define FILL_STATION_NOS_DUMP_VALVE_INDEX 1

#define FILL_STATION_FILL_VALVE_THERMISTANCE_INDEX    0
#define FILL_STATION_QUICK_CONNECT_THERMISTANCE_INDEX 1
#define FILL_STATION_NOS_VALVE_THERMISTANCE_INDEX     2
#define FILL_STATION_IPA_VALVE_THERMISTANCE_INDEX     3

// CHECK IF GOOD
#define FILL_STATION_FILL_VALVE_THERMISTANCE_ADC_CHANNEL_INDEX    0
#define FILL_STATION_QUICK_CONNECT_THERMISTANCE_ADC_CHANNEL_INDEX 1
#define FILL_STATION_NOS_VALVE_THERMISTANCE_ADC_CHANNEL_INDEX     2
#define FILL_STATION_IPA_VALVE_THERMISTANCE_ADC_CHANNEL_INDEX     3

#define FILL_STATION_TANK_LOAD_CELL_INDEX               0
#define FILL_STATION_COMBUSTION_CHAMBER_LOAD_CELL_INDEX 1

#define FILL_STATION_FILL_VALVE_HEATPAD_INDEX     0
#define FILL_STATION_QUICK_CONNECT_HEATPAD_INDEX  1
#define FILL_STATION_NOS_VALVE_HEATPAD_INDEX      2
#define FILL_STATION_IPA_VALVE_HEATPAD_INDEX      3