#line 1 "rdfblink.ino"
#include "nrf_gpio.h"
#include "nrf_delay.h"
#include "boards.h"


#include "Arduino.h"
void setup();
void loop();
static __INLINE void configure_pin(uint32_t pin);
#line 6
void setup() {
                                           
                                            
    #ifdef LED_RGB_RED
     configure_pin(LED_RGB_RED);
    #endif

    #ifdef LED_RGB_GREEN
     configure_pin(LED_RGB_GREEN);
    #endif
   
    #ifdef LED_RGB_BLUE
     configure_pin(LED_RGB_BLUE);
    #endif
 
    #ifdef LED_0
     configure_pin(LED_0);
    #endif

    #ifdef LED_1
     configure_pin(LED_1);
    #endif

    #ifdef LED_2
     configure_pin(LED_2);
    #endif

    #ifdef LED_3
     configure_pin(LED_3);
    #endif

    #ifdef LED_4
     configure_pin(LED_4);
    #endif

    #ifdef LED_5
     configure_pin(LED_5);
    #endif

    #ifdef LED_6
     configure_pin(LED_6);
    #endif

    #ifdef LED_7
     configure_pin(LED_7);
    #endif

    nrf_gpio_pin_clear(LED_RGB_RED);
    nrf_gpio_pin_set(LED_RGB_BLUE);
    nrf_gpio_pin_clear(LED_RGB_GREEN);
}

void loop() {
                                                

}

   
                                       
   
static __INLINE void configure_pin(uint32_t pin)
{
    NRF_GPIO->PIN_CNF[pin]  = (GPIO_PIN_CNF_SENSE_Disabled << GPIO_PIN_CNF_SENSE_Pos)
                            | (GPIO_PIN_CNF_DRIVE_H0H1 << GPIO_PIN_CNF_DRIVE_Pos)
                            | (GPIO_PIN_CNF_PULL_Disabled << GPIO_PIN_CNF_PULL_Pos)
                            | (GPIO_PIN_CNF_INPUT_Connect << GPIO_PIN_CNF_INPUT_Pos)
                            | (GPIO_PIN_CNF_DIR_Output << GPIO_PIN_CNF_DIR_Pos);
}


