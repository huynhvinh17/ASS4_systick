
/**
 * @file main.c
 * @author huynhvinh17@gmail.com
 * @brief Main program file for initializing peripherals and setting up interrupt handling.
 * @version 0.1
 * @date 2024-08-20
 *
 * @copyright Copyright (c) 2024
 *
 */

#include "../Includes/APP/APP.h"
#include "../Includes/DRIVER/DRIVER_NVIC.h"
#include "../Includes/DRIVER/DRIVER_Software_timer.h"
#include "../Includes/DRIVER/DRIVER_Systick.h"

/*******************************************************************************
 * Definitions
 ******************************************************************************/

/*******************************************************************************
 * Prototype
 ******************************************************************************/

/*******************************************************************************
 * Code
 ******************************************************************************/

int main(void)
{

    Init_LED_Red();                                                                /** Initialize the Red LED on the boardI */
    Init_LED_Green();                                                              /** Initialize the Green LED on the board */
    DRIVER_Software_Timer_Init();                                                  /** Initialize the software timer */
    DRIVER_SW_Timer_User0();                                                       /** Configure and start software timer for user 0 */
    DRIVER_SW_Timer_User1();                                                       /** configure and stare software timer for user 1 */
    systick_interrupt_handlerFunctionCall(DRIVER_Software_timer_check_and_handle); /** call the function to check and handle software timers */

    while (1)
    {
        /** Check if the count flag is set */
        if (countFlagReturn())
        {
            DRIVER_sw_timer_handlerCall(); /** Execute the user defined function */
        }
    }

    return 0;
}
