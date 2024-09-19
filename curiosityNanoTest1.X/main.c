/* Lee el estado del interruptor en RB4 */
/* Si interruptor está abierto (sin oprimir), el led en RF3 se enciende */
/* Si interruptor está cerrado (oprimido), el led en RF3 se apaga */


#include <xc.h>
#include "gpio.h"

void main(void) {
    
    /* Peripheral and System Initialization*/
    
    /* PortA initialization */
    PortA_Initialize();

    /* PortB initialization */
    PortB_Initialize();

    /* PortC initialization */
    PortC_Initialize();

    /* PortD initialization */
    PortD_Initialize();

    /* PortE initialization */
    PortE_Initialize();

    /* PortF initialization */
    PortF_Initialize();
    
    /* Infinite loop */
    while(1)
    {
     
        /* Is SW0 opened? */
        if (PORTB== 0x10)
        {
            /* Turn on LED0 */
            /* PORTFbits.RF3 = 0; */
            LATF = 0x07;
        }
        
        /* else SW0 is closed */
        else
        {
            /* Turn off LED0 */
            /* PORTFbits.RF3 = 1; */
            LATF = 0x0F;
        }    
    } // while
    
    return;
} // main
