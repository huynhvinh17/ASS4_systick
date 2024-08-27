#ifndef _DRIVER_SIM_H_
#define _DRIVER_SIM_H_

#include "MKL46Z4.h"
#include "../Includes/HAL/HAL_SIM.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Prototype
 ******************************************************************************/

/** defined as an alias for the type `HAL_port_clock_control_t` */
typedef HAL_port_clock_control_t DRIVER_port_clock_control_t;

/**
 * @brief Enable clock for a peripheral port
 *
 * @param portClockEnable The clock enable bit mask for peripheral port
 */
void DRIVER_SIM_EnableClock(DRIVER_port_clock_control_t portClockEnable);

/*******************************************************************************
 * Code
 ******************************************************************************/

#endif /** _DRIVER_SIM_H_ */
