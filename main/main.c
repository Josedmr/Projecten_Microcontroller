#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "myADC.h"

/*void app_main(void)
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
}*/

void app_main(void)
{
    myADC_setup();

    while (1)
    {
        int waarde = myADC_waarde();
        printf("ADC waarde: %d\n", waarde);

        vTaskDelay(pdMS_TO_TICKS(100));
    }
}



