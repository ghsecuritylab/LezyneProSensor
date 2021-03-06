/*
 * 	ble_core.h
 *
 *  Created on: June 30, 2019
 *  Author: Lezyne
 */

#ifndef BLE_CORE_H
#define BLE_CORE_H

#include <stdbool.h>
#include "ble_cscs.h"

/* FUNCTION */
void ble_init(void);
void ble_advertising_entry(void);
void csc_meas_handler(ble_cscs_meas_t cscs_measurement);
bool ble_connection_status(void);

#ifdef CSCS_MOCK_ENABLE
void csc_sim_measurement(ble_cscs_meas_t * p_measurement);
void sensor_simulator_init(void);
#endif
void accel_csc_meas_timeout_handler(void * p_context);
uint32_t accel_csc_meas_timeout_handler2(ble_cscs_meas_t p_context);
void accel_nus_data_push(int16_t *i16BufData);
void battery_level_update(uint8_t  battery_level);

#endif // BLE_CORE_H

