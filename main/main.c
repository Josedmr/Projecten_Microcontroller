#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "myGPIO.h"

void app_main(void)
{
    MyGPIO_setup_led(LED);
    MyGPIO_setup_button(KNOP);

    while(1)
    {
         if(MyGPIO_flank(KNOP))
        {
            MyGPIO_toggle(LED);
        }

          vTaskDelay(pdMS_TO_TICKS(10));
    }
}