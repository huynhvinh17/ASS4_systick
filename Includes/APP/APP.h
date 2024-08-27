#ifndef _APP_H_
#define _APP_H_

#include "MKL46Z4.h"
#include "../Includes/DRIVER/DRIVER_GPIO.h"
#include "../Includes/DRIVER/DRIVER_NVIC.h"
#include "../Includes/DRIVER/DRIVER_PORT.h"
#include "../Includes/DRIVER/DRIVER_SIM.h"
#include "../Includes/DRIVER/DRIVER_Software_timer.h"
#include "../Includes/DRIVER/DRIVER_Systick.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

#define LED_GREEN_PIN 5 /** Define pin number for led green */
#define LED_RED_PIN 29  /** Define pin number for led red */
#define SW1_PIN 3       /** Define pin number for Switch 1 */
#define SW3_PIN 12      /** Define pin number for Switch 3 */

/*******************************************************************************
 * Prototype
 ******************************************************************************/

/**
 * @brief Initializes the green LED on PORTD
 *
 */
void Init_LED_Green(void);

/**
 * @brief Initializes the red LED on PORTE
 *
 */
void Init_LED_Red(void);

/**
 * @brief This function config and starts a software timer for user 0
 */
void DRIVER_SW_Timer_User0(void);

/**
 * @brief This function configures and starts a software timer for user 1
 */
void DRIVER_SW_Timer_User1(void);

/**
 * @brief Callback function for User 0 software timer
 *
 */
void systickInterruptCallbackUser0(void);

/**
 * @brief Callback function for user 1 software timer
 *
 */
void systickInterruptCallbackUser1(void);

/*******************************************************************************
 * Code
 ******************************************************************************/

#endif /** _APP_H_ */
