#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "myADC.h"
#include "myPWM.h"

/*void app_main(void)
{
    MyGPIO_setup_led(LED);
    MyGPIO_setup_button(KNOP);
ik gebruik 
    while(1)
    {
         if(MyGPIO_flank(KNOP))
        {
            MyGPIO_toggle(LED);
        }

          vTaskDelay(pdMS_TO_TICKS(10));
    }
}*/

/*void app_main(void)
{
    myADC_setup();

    while (1)
    {
        int waarde = myADC_waarde();
        printf("ADC waarde: %d\n", waarde);

        vTaskDelay(pdMS_TO_TICKS(100));
    }
}*/

void app_main(void)
{
    myADC_setup();
    pwm_setup();

    while (1)
    {
        int waarde = myADC_waarde();
        printf("ADC waarde: %d\n", waarde);

        pwm_set(waarde / 4);

        vTaskDelay(pdMS_TO_TICKS(100));
    }
}




